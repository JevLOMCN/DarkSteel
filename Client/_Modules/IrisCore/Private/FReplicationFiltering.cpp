// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 107

// FReplicationFiltering @ 144229a40

FReplicationFiltering * __thiscall
UE::Net::Private::FReplicationFiltering::FReplicationFiltering(FReplicationFiltering *this)

{
  undefined1 *puVar1;
  
  (this->Config).Object = (UObject *)0x0;
  (this->ReplicationSystem).field0_0x0.DebugPtr = (UReplicationSystem *)0x0;
  (this->ConnectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectionInfos).ArrayNum = 0;
  (this->ConnectionInfos).ArrayMax = 0;
  (this->ValidConnections).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidConnections).Storage.ArrayNum = 0;
  (this->ValidConnections).Storage.ArrayMax = 0;
  (this->ValidConnections).BitCount = 0;
  (this->NewConnections).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewConnections).Storage.ArrayNum = 0;
  (this->NewConnections).Storage.ArrayMax = 0;
  (this->NewConnections).BitCount = 0;
  (this->ObjectsWithDirtyOwnerFilter).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectsWithDirtyOwnerFilter).Storage.ArrayNum = 0;
  (this->ObjectsWithDirtyOwnerFilter).Storage.ArrayMax = 0;
  (this->ObjectsWithDirtyOwnerFilter).BitCount = 0;
  (this->ObjectsWithDirtyOwner).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsWithDirtyOwner).Storage.ArrayNum = 0;
  (this->ObjectsWithDirtyOwner).Storage.ArrayMax = 0;
  (this->ObjectsWithDirtyOwner).BitCount = 0;
  (this->ObjectsWithOwnerFilter).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsWithOwnerFilter).Storage.ArrayNum = 0;
  (this->ObjectsWithOwnerFilter).Storage.ArrayMax = 0;
  (this->ObjectsWithOwnerFilter).BitCount = 0;
  (this->ObjectIndexToOwningConnection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectIndexToOwningConnection).ArrayNum = 0;
  (this->ObjectIndexToOwningConnection).ArrayMax = 0;
  (this->PerObjectInfoStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerObjectInfoStorage).ArrayNum = 0;
  (this->PerObjectInfoStorage).ArrayMax = 0;
  (this->UsedPerObjectInfoStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedPerObjectInfoStorage).ArrayNum = 0;
  (this->UsedPerObjectInfoStorage).ArrayMax = 0;
  (this->ObjectsWithPerObjectInfo).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsWithPerObjectInfo).Storage.ArrayNum = 0;
  (this->ObjectsWithPerObjectInfo).Storage.ArrayMax = 0;
  (this->ObjectsWithPerObjectInfo).BitCount = 0;
  (this->GroupInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupInfos).ArrayNum = 0;
  (this->GroupInfos).ArrayMax = 0;
  *(undefined8 *)&this->SubObjectFilterGroupInfos = 0;
  *(undefined8 *)&(this->SubObjectFilterGroupInfos).field_0x8 = 0;
  *(undefined8 *)&(this->SubObjectFilterGroupInfos).field_0x20 = 0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  this->FrameIndex = 0;
  this->Groups = (FNetObjectGroups *)0x0;
  this->Connections = (FReplicationConnections *)0x0;
  this->MaxInternalNetRefIndex = 0;
  this->WordCountForObjectBitArrays = 0;
  this->MaxGroupCount = 0;
  *(undefined4 *)&(this->SubObjectFilterGroupInfos).field_0x28 = 0;
  *(undefined4 *)&(this->SubObjectFilterGroupInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjectFilterGroupInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubObjectFilterGroupInfos).field_0x34 = 0;
  *(undefined8 *)&(this->SubObjectFilterGroupInfos).field_0x40 = 0;
  *(undefined4 *)&(this->SubObjectFilterGroupInfos).field_0x48 = 0;
  (this->ObjectScopeHysteresisFrameCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectScopeHysteresisFrameCounts).ArrayNum = 0;
  (this->ObjectScopeHysteresisFrameCounts).ArrayMax = 0;
  (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExclusionFilterGroups).Storage.ArrayNum = 0;
  (this->ExclusionFilterGroups).Storage.ArrayMax = 0;
  (this->ExclusionFilterGroups).BitCount = 0;
  (this->InclusionFilterGroups).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InclusionFilterGroups).Storage.ArrayNum = 0;
  (this->InclusionFilterGroups).Storage.ArrayMax = 0;
  (this->InclusionFilterGroups).BitCount = 0;
  (this->DirtyExclusionFilterGroups).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DirtyExclusionFilterGroups).Storage.ArrayNum = 0;
  (this->DirtyExclusionFilterGroups).Storage.ArrayMax = 0;
  (this->DirtyExclusionFilterGroups).BitCount = 0;
  (this->DirtyInclusionFilterGroups).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DirtyInclusionFilterGroups).Storage.ArrayNum = 0;
  (this->DirtyInclusionFilterGroups).Storage.ArrayMax = 0;
  (this->DirtyInclusionFilterGroups).BitCount = 0;
  (this->SubObjectFilterGroups).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubObjectFilterGroups).Storage.ArrayNum = 0;
  (this->SubObjectFilterGroups).Storage.ArrayMax = 0;
  (this->SubObjectFilterGroups).BitCount = 0;
  (this->DirtySubObjectFilterGroups).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DirtySubObjectFilterGroups).Storage.ArrayNum = 0;
  (this->DirtySubObjectFilterGroups).Storage.ArrayMax = 0;
  (this->DirtySubObjectFilterGroups).BitCount = 0;
  (this->AllConnectionFilteredObjects).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AllConnectionFilteredObjects).Storage.ArrayNum = 0;
  (this->AllConnectionFilteredObjects).Storage.ArrayMax = 0;
  (this->AllConnectionFilteredObjects).BitCount = 0;
  (this->ObjectIndexToPerObjectInfoIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectIndexToPerObjectInfoIndex).ArrayNum = 0;
  (this->ObjectIndexToPerObjectInfoIndex).ArrayMax = 0;
  this->PerObjectInfoStorageCountForConnections = 0;
  this->PerObjectInfoStorageCountPerItem = 0;
  (this->NetObjectFilteringInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetObjectFilteringInfos).ArrayNum = 0;
  (this->NetObjectFilteringInfos).ArrayMax = 0;
  (this->ObjectIndexToDynamicFilterIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectIndexToDynamicFilterIndex).ArrayNum = 0;
  (this->ObjectIndexToDynamicFilterIndex).ArrayMax = 0;
  (this->DynamicFilterInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicFilterInfos).ArrayNum = 0;
  (this->DynamicFilterInfos).ArrayMax = 0;
  (this->DynamicFilterEnabledObjects).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DynamicFilterEnabledObjects).Storage.ArrayNum = 0;
  (this->DynamicFilterEnabledObjects).Storage.ArrayMax = 0;
  (this->DynamicFilterEnabledObjects).BitCount = 0;
  this->bHasNewConnection = 0;
  this->bHasDynamicFiltersWithUpdateTrait = 0;
  this->bHasDirtyInclusionFilterGroup = 0;
  this->bHasDirtyExclusionFilterGroup = 0;
  this->bHasDynamicFilters = 0;
  this->bHasDirtyOwner = 0;
  this->bHasDirtyOwnerFilter = 0;
  this->bHasRemovedConnection = 0;
  (this->ObjectsRequiringDynamicFilterUpdate).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectsRequiringDynamicFilterUpdate).Storage.ArrayNum = 0;
  (this->ObjectsRequiringDynamicFilterUpdate).Storage.ArrayMax = 0;
  (this->ObjectsRequiringDynamicFilterUpdate).BitCount = 0;
  (this->HysteresisState).Mode = Disabled;
  (this->HysteresisState).ConnectionStartId = 0;
  (this->HysteresisState).ObjectsToClear.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HysteresisState).ObjectsToClear.Storage.ArrayNum = 0;
  (this->HysteresisState).ObjectsToClear.Storage.ArrayMax = 0;
  (this->HysteresisState).ObjectsToClear.BitCount = 0;
  (this->HysteresisState).ObjectsExemptFromHysteresis.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HysteresisState).ObjectsExemptFromHysteresis.Storage.ArrayNum = 0;
  (this->HysteresisState).ObjectsExemptFromHysteresis.Storage.ArrayMax = 0;
  (this->HysteresisState).ObjectsExemptFromHysteresis.BitCount = 0;
  (this->HysteresisState).ConnectionIdStride = 1;
  (this->HysteresisState).ObjectsToClearCount = 0;
  return this;
}

// operator() @ 14422c090

void __thiscall
`UE::Net::Private::FReplicationFiltering::ClearGroupExclusionFilterEffectsForObject'::__l2::
<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  
  lVar2 = **(longlong **)this;
  if (*(uint *)(*(longlong **)this + 2) <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar1 = (ulonglong)(param_1 >> 5) * 4;
  *(uint *)(lVar1 + lVar2) = *(uint *)(lVar1 + lVar2) & ~(1 << (param_1 & 0x1f));
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  lVar2 = **(longlong **)((longlong)this + 8);
  if (*(uint *)(*(longlong **)((longlong)this + 8) + 2) <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::Net::FNetBitArrayHelper::SetBitValue
            ((uint *)*puVar3,*(uint *)(puVar3 + 2),param_1,
             (*(uint *)(lVar1 + lVar2) >> (param_1 & 0x1f) & 1) != 0);
  return;
}

// operator() @ 14422c170

void __thiscall
`UE::Net::Private::FReplicationFiltering::InitNewConnections'::__l2::<lambda_1>::operator()
          (void *this,uint param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  FPerConnectionInfo *pFVar16;
  uint local_res18;
  uint local_res20;
  FNetBitArrayView local_b0;
  TArrayView<unsigned_int_const_,int> local_a0;
  <lambda_1> local_90;
  <lambda_2> local_78;
  <lambda_4> local_60;
  
  lVar3 = *(longlong *)(*(longlong *)this + 0x10);
  if (((*(byte *)(lVar3 + 0xd0) & 1) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScopeFrameData.bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                         ,0xef,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_b0,*(uint **)(lVar3 + 0xd8),*(uint *)(lVar3 + 0xe8));
  lVar3 = *(longlong *)this;
  uVar10 = 0;
  if ((int)param_1 < *(int *)(lVar3 + 0x38)) {
    uVar10 = ~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar16 = (FPerConnectionInfo *)((longlong)(int)param_1 * 0x160 + *(longlong *)(lVar3 + 0x30));
  UE::Net::Private::FReplicationFiltering::SetPerConnectionListsSize
            (*(FReplicationFiltering **)this,pFVar16,
             (*(FReplicationFiltering **)this)->NetRefHandleManager->CurrentMaxInternalNetRefIndex);
  puVar9 = &(pFVar16->ConnectionFilteredObjects).BitCount;
  if ((((pFVar16->ConnectionFilteredObjects).Storage.AllocatorInstance.Data ==
        (FScriptContainerElement *)local_b0.Storage) || (*puVar9 != local_b0.BitCount)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x528,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = (pFVar16->ConnectionFilteredObjects).Storage.ArrayNum;
  if ((uVar10 != 0) && (local_b0.WordCount != 0)) {
    memcpy((pFVar16->ConnectionFilteredObjects).Storage.AllocatorInstance.Data,local_b0.Storage,
           (ulonglong)uVar10 << 2);
  }
  pFVar4 = (pFVar16->ConnectionFilteredObjects).Storage.AllocatorInstance.Data;
  if ((*puVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(uint *)pFVar4 = *(uint *)pFVar4 & 0xfffffffe;
  local_90.__this = *(FReplicationFiltering **)this;
  local_90.ConnectionInfo = pFVar16;
  local_90.ConnectionId = param_1;
  UE::Net::FNetBitArrayHelper::
  ForAllSetBits<__UE::Net::Private::FReplicationFiltering::InitNewConnections_::__l2::<lambda_1>::operator()_::__l3::<lambda_1>_&>
            ((uint *)((local_90.__this)->ExclusionFilterGroups).Storage.AllocatorInstance.Data,
             ((local_90.__this)->ExclusionFilterGroups).Storage.ArrayNum,
             ((local_90.__this)->ExclusionFilterGroups).BitCount,&local_90);
  local_78.__this = *(FReplicationFiltering **)this;
  local_78.ConnectionInfo = pFVar16;
  local_78.ConnectionId = param_1;
  UE::Net::FNetBitArrayHelper::
  ForAllSetBits<__UE::Net::Private::FReplicationFiltering::InitNewConnections_::__l2::<lambda_1>::operator()_::__l4::<lambda_2>_&>
            ((uint *)((local_78.__this)->InclusionFilterGroups).Storage.AllocatorInstance.Data,
             ((local_78.__this)->InclusionFilterGroups).Storage.ArrayNum,
             ((local_78.__this)->InclusionFilterGroups).BitCount,&local_78);
  lVar3 = *(longlong *)this;
  local_res18 = 0;
  uVar10 = *(uint *)(lVar3 + 0xb0);
  uVar2 = *(undefined4 *)(lVar3 + 0xb8);
  puVar9 = *(uint **)(lVar3 + 0xa8);
  local_res20 = 0;
  if (uVar10 != 0) {
    do {
      uVar14 = 0xffffffff;
      if (local_res18 == uVar10 - 1) {
        uVar14 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar15 = local_res20;
      for (uVar14 = uVar14 & *puVar9; uVar14 != 0; uVar14 = uVar14 >> 1) {
        if ((uVar14 & 1) != 0) {
          uVar8 = 0;
          if ((int)uVar15 < *(int *)(lVar3 + 200)) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar7 = param_1 == *(ushort *)(*(longlong *)(lVar3 + 0xc0) + (longlong)(int)uVar15 * 2);
          UE::Net::FNetBitArrayHelper::SetBitValue
                    ((uint *)(pFVar16->ConnectionFilteredObjects).Storage.AllocatorInstance.Data,
                     (pFVar16->ConnectionFilteredObjects).BitCount,uVar15,bVar7);
          UE::Net::Private::FNetRefHandleManager::GetSubObjects
                    (*(FNetRefHandleManager **)(lVar3 + 0x10),&local_a0,uVar15);
          puVar1 = local_a0.DataPtr + local_a0.ArrayNum;
          for (puVar13 = local_a0.DataPtr; puVar13 != puVar1; puVar13 = puVar13 + 1) {
            UE::Net::FNetBitArrayHelper::SetBitValue
                      ((uint *)(pFVar16->ConnectionFilteredObjects).Storage.AllocatorInstance.Data,
                       (pFVar16->ConnectionFilteredObjects).BitCount,*puVar13,bVar7);
          }
        }
        uVar15 = uVar15 + 1;
      }
      local_res18 = local_res18 + 1;
      puVar9 = puVar9 + 1;
      local_res20 = local_res20 + 0x20;
    } while (local_res18 < uVar10);
  }
  local_60.__this = *(FReplicationFiltering **)this;
  local_60.ConnectionId = param_1;
  local_60.ConnectionInfo = pFVar16;
  UE::Net::FNetBitArrayHelper::
  ForAllSetBits<__UE::Net::Private::FReplicationFiltering::InitNewConnections_::__l2::<lambda_1>::operator()_::__l6::<lambda_4>_&>
            ((uint *)((local_60.__this)->ObjectsWithPerObjectInfo).Storage.AllocatorInstance.Data,
             ((local_60.__this)->ObjectsWithPerObjectInfo).Storage.ArrayNum,
             ((local_60.__this)->ObjectsWithPerObjectInfo).BitCount,&local_60);
  UE::Net::FNetBitArray::Copy
            (&pFVar16->ObjectsInScopeBeforeDynamicFiltering,(FNetBitArray *)pFVar16);
  if ((((pFVar16->ObjectsInScopeBeforeDynamicFiltering).Storage.AllocatorInstance.Data ==
        (pFVar16->GroupExcludedObjects).Storage.AllocatorInstance.Data) ||
      ((pFVar16->ObjectsInScopeBeforeDynamicFiltering).BitCount !=
       (pFVar16->GroupExcludedObjects).BitCount)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x539,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = (pFVar16->ObjectsInScopeBeforeDynamicFiltering).Storage.ArrayNum;
  pFVar4 = (pFVar16->GroupExcludedObjects).Storage.AllocatorInstance.Data;
  pFVar5 = (pFVar16->ObjectsInScopeBeforeDynamicFiltering).Storage.AllocatorInstance.Data;
  if (uVar10 != 0) {
    uVar12 = (ulonglong)uVar10;
    pFVar11 = pFVar5;
    do {
      *(uint *)pFVar11 =
           *(uint *)pFVar11 & ~*(uint *)(pFVar11 + ((longlong)pFVar4 - (longlong)pFVar5));
      uVar12 = uVar12 - 1;
      pFVar11 = pFVar11 + 4;
    } while (uVar12 != 0);
  }
  return;
}

// operator() @ 14422cad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Net::Private::FReplicationFiltering::SetFilter'::__l2::<lambda_5>::operator()
          (void *this,uint param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uchar **ppuVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  FNetBitArrayView local_68;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uchar *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)this;
  lVar14 = (longlong)(int)param_1;
  lVar13 = (longlong)(int)param_2;
  iVar3 = *(int *)(lVar4 + 0x248);
  uVar12 = ~param_1 >> 0x1f;
  uVar9 = 0;
  if ((int)param_1 < iVar3) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (local_78 = lVar14, local_70 = (longlong)iVar3,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = *(longlong *)(lVar4 + 0x240);
  *(undefined8 *)(local_58 + lVar14 * 8) = 0;
  local_58 = local_58 + lVar14 * 8;
  local_50 = *(undefined8 *)((longlong)this + 0x18);
  local_48 = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x18);
  local_40 = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x10);
  ppuVar10 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                       (*(TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> **)
                         ((longlong)this + 0x10),param_1);
  lVar4 = *(longlong *)this;
  local_38 = *ppuVar10;
  iVar3 = *(int *)(lVar4 + 0x268);
  uVar9 = 0;
  if ((int)param_2 < iVar3) {
    uVar9 = ~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (local_78 = lVar13, local_70 = (longlong)iVar3,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  lVar4 = *(longlong *)(lVar4 + 0x260);
  plVar1 = (longlong *)(lVar4 + lVar13 * 0x18);
  if ((*(longlong *)(lVar4 + lVar13 * 0x18) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  cVar8 = (**(code **)(*(longlong *)*plVar1 + 0x2c0))((longlong *)*plVar1,param_1,&local_58);
  if (cVar8 == '\0') {
    bVar6 = false;
  }
  else {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    if ((*plVar1 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    UE::Net::FNetBitArrayView::FNetBitArrayView
              (&local_68,*(uint **)(*plVar1 + 0x28),*(uint *)(*plVar1 + 0x38));
    if ((local_68.BitCount <= param_1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar15 = (ulonglong)(param_1 >> 5);
    local_68.Storage[uVar15] = local_68.Storage[uVar15] | 1 << (param_1 & 0x1f);
    lVar4 = *(longlong *)this;
    iVar3 = *(int *)(lVar4 + 600);
    uVar9 = 0;
    if ((int)param_1 < iVar3) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (local_78 = lVar14, local_70 = (longlong)iVar3,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    *(char *)(lVar14 + *(longlong *)(lVar4 + 0x250)) = (char)param_2;
    lVar4 = *(longlong *)(*(longlong *)this + 0x270);
    if ((*(uint *)(*(longlong *)this + 0x280) <= param_1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    *(uint *)(lVar4 + uVar15 * 4) = *(uint *)(lVar4 + uVar15 * 4) | 1 << (param_1 & 0x1f);
    plVar1 = *(longlong **)this;
    lVar4 = *(longlong *)((longlong)this + 0x18);
    if ((*plVar1 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    lVar13 = *plVar1;
    plVar11 = *(longlong **)(lVar13 + 0x30);
    plVar2 = (longlong *)((longlong)plVar11 + (longlong)*(int *)(lVar13 + 0x38) * 0xc);
    for (; plVar11 != plVar2; plVar11 = (longlong *)((longlong)plVar11 + 0xc)) {
      if (*plVar11 == lVar4) {
        uVar7 = (undefined1)plVar11[1];
        goto LAB_14422ce04;
      }
    }
    if ((lVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar7 = *(undefined1 *)(*plVar1 + 0x29);
LAB_14422ce04:
    lVar4 = *(longlong *)this;
    iVar3 = *(int *)(lVar4 + 0x178);
    local_70 = (longlong)iVar3;
    uVar9 = 0;
    if ((int)param_1 < iVar3) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (local_78 = lVar14,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    *(undefined1 *)(lVar14 + *(longlong *)(lVar4 + 0x170)) = uVar7;
    bVar6 = true;
  }
  return bVar6;
}

// AddConnection @ 14422dd00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::AddConnection(FReplicationFiltering *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  this->bHasNewConnection = 1;
  pFVar2 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  if ((this->ValidConnections).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (ulonglong)(param_1 >> 5);
  *(uint *)(pFVar2 + uVar5 * 4) = *(uint *)(pFVar2 + uVar5 * 4) | 1 << (param_1 & 0x1f);
  pFVar2 = (this->NewConnections).Storage.AllocatorInstance.Data;
  if ((this->NewConnections).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(pFVar2 + uVar5 * 4) = *(uint *)(pFVar2 + uVar5 * 4) | 1 << (param_1 & 0x1f);
  if (5 < (byte)LogIrisFiltering._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
  }
  iVar1 = (this->DynamicFilterInfos).ArrayNum;
  pFVar6 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->DynamicFilterInfos).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar2) break;
    if (*(longlong *)pFVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar6 + 0x2b0))(*(longlong **)pFVar6,param_1);
    pFVar6 = pFVar6 + 0x18;
  }
  return;
}

// AddExclusionFilterGroup @ 14422e070

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationFiltering::AddExclusionFilterGroup
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1)

{
  FNetObjectGroups *pFVar1;
  code *pcVar2;
  FNetObjectGroupHandle_u_0 FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res8 [2];
  FNetObjectGroupHandle_u_0 local_res10;
  FName local_res18;
  FNetObjectGroupHandle_u_0 *local_res20;
  FString local_58;
  FReplicationFiltering *local_48;
  FNetObjectGroupHandle_u_0 *local_40;
  uint *local_38;
  
  local_res10 = param_1.field0_0x0;
  bVar4 = FNetObjectGroups::IsValidGroup(this->Groups,param_1);
  if (!bVar4) {
    local_res20 = &local_res10;
    bVar4 = `UE::Net::Private::FReplicationFiltering::AddExclusionFilterGroup'::__l2::<lambda_1>::
            operator()(&local_res20);
    if (!bVar4) {
      return false;
    }
  }
  uVar7 = (uint)local_res10.Value;
  pFVar1 = this->Groups;
  local_res8[0] = uVar7 & 0xffffff;
  bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,(FNetObjectGroupHandle)local_res10._s_1);
  if ((((bVar4) &&
       (lVar8 = (ulonglong)(uVar7 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar8 != 0)) &&
      ((*(byte *)(lVar8 + 0x1c) & 3) != 0)) ||
     (bVar4 = FNetBitArray::GetBit(&this->SubObjectFilterGroups,local_res8[0]), bVar4)) {
    local_40 = &local_res10;
    local_38 = local_res8;
    local_48 = this;
    `UE::Net::Private::FReplicationFiltering::AddExclusionFilterGroup'::__l2::<lambda_2>::operator()
              (&local_48);
    return false;
  }
  FNetObjectGroups::AddExclusionFilterTrait(this->Groups,(FNetObjectGroupHandle)local_res10._s_1);
  FNetBitArray::SetBit(&this->ExclusionFilterGroups,local_res8[0]);
  FNetBitArray::SetBit(&this->DirtyExclusionFilterGroups,local_res8[0]);
  this->bHasDirtyExclusionFilterGroup = 1;
  uVar6 = AllocPerObjectInfo(this);
  lVar8 = (longlong)(int)local_res8[0];
  uVar7 = 0;
  if ((int)local_res8[0] < (this->GroupInfos).ArrayNum) {
    uVar7 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  *(uint *)((this->GroupInfos).AllocatorInstance.Data + lVar8 * 4) = uVar6;
  lVar8 = (longlong)(int)local_res8[0];
  uVar7 = 0;
  if ((int)local_res8[0] < (this->GroupInfos).ArrayNum) {
    uVar7 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar7 = this->PerObjectInfoStorageCountPerItem;
  if (uVar7 != 0) {
    memset((this->PerObjectInfoStorage).AllocatorInstance.Data +
           (ulonglong)(uVar7 * *(int *)((this->GroupInfos).AllocatorInstance.Data + lVar8 * 4)) * 4,
           0,(ulonglong)uVar7 << 2);
  }
  FVar3 = local_res10;
  if (5 < (byte)LogIrisFiltering._0_1_) {
    pFVar1 = this->Groups;
    bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,(FNetObjectGroupHandle)local_res10._s_1);
    if ((bVar4) &&
       (lVar8 = (ulonglong)((uint)FVar3.Value & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups,
       lVar8 != 0)) {
      local_res18 = *(FName *)(lVar8 + 0x10);
    }
    else {
      local_res18.ComparisonIndex.Value = 0;
      local_res18.Number = 0;
    }
    ::FName::ToString(&local_res18,&local_58);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// AddInclusionFilterGroup @ 14422e570

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationFiltering::AddInclusionFilterGroup
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1)

{
  FNetObjectGroups *pFVar1;
  code *pcVar2;
  FNetObjectGroupHandle_u_0 FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res8 [2];
  FNetObjectGroupHandle_u_0 local_res10;
  FName local_res18;
  FNetObjectGroupHandle_u_0 *local_res20;
  FString local_58;
  FReplicationFiltering *local_48;
  FNetObjectGroupHandle_u_0 *local_40;
  uint *local_38;
  
  local_res10 = param_1.field0_0x0;
  bVar4 = FNetObjectGroups::IsValidGroup(this->Groups,param_1);
  if (!bVar4) {
    local_res20 = &local_res10;
    bVar4 = `UE::Net::Private::FReplicationFiltering::AddInclusionFilterGroup'::__l2::<lambda_1>::
            operator()(&local_res20);
    if (!bVar4) {
      return false;
    }
  }
  uVar7 = (uint)local_res10.Value;
  pFVar1 = this->Groups;
  local_res8[0] = uVar7 & 0xffffff;
  bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,(FNetObjectGroupHandle)local_res10._s_1);
  if ((((!bVar4) ||
       (lVar8 = (ulonglong)(uVar7 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar8 == 0)) ||
      ((*(byte *)(lVar8 + 0x1c) & 3) == 0)) &&
     (bVar4 = FNetBitArray::GetBit(&this->SubObjectFilterGroups,local_res8[0]), FVar3 = local_res10,
     !bVar4)) {
    pFVar1 = this->Groups;
    bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,(FNetObjectGroupHandle)local_res10._s_1);
    if (((bVar4) &&
        (lVar8 = (ulonglong)((uint)FVar3.Value & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups,
        lVar8 != 0)) && ((*(uint *)(lVar8 + 0x1c) & 3) == 0)) {
      *(uint *)(lVar8 + 0x1c) = *(uint *)(lVar8 + 0x1c) | 2;
    }
    FNetBitArray::SetBit(&this->InclusionFilterGroups,local_res8[0]);
    FNetBitArray::SetBit(&this->DirtyInclusionFilterGroups,local_res8[0]);
    this->bHasDirtyInclusionFilterGroup = 1;
    uVar6 = AllocPerObjectInfo(this);
    lVar8 = (longlong)(int)local_res8[0];
    uVar7 = 0;
    if ((int)local_res8[0] < (this->GroupInfos).ArrayNum) {
      uVar7 = ~local_res8[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    *(uint *)((this->GroupInfos).AllocatorInstance.Data + lVar8 * 4) = uVar6;
    lVar8 = (longlong)(int)local_res8[0];
    uVar7 = 0;
    if ((int)local_res8[0] < (this->GroupInfos).ArrayNum) {
      uVar7 = ~local_res8[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar7 = this->PerObjectInfoStorageCountPerItem;
    if (uVar7 != 0) {
      memset((this->PerObjectInfoStorage).AllocatorInstance.Data +
             (ulonglong)(uVar7 * *(int *)((this->GroupInfos).AllocatorInstance.Data + lVar8 * 4)) *
             4,0,(ulonglong)uVar7 << 2);
    }
    FVar3 = local_res10;
    if (5 < (byte)LogIrisFiltering._0_1_) {
      pFVar1 = this->Groups;
      bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,(FNetObjectGroupHandle)local_res10._s_1);
      if ((bVar4) &&
         (lVar8 = (ulonglong)((uint)FVar3.Value & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups,
         lVar8 != 0)) {
        local_res18 = *(FName *)(lVar8 + 0x10);
      }
      else {
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
      }
      ::FName::ToString(&local_res18,&local_58);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    return true;
  }
  local_40 = &local_res10;
  local_38 = local_res8;
  local_48 = this;
  `UE::Net::Private::FReplicationFiltering::AddInclusionFilterGroup'::__l2::<lambda_2>::operator()
            (&local_48);
  return false;
}

// AddSubObjectFilter @ 14422ee40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::AddSubObjectFilter
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1)

{
  FNetObjectGroups *pFVar1;
  code *pcVar2;
  FNetObjectGroupHandle_u_0 FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res8 [2];
  FNetObjectGroupHandle_u_0 local_res10;
  uint local_res18 [2];
  TKeyInitializer<unsigned_int_const_&> local_res20;
  FName local_68;
  FNetObjectGroupHandle_u_0 *local_60;
  uint *local_58;
  FString local_50;
  FReplicationFiltering *local_40;
  FNetObjectGroupHandle_u_0 *local_38;
  uint *local_30;
  
  local_res10 = param_1.field0_0x0;
  bVar4 = FNetObjectGroups::IsValidGroup(this->Groups,param_1);
  if (!bVar4) {
    local_60 = &local_res10;
    bVar4 = `UE::Net::Private::FReplicationFiltering::AddSubObjectFilter'::__l2::<lambda_1>::
            operator()(&local_60);
    if (!bVar4) {
      return;
    }
  }
  uVar6 = (uint)local_res10.Value;
  local_res8[0] = uVar6 & 0xffffff;
  pFVar1 = this->Groups;
  bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,(FNetObjectGroupHandle)local_res10._s_1);
  if (((!bVar4) ||
      (lVar7 = (ulonglong)(uVar6 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar7 == 0)) ||
     ((*(uint *)(lVar7 + 0x1c) & 3) == 0)) {
    bVar4 = FNetBitArray::GetBit(&this->SubObjectFilterGroups,local_res8[0]);
    if (!bVar4) {
      FNetBitArray::SetBit(&this->SubObjectFilterGroups,local_res8[0]);
      local_res18[0] = local_res8[0];
      local_58 = local_res18;
      TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo,0>,FDefaultSetAllocator>
                  *)&this->SubObjectFilterGroupInfos,&local_res20,(bool *)&local_58);
      lVar7 = *(longlong *)&this->SubObjectFilterGroupInfos + (longlong)(int)local_res20.Key * 0x68;
      if ((*(int *)(lVar7 + 0x58) != 0) &&
         (bVar4 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7127879573563241941>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                             ,0xa2b,"GroupInfo.ConnectionStateIndex == 0"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = AllocPerObjectInfo(this);
      *(uint *)(lVar7 + 0x58) = uVar5;
      uVar6 = this->PerObjectInfoStorageCountPerItem;
      if (uVar6 != 0) {
        memset((this->PerObjectInfoStorage).AllocatorInstance.Data + (ulonglong)(uVar6 * uVar5) * 4,
               0,(ulonglong)uVar6 << 2);
      }
      FVar3 = local_res10;
      if ((byte)LogIrisFiltering._0_1_ < 6) {
        return;
      }
      pFVar1 = this->Groups;
      bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,(FNetObjectGroupHandle)local_res10._s_1);
      if ((bVar4) &&
         (lVar7 = (ulonglong)((uint)FVar3.Value & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups,
         lVar7 != 0)) {
        local_68 = *(FName *)(lVar7 + 0x10);
      }
      else {
        local_68.ComparisonIndex.Value = 0;
        local_68.Number = 0;
      }
      ::FName::ToString(&local_68,&local_50);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
      if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
      return;
    }
  }
  local_38 = &local_res10;
  local_30 = local_res8;
  local_40 = this;
  `UE::Net::Private::FReplicationFiltering::AddSubObjectFilter'::__l2::<lambda_2>::operator()
            (&local_40);
  return;
}

// AllocPerObjectInfo @ 14422fc00

uint __thiscall
UE::Net::Private::FReplicationFiltering::AllocPerObjectInfo(FReplicationFiltering *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  FNetBitArrayView local_38;
  FNetBitArrayView local_28;
  
  piVar1 = &(this->UsedPerObjectInfoStorage).ArrayNum;
  FNetBitArrayView::FNetBitArrayView
            (&local_38,(uint *)(this->UsedPerObjectInfoStorage).AllocatorInstance.Data,*piVar1 << 5)
  ;
  uVar5 = 0;
  iVar8 = 0;
  puVar7 = local_38.Storage;
  if (local_38.WordCount != 0) {
    do {
      if (*puVar7 != 0xffffffff) {
        uVar5 = ~*puVar7;
        iVar2 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
          }
        }
        iVar6 = 0x20;
        if (uVar5 != 0) {
          iVar6 = iVar2;
        }
        uVar5 = 0xffffffff;
        if ((uint)(iVar6 + iVar8) < local_38.BitCount) {
          uVar5 = iVar6 + iVar8;
        }
        if (uVar5 != 0xffffffff) {
          if ((local_38.BitCount <= uVar5) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2a2,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return uVar5;
          }
          local_38.Storage[uVar5 >> 5] = local_38.Storage[uVar5 >> 5] | 1 << (uVar5 & 0x1f);
          return uVar5;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 0x20;
      puVar7 = puVar7 + 1;
    } while (uVar5 < local_38.WordCount);
  }
  uVar5 = local_38.BitCount;
  if ((local_38.BitCount == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedPerObjectInfos.GetNumBits() < std::numeric_limits<PerObjectInfoIndexType>::max()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                         ,0x706,
                         L"Filtering per object info storage exhausted. Contact the UE Network team."
                        ), uVar5 = local_38.BitCount, bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,&(this->UsedPerObjectInfoStorage).AllocatorInstance,piVar1,
                     &(this->UsedPerObjectInfoStorage).ArrayMax);
  *(undefined4 *)((this->UsedPerObjectInfoStorage).AllocatorInstance.Data + (longlong)iVar8 * 4) = 0
  ;
  FNetBitArrayView::FNetBitArrayView
            (&local_28,(uint *)(this->UsedPerObjectInfoStorage).AllocatorInstance.Data,*piVar1 << 5)
  ;
  puVar7 = local_28.Storage;
  if ((local_28.BitCount <= uVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  puVar7[uVar5 >> 5] = puVar7[uVar5 >> 5] | 1 << (uVar5 & 0x1f);
  if (uVar5 == 0) {
    uVar5 = 1;
    if ((local_28.BitCount < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    *local_28.Storage = *local_28.Storage | 2;
  }
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,this->PerObjectInfoStorageCountPerItem << 5,
             &(this->PerObjectInfoStorage).AllocatorInstance,&(this->PerObjectInfoStorage).ArrayNum,
             &(this->PerObjectInfoStorage).ArrayMax);
  return uVar5;
}

// AllocPerObjectInfoForObject @ 14422ff50

FPerObjectInfo * __thiscall
UE::Net::Private::FReplicationFiltering::AllocPerObjectInfoForObject
          (FReplicationFiltering *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPerObjectInfo *pFVar5;
  uint uVar6;
  
  pFVar1 = (this->ObjectsWithPerObjectInfo).Storage.AllocatorInstance.Data;
  if ((this->ObjectsWithPerObjectInfo).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPerObjectInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) =
       *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) | 1 << (param_1 & 0x1f);
  uVar4 = AllocPerObjectInfo(this);
  uVar6 = 0;
  if ((int)param_1 < (this->ObjectIndexToPerObjectInfoIndex).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPerObjectInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  *(uint *)((this->ObjectIndexToPerObjectInfoIndex).AllocatorInstance.Data +
           (longlong)(int)param_1 * 4) = uVar4;
  uVar6 = this->PerObjectInfoStorageCountPerItem;
  pFVar1 = (this->PerObjectInfoStorage).AllocatorInstance.Data + (ulonglong)(uVar6 * uVar4) * 4;
  if (uVar6 != 0) {
    memset(pFVar1,-1,(ulonglong)uVar6 << 2);
  }
  return (FPerObjectInfo *)pFVar1;
}

// BatchNotifyFiltersOfDirtyObjects @ 144232410

void __thiscall
UE::Net::Private::FReplicationFiltering::BatchNotifyFiltersOfDirtyObjects
          (FReplicationFiltering *this,FUpdateDirtyObjectsBatchHelper *param_1,uint *param_2,
          uint param_3)

{
  int iVar1;
  int iVar2;
  ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
  FVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
  FVar8;
  ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
  FVar9;
  uint uVar10;
  ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
  FVar11;
  undefined1 local_res8 [8];
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  FScriptContainerElement *local_28;
  undefined8 uStack_20;
  
  FUpdateDirtyObjectsBatchHelper::PrepareBatch
            (param_1,param_2,param_3,&this->ObjectIndexToDynamicFilterIndex);
  local_28 = (this->NetObjectFilteringInfos).AllocatorInstance.Data;
  iVar1 = (this->NetObjectFilteringInfos).ArrayNum;
  local_38 = 0;
  local_30 = 0;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar11 = (param_1->PerFilterInfos).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->PerFilterInfos).ArrayNum;
  uStack_20 = CONCAT44(uStack_3c,iVar1);
  FVar9 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
           )param_1;
  if (FVar11 != (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
                 )0x0) {
    FVar9 = FVar11;
  }
  FVar11 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
            )((longlong)iVar2 * 0x10 + (longlong)FVar9);
  do {
    if ((param_1->PerFilterInfos).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar9 == FVar11) {
      return;
    }
    if (*(int *)((longlong)FVar9 + 8) != 0) {
      local_38 = *(undefined8 *)FVar9;
      local_30 = *(undefined4 *)((longlong)FVar9 + 8);
      FVar3 = (param_1->PerFilterInfos).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
               )param_1;
      if (FVar3 != (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
                    )0x0) {
        FVar8 = FVar3;
      }
      uVar10 = (uint)((longlong)FVar9 - (longlong)FVar8 >> 4);
      uVar7 = 0;
      if ((int)uVar10 < (this->DynamicFilterInfos).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
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
      plVar4 = *(longlong **)
                ((this->DynamicFilterInfos).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18);
      (**(code **)(*plVar4 + 0x2d0))(plVar4,&local_38);
    }
    FVar9 = (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
             )((longlong)FVar9 + 0x10);
  } while( true );
}

// BuildAlwaysRelevantList @ 144232620

void __thiscall
UE::Net::Private::FReplicationFiltering::BuildAlwaysRelevantList
          (FReplicationFiltering *this,FNetBitArrayView *param_1,FNetBitArrayView *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  FNetBitArrayView local_28;
  
  uVar5 = param_1->WordCount;
  if ((param_2->WordCount < uVar5) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxWordIterationCount <= WordCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x1b0,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArrayView word count (%u). Out of Bounds memory access will occur."
                         ), bVar22)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar6 = (FScriptContainerElement *)param_2->Storage;
  if (((this->ObjectsWithOwnerFilter).Storage.ArrayNum < (int)uVar5) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(int32)MaxWordIterationCount <= Storage.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x84,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                         ), bVar22)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar7 = (this->ObjectsWithOwnerFilter).Storage.AllocatorInstance.Data;
  if (((this->DynamicFilterEnabledObjects).Storage.ArrayNum < (int)uVar5) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(int32)MaxWordIterationCount <= Storage.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x84,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                         ), bVar22)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar8 = (this->DynamicFilterEnabledObjects).Storage.AllocatorInstance.Data;
  FNetBitArrayView::FNetBitArrayView
            (&local_28,
             (uint *)(this->Groups->GroupFilteredOutObjects).Storage.AllocatorInstance.Data,
             (this->Groups->GroupFilteredOutObjects).BitCount);
  if ((local_28.WordCount < uVar5) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxWordIterationCount <= WordCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x1b0,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArrayView word count (%u). Out of Bounds memory access will occur."
                         ), bVar22)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((param_1->WordCount < uVar5) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxWordIterationCount <= WordCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x1ba,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArrayView word count (%u). Out of Bounds memory access will occur."
                         ), bVar22)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (FScriptContainerElement *)param_1->Storage;
  uVar27 = 0;
  if (uVar5 == 0) {
    return;
  }
  uVar26 = uVar27;
  if (uVar5 < 2) goto LAB_144232886;
  uVar25 = uVar5 - 1;
  uVar24 = (ulonglong)uVar25;
  pFVar23 = pFVar9 + (ulonglong)uVar25 * 4;
  if (((((pFVar9 <= pFVar6 + (ulonglong)uVar25 * 4) && (pFVar6 <= pFVar23)) ||
       ((pFVar9 <= pFVar7 + uVar24 * 4 && (pFVar7 <= pFVar23)))) ||
      ((uVar26 = 0, pFVar9 <= pFVar8 + uVar24 * 4 && (pFVar8 <= pFVar23)))) ||
     ((pFVar9 <= (FScriptContainerElement *)((longlong)local_28.Storage + uVar24 * 4) &&
      (local_28.Storage <= pFVar23)))) goto LAB_144232886;
  if (uVar5 < 4) {
LAB_144232846:
    do {
      uVar26 = *(ulonglong *)(pFVar8 + uVar27 * 4) |
               *(ulonglong *)((longlong)local_28.Storage + uVar27 * 4) |
               *(ulonglong *)(pFVar7 + uVar27 * 4);
      *(ulonglong *)(pFVar9 + uVar27 * 4) =
           CONCAT44(~(uint)(uVar26 >> 0x20) &
                    (uint)((ulonglong)*(undefined8 *)(pFVar6 + uVar27 * 4) >> 0x20),
                    ~(uint)uVar26 & (uint)*(undefined8 *)(pFVar6 + uVar27 * 4));
      uVar25 = (int)uVar27 + 2;
      uVar27 = (ulonglong)uVar25;
    } while (uVar25 < (uVar5 & 0xfffffffe));
  }
  else {
    do {
      pFVar23 = pFVar8 + uVar27 * 4;
      uVar16 = *(uint *)(pFVar23 + 4);
      uVar17 = *(uint *)(pFVar23 + 8);
      uVar18 = *(uint *)(pFVar23 + 0xc);
      pFVar1 = (FScriptContainerElement *)((longlong)local_28.Storage + uVar27 * 4);
      uVar19 = *(uint *)(pFVar1 + 4);
      uVar20 = *(uint *)(pFVar1 + 8);
      uVar21 = *(uint *)(pFVar1 + 0xc);
      pFVar2 = pFVar7 + uVar27 * 4;
      uVar13 = *(uint *)(pFVar2 + 4);
      uVar14 = *(uint *)(pFVar2 + 8);
      uVar15 = *(uint *)(pFVar2 + 0xc);
      pFVar4 = pFVar6 + uVar27 * 4;
      uVar25 = *(uint *)(pFVar4 + 4);
      uVar11 = *(uint *)(pFVar4 + 8);
      uVar12 = *(uint *)(pFVar4 + 0xc);
      pFVar3 = pFVar9 + uVar27 * 4;
      *(uint *)pFVar3 = ~(*(uint *)pFVar1 | *(uint *)pFVar23 | *(uint *)pFVar2) & *(uint *)pFVar4;
      *(uint *)(pFVar3 + 4) = ~(uVar19 | uVar16 | uVar13) & uVar25;
      *(uint *)(pFVar3 + 8) = ~(uVar20 | uVar17 | uVar14) & uVar11;
      *(uint *)(pFVar3 + 0xc) = ~(uVar21 | uVar18 | uVar15) & uVar12;
      uVar25 = (int)uVar27 + 4;
      uVar27 = (ulonglong)uVar25;
    } while (uVar25 < uVar5 - (uVar5 & 3));
    if (1 < (uVar5 & 3)) goto LAB_144232846;
  }
  uVar26 = uVar27;
  if (uVar5 <= (uint)uVar27) {
    return;
  }
LAB_144232886:
  uVar27 = (ulonglong)(uVar5 - (int)uVar26);
  pFVar23 = pFVar8 + uVar26 * 4;
  do {
    *(uint *)(pFVar23 + ((longlong)pFVar9 - (longlong)pFVar8)) =
         ~(*(uint *)(pFVar23 + ((longlong)pFVar7 - (longlong)pFVar8)) |
           *(uint *)(pFVar23 + ((longlong)local_28.Storage - (longlong)pFVar8)) | *(uint *)pFVar23)
         & *(uint *)(pFVar23 + ((longlong)pFVar6 - (longlong)pFVar8));
    uVar27 = uVar27 - 1;
    pFVar23 = pFVar23 + 4;
  } while (uVar27 != 0);
  return;
}

// BuildObjectsInFilterList @ 1442329a0

void __thiscall
UE::Net::Private::FReplicationFiltering::BuildObjectsInFilterList
          (FReplicationFiltering *this,FNetBitArrayView *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FNetBitArrayView local_28;
  
  iVar2 = (this->DynamicFilterInfos).ArrayNum;
  pFVar5 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->DynamicFilterInfos).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(FName *)(pFVar5 + 8) == param_2) {
      if ((*(longlong *)pFVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNetBitArrayView::FNetBitArrayView
                (&local_28,*(uint **)(*(longlong *)pFVar5 + 0x28),
                 *(uint *)(*(longlong *)pFVar5 + 0x38));
      FNetBitArrayView::Copy(param_1,&local_28);
      return;
    }
    pFVar5 = pFVar5 + 0x18;
  }
  return;
}

// ClearGroupExclusionFilterEffectsForObject @ 144233630

bool __thiscall
UE::Net::Private::FReplicationFiltering::ClearGroupExclusionFilterEffectsForObject
          (FReplicationFiltering *this,uint param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint *puVar8;
  FScriptContainerElement *pFVar9;
  TArrayView<unsigned_int_const_,int> local_60;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  
  uVar7 = 0;
  if ((int)param_2 < (this->ConnectionInfos).ArrayNum) {
    uVar7 = ~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pFVar9 = (this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_2 * 0x160;
  local_40 = pFVar9 + 0x30;
  local_50 = pFVar9 + 0x18;
  local_48 = pFVar9;
  bVar5 = IsExcludedByAnyGroup(this,param_1,param_2);
  if (bVar5) {
    return false;
  }
  `UE::Net::Private::FReplicationFiltering::ClearGroupExclusionFilterEffectsForObject'::__l2::
  <lambda_1>::operator()(&local_50,param_1);
  FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_60,param_1);
  puVar8 = local_60.DataPtr;
  do {
    if (puVar8 == local_60.DataPtr + local_60.ArrayNum) {
      return true;
    }
    uVar7 = *puVar8;
    bVar5 = IsExcludedByAnyGroup(this,uVar7,param_2);
    if (!bVar5) {
      lVar2 = *(longlong *)(pFVar9 + 0x18);
      if ((*(uint *)(pFVar9 + 0x28) <= uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2b7,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar4 = local_40;
      lVar1 = (ulonglong)(uVar7 >> 5) * 4;
      *(uint *)(lVar2 + lVar1) =
           *(uint *)(lVar2 + (ulonglong)(uVar7 >> 5) * 4) & ~(1 << (uVar7 & 0x1f));
      lVar2 = *(longlong *)pFVar9;
      if ((*(uint *)(pFVar9 + 0x10) <= uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      FNetBitArrayHelper::SetBitValue
                (*(uint **)pFVar4,*(uint *)(pFVar4 + 0x10),uVar7,
                 (*(uint *)(lVar2 + lVar1) >> (uVar7 & 0x1f) & 1) != 0);
    }
    puVar8 = puVar8 + 1;
  } while( true );
}

// ClearGroupInclusionFilterEffectsForObject @ 144233850

bool __thiscall
UE::Net::Private::FReplicationFiltering::ClearGroupInclusionFilterEffectsForObject
          (FReplicationFiltering *this,uint param_1,uint param_2)

{
  FNetBitArray *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  TArrayView<unsigned_int_const_,int> local_48;
  TArrayView<unsigned_int_const_,int> local_38;
  
  uVar8 = 0;
  if ((int)param_2 < (this->ConnectionInfos).ArrayNum) {
    uVar8 = ~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar1 = (this->ConnectionInfos).AllocatorInstance.Data;
  pFVar2 = (this->NetRefHandleManager->SubObjectInternalIndices).Storage.AllocatorInstance.Data;
  if (((this->NetRefHandleManager->SubObjectInternalIndices).BitCount <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((*(uint *)(pFVar2 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    FNetObjectGroups::GetGroupIndexesOfNetObject(this->Groups,&local_48,param_1);
    if (local_48.DataPtr != local_48.DataPtr + local_48.ArrayNum) {
      puVar7 = local_48.DataPtr;
      do {
        uVar8 = *puVar7;
        pFVar2 = (this->InclusionFilterGroups).Storage.AllocatorInstance.Data;
        if (((this->InclusionFilterGroups).BitCount <= uVar8) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((*(uint *)(pFVar2 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) {
          uVar6 = 0;
          if ((int)uVar8 < (this->GroupInfos).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((*(uint *)((this->PerObjectInfoStorage).AllocatorInstance.Data +
                        ((ulonglong)
                         (*(int *)((this->GroupInfos).AllocatorInstance.Data +
                                  (longlong)(int)uVar8 * 4) * this->PerObjectInfoStorageCountPerItem
                         ) + (ulonglong)(param_2 >> 5)) * 4) >> (param_2 & 0x1f) & 1) != 0)
          goto LAB_144233af8;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != local_48.DataPtr + local_48.ArrayNum);
    }
    if (((this->HysteresisState).Mode == Enabled) &&
       (bVar4 = FNetBitArray::GetBit(&this->DynamicFilterEnabledObjects,param_1), bVar4)) {
      FNetBitArray::SetBit(&this->ObjectsRequiringDynamicFilterUpdate,param_1);
    }
    this_00 = (FNetBitArray *)(pFVar1 + (longlong)(int)param_2 * 0x160 + 0x48);
    FNetBitArray::ClearBit(this_00,param_1);
    FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_38,param_1);
    for (puVar7 = local_38.DataPtr; puVar7 != local_38.DataPtr + local_38.ArrayNum;
        puVar7 = puVar7 + 1) {
      uVar8 = *puVar7;
      pFVar2 = (this_00->Storage).AllocatorInstance.Data;
      if ((*(uint *)(pFVar1 + (longlong)(int)param_2 * 0x160 + 0x58) <= uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2b7,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(uint *)(pFVar2 + (ulonglong)(uVar8 >> 5) * 4) =
           *(uint *)(pFVar2 + (ulonglong)(uVar8 >> 5) * 4) & ~(1 << (uVar8 & 0x1f));
    }
    bVar4 = true;
  }
  else {
LAB_144233af8:
    bVar4 = false;
  }
  return bVar4;
}

// ClearObjectsFromHysteresis @ 144233b30

void __thiscall
UE::Net::Private::FReplicationFiltering::ClearObjectsFromHysteresis(FReplicationFiltering *this)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  FNetBitArrayView local_48;
  
  if ((this->HysteresisState).ObjectsToClearCount != 0) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2842,
                 "FObjectScopeHysteresisUpdater_ClearObjectsFromHysteresis",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                 ,0xb1a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2842);
    }
    uVar1 = (this->ValidConnections).Storage.ArrayNum;
    uVar2 = (this->ValidConnections).BitCount;
    uVar10 = 0;
    pFVar9 = (this->ValidConnections).Storage.AllocatorInstance.Data;
    uVar11 = 0;
    if (uVar1 != 0) {
      do {
        uVar8 = 0xffffffff;
        if (uVar11 == uVar1 - 1) {
          uVar8 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
        }
        uVar7 = uVar10;
        for (uVar8 = uVar8 & *(uint *)pFVar9; uVar8 != 0; uVar8 = uVar8 >> 1) {
          if ((uVar8 & 1) != 0) {
            uVar6 = 0;
            if ((int)uVar7 < (this->ConnectionInfos).ArrayNum) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->ConnectionInfos).AllocatorInstance.Data;
            FNetBitArrayView::FNetBitArrayView
                      (&local_48,
                       (uint *)(this->HysteresisState).ObjectsToClear.Storage.AllocatorInstance.Data
                       ,(this->HysteresisState).ObjectsToClear.BitCount);
            FObjectScopeHysteresisUpdater::RemoveHysteresis
                      ((FObjectScopeHysteresisUpdater *)
                       (pFVar3 + (longlong)(int)uVar7 * 0x160 + 0xc0),&local_48);
          }
          uVar7 = uVar7 + 1;
        }
        uVar11 = uVar11 + 1;
        pFVar9 = pFVar9 + 4;
        uVar10 = uVar10 + 0x20;
      } while (uVar11 < uVar1);
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// CreatePerSubObjectGroupFilterInfo @ 144235890

FPerSubObjectFilterGroupInfo * __thiscall
UE::Net::Private::FReplicationFiltering::CreatePerSubObjectGroupFilterInfo
          (FReplicationFiltering *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPerSubObjectFilterGroupInfo *pFVar5;
  longlong lVar6;
  TKeyInitializer<unsigned_int_const_&> local_res8;
  uint local_res10 [2];
  uint *local_res18;
  
  local_res18 = local_res10;
  local_res10[0] = param_1;
  TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo,0>,FDefaultSetAllocator>
              *)&this->SubObjectFilterGroupInfos,&local_res8,(bool *)&local_res18);
  lVar6 = *(longlong *)&this->SubObjectFilterGroupInfos + (longlong)(int)local_res8.Key * 0x68;
  if (*(int *)(lVar6 + 0x58) != 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7127879573563241941>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                       ,0xa2b,"GroupInfo.ConnectionStateIndex == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPerSubObjectFilterGroupInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar4 = AllocPerObjectInfo(this);
  *(uint *)(lVar6 + 0x58) = uVar4;
  uVar1 = this->PerObjectInfoStorageCountPerItem;
  if (uVar1 != 0) {
    memset((this->PerObjectInfoStorage).AllocatorInstance.Data + (ulonglong)(uVar1 * uVar4) * 4,0,
           (ulonglong)uVar1 << 2);
  }
  return (FPerSubObjectFilterGroupInfo *)(lVar6 + 8);
}

// Deinit @ 144236090

void __thiscall UE::Net::Private::FReplicationFiltering::Deinit(FReplicationFiltering *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  uint uStack_1c;
  
  iVar2 = (this->DynamicFilterInfos).ArrayNum;
  pFVar6 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->DynamicFilterInfos).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (*(longlong *)pFVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    plVar3 = *(longlong **)pFVar6;
    (**(code **)(*plVar3 + 0x300))(plVar3);
    pFVar6 = pFVar6 + 0x18;
    plVar3[8] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = (ulonglong)uStack_1c << 0x20;
  }
  SetNetObjectListsSize(this,0);
  return;
}

// DestroyPerSubObjectGroupFilterInfo @ 144237090

void __thiscall
UE::Net::Private::FReplicationFiltering::DestroyPerSubObjectGroupFilterInfo
          (FReplicationFiltering *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint local_res10 [6];
  
  if (*(int *)&(this->SubObjectFilterGroupInfos).field_0x8 !=
      *(int *)&(this->SubObjectFilterGroupInfos).field_0x34) {
    puVar3 = *(undefined1 **)&(this->SubObjectFilterGroupInfos).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->SubObjectFilterGroupInfos).field_0x38;
    }
    uVar1 = *(uint *)(puVar3 + (ulonglong)
                               (*(int *)&(this->SubObjectFilterGroupInfos).field_0x48 - 1U & param_1
                               ) * 4);
    if (uVar1 != 0xffffffff) {
      while (puVar2 = (uint *)((longlong)(int)uVar1 * 0x68 +
                              *(longlong *)&(this->SubObjectFilterGroupInfos).field_0x0),
            *puVar2 != param_1) {
        uVar1 = puVar2[0x18];
        if (uVar1 == 0xffffffff) {
          return;
        }
      }
      puVar4 = puVar2 + 2;
      if (puVar2 == (uint *)0x0) {
        puVar4 = (uint *)0x0;
      }
      if (puVar4 != (uint *)0x0) {
        FreePerObjectInfo(this,puVar4[0x14]);
        if (*(int *)&(this->SubObjectFilterGroupInfos).field_0x8 !=
            *(int *)&(this->SubObjectFilterGroupInfos).field_0x34) {
          local_res10[0] = param_1;
          TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo,0>,FDefaultSetAllocator>
                      *)&this->SubObjectFilterGroupInfos,param_1,local_res10);
        }
      }
    }
  }
  return;
}

// Filter @ 144238470

void __thiscall UE::Net::Private::FReplicationFiltering::Filter(FReplicationFiltering *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  <lambda_1> local_res8;
  uint local_res10;
  <lambda_1> local_res18;
  FReplicationFiltering *local_res20;
  <lambda_1> local_58;
  <lambda_1> local_50 [2];
  
  if (!__CsvProfilerStat333) {
    FCsvProfilerTrace::OutputInlineStat("Filter_PrePoll",_GCsvCategory_Iris.Index);
    __CsvProfilerStat333 = true;
  }
  local_res10 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat("Filter_PrePoll",_GCsvCategory_Iris.Index,"CSV_Filter_PrePoll");
  this->FrameIndex = this->FrameIndex + 1;
  if (this->bHasRemovedConnection != 0) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId817,"FReplicationFiltering_ResetRemovedConnections",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                 ,0x331);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId817);
    }
    this->bHasRemovedConnection = 0;
    local_res18.__this = this;
    if (((this->ExclusionFilterGroups).BitCount != (this->InclusionFilterGroups).BitCount) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("A.GetNumBits() == B.GetNumBits()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x555,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FNetBitArrayHelper::
    ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UE::Net::Private::FReplicationFiltering::ResetRemovedConnections_::__l2::<lambda_1>_&>
              ((uint *)(this->ExclusionFilterGroups).Storage.AllocatorInstance.Data,
               (uint *)(this->InclusionFilterGroups).Storage.AllocatorInstance.Data,
               (this->ExclusionFilterGroups).Storage.ArrayNum,(this->ExclusionFilterGroups).BitCount
               ,FNetBitArrayBase::OrOp,&local_res18);
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (this->bHasNewConnection != 0) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId684,"FReplicationFiltering_InitNewConnections",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                 ,0x2ac);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId684);
    }
    this->bHasNewConnection = 0;
    uVar1 = (this->NewConnections).Storage.ArrayNum;
    uVar9 = 0;
    uVar10 = 0;
    pFVar11 = (this->NewConnections).Storage.AllocatorInstance.Data;
    uVar5 = 0xffffffff >> (-(char)(this->NewConnections).BitCount & 0x1fU);
    local_res8.__this._0_4_ = uVar5;
    local_res20 = this;
    if (uVar1 != 0) {
      do {
        uVar8 = 0xffffffff;
        if (uVar10 == uVar1 - 1) {
          uVar8 = uVar5;
        }
        uVar8 = uVar8 & *(uint *)pFVar11;
        uVar7 = uVar9;
        if (uVar8 != 0) {
          do {
            if ((uVar8 & 1) != 0) {
              `UE::Net::Private::FReplicationFiltering::InitNewConnections'::__l2::<lambda_1>::
              operator()(&local_res20,uVar7);
            }
            uVar7 = uVar7 + 1;
            uVar8 = uVar8 >> 1;
          } while (uVar8 != 0);
          uVar5 = (uint)local_res8.__this;
        }
        uVar10 = uVar10 + 1;
        pFVar11 = pFVar11 + 4;
        uVar9 = uVar9 + 0x20;
      } while (uVar10 < uVar1);
    }
    memset((this->NewConnections).Storage.AllocatorInstance.Data,0,
           (longlong)(this->NewConnections).Storage.ArrayNum << 2);
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  UpdateObjectsInScope(this);
  if (this->bHasDirtyExclusionFilterGroup != 0) {
    local_58.__this = this;
    FNetBitArrayHelper::
    ForAllSetBits<_UE::Net::Private::FReplicationFiltering::UpdateGroupExclusionFiltering_::__l2::<lambda_1>_&>
              ((uint *)(this->DirtyExclusionFilterGroups).Storage.AllocatorInstance.Data,
               (this->DirtyExclusionFilterGroups).Storage.ArrayNum,
               (this->DirtyExclusionFilterGroups).BitCount,&local_58);
    this->bHasDirtyExclusionFilterGroup = 0;
    memset((this->DirtyExclusionFilterGroups).Storage.AllocatorInstance.Data,0,
           (longlong)(this->DirtyExclusionFilterGroups).Storage.ArrayNum << 2);
  }
  if (this->bHasDirtyInclusionFilterGroup != 0) {
    local_50[0].__this = this;
    FNetBitArrayHelper::
    ForAllSetBits<_UE::Net::Private::FReplicationFiltering::UpdateGroupInclusionFiltering_::__l2::<lambda_1>_&>
              ((uint *)(this->DirtyInclusionFilterGroups).Storage.AllocatorInstance.Data,
               (this->DirtyInclusionFilterGroups).Storage.ArrayNum,
               (this->DirtyInclusionFilterGroups).BitCount,local_50);
    this->bHasDirtyInclusionFilterGroup = 0;
    memset((this->DirtyInclusionFilterGroups).Storage.AllocatorInstance.Data,0,
           (longlong)(this->DirtyInclusionFilterGroups).Storage.ArrayNum << 2);
  }
  UpdateOwnerFiltering(this);
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1913,"FReplicationFiltering_UpdateSubObjectFilters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x779);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1913);
  }
  local_res8.__this = this;
  if (((this->DirtySubObjectFilterGroups).BitCount != (this->SubObjectFilterGroups).BitCount) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x555,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNetBitArrayHelper::
  ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UE::Net::Private::FReplicationFiltering::UpdateSubObjectFilters_::__l2::<lambda_1>_&>
            ((uint *)(this->DirtySubObjectFilterGroups).Storage.AllocatorInstance.Data,
             (uint *)(this->SubObjectFilterGroups).Storage.AllocatorInstance.Data,
             (this->DirtySubObjectFilterGroups).Storage.ArrayNum,
             (this->DirtySubObjectFilterGroups).BitCount,FNetBitArrayBase::AndOp,&local_res8);
  memset((this->DirtySubObjectFilterGroups).Storage.AllocatorInstance.Data,0,
         (longlong)(this->DirtySubObjectFilterGroups).Storage.ArrayNum << 2);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  PreUpdateObjectScopeHysteresis(this);
  if (this->bHasDynamicFilters == 0) {
    uVar1 = (this->ValidConnections).Storage.ArrayNum;
    uVar5 = (this->ValidConnections).BitCount;
    uVar10 = 0;
    pFVar11 = (this->ValidConnections).Storage.AllocatorInstance.Data;
    uVar9 = 0;
    if (uVar1 != 0) {
      do {
        uVar8 = 0xffffffff;
        if (uVar9 == uVar1 - 1) {
          uVar8 = 0xffffffff >> (-(char)uVar5 & 0x1fU);
        }
        uVar7 = uVar10;
        for (uVar8 = uVar8 & *(uint *)pFVar11; uVar8 != 0; uVar8 = uVar8 >> 1) {
          if ((uVar8 & 1) != 0) {
            uVar6 = 0;
            if ((int)uVar7 < (this->ConnectionInfos).ArrayNum) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (this->ConnectionInfos).AllocatorInstance.Data;
            FNetBitArray::Copy((FNetBitArray *)(pFVar2 + (longlong)(int)uVar7 * 0x160 + 0x60),
                               (FNetBitArray *)(pFVar2 + (longlong)(int)uVar7 * 0x160 + 0x30));
          }
          uVar7 = uVar7 + 1;
        }
        uVar9 = uVar9 + 1;
        pFVar11 = pFVar11 + 4;
        uVar10 = uVar10 + 0x20;
      } while (uVar9 < uVar1);
    }
  }
  else {
    UpdateDynamicFilters(this);
  }
  FilterNonRelevantObjects(this);
  FCsvProfiler::EndStat("Filter_PrePoll",local_res10);
  return;
}

// FilterNonRelevantObjects @ 144239b20

void __thiscall
UE::Net::Private::FReplicationFiltering::FilterNonRelevantObjects(FReplicationFiltering *this)

{
  uint uVar1;
  FNetRefHandleManager *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  bool bVar15;
  uint local_res18 [2];
  uint local_res20;
  FNetBitArrayView local_c8;
  uint *local_b8;
  FNetBitArrayView local_b0;
  FNetBitArrayView local_a0;
  FNetBitArrayView local_90;
  FNetBitArrayView local_78;
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId374,"FReplicationFiltering_FilterNonRelevantObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x176);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId374);
  }
  if (bCVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject != false) {
    uVar1 = (this->ValidConnections).Storage.ArrayNum;
    uVar12 = 0;
    pFVar13 = (this->ValidConnections).Storage.AllocatorInstance.Data;
    uVar6 = 0xffffffff >> (-(char)(this->ValidConnections).BitCount & 0x1fU);
    uVar14 = 0;
    local_res20 = uVar6;
    if (uVar1 != 0) {
      do {
        uVar10 = 0xffffffff;
        if (uVar14 == uVar1 - 1) {
          uVar10 = uVar6;
        }
        uVar9 = uVar12;
        for (uVar10 = uVar10 & *(uint *)pFVar13; uVar10 != 0; uVar10 = uVar10 >> 1) {
          if (((uVar10 & 1) != 0) &&
             (local_res18[0] = uVar9,
             bVar5 = HasSubObjectInScopeWithFilteredOutRootObject(this,uVar9), bVar5)) {
            local_b8 = local_res18;
            ``UE::Net::Private::FReplicationFiltering::FilterNonRelevantObjects'::__l5::<lambda_1>::
            operator()'::__l2::<lambda_1>::operator()(&local_b8);
          }
          uVar9 = uVar9 + 1;
          uVar6 = local_res20;
        }
        uVar14 = uVar14 + 1;
        pFVar13 = pFVar13 + 4;
        uVar12 = uVar12 + 0x20;
      } while (uVar14 < uVar1);
    }
  }
  uVar1 = (this->NetRefHandleManager->RelevantObjectsInternalIndices).BitCount;
  pFVar13 = (this->NetRefHandleManager->RelevantObjectsInternalIndices).Storage.AllocatorInstance.
            Data;
  if (bCVarRepFilterCullNonRelevant == false) {
    FNetBitArrayView::FNetBitArrayView(&local_90,(uint *)pFVar13,uVar1);
    pFVar2 = this->NetRefHandleManager;
    if (((pFVar2->ScopeFrameData).bIsValid == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ScopeFrameData.bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                           ,0xef,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FNetBitArrayView::FNetBitArrayView
              (&local_a0,
               (uint *)(pFVar2->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.
                       AllocatorInstance.Data,
               (pFVar2->ScopeFrameData).CurrentFrameScopableInternalIndices.BitCount);
    FNetBitArrayView::Copy(&local_90,&local_a0);
  }
  else {
    FNetBitArrayView::FNetBitArrayView(&local_c8,(uint *)pFVar13,uVar1);
    pFVar2 = this->NetRefHandleManager;
    if (((pFVar2->ScopeFrameData).bIsValid == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ScopeFrameData.bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                           ,0xef,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FNetBitArrayView::FNetBitArrayView
              (&local_78,
               (uint *)(pFVar2->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.
                       AllocatorInstance.Data,
               (pFVar2->ScopeFrameData).CurrentFrameScopableInternalIndices.BitCount);
    local_68.Storage = local_78.Storage;
    local_68.WordCount = local_78.WordCount;
    local_68.BitCount = local_78.BitCount;
    local_58.Storage = local_c8.Storage;
    BuildAlwaysRelevantList(this,&local_58,&local_68);
    uVar1 = (this->ValidConnections).Storage.ArrayNum;
    uVar12 = 0;
    pFVar13 = (this->ValidConnections).Storage.AllocatorInstance.Data;
    uVar6 = 0xffffffff >> (-(char)(this->ValidConnections).BitCount & 0x1fU);
    uVar14 = 0;
    local_res20 = uVar6;
    if (uVar1 != 0) {
      do {
        uVar10 = 0xffffffff;
        if (uVar14 == uVar1 - 1) {
          uVar10 = uVar6;
        }
        uVar9 = uVar12;
        for (uVar10 = uVar10 & *(uint *)pFVar13; uVar10 != 0; uVar10 = uVar10 >> 1) {
          if ((uVar10 & 1) != 0) {
            uVar6 = 0;
            if ((int)uVar9 < (this->ConnectionInfos).ArrayNum) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->ConnectionInfos).AllocatorInstance.Data;
            FNetBitArrayView::FNetBitArrayView
                      (&local_b0,*(uint **)(pFVar3 + (longlong)(int)uVar9 * 0x160 + 0x60),
                       *(uint *)(pFVar3 + (longlong)(int)uVar9 * 0x160 + 0x70));
            if (((local_c8.Storage == local_b0.Storage) || (local_c8.BitCount != local_b0.BitCount))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x64b,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (local_c8.WordCount != 0) {
              uVar11 = (ulonglong)local_c8.WordCount;
              puVar7 = local_c8.Storage;
              puVar8 = local_b0.Storage;
              do {
                uVar6 = *puVar8;
                puVar8 = puVar8 + 1;
                *puVar7 = *puVar7 | uVar6;
                puVar7 = puVar7 + 1;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          }
          uVar9 = uVar9 + 1;
          uVar6 = local_res20;
        }
        uVar14 = uVar14 + 1;
        pFVar13 = pFVar13 + 4;
        uVar12 = uVar12 + 0x20;
      } while (uVar14 < uVar1);
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FreePerObjectInfo @ 14423ad50

void __thiscall
UE::Net::Private::FReplicationFiltering::FreePerObjectInfo(FReplicationFiltering *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FNetBitArrayView local_18;
  
  FNetBitArrayView::FNetBitArrayView
            (&local_18,(uint *)(this->UsedPerObjectInfoStorage).AllocatorInstance.Data,
             (this->UsedPerObjectInfoStorage).ArrayNum << 5);
  if (local_18.BitCount <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Storage[param_1 >> 5] = local_18.Storage[param_1 >> 5] & ~(1 << (param_1 & 0x1f));
  return;
}

// FreePerObjectInfoForObject @ 14423ae00

void __thiscall
UE::Net::Private::FReplicationFiltering::FreePerObjectInfoForObject
          (FReplicationFiltering *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((int)param_1 < (this->ObjectIndexToPerObjectInfoIndex).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ObjectIndexToPerObjectInfoIndex).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(int)param_1 * 4;
  if (*(int *)(pFVar2 + (longlong)(int)param_1 * 4) != 0) {
    pFVar2 = (this->ObjectsWithPerObjectInfo).Storage.AllocatorInstance.Data;
    if ((this->ObjectsWithPerObjectInfo).BitCount <= param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(uint *)(pFVar2 + (ulonglong)(param_1 >> 5) * 4) =
         *(uint *)(pFVar2 + (ulonglong)(param_1 >> 5) * 4) & ~(1 << (param_1 & 0x1f));
    FreePerObjectInfo(this,*(uint *)pFVar1);
    *(uint *)pFVar1 = 0;
  }
  return;
}

// GetConnectionFilterStatus @ 14423bc30

ENetFilterStatus __thiscall
UE::Net::Private::FReplicationFiltering::GetConnectionFilterStatus
          (FReplicationFiltering *this,FPerObjectInfo *param_1,uint param_2)

{
  return (ENetFilterStatus)((param_1[param_2 >> 5].ConnectionIds[0] >> (param_2 & 0x1f) & 1) != 0);
}

// GetFilter @ 14423c0a0

UNetObjectFilter * __thiscall
UE::Net::Private::FReplicationFiltering::GetFilter(FReplicationFiltering *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->DynamicFilterInfos).ArrayNum;
  pFVar3 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->DynamicFilterInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(FName *)(pFVar3 + 8) == param_1) {
      return *(UNetObjectFilter **)pFVar3;
    }
    pFVar3 = pFVar3 + 0x18;
  }
  return (UNetObjectFilter *)0x0;
}

// GetFilterHandle @ 14423c190

uint __thiscall
UE::Net::Private::FReplicationFiltering::GetFilterHandle(FReplicationFiltering *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->DynamicFilterInfos).ArrayNum;
  pFVar3 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->DynamicFilterInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(FName *)(pFVar3 + 8) == param_1) {
      return (uint)(((longlong)pFVar3 - (longlong)(this->DynamicFilterInfos).AllocatorInstance.Data)
                   / 0x18) | 0x80000000;
    }
    pFVar3 = pFVar3 + 0x18;
  }
  return 0;
}

// GetFilterName @ 14423c230

FName __thiscall
UE::Net::Private::FReplicationFiltering::GetFilterName(FReplicationFiltering *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName FVar4;
  uint uVar5;
  uint in_register_00000014;
  uint uVar6;
  uint in_R8D;
  undefined1 local_res18 [8];
  undefined1 *local_res20;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if (-1 < (int)in_R8D) {
    if (in_R8D == 0) {
      FVar4 = NoFilterName;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), FVar4 = NoFilterName, ::_TSS0 == -1)) {
        ::FName::FName(&NoFilterName,L"NoFilter");
        _Init_thread_footer(&::_TSS0);
        FVar4 = NoFilterName;
      }
    }
    else if (in_R8D == 1) {
      FVar4 = ToOwnerFilterName;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) &&
         (_Init_thread_header(&::_TSS1), FVar4 = ToOwnerFilterName, ::_TSS1 == -1)) {
        ::FName::FName(&ToOwnerFilterName,L"ToOwnerFilter");
        _Init_thread_footer(&::_TSS1);
        FVar4 = ToOwnerFilterName;
      }
    }
    else {
      if (in_R8D != 2) {
        local_res20 = local_res18;
        `UE::Net::Private::GetStaticFilterName'::__l8::<lambda_1>::operator()(&local_res20);
        *(FName *)FVar3 = (FName)0x0;
        return FVar3;
      }
      FVar4 = ConnectionFilterName;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS2) &&
         (_Init_thread_header(&::_TSS2), FVar4 = ConnectionFilterName, ::_TSS2 == -1)) {
        ::FName::FName(&ConnectionFilterName,L"ConnectionFilter");
        _Init_thread_footer(&::_TSS2);
        FVar4 = ConnectionFilterName;
      }
    }
    *(FName *)FVar3 = FVar4;
    return FVar3;
  }
  if ((int)in_R8D < 0) {
    uVar6 = in_R8D & 0x7fffffff;
    uVar5 = 0;
    if ((int)uVar6 < (this->DynamicFilterInfos).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 != 0) goto LAB_14423c2b3;
  }
  else {
    uVar6 = 0xffffffff;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
LAB_14423c2b3:
  *(FName *)FVar3 =
       *(FName *)((this->DynamicFilterInfos).AllocatorInstance.Data +
                 (longlong)(int)uVar6 * 0x18 + 8);
  return FVar3;
}

// GetGroupFilterStatus @ 14423c720

bool __thiscall
UE::Net::Private::FReplicationFiltering::GetGroupFilterStatus
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,uint param_2,
          ENetFilterStatus *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar1 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  if (((this->ValidConnections).BitCount <= param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar6 = 1 << ((byte)param_2 & 0x1f);
  if ((*(uint *)(pFVar1 + (ulonglong)(param_2 >> 5) * 4) & uVar6) != 0) {
    pFVar1 = (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data;
    uVar5 = param_1.field0_0x0._0_4_ & 0xffffff;
    if (((this->ExclusionFilterGroups).BitCount <= uVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((*(uint *)(pFVar1 + (ulonglong)(uVar5 >> 5) * 4) >> (param_1.field0_0x0._0_4_ & 0x1f) & 1)
        != 0) {
      if (((this->GroupInfos).ArrayNum <= (int)uVar5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *param_3 = (uint)((*(uint *)((this->PerObjectInfoStorage).AllocatorInstance.Data +
                                  ((ulonglong)
                                   (*(int *)((this->GroupInfos).AllocatorInstance.Data +
                                            (ulonglong)uVar5 * 4) *
                                   this->PerObjectInfoStorageCountPerItem) +
                                  (ulonglong)(param_2 >> 5)) * 4) & uVar6) != 0);
      return true;
    }
  }
  return false;
}

// GetNetObjectFilteringInfos @ 14423cf40

TArrayView<FNetObjectFilteringInfo,int> * __thiscall
UE::Net::Private::FReplicationFiltering::GetNetObjectFilteringInfos
          (FReplicationFiltering *this,
          TArrayView<FNetObjectFilteringInfo,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FNetObjectFilteringInfo,int> *pTVar4;
  
  iVar1 = (this->NetObjectFilteringInfos).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FNetObjectFilteringInfo *)(this->NetObjectFilteringInfos).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FNetObjectFilteringInfo,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetObjectScopeHysteresisFrameCount @ 14423d0f0

uchar __thiscall
UE::Net::Private::FReplicationFiltering::GetObjectScopeHysteresisFrameCount
          (FReplicationFiltering *this,FName param_1)

{
  FName *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  FName *pFVar6;
  
  if (((this->Config).Object == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  pUVar2 = (this->Config).Object;
  pFVar6 = *(FName **)&pUVar2[1].field_0x8;
  pFVar1 = (FName *)((longlong)pFVar6 + (longlong)*(int *)&pUVar2[1].field_0x10 * 0xc);
  for (; pFVar6 != pFVar1; pFVar6 = (FName *)&pFVar6[1].Number) {
    if (*pFVar6 == param_1) {
      return (uchar)pFVar6[1].ComparisonIndex.Value;
    }
  }
  if ((pUVar2 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  return (this->Config).Object[1].field_0x1;
}

// GetOwningConnection @ 14423d840

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FReplicationFiltering::GetOwningConnection
          (FReplicationFiltering *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FReplicatedObjectData *pFVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_1;
  if (this->bHasDirtyOwner != 0) {
    pFVar1 = (this->NetRefHandleManager->SubObjectInternalIndices).Storage.AllocatorInstance.Data;
    if ((this->NetRefHandleManager->SubObjectInternalIndices).BitCount <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) {
      pFVar5 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (this->NetRefHandleManager,param_1);
      if ((pFVar5->SubObjectRootIndex != 0) && ((*(byte *)&pFVar5->field9_0x32 & 4) != 0)) {
        pFVar5 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                           (this->NetRefHandleManager,param_1);
        lVar6 = (longlong)(int)pFVar5->SubObjectRootIndex;
      }
    }
    uVar4 = 0;
    if ((int)(uint)lVar6 < (this->ObjectIndexToOwningConnection).ArrayNum) {
      uVar4 = ~(uint)lVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    return (uint)*(ushort *)
                  ((this->ObjectIndexToOwningConnection).AllocatorInstance.Data + lVar6 * 2);
  }
  uVar4 = 0;
  if ((int)param_1 < (this->ObjectIndexToOwningConnection).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (uint)*(ushort *)((this->ObjectIndexToOwningConnection).AllocatorInstance.Data + lVar6 * 2)
  ;
}

// GetOwningConnectionIfDirty @ 14423d9a0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FReplicationFiltering::GetOwningConnectionIfDirty
          (FReplicationFiltering *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FReplicatedObjectData *pFVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_1;
  pFVar1 = (this->NetRefHandleManager->SubObjectInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->NetRefHandleManager->SubObjectInternalIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) {
    pFVar5 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1)
    ;
    if ((pFVar5->SubObjectRootIndex != 0) && ((*(byte *)&pFVar5->field9_0x32 & 4) != 0)) {
      pFVar5 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (this->NetRefHandleManager,param_1);
      lVar6 = (longlong)(int)pFVar5->SubObjectRootIndex;
    }
  }
  uVar4 = 0;
  if ((int)(uint)lVar6 < (this->ObjectIndexToOwningConnection).ArrayNum) {
    uVar4 = ~(uint)lVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (uint)*(ushort *)((this->ObjectIndexToOwningConnection).AllocatorInstance.Data + lVar6 * 2)
  ;
}

// GetPerObjectInfo @ 14423db10

FPerObjectInfo * __thiscall
UE::Net::Private::FReplicationFiltering::GetPerObjectInfo(FReplicationFiltering *this,uint param_1)

{
  return (FPerObjectInfo *)
         ((this->PerObjectInfoStorage).AllocatorInstance.Data +
         (ulonglong)(param_1 * this->PerObjectInfoStorageCountPerItem) * 4);
}

// GetPerObjectInfo @ 14423db30

FPerObjectInfo * __thiscall
UE::Net::Private::FReplicationFiltering::GetPerObjectInfo(FReplicationFiltering *this,uint param_1)

{
  return (FPerObjectInfo *)
         ((this->PerObjectInfoStorage).AllocatorInstance.Data +
         (ulonglong)(param_1 * this->PerObjectInfoStorageCountPerItem) * 4);
}

// GetPerSubObjectFilterGroupInfo @ 14423dbf0

FPerSubObjectFilterGroupInfo * __thiscall
UE::Net::Private::FReplicationFiltering::GetPerSubObjectFilterGroupInfo
          (FReplicationFiltering *this,uint param_1)

{
  int iVar1;
  FPerSubObjectFilterGroupInfo *pFVar2;
  FPerSubObjectFilterGroupInfo *pFVar3;
  undefined1 *puVar4;
  FPerSubObjectFilterGroupInfo *pFVar5;
  
  pFVar5 = (FPerSubObjectFilterGroupInfo *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->SubObjectFilterGroupInfos).field_0x8 !=
      *(int *)&(this->SubObjectFilterGroupInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SubObjectFilterGroupInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SubObjectFilterGroupInfos).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SubObjectFilterGroupInfos).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FPerSubObjectFilterGroupInfo *)
                 ((longlong)iVar1 * 0x68 + *(longlong *)&this->SubObjectFilterGroupInfos);
        if (*(uint *)&(pFVar2->ConnectionFilterStatus).ParentToFilterStatus == param_1) break;
        iVar1 = *(int *)&pFVar2[1].ConnectionFilterStatus.ParentToFilterStatus.field_0x8;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FPerSubObjectFilterGroupInfo *)
           &(pFVar2->ConnectionFilterStatus).ParentToFilterStatus.field_0x8;
  if (pFVar2 == (FPerSubObjectFilterGroupInfo *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// GetPerSubObjectFilterGroupInfo @ 14423dc70

FPerSubObjectFilterGroupInfo * __thiscall
UE::Net::Private::FReplicationFiltering::GetPerSubObjectFilterGroupInfo
          (FReplicationFiltering *this,uint param_1)

{
  int iVar1;
  FPerSubObjectFilterGroupInfo *pFVar2;
  FPerSubObjectFilterGroupInfo *pFVar3;
  undefined1 *puVar4;
  FPerSubObjectFilterGroupInfo *pFVar5;
  
  pFVar5 = (FPerSubObjectFilterGroupInfo *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->SubObjectFilterGroupInfos).field_0x8 !=
      *(int *)&(this->SubObjectFilterGroupInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SubObjectFilterGroupInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SubObjectFilterGroupInfos).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SubObjectFilterGroupInfos).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FPerSubObjectFilterGroupInfo *)
                 ((longlong)iVar1 * 0x68 + *(longlong *)&this->SubObjectFilterGroupInfos);
        if (*(uint *)&(pFVar2->ConnectionFilterStatus).ParentToFilterStatus == param_1) break;
        iVar1 = *(int *)&pFVar2[1].ConnectionFilterStatus.ParentToFilterStatus.field_0x8;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FPerSubObjectFilterGroupInfo *)
           &(pFVar2->ConnectionFilterStatus).ParentToFilterStatus.field_0x8;
  if (pFVar2 == (FPerSubObjectFilterGroupInfo *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// GetSubObjectFilterStatus @ 14423f4d0

bool __thiscall
UE::Net::Private::FReplicationFiltering::GetSubObjectFilterStatus
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,uint param_2,
          ENetFilterStatus *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  
  pFVar1 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  uVar9 = param_1.field0_0x0._0_4_ & 0xffffff;
  if (((this->ValidConnections).BitCount <= param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar10 = 1 << ((byte)param_2 & 0x1f);
  if ((*(uint *)(pFVar1 + (ulonglong)(param_2 >> 5) * 4) & uVar10) != 0) {
    pFVar1 = (this->SubObjectFilterGroups).Storage.AllocatorInstance.Data;
    if (((this->SubObjectFilterGroups).BitCount <= uVar9) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((*(uint *)(pFVar1 + (ulonglong)(uVar9 >> 5) * 4) >> (param_1.field0_0x0._0_4_ & 0x1f) & 1)
        != 0) {
      if (*(int *)&(this->SubObjectFilterGroupInfos).field_0x8 !=
          *(int *)&(this->SubObjectFilterGroupInfos).field_0x34) {
        puVar8 = *(undefined1 **)&(this->SubObjectFilterGroupInfos).field_0x40;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(this->SubObjectFilterGroupInfos).field_0x38;
        }
        uVar5 = *(uint *)(puVar8 + (ulonglong)
                                   (*(int *)&(this->SubObjectFilterGroupInfos).field_0x48 - 1U &
                                   uVar9) * 4);
        if (uVar5 != 0xffffffff) {
          do {
            puVar6 = (uint *)((longlong)(int)uVar5 * 0x68 +
                             *(longlong *)&this->SubObjectFilterGroupInfos);
            if (*puVar6 == uVar9) {
              puVar7 = puVar6 + 2;
              if (puVar6 == (uint *)0x0) {
                puVar7 = (uint *)0x0;
              }
              if (puVar7 != (uint *)0x0) {
                *param_3 = (uint)((*(uint *)((this->PerObjectInfoStorage).AllocatorInstance.Data +
                                            ((ulonglong)
                                             (puVar7[0x14] * this->PerObjectInfoStorageCountPerItem)
                                            + (ulonglong)(param_2 >> 5)) * 4) & uVar10) != 0);
                return true;
              }
              break;
            }
            uVar5 = puVar6[0x18];
          } while (uVar5 != 0xffffffff);
        }
      }
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7127879573563242574>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                         ,0x7b2,"GroupInfo");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  return false;
}

// HasOwnerFilter @ 14423f8d0

bool __thiscall
UE::Net::Private::FReplicationFiltering::HasOwnerFilter(FReplicationFiltering *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pFVar1 = (this->ObjectsWithOwnerFilter).Storage.AllocatorInstance.Data;
  if ((this->ObjectsWithOwnerFilter).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0;
}

// HasSubObjectInScopeWithFilteredOutRootObject @ 14423f960

bool __thiscall
UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject
          (FReplicationFiltering *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  bool local_res8 [8];
  bool local_res10 [8];
  bool local_res18 [8];
  bool local_res20 [8];
  bool local_178;
  bool local_177;
  undefined1 local_176;
  undefined1 local_175;
  undefined1 local_174;
  undefined1 local_173;
  undefined1 local_172;
  undefined1 local_171;
  <lambda_1> local_170;
  <lambda_1> local_158;
  <lambda_1> local_140;
  <lambda_1> local_128;
  <lambda_1> local_110;
  <lambda_1> local_f8;
  FNetBitArrayView local_d8;
  FNetBitArrayView local_c8;
  FNetBitArrayView local_b8;
  FNetBitArrayView local_a8;
  FNetBitArrayView local_98;
  FNetBitArrayView local_88;
  FNetBitArrayView local_78;
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  FNetBitArrayView local_48;
  FNetBitArrayView local_38;
  FNetBitArrayView local_28;
  
  uVar4 = 0;
  if ((int)param_1 < (this->ConnectionInfos).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar5 = (this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x160;
  FNetBitArrayView::FNetBitArrayView(&local_d8,*(uint **)(pFVar5 + 0x60),*(uint *)(pFVar5 + 0x70));
  local_170.Objects = &local_c8;
  local_170.bReturnValue = local_res10;
  local_c8 = local_d8;
  local_res10[0] = false;
  local_170.__this = this;
  FNetBitArrayHelper::
  ForAllSetBits<_UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject_::__l2::<lambda_1>_&>
            (local_d8.Storage,local_d8.WordCount,local_d8.BitCount,&local_170);
  if (local_res10[0] != false) {
    bVar2 = `UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'
            ::__l3::<lambda_1>::operator()(&local_176);
    if (!bVar2) {
      FNetBitArrayView::FNetBitArrayView
                (&local_b8,*(uint **)(pFVar5 + 0x48),*(uint *)(pFVar5 + 0x58));
      local_158.bReturnValue = local_res8;
      local_a8 = local_b8;
      local_res8[0] = false;
      local_158.__this = this;
      local_158.Objects = &local_a8;
      FNetBitArrayHelper::
      ForAllSetBits<_UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject_::__l2::<lambda_1>_&>
                (local_b8.Storage,local_b8.WordCount,local_b8.BitCount,&local_158);
      if (local_res8[0] != false) {
        `UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::
        __l5::<lambda_2>::operator()(&local_175);
      }
      FNetBitArrayView::FNetBitArrayView
                (&local_98,*(uint **)(pFVar5 + 0x18),*(uint *)(pFVar5 + 0x28));
      local_140.Objects = &local_88;
      local_140.bReturnValue = local_res18;
      local_88 = local_98;
      local_res18[0] = false;
      local_140.__this = this;
      FNetBitArrayHelper::
      ForAllSetBits<_UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject_::__l2::<lambda_1>_&>
                (local_98.Storage,local_98.WordCount,local_98.BitCount,&local_140);
      if (local_res18[0] != false) {
        `UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::
        __l5::<lambda_3>::operator()(&local_174);
      }
      FNetBitArrayView::FNetBitArrayView
                (&local_78,*(uint **)(pFVar5 + 0x30),*(uint *)(pFVar5 + 0x40));
      local_128.Objects = &local_68;
      local_128.bReturnValue = local_res20;
      local_68 = local_78;
      local_res20[0] = false;
      local_128.__this = this;
      FNetBitArrayHelper::
      ForAllSetBits<_UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject_::__l2::<lambda_1>_&>
                (local_78.Storage,local_78.WordCount,local_78.BitCount,&local_128);
      if (local_res20[0] != false) {
        `UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::
        __l5::<lambda_4>::operator()(&local_173);
      }
      FNetBitArrayView::FNetBitArrayView(&local_58,*(uint **)pFVar5,*(uint *)(pFVar5 + 0x10));
      local_110.Objects = &local_48;
      local_110.bReturnValue = &local_178;
      local_48 = local_58;
      local_178 = false;
      local_110.__this = this;
      FNetBitArrayHelper::
      ForAllSetBits<_UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject_::__l2::<lambda_1>_&>
                (local_58.Storage,local_58.WordCount,local_58.BitCount,&local_110);
      if (local_178 != false) {
        `UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::
        __l5::<lambda_5>::operator()(&local_172);
      }
      FNetBitArrayView::FNetBitArrayView
                (&local_38,*(uint **)(pFVar5 + 0xa8),*(uint *)(pFVar5 + 0xb8));
      local_f8.Objects = &local_28;
      local_f8.bReturnValue = &local_177;
      local_28 = local_38;
      local_177 = false;
      local_f8.__this = this;
      FNetBitArrayHelper::
      ForAllSetBits<_UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject_::__l2::<lambda_1>_&>
                (local_38.Storage,local_38.WordCount,local_38.BitCount,&local_f8);
      if (local_177 != false) {
        `UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::
        __l5::<lambda_6>::operator()(&local_171);
      }
      return true;
    }
  }
  return false;
}

// HasSubObjectInScopeWithFilteredOutRootObject @ 14423fca0

bool __thiscall
UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject
          (FReplicationFiltering *this,FNetBitArrayView *param_1)

{
  bool local_res8 [32];
  <lambda_1> local_28;
  
  local_28.bReturnValue = local_res8;
  local_res8[0] = false;
  local_28.__this = this;
  local_28.Objects = param_1;
  FNetBitArrayHelper::
  ForAllSetBits<_UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject_::__l2::<lambda_1>_&>
            (param_1->Storage,param_1->WordCount,param_1->BitCount,&local_28);
  return local_res8[0];
}

// Init @ 1442406c0

void __thiscall
UE::Net::Private::FReplicationFiltering::Init
          (FReplicationFiltering *this,FReplicationFilteringInitParams *param_1)

{
  int *piVar1;
  TArray<UE::Net::Private::FReplicationFiltering::FPerGroupInfo,TSizedDefaultAllocator<32>_> *pTVar2
  ;
  FScriptContainerElement *_Dst;
  UObjectBase *this_00;
  UObject *pUVar3;
  UReplicationSystem *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UClass *this_01;
  uint uVar9;
  uint uVar10;
  UObjectBase *pUVar11;
  
  if (param_1->Connections == (FReplicationConnections *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.Connections != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                       ,0xc2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (0xffff < (param_1->Connections->ValidConnections).BitCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.Connections->GetMaxConnectionCount() <= std::numeric_limits<decltype(ObjectIndexToOwningConnection)::ElementType>::max()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                       ,0xc3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_01 = Z_Construct_UClass_UReplicationFilteringConfig_NoRegister();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  this_00 = (UObjectBase *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar11 = (UObjectBase *)0x0;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    pUVar11 = this_00;
  }
  if (this == (FReplicationFiltering *)&stack0xffffffffffffffd8) {
    if (pUVar11 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar11);
    }
  }
  else {
    pUVar3 = (this->Config).Object;
    if (pUVar3 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    }
    (this->Config).Object = (UObject *)pUVar11;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->ReplicationSystem).field0_0x0.DebugPtr, pUVar4 != (UReplicationSystem *)0x0
     )) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  piVar1 = &(this->ConnectionInfos).ArrayNum;
  (this->ReplicationSystem).field0_0x0 = (param_1->ReplicationSystem).field0_0x0;
  this->Connections = param_1->Connections;
  this->NetRefHandleManager = param_1->NetRefHandleManager;
  this->Groups = param_1->Groups;
  this->MaxInternalNetRefIndex = param_1->MaxInternalNetRefIndex;
  iVar8 = *piVar1;
  uVar9 = (param_1->Connections->ValidConnections).BitCount + 1;
  if (iVar8 < (int)uVar9) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x160,8,uVar9 - iVar8,&(this->ConnectionInfos).AllocatorInstance,piVar1,
                       &(this->ConnectionInfos).ArrayMax);
    DefaultConstructItems<UE::Net::Private::FReplicationFiltering::FPerConnectionInfo,int>
              ((this->ConnectionInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x160,
               uVar9 - iVar8);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar8) {
      uVar10 = iVar8 - uVar9;
      if ((int)(uVar10 | uVar9) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (uVar10 != 0) {
        TArray<UE::Net::Private::FReplicationFiltering::FPerConnectionInfo,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&this->ConnectionInfos,uVar9,uVar10);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x160,8,&(this->ConnectionInfos).AllocatorInstance,*piVar1,
                   &(this->ConnectionInfos).ArrayMax);
      }
    }
  }
  FNetBitArray::Init(&this->ValidConnections,(this->ConnectionInfos).ArrayNum);
  FNetBitArray::Init(&this->NewConnections,(this->ConnectionInfos).ArrayNum);
  SetNetObjectListsSize(this,this->MaxInternalNetRefIndex);
  uVar9 = param_1->MaxGroupCount;
  pTVar2 = &this->GroupInfos;
  piVar1 = &(this->GroupInfos).ArrayNum;
  this->MaxGroupCount = uVar9;
  iVar8 = *piVar1;
  if (iVar8 < (int)uVar9) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar9 - iVar8,&pTVar2->AllocatorInstance,piVar1,
                       &(this->GroupInfos).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4,0,
           (longlong)(int)(uVar9 - iVar8) << 2);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar8) {
      uVar10 = iVar8 - uVar9;
      if ((int)(uVar10 | uVar9) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (uVar10 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 4;
        iVar8 = (*piVar1 - uVar9) - uVar10;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 4,(longlong)iVar8 << 2);
        }
        *piVar1 = *piVar1 - uVar10;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar2->AllocatorInstance,*piVar1,&(this->GroupInfos).ArrayMax);
      }
    }
  }
  FNetBitArray::Init(&this->ExclusionFilterGroups,uVar9);
  FNetBitArray::Init(&this->InclusionFilterGroups,uVar9);
  FNetBitArray::Init(&this->DirtyExclusionFilterGroups,uVar9);
  FNetBitArray::Init(&this->DirtyInclusionFilterGroups,uVar9);
  FNetBitArray::Init(&this->SubObjectFilterGroups,uVar9);
  FNetBitArray::Init(&this->DirtySubObjectFilterGroups,uVar9);
  iVar8 = 1;
  if (1 < (uint)(this->ConnectionInfos).ArrayNum) {
    iVar8 = (this->ConnectionInfos).ArrayNum;
  }
  uVar9 = iVar8 + 0x1fU >> 5;
  this->PerObjectInfoStorageCountForConnections = uVar9;
  this->PerObjectInfoStorageCountPerItem = uVar9 + 3;
  InitFilters(this);
  if ((this->Config).Object == (UObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->HysteresisState).Mode = (uint)(*(char *)((this->Config).Object + 1) != '\0');
  return;
}

// InitFilters @ 144240ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UE::Net::Private::FReplicationFiltering::InitFilters(FReplicationFiltering *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UReplicationSystem *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  FString *pFVar9;
  FName FVar11;
  FName FVar12;
  longlong lVar13;
  FName FVar14;
  UPackage *pUVar15;
  UObjectBase *this_00;
  UObject *pUVar16;
  FReplicationSystemInternal *pFVar17;
  longlong *plVar18;
  UObjectBase *pUVar19;
  longlong *plVar20;
  uint uVar21;
  undefined1 auStackY_288 [32];
  TObjectPtr<UReplicationSystem>_u_0 local_218;
  UObject *pUStack_210;
  undefined8 local_208;
  uint local_200;
  undefined8 local_1f8;
  FName local_1f0;
  undefined8 local_1e8;
  FScriptContainerElement *local_1e0;
  int iStack_1d8;
  undefined4 uStack_1d4;
  FUObjectCppClassStaticFunctions local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  TStringView<wchar_t> local_178;
  FString local_168;
  TStringView<wchar_t> local_158;
  FString local_148;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  size_t sVar10;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pUVar8 = UNetObjectFilterDefinitions::StaticClass();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  pUVar16 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
  if (*(int *)&pUVar16[1].field_0x8 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
code_r0x000144240f84:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((0x100 < *(int *)&pUVar16[1].field_0x8) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("FilterDefinitions->GetFilterDefinitions().Num() <= 256",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                              ,0xa4a,L""), bVar5)) goto code_r0x000144240f84;
  plVar20 = *(longlong **)(pUVar16 + 1);
  iVar7 = *(int *)&pUVar16[1].field_0x8;
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1b8 = plVar20 + (longlong)iVar7 * 3;
  if (plVar20 != local_1b8) {
    do {
      FVar14.ComparisonIndex.Value = 0;
      FVar14.Number = 0;
      pFVar9 = ::FName::ToString((FName *)(plVar20 + 1),&local_168);
      iVar7 = 0;
      if ((pFVar9->Data).ArrayNum == 0) {
        local_1a8 = (FScriptContainerElement *)0x15060d16c;
LAB_144241040:
        sVar10 = wcslen((wchar_t *)local_1a8);
        iVar6 = (int)sVar10;
      }
      else {
        local_1a8 = (pFVar9->Data).AllocatorInstance.Data;
        iVar6 = iVar7;
        if (local_1a8 != (FScriptContainerElement *)0x0) goto LAB_144241040;
      }
      iStack_1a0 = iVar6;
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      local_178._12_4_ = uStack_19c;
      local_178.Size = iStack_1a0;
      local_178.DataPtr = (wchar_t *)local_1a8;
      FVar11 = (FName)StaticFindObject(pUVar8,(UObject *)0x0,&local_178,ExactClass);
      if (FVar11 == (FName)0x0) {
LAB_144241095:
        FVar11 = FVar14;
      }
      else {
        pUVar8 = Z_Construct_UClass_UClass_NoRegister();
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)((longlong)FVar11 + 0x10) + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)FVar11 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) goto LAB_144241095;
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (FVar11 == (FName)0x0) {
        local_1c0 = plVar20;
        `UE::Net::Private::FReplicationFiltering::InitFilters'::__l16::<lambda_1>::operator()
                  (&local_1c0);
      }
      else {
        if (Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton == (UClass *)0x0) {
          local_1d0.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/IrisCore",L"NetObjectFilter",
                     &Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton,
                     UNetObjectFilter::StaticRegisterNativesUNetObjectFilter,0x60,8,
                     CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                     InternalConstructor<UNetObjectFilter>,
                     InternalVTableHelperCtorCaller<UNetObjectFilter>,&local_1d0,
                     UObject::StaticClass,UObject::StaticClass);
          if (Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton == (UClass *)0x0)
          goto LAB_14424124d;
        }
        iVar6 = (int)(Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton)->_padding_;
        if ((*(int *)((longlong)FVar11 + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar11 + 0x30) + (longlong)iVar6 * 8) !=
            &(Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton)->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          FVar12 = FVar14;
          if (plVar20[2] == 0) {
LAB_1442412a7:
            iVar7 = (this->DynamicFilterInfos).ArrayNum;
            piVar1 = &(this->DynamicFilterInfos).ArrayMax;
            if (iVar7 == *piVar1) {
              iVar7 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&(this->DynamicFilterInfos).AllocatorInstance,piVar1);
            }
            (this->DynamicFilterInfos).ArrayNum = iVar7 + 1;
            lVar13 = (longlong)iVar7;
            pFVar2 = (this->DynamicFilterInfos).AllocatorInstance.Data;
            *(undefined8 *)(pFVar2 + lVar13 * 0x18 + 0x10) = 0;
            *(undefined8 *)(pFVar2 + lVar13 * 0x18) = 0;
            *(undefined8 *)(pFVar2 + lVar13 * 0x18 + 8) = 0;
            pFVar2 = pFVar2 + lVar13 * 0x18;
            FVar14 = MakeUniqueObjectName
                               ((UObject *)local_188,(UClass *)0x0,FVar11,
                                (EUniqueObjectNameOptions)*plVar20);
            FVar14 = *(FName *)FVar14;
            pUVar15 = GetTransientPackage();
            local_1f8 = 0;
            if (FVar14 == (FName)0x0) {
              FObjectInitializer::AssertIfInConstructor
                        ((UObject *)pUVar15,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
            }
            pUVar8 = UNetObjectFilter::StaticClass();
            CheckIsClassChildOf_Internal(pUVar8,(UClass *)FVar11);
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_138,(UClass *)FVar11);
            local_138._24_4_ = RF_NoFlags;
            local_138._40_8_ = (UObject *)0x0;
            local_138[0x20] = false;
            local_138._48_8_ = (FObjectInstancingGraph *)0x0;
            local_138._56_8_ = (UPackage *)0x0;
            local_138._8_8_ = pUVar15;
            local_138._16_8_ = FVar14;
            this_00 = (UObjectBase *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
            if (local_138._64_8_ != 0) {
              plVar18 = (longlong *)(local_138 + 0x50);
              if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
                plVar18 = (longlong *)local_138._104_8_;
              }
              (**(code **)(*plVar18 + 0x10))();
            }
            pUVar19 = (UObjectBase *)0x0;
            if (this_00 != (UObjectBase *)0x0) {
              UObjectBase::AddRef(this_00);
              pUVar19 = this_00;
            }
            if (pFVar2 == (FScriptContainerElement *)(local_188 + 8)) {
              if (pUVar19 != (UObjectBase *)0x0) {
                UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar19);
              }
            }
            else {
              if (*(UObject **)pFVar2 != (UObject *)0x0) {
                UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)pFVar2);
              }
              *(UObjectBase **)pFVar2 = pUVar19;
            }
            if ((*(longlong *)pFVar2 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Info.Filter.IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                                   ,0xa64,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(longlong *)(pFVar2 + 8) = *plVar20;
            *(undefined4 *)(pFVar2 + 0x10) = 0;
            local_218.DebugPtr = (UReplicationSystem *)0x0;
            pUStack_210 = (UObject *)0x0;
            local_208 = 0;
            local_200 = 0;
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar3 = (this->ReplicationSystem).field0_0x0.DebugPtr,
               pUVar3 != (UReplicationSystem *)0x0)) {
              GC::MarkAsReachable((UObject *)pUVar3);
            }
            local_218 = (TObjectPtr<UReplicationSystem>_u_0)
                        (this->ReplicationSystem).field0_0x0.DebugPtr;
            if (FVar12 == (FName)0x0) {
              pUStack_210 = (UObject *)0x0;
              pUVar16 = pUStack_210;
            }
            else {
              local_1f0.ComparisonIndex.Value = 0;
              local_1f0.Number = 0;
              pUVar15 = GetTransientPackage();
              FVar14 = local_1f0;
              local_1e8 = 0;
              if (local_1f0 == (FName)0x0) {
                FObjectInitializer::AssertIfInConstructor
                          ((UObject *)pUVar15,
                           L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                          );
              }
              pUVar8 = UNetObjectFilterConfig::StaticClass();
              CheckIsClassChildOf_Internal(pUVar8,(UClass *)FVar12);
              FStaticConstructObjectParameters::FStaticConstructObjectParameters
                        ((FStaticConstructObjectParameters *)local_b8,(UClass *)FVar12);
              FVar11 = local_1f0;
              local_1f0.ComparisonIndex = FVar14.ComparisonIndex.Value;
              local_1f0.Number = FVar14.Number;
              local_b8._16_4_ = local_1f0.ComparisonIndex.Value;
              local_b8._20_4_ = local_1f0.Number;
              local_b8._24_4_ = RF_NoFlags;
              local_b8._40_8_ = (UObject *)0x0;
              local_b8[0x20] = false;
              local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
              local_b8._56_8_ = (UPackage *)0x0;
              local_1f0 = FVar11;
              local_b8._8_8_ = pUVar15;
              pUVar16 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8)
              ;
              if (local_b8._64_8_ != 0) {
                plVar18 = (longlong *)(local_b8 + 0x50);
                if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
                  plVar18 = (longlong *)local_b8._104_8_;
                }
                (**(code **)(*plVar18 + 0x10))();
              }
            }
            pUStack_210 = pUVar16;
            local_208 = CONCAT44(this->MaxInternalNetRefIndex,
                                 this->NetRefHandleManager->MaxActiveObjectCount);
            local_200 = (this->Connections->ValidConnections).BitCount;
            if ((*(longlong *)pFVar2 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                   ,0x67,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar18 = *(longlong **)pFVar2;
            FNetBitArray::Init((FNetBitArray *)(plVar18 + 5),local_208._4_4_);
            uVar21 = 0;
            if (local_218.DebugPtr == (UReplicationSystem *)0x0) {
              local_1e0 = (FScriptContainerElement *)0x0;
              iStack_1d8 = 0;
              iVar7 = iStack_1d8;
            }
            else {
              pFVar17 = UReplicationSystem::GetReplicationSystemInternal(local_218.DebugPtr);
              local_1e0 = (pFVar17->Filtering).NetObjectFilteringInfos.AllocatorInstance.Data;
              iVar7 = (pFVar17->Filtering).NetObjectFilteringInfos.ArrayNum;
              if ((iVar7 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iStack_1d8 = iVar7;
            plVar18[10] = (longlong)local_1e0;
            plVar18[0xb] = CONCAT44(uStack_1d4,iStack_1d8);
            pFVar17 = UReplicationSystem::GetReplicationSystemInternal(local_218.DebugPtr);
            plVar18[8] = (longlong)&pFVar17->NetRefHandleManager;
            (**(code **)(*plVar18 + 0x2f8))(plVar18,&local_218);
            this->bHasDynamicFilters = 1;
            if (this->bHasDynamicFiltersWithUpdateTrait == 0) {
              if ((*(longlong *)pFVar2 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                     ,0x67,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((*(byte *)(*(longlong *)pFVar2 + 0x48) & 2) != 0) goto LAB_14424162c;
            }
            else {
LAB_14424162c:
              uVar21 = 0x80;
            }
            this->bHasDynamicFiltersWithUpdateTrait = uVar21 >> 7;
          }
          else {
            pFVar9 = ::FName::ToString((FName *)(plVar20 + 2),&local_148);
            if ((pFVar9->Data).ArrayNum == 0) {
              local_198 = (FScriptContainerElement *)0x15060d16c;
LAB_1442411a9:
              sVar10 = wcslen((wchar_t *)local_198);
              iVar7 = (int)sVar10;
            }
            else {
              local_198 = (pFVar9->Data).AllocatorInstance.Data;
              if (local_198 != (FScriptContainerElement *)0x0) goto LAB_1442411a9;
            }
            iStack_190 = iVar7;
            pUVar8 = Z_Construct_UClass_UClass_NoRegister();
            local_158._12_4_ = uStack_18c;
            local_158.Size = iStack_190;
            local_158.DataPtr = (wchar_t *)local_198;
            FVar12 = (FName)StaticFindObject(pUVar8,(UObject *)0x0,&local_158,ExactClass);
            if (FVar12 == (FName)0x0) {
LAB_1442411fe:
              FVar12 = FVar14;
            }
            else {
              pUVar8 = Z_Construct_UClass_UClass_NoRegister();
              iVar7 = (int)pUVar8->_padding_;
              if ((*(int *)(*(longlong *)((longlong)FVar12 + 0x10) + 0x38) < iVar7) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)((longlong)FVar12 + 0x10) + 0x30) +
                   (longlong)iVar7 * 8) != &pUVar8->_padding_)) goto LAB_1442411fe;
            }
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            if (FVar12 == (FName)0x0) {
              local_1c8 = plVar20;
              `UE::Net::Private::FReplicationFiltering::InitFilters'::__l22::<lambda_2>::operator()
                        (&local_1c8);
            }
            else {
              pUVar8 = UNetObjectFilterConfig::StaticClass();
              if (pUVar8 != (UClass *)0x0) {
                iVar7 = (int)pUVar8->_padding_;
                if ((*(int *)((longlong)FVar12 + 0x38) < iVar7) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)((longlong)FVar12 + 0x30) + (longlong)iVar7 * 8)
                    != &pUVar8->_padding_)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) goto LAB_1442412a7;
              }
            }
          }
        }
      }
LAB_14424124d:
      plVar20 = plVar20 + 3;
    } while (plVar20 != local_1b8);
  }
  return;
}

// InitNewConnections @ 144241670

void __thiscall
UE::Net::Private::FReplicationFiltering::InitNewConnections(FReplicationFiltering *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  FReplicationFiltering *local_res10;
  
  if (this->bHasNewConnection != 0) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId684,"FReplicationFiltering_InitNewConnections",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                 ,0x2ac);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId684);
    }
    this->bHasNewConnection = 0;
    uVar6 = 0;
    uVar1 = (this->NewConnections).Storage.ArrayNum;
    uVar2 = (this->NewConnections).BitCount;
    uVar3 = 0;
    pFVar7 = (this->NewConnections).Storage.AllocatorInstance.Data;
    local_res10 = this;
    if (uVar1 != 0) {
      do {
        uVar5 = 0xffffffff;
        if (uVar3 == uVar1 - 1) {
          uVar5 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
        }
        uVar4 = uVar6;
        for (uVar5 = uVar5 & *(uint *)pFVar7; uVar5 != 0; uVar5 = uVar5 >> 1) {
          if ((uVar5 & 1) != 0) {
            `UE::Net::Private::FReplicationFiltering::InitNewConnections'::__l2::<lambda_1>::
            operator()(&local_res10,uVar4);
          }
          uVar4 = uVar4 + 1;
        }
        uVar3 = uVar3 + 1;
        pFVar7 = pFVar7 + 4;
        uVar6 = uVar6 + 0x20;
      } while (uVar3 < uVar1);
    }
    memset((this->NewConnections).Storage.AllocatorInstance.Data,0,
           (longlong)(this->NewConnections).Storage.ArrayNum << 2);
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// InitObjectScopeHysteresis @ 1442417d0

void __thiscall
UE::Net::Private::FReplicationFiltering::InitObjectScopeHysteresis(FReplicationFiltering *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Config).Object == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->HysteresisState).Mode = (uint)(*(char *)((this->Config).Object + 1) != '\0');
  return;
}

// InternalSetExclusionGroupFilterStatus @ 144242660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::InternalSetExclusionGroupFilterStatus
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,uint param_2,
          ENetFilterStatus param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNetObjectGroups *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;
  FNetObjectGroup *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar17;
  undefined1 local_b8;
  undefined1 local_b7 [3];
  uint local_b4;
  FName local_b0;
  FName local_a8;
  FScriptContainerElement *local_a0;
  uint *local_98;
  FNetObjectGroup *local_90;
  FScriptContainerElement *local_88;
  FString local_80;
  FString local_70;
  TArrayView<unsigned_int_const_,int> local_60;
  FNetBitArrayView local_50;
  uint uVar16;
  
  iVar2 = (this->GroupInfos).ArrayNum;
  uVar16 = param_1.field0_0x0._0_4_;
  uVar15 = uVar16 & 0xffffff;
  if (param_3 == Disallow) {
    if ((iVar2 <= (int)uVar15) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar17 = 1 << ((byte)param_2 & 0x1f);
    pFVar13 = (this->PerObjectInfoStorage).AllocatorInstance.Data;
    lVar11 = (ulonglong)
             (*(int *)((this->GroupInfos).AllocatorInstance.Data + (ulonglong)uVar15 * 4) *
             this->PerObjectInfoStorageCountPerItem) + (ulonglong)(param_2 >> 5);
    pFVar1 = pFVar13 + lVar11 * 4;
    if ((*(uint *)(pFVar13 + lVar11 * 4) & uVar17) == 0) {
      return;
    }
    bVar8 = CpuChannel->Enabled < 0;
    if (!bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2308,
                 "FReplicationFiltering_InternalSetExclusionGroupFilterStatus_Disallow",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                 ,0x904);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2308);
    }
    *(uint *)pFVar1 = *(uint *)pFVar1 & ~uVar17;
    if (5 < (byte)LogIrisFiltering._0_1_) {
      pFVar3 = this->Groups;
      bVar9 = FNetObjectGroups::IsValidGroup(pFVar3,param_1);
      if ((bVar9) &&
         (lVar11 = (ulonglong)(uVar16 & 0xffffff) * 0x20 + *(longlong *)&pFVar3->Groups, lVar11 != 0
         )) {
        local_b0 = *(FName *)(lVar11 + 0x10);
      }
      else {
        local_b0.ComparisonIndex.Value = 0;
        local_b0.Number = 0;
      }
      ::FName::ToString(&local_b0,&local_80);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    bVar9 = FNetBitArray::GetBit(&this->ValidConnections,param_2);
    if ((bVar9) && (bVar9 = FNetBitArray::GetBit(&this->NewConnections,param_2), !bVar9)) {
      pFVar10 = FNetObjectGroups::GetGroup(this->Groups,param_1);
      uVar15 = 0;
      if ((int)param_2 < (this->ConnectionInfos).ArrayNum) {
        uVar15 = ~param_2 >> 0x1f;
      }
      local_90 = pFVar10;
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = (this->ConnectionInfos).AllocatorInstance.Data;
      FNetBitArrayView::FNetBitArrayView
                (&local_50,
                 (uint *)(this->NetRefHandleManager->GlobalScopableInternalIndices).Storage.
                         AllocatorInstance.Data,
                 (this->NetRefHandleManager->GlobalScopableInternalIndices).BitCount);
      local_b4 = (pFVar10->Members).ArrayNum;
      uVar12 = (ulonglong)(int)local_b4;
      pFVar13 = (pFVar10->Members).AllocatorInstance.Data;
      local_88 = pFVar13 + uVar12 * 4;
      while( true ) {
        pFVar6 = local_88;
        local_a0 = pFVar13;
        if ((pFVar10->Members).ArrayNum != (int)uVar12) {
          local_b8 = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_b8);
        }
        if (pFVar13 == pFVar6) break;
        uVar15 = *(uint *)pFVar13;
        lVar11 = *(longlong *)(pFVar1 + (longlong)(int)param_2 * 0x160 + 0x18);
        if ((*(uint *)(pFVar1 + (longlong)(int)param_2 * 0x160 + 0x28) <= uVar15) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = (ulonglong)(uVar15 >> 5);
        *(uint *)(lVar11 + uVar12 * 4) = *(uint *)(lVar11 + uVar12 * 4) | 1 << (uVar15 & 0x1f);
        lVar11 = *(longlong *)(pFVar1 + (longlong)(int)param_2 * 0x160 + 0x30);
        if ((*(uint *)(pFVar1 + (longlong)(int)param_2 * 0x160 + 0x40) <= uVar15) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2b7,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(lVar11 + uVar12 * 4) = *(uint *)(lVar11 + uVar12 * 4) & ~(1 << (uVar15 & 0x1f));
        FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_60,uVar15);
        local_98 = local_60.DataPtr + local_60.ArrayNum;
        puVar14 = local_60.DataPtr;
        if (local_60.DataPtr != local_98) {
          do {
            puVar7 = local_50.Storage;
            uVar15 = *puVar14;
            if ((local_50.BitCount <= uVar15) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar11 = (ulonglong)(uVar15 >> 5) * 4;
            FNetBitArrayHelper::SetBitValue
                      (*(uint **)(pFVar1 + (longlong)(int)param_2 * 0x160 + 0x18),
                       *(uint *)(pFVar1 + (longlong)(int)param_2 * 0x160 + 0x28),uVar15,
                       (puVar7[uVar15 >> 5] >> (uVar15 & 0x1f) & 1) != 0);
            lVar4 = *(longlong *)(pFVar1 + (longlong)(int)param_2 * 0x160 + 0x30);
            if ((*(uint *)(pFVar1 + (longlong)(int)param_2 * 0x160 + 0x40) <= uVar15) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2b7,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar14 = puVar14 + 1;
            *(uint *)(lVar4 + lVar11) = *(uint *)(lVar4 + lVar11) & ~(1 << (uVar15 & 0x1f));
          } while (puVar14 != local_98);
        }
        pFVar13 = local_a0 + 4;
        uVar12 = (ulonglong)local_b4;
        pFVar10 = local_90;
      }
    }
  }
  else {
    if ((iVar2 <= (int)uVar15) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar17 = 1 << ((byte)param_2 & 0x1f);
    pFVar13 = (this->PerObjectInfoStorage).AllocatorInstance.Data;
    lVar11 = (ulonglong)
             (*(int *)((this->GroupInfos).AllocatorInstance.Data + (ulonglong)uVar15 * 4) *
             this->PerObjectInfoStorageCountPerItem) + (ulonglong)(param_2 >> 5);
    pFVar1 = pFVar13 + lVar11 * 4;
    if ((*(uint *)(pFVar13 + lVar11 * 4) & uVar17) != 0) {
      return;
    }
    bVar8 = CpuChannel->Enabled < 0;
    if (!bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2350,
                 "FReplicationFiltering_InternalSetExclusionGroupFilterStatus_Allow",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                 ,0x92e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2350);
    }
    *(uint *)pFVar1 = ~uVar17 & *(uint *)pFVar1 | uVar17;
    if (5 < (byte)LogIrisFiltering._0_1_) {
      pFVar3 = this->Groups;
      bVar9 = FNetObjectGroups::IsValidGroup(pFVar3,param_1);
      if ((bVar9) &&
         (lVar11 = (ulonglong)(uVar16 & 0xffffff) * 0x20 + *(longlong *)&pFVar3->Groups, lVar11 != 0
         )) {
        local_a8 = *(FName *)(lVar11 + 0x10);
      }
      else {
        local_a8.ComparisonIndex.Value = 0;
        local_a8.Number = 0;
      }
      ::FName::ToString(&local_a8,&local_70);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    bVar9 = FNetBitArray::GetBit(&this->ValidConnections,param_2);
    if ((bVar9) && (bVar9 = FNetBitArray::GetBit(&this->NewConnections,param_2), !bVar9)) {
      pFVar10 = FNetObjectGroups::GetGroup(this->Groups,param_1);
      pFVar13 = (pFVar10->Members).AllocatorInstance.Data;
      iVar2 = (pFVar10->Members).ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar2 * 4;
      while( true ) {
        if ((pFVar10->Members).ArrayNum != iVar2) {
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_b7);
        }
        if (pFVar13 == pFVar1) break;
        ClearGroupExclusionFilterEffectsForObject(this,*(uint *)pFVar13,param_2);
        pFVar13 = pFVar13 + 4;
      }
    }
  }
  if (!bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalSetInclusionGroupFilterStatus @ 144242c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::InternalSetInclusionGroupFilterStatus
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,uint param_2,
          ENetFilterStatus param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  FNetObjectGroups *pFVar4;
  code *pcVar5;
  uint *puVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  uint uVar9;
  FNetObjectGroup *pFVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_b0;
  FName local_a8;
  FNetBitArrayView local_a0;
  FScriptContainerElement *local_90;
  FString local_88;
  FString local_78;
  FNetBitArrayView local_68;
  TArrayView<unsigned_int_const_,int> local_58;
  
  uVar15 = param_1.field0_0x0._0_4_;
  if (((this->GroupInfos).ArrayNum <= (int)(uVar15 & 0xffffff)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar17 = 1 << ((byte)param_2 & 0x1f);
  lVar13 = (ulonglong)(param_2 >> 5) * 4;
  pFVar11 = (this->PerObjectInfoStorage).AllocatorInstance.Data +
            lVar13 + (ulonglong)
                     (*(int *)((this->GroupInfos).AllocatorInstance.Data +
                              (ulonglong)(uVar15 & 0xffffff) * 4) *
                     this->PerObjectInfoStorageCountPerItem) * 4;
  uVar2 = *(uint *)pFVar11;
  if (((uVar2 & uVar17) != 0) != param_3) {
    uVar9 = 0;
    if (param_3 == Allow) {
      uVar9 = uVar17;
    }
    *(uint *)pFVar11 = ~uVar17 & uVar2 | uVar9;
    pFVar11 = (this->ValidConnections).Storage.AllocatorInstance.Data;
    if (((this->ValidConnections).BitCount <= param_2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((*(uint *)(pFVar11 + lVar13) & uVar17) != 0) &&
       (bVar8 = FNetBitArray::GetBit(&this->NewConnections,param_2), !bVar8)) {
      pFVar10 = FNetObjectGroups::GetGroup(this->Groups,param_1);
      if (param_3 == Disallow) {
        if (5 < (byte)LogIrisFiltering._0_1_) {
          pFVar4 = this->Groups;
          bVar8 = FNetObjectGroups::IsValidGroup(pFVar4,param_1);
          if ((bVar8) &&
             (lVar13 = (ulonglong)(uVar15 & 0xffffff) * 0x20 + *(longlong *)&pFVar4->Groups,
             lVar13 != 0)) {
            local_b0 = *(FName *)(lVar13 + 0x10);
          }
          else {
            local_b0.ComparisonIndex.Value = 0;
            local_b0.Number = 0;
          }
          ::FName::ToString(&local_b0,&local_88);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        pFVar14 = (pFVar10->Members).AllocatorInstance.Data;
        iVar3 = (pFVar10->Members).ArrayNum;
        pFVar11 = pFVar14 + (longlong)iVar3 * 4;
        while( true ) {
          if ((pFVar10->Members).ArrayNum != iVar3) {
            `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar14 == pFVar11) break;
          ClearGroupInclusionFilterEffectsForObject(this,*(uint *)pFVar14,param_2);
          pFVar14 = pFVar14 + 4;
        }
      }
      else {
        if (5 < (byte)LogIrisFiltering._0_1_) {
          pFVar4 = this->Groups;
          bVar8 = FNetObjectGroups::IsValidGroup(pFVar4,param_1);
          if ((bVar8) &&
             (lVar13 = (ulonglong)(uVar15 & 0xffffff) * 0x20 + *(longlong *)&pFVar4->Groups,
             lVar13 != 0)) {
            local_a8 = *(FName *)(lVar13 + 0x10);
          }
          else {
            local_a8.ComparisonIndex.Value = 0;
            local_a8.Number = 0;
          }
          ::FName::ToString(&local_a8,&local_78);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        uVar15 = 0;
        if ((int)param_2 < (this->ConnectionInfos).ArrayNum) {
          uVar15 = ~param_2 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = (this->ConnectionInfos).AllocatorInstance.Data;
        FNetBitArrayView::FNetBitArrayView
                  (&local_a0,
                   (uint *)(this->NetRefHandleManager->GlobalScopableInternalIndices).Storage.
                           AllocatorInstance.Data,
                   (this->NetRefHandleManager->GlobalScopableInternalIndices).BitCount);
        FNetBitArrayView::FNetBitArrayView
                  (&local_68,
                   (uint *)(this->NetRefHandleManager->SubObjectInternalIndices).Storage.
                           AllocatorInstance.Data,
                   (this->NetRefHandleManager->SubObjectInternalIndices).BitCount);
        uVar15 = (pFVar10->Members).ArrayNum;
        uVar12 = (ulonglong)(int)uVar15;
        pFVar14 = (pFVar10->Members).AllocatorInstance.Data;
        local_90 = pFVar14 + uVar12 * 4;
        while( true ) {
          pFVar7 = local_90;
          if ((pFVar10->Members).ArrayNum != (int)uVar12) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          puVar1 = local_68.Storage;
          if (pFVar14 == pFVar7) break;
          uVar2 = *(uint *)pFVar14;
          if ((local_68.BitCount <= uVar2) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2c1,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar6 = local_a0.Storage;
          uVar17 = 1 << ((byte)uVar2 & 0x1f);
          if ((puVar1[uVar2 >> 5] & uVar17) == 0) {
            if ((local_a0.BitCount <= uVar2) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FNetBitArrayHelper::SetBitValue
                      (*(uint **)(pFVar11 + (longlong)(int)param_2 * 0x160 + 0x48),
                       *(uint *)(pFVar11 + (longlong)(int)param_2 * 0x160 + 0x58),uVar2,
                       (puVar6[uVar2 >> 5] & uVar17) != 0);
            FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_58,uVar2);
            puVar1 = local_58.DataPtr + local_58.ArrayNum;
            puVar6 = local_a0.Storage;
            for (puVar16 = local_58.DataPtr; local_a0.Storage = puVar6, puVar16 != puVar1;
                puVar16 = puVar16 + 1) {
              uVar2 = *puVar16;
              if ((local_a0.BitCount <= uVar2) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2c1,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FNetBitArrayHelper::SetBitValue
                        (*(uint **)(pFVar11 + (longlong)(int)param_2 * 0x160 + 0x48),
                         *(uint *)(pFVar11 + (longlong)(int)param_2 * 0x160 + 0x58),uVar2,
                         (puVar6[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) != 0);
              puVar6 = local_a0.Storage;
            }
          }
          pFVar14 = pFVar14 + 4;
          uVar12 = (ulonglong)uVar15;
        }
      }
    }
  }
  return;
}

// InternalSetInclusionGroupFilterStatus @ 1442430c0

void __thiscall
UE::Net::Private::FReplicationFiltering::InternalSetInclusionGroupFilterStatus
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,ENetFilterStatus param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  
  uVar5 = param_1.field0_0x0._0_4_ & 0xffffff;
  if (((this->GroupInfos).ArrayNum <= (int)uVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar8 = (this->PerObjectInfoStorage).AllocatorInstance.Data +
           (ulonglong)
           (*(int *)((this->GroupInfos).AllocatorInstance.Data + (ulonglong)uVar5 * 4) *
           this->PerObjectInfoStorageCountPerItem) * 4;
  if ((param_2 != Disallow) ||
     (bVar3 = IsAnyConnectionFilterStatusAllowed(this,(FPerObjectInfo *)pFVar8), bVar3)) {
    if (((this->ValidConnections).BitCount != (this->NewConnections).BitCount) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("A.GetNumBits() == B.GetNumBits()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x555,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = (this->ValidConnections).Storage.ArrayNum;
    uVar11 = 0;
    uVar1 = (this->ValidConnections).BitCount;
    pFVar12 = (this->ValidConnections).Storage.AllocatorInstance.Data;
    if (uVar5 != 0) {
      lVar9 = (longlong)(this->NewConnections).Storage.AllocatorInstance.Data - (longlong)pFVar12;
      uVar10 = uVar11;
      do {
        uVar6 = 0xffffffff;
        if (uVar11 == uVar5 - 1) {
          uVar6 = 0xffffffff >> (-(char)uVar1 & 0x1fU);
        }
        uVar7 = uVar10;
        for (uVar6 = uVar6 & ~*(uint *)(pFVar12 + lVar9) & *(uint *)pFVar12; uVar6 != 0;
            uVar6 = uVar6 >> 1) {
          if ((uVar6 & 1) != 0) {
            InternalSetInclusionGroupFilterStatus(this,param_1,uVar7,param_2);
          }
          uVar7 = uVar7 + 1;
        }
        uVar11 = uVar11 + 1;
        pFVar12 = pFVar12 + 4;
        uVar10 = uVar10 + 0x20;
      } while (uVar11 < uVar5);
    }
    uVar5 = 0;
    if (param_2 == Allow) {
      uVar5 = 0xffffffff;
    }
    if (this->PerObjectInfoStorageCountPerItem != 0) {
      for (uVar4 = (ulonglong)this->PerObjectInfoStorageCountPerItem; uVar4 != 0; uVar4 = uVar4 - 1)
      {
        *(uint *)&pFVar8->field_0x0 = uVar5;
        pFVar8 = pFVar8 + 4;
      }
    }
  }
  return;
}

// IsAnyConnectionFilterStatusAllowed @ 144243a80

bool __thiscall
UE::Net::Private::FReplicationFiltering::IsAnyConnectionFilterStatusAllowed
          (FReplicationFiltering *this,FPerObjectInfo *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FPerObjectInfo *pFVar4;
  uint uVar5;
  int iVar7;
  FPerObjectInfo local_c [3];
  uint uVar6;
  
  local_c[0].ConnectionIds[0] = (uint  [1])(this->ValidConnections).BitCount;
  pFVar4 = local_c;
  if (local_c[0].ConnectionIds[0] != 0) {
    pFVar4 = param_1;
  }
  iVar7 = 0;
  uVar6 = 0xfffffffe;
  uVar2 = 0;
  if ((int)local_c[0].ConnectionIds[0] + 0x1fU >> 5 != 0) {
    do {
      uVar5 = uVar6 & pFVar4->ConnectionIds[0];
      uVar6 = 0xffffffff;
      if (uVar5 != 0) {
        iVar1 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        iVar3 = 0x20;
        if (uVar5 != 0) {
          iVar3 = iVar1;
        }
        uVar2 = 0xffffffff;
        if ((uint)(iVar3 + iVar7) < (uint)local_c[0].ConnectionIds[0]) {
          uVar2 = iVar3 + iVar7;
        }
        return uVar2 != 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      pFVar4 = pFVar4 + 1;
      iVar7 = iVar7 + 0x20;
    } while (uVar2 < (int)local_c[0].ConnectionIds[0] + 0x1fU >> 5);
  }
  return false;
}

// IsAnyConnectionFilterStatusDisallowed @ 144243b20

bool __thiscall
UE::Net::Private::FReplicationFiltering::IsAnyConnectionFilterStatusDisallowed
          (FReplicationFiltering *this,FPerObjectInfo *param_1)

{
  int iVar1;
  int iVar2;
  FPerObjectInfo *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FPerObjectInfo local_c [3];
  
  local_c[0].ConnectionIds[0] = (uint  [1])(this->ValidConnections).BitCount;
  pFVar3 = local_c;
  if (local_c[0].ConnectionIds[0] != 0) {
    pFVar3 = param_1;
  }
  iVar7 = 0;
  uVar4 = 0;
  uVar6 = 1;
  if ((int)local_c[0].ConnectionIds[0] + 0x1fU >> 5 != 0) {
    do {
      uVar5 = uVar6 | pFVar3->ConnectionIds[0];
      uVar6 = 0;
      if (uVar5 != 0xffffffff) {
        uVar5 = ~uVar5;
        iVar1 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        iVar2 = 0x20;
        if (uVar5 != 0) {
          iVar2 = iVar1;
        }
        uVar4 = 0xffffffff;
        if ((uint)(iVar2 + iVar7) < (uint)local_c[0].ConnectionIds[0]) {
          uVar4 = iVar2 + iVar7;
        }
        return uVar4 != 0xffffffff;
      }
      uVar4 = uVar4 + 1;
      pFVar3 = pFVar3 + 1;
      iVar7 = iVar7 + 0x20;
    } while (uVar4 < (int)local_c[0].ConnectionIds[0] + 0x1fU >> 5);
  }
  return false;
}

// IsExcludedByAnyGroup @ 144243c90

bool __thiscall
UE::Net::Private::FReplicationFiltering::IsExcludedByAnyGroup
          (FReplicationFiltering *this,uint param_1,uint param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  TArrayView<unsigned_int_const_,int> local_28;
  
  FNetObjectGroups::GetGroupIndexesOfNetObject(this->Groups,&local_28,param_1);
  if (local_28.DataPtr != local_28.DataPtr + local_28.ArrayNum) {
    puVar7 = local_28.DataPtr;
    do {
      uVar1 = *puVar7;
      pFVar2 = (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data;
      if (((this->ExclusionFilterGroups).BitCount <= uVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((*(uint *)(pFVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
        uVar6 = 0;
        if ((int)uVar1 < (this->GroupInfos).ArrayNum) {
          uVar6 = ~uVar1 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((*(uint *)((this->PerObjectInfoStorage).AllocatorInstance.Data +
                      ((ulonglong)
                       (*(int *)((this->GroupInfos).AllocatorInstance.Data +
                                (longlong)(int)uVar1 * 4) * this->PerObjectInfoStorageCountPerItem)
                      + (ulonglong)(param_2 >> 5)) * 4) >> (param_2 & 0x1f) & 1) == 0) {
          return true;
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != local_28.DataPtr + local_28.ArrayNum);
  }
  return false;
}

// IsIncludedByAnyGroup @ 144243ef0

bool __thiscall
UE::Net::Private::FReplicationFiltering::IsIncludedByAnyGroup
          (FReplicationFiltering *this,uint param_1,uint param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  TArrayView<unsigned_int_const_,int> local_28;
  
  FNetObjectGroups::GetGroupIndexesOfNetObject(this->Groups,&local_28,param_1);
  if (local_28.DataPtr != local_28.DataPtr + local_28.ArrayNum) {
    puVar7 = local_28.DataPtr;
    do {
      uVar1 = *puVar7;
      pFVar2 = (this->InclusionFilterGroups).Storage.AllocatorInstance.Data;
      if (((this->InclusionFilterGroups).BitCount <= uVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((*(uint *)(pFVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
        uVar6 = 0;
        if ((int)uVar1 < (this->GroupInfos).ArrayNum) {
          uVar6 = ~uVar1 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((*(uint *)((this->PerObjectInfoStorage).AllocatorInstance.Data +
                      ((ulonglong)
                       (*(int *)((this->GroupInfos).AllocatorInstance.Data +
                                (longlong)(int)uVar1 * 4) * this->PerObjectInfoStorageCountPerItem)
                      + (ulonglong)(param_2 >> 5)) * 4) >> (param_2 & 0x1f) & 1) != 0) {
          return true;
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != local_28.DataPtr + local_28.ArrayNum);
  }
  return false;
}

// IsUsingSpatialFilter @ 1442440b0

bool __thiscall
UE::Net::Private::FReplicationFiltering::IsUsingSpatialFilter
          (FReplicationFiltering *this,uint param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((int)param_1 < (this->ObjectIndexToDynamicFilterIndex).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar1 = (this->ObjectIndexToDynamicFilterIndex).AllocatorInstance.Data[(int)param_1];
  if (FVar1 == (FScriptContainerElement)0xff) {
    return false;
  }
  if ((this->DynamicFilterInfos).ArrayNum <= (int)(uint)(byte)FVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  if (*(longlong *)(pFVar2 + (ulonglong)(byte)FVar1 * 0x18) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return (bool)(*(byte *)(*(longlong *)(pFVar2 + (ulonglong)(byte)FVar1 * 0x18) + 0x48) & 1);
}

// NotifyAddedDependentObject @ 144244e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::NotifyAddedDependentObject
          (FReplicationFiltering *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FName local_res8;
  FString local_18;
  
  if (3 < (byte)LogIrisFiltering._0_1_) {
    pFVar1 = (this->DynamicFilterEnabledObjects).Storage.AllocatorInstance.Data;
    if (((this->DynamicFilterEnabledObjects).BitCount <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) &&
        (pUVar4 = FNetRefHandleManager::GetReplicatedObjectInstance
                            (this->NetRefHandleManager,param_1), 3 < (byte)LogIrisFiltering._0_1_))
       && (pUVar4 != (UObject *)0x0)) {
      local_res8 = *(FName *)(*(longlong *)&pUVar4->field_0x10 + 0x18);
      bVar3 = FIrisLogOnceTracker::ShouldLog
                        (&ReplicationFiltering_MootDependentObjectTracker,&local_res8);
      if (bVar3) {
        FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_18,param_1);
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  pFVar1 = (this->ObjectsRequiringDynamicFilterUpdate).Storage.AllocatorInstance.Data;
  if (((this->ObjectsRequiringDynamicFilterUpdate).BitCount <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = pFVar1 + (ulonglong)(param_1 >> 5) * 4;
  *(uint *)pFVar1 = *(uint *)pFVar1 | 1 << (param_1 & 0x1f);
  return;
}

// NotifyFiltersOfDirtyObjects @ 144244f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationFiltering::NotifyFiltersOfDirtyObjects(FReplicationFiltering *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FReplicationSystemInternal *pFVar4;
  bool bVar5;
  undefined1 auStackY_988 [32];
  FNetBitArrayView local_958;
  FUpdateDirtyObjectsBatchHelper local_948;
  uint local_818 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_988;
  if (this->bHasDynamicFiltersWithUpdateTrait != 0) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1737,"FReplicationFiltering_UpdateFilterWithDirtyObjects",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                 ,0x6c9);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1737);
    }
    pFVar4 = UReplicationSystem::GetReplicationSystemInternal
                       ((this->ReplicationSystem).field0_0x0.DebugPtr);
    if (((pFVar4->DirtyNetObjectTracker).NetRefHandleManager == (FNetRefHandleManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyNetObjectTracker.IsInit()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                           ,0x41,
                           L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (pFVar4->DirtyNetObjectTracker).bIsExternalAccessAllowed = false;
    FNetBitArrayView::FNetBitArrayView
              (&local_958,
               (uint *)(pFVar4->DirtyNetObjectTracker).DirtyNetObjects.Storage.AllocatorInstance.
                       Data,(pFVar4->DirtyNetObjectTracker).DirtyNetObjects.BitCount);
    FUpdateDirtyObjectsBatchHelper::FUpdateDirtyObjectsBatchHelper
              (&local_948,this->NetRefHandleManager,&this->DynamicFilterInfos);
    for (uVar3 = FNetBitArrayHelper::GetSetBitIndices
                           (local_958.Storage,local_958.BitCount,0,0xffffffff,local_818,0x200);
        uVar3 != 0;
        uVar3 = FNetBitArrayHelper::GetSetBitIndices
                          (local_958.Storage,local_958.BitCount,local_818[uVar3 - 1] + 1,0xffffffff,
                           local_818,0x200)) {
      BatchNotifyFiltersOfDirtyObjects(this,&local_948,local_818,uVar3);
      if (local_818[uVar3 - 1] + 1 == local_958.BitCount || uVar3 < 0x200) break;
    }
    if (local_948.ObjectIndicesStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.ObjectIndicesStorage.AllocatorInstance.Data);
    }
    if (local_948.PerFilterInfos.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
         )0x0) {
      FMemory::Free((void *)local_948.PerFilterInfos.AllocatorInstance.SecondaryData);
    }
    (pFVar4->DirtyNetObjectTracker).bIsExternalAccessAllowed = true;
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// NotifyObjectAddedToGroup @ 144245150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::NotifyObjectAddedToGroup
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,uint param_2)

{
  FNetObjectGroups *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  uint local_res18;
  FName local_res20;
  FString local_b8;
  FScriptContainerElement *local_a8;
  uint local_a0;
  uint local_9c;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  uint uVar11;
  
  pFVar6 = (this->SubObjectFilterGroups).Storage.AllocatorInstance.Data;
  uVar11 = param_1.field0_0x0._0_4_;
  uVar10 = uVar11 & 0xffffff;
  local_res18 = param_2;
  if (((this->SubObjectFilterGroups).BitCount <= uVar10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar12 = 1 << ((byte)uVar10 & 0x1f);
  lVar9 = (ulonglong)(uVar10 >> 5) * 4;
  if ((*(uint *)(pFVar6 + lVar9) & uVar12) == 0) {
    pFVar6 = (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data;
    if (((this->ExclusionFilterGroups).BitCount <= uVar10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)(pFVar6 + lVar9) & uVar12) == 0) {
      bVar4 = FNetBitArray::GetBit(&this->InclusionFilterGroups,uVar10);
      if (!bVar4) {
        return;
      }
      if (((this->GroupInfos).ArrayNum <= (int)uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = IsAnyConnectionFilterStatusAllowed
                        (this,(FPerObjectInfo *)
                              ((this->PerObjectInfoStorage).AllocatorInstance.Data +
                              (ulonglong)
                              (*(int *)((this->GroupInfos).AllocatorInstance.Data +
                                       (ulonglong)uVar10 * 4) *
                              this->PerObjectInfoStorageCountPerItem) * 4));
      if (bVar4) {
        FNetBitArray::SetBit(&this->DirtyInclusionFilterGroups,uVar10);
        this->bHasDirtyInclusionFilterGroup = 1;
      }
      if ((byte)LogIrisFiltering._0_1_ < 6) {
        return;
      }
      pFVar1 = this->Groups;
      bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
      if ((bVar4) &&
         (lVar9 = (ulonglong)(uVar11 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar9 != 0))
      {
        local_res20 = *(FName *)(lVar9 + 0x10);
      }
      else {
        local_res20.ComparisonIndex.Value = 0;
        local_res20.Number = 0;
      }
      ::FName::ToString(&local_res20,&local_88);
      FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_58,local_res18);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
      local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      }
    }
    else {
      if (((this->GroupInfos).ArrayNum <= (int)uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_9c = (this->ValidConnections).BitCount;
      local_a0 = local_9c + 0x1f >> 5;
      local_a8 = (FScriptContainerElement *)&local_9c;
      if (local_9c != 0) {
        local_a8 = (this->PerObjectInfoStorage).AllocatorInstance.Data +
                   (ulonglong)
                   (*(int *)((this->GroupInfos).AllocatorInstance.Data + (ulonglong)uVar10 * 4) *
                   this->PerObjectInfoStorageCountPerItem) * 4;
      }
      uVar7 = 0;
      pFVar6 = local_a8;
      uVar12 = 1;
      uVar8 = uVar7;
      if (local_9c + 0x1f >> 5 != 0) {
LAB_144245360:
        if ((uVar12 | *(uint *)pFVar6) == 0xffffffff) goto code_r0x00014424536f;
        uVar12 = ~(uVar12 | *(uint *)pFVar6);
        iVar2 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
          }
        }
        iVar5 = 0x20;
        if (uVar12 != 0) {
          iVar5 = iVar2;
        }
        uVar12 = 0xffffffff;
        if (iVar5 + uVar8 < local_9c) {
          uVar12 = iVar5 + uVar8;
        }
        if (uVar12 != 0xffffffff) {
          FNetBitArray::SetBit(&this->DirtyExclusionFilterGroups,uVar10);
          this->bHasDirtyExclusionFilterGroup = 1;
        }
      }
LAB_1442453b7:
      if ((byte)LogIrisFiltering._0_1_ < 6) {
        return;
      }
      pFVar1 = this->Groups;
      bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
      if ((bVar4) &&
         (lVar9 = (ulonglong)(uVar11 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar9 != 0))
      {
        local_res10 = *(FName *)(lVar9 + 0x10);
      }
      else {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
      }
      ::FName::ToString(&local_res10,&local_98);
      FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_68,local_res18);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((byte)LogIrisFiltering._0_1_ < 6) {
      return;
    }
    pFVar1 = this->Groups;
    bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
    if ((bVar4) &&
       (lVar9 = (ulonglong)(uVar11 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar9 != 0)) {
      local_res8 = *(FName *)(lVar9 + 0x10);
    }
    else {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
    }
    ::FName::ToString(&local_res8,&local_b8);
    FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_78,local_res18);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
    local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
code_r0x00014424536f:
  uVar7 = uVar7 + 1;
  pFVar6 = pFVar6 + 4;
  uVar8 = uVar8 + 0x20;
  uVar12 = 0;
  if (local_a0 <= uVar7) goto LAB_1442453b7;
  goto LAB_144245360;
}

// NotifyObjectRemovedFromGroup @ 1442455b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::NotifyObjectRemovedFromGroup
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,uint param_2)

{
  int iVar1;
  FNetObjectGroups *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint local_res8;
  FName local_84;
  longlong local_78;
  FString local_70;
  FString local_60 [2];
  uint uVar10;
  
  uVar10 = param_1.field0_0x0._0_4_;
  uVar9 = uVar10 & 0xffffff;
  if (5 < (byte)LogIrisFiltering._0_1_) {
    this_00 = this->Groups;
    bVar4 = FNetObjectGroups::IsValidGroup(this_00,param_1);
    if ((bVar4) &&
       (lVar7 = (ulonglong)(uVar10 & 0xffffff) * 0x20 + *(longlong *)&this_00->Groups, lVar7 != 0))
    {
      local_84 = *(FName *)(lVar7 + 0x10);
    }
    else {
      local_84.ComparisonIndex.Value = 0;
      local_84.Number = 0;
    }
    ::FName::ToString(&local_84,&local_70);
    FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,local_60,param_2);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = (this->SubObjectFilterGroups).Storage.AllocatorInstance.Data;
  if (((this->SubObjectFilterGroups).BitCount <= uVar9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar13 = 1 << (sbyte)(uVar10 & 0x1f);
  lVar7 = (ulonglong)(uVar9 >> 5) * 4;
  if ((*(uint *)(pFVar2 + lVar7) & uVar13) == 0) {
    pFVar2 = (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data;
    if (((this->ExclusionFilterGroups).BitCount <= uVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)(pFVar2 + lVar7) & uVar13) == 0) {
      bVar4 = FNetBitArray::GetBit(&this->InclusionFilterGroups,uVar9);
      if (bVar4) {
        if (((this->GroupInfos).ArrayNum <= (int)uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = *(int *)((this->GroupInfos).AllocatorInstance.Data + (ulonglong)uVar9 * 4);
        uVar9 = this->PerObjectInfoStorageCountPerItem;
        pFVar2 = (this->PerObjectInfoStorage).AllocatorInstance.Data;
        if (((this->ValidConnections).BitCount != (this->NewConnections).BitCount) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("A.GetNumBits() == B.GetNumBits()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x555,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = (this->ValidConnections).Storage.ArrayNum;
        uVar13 = (this->ValidConnections).BitCount;
        pFVar14 = (this->ValidConnections).Storage.AllocatorInstance.Data;
        uVar12 = 0;
        local_res8 = 0;
        if (uVar10 != 0) {
          lVar7 = (longlong)(this->NewConnections).Storage.AllocatorInstance.Data -
                  (longlong)pFVar14;
          local_78 = lVar7;
          do {
            uVar8 = 0xffffffff;
            if (local_res8 == uVar10 - 1) {
              uVar8 = 0xffffffff >> (-(char)uVar13 & 0x1fU);
            }
            uVar8 = uVar8 & ~*(uint *)(pFVar14 + lVar7) & *(uint *)pFVar14;
            if (uVar8 != 0) {
              uVar11 = 1;
              uVar6 = uVar12;
              do {
                if (((uVar8 & 1) != 0) &&
                   ((*(uint *)(pFVar2 + (ulonglong)(uVar6 >> 5) * 4 + (ulonglong)(iVar1 * uVar9) * 4
                              ) & uVar11) != 0)) {
                  uVar5 = 0;
                  if ((int)uVar6 < (this->ConnectionInfos).ArrayNum) {
                    uVar5 = ~uVar6 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  ClearGroupInclusionFilterEffectsForObject(this,param_2,uVar6);
                }
                uVar6 = uVar6 + 1;
                uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
                uVar8 = uVar8 >> 1;
                lVar7 = local_78;
              } while (uVar8 != 0);
            }
            local_res8 = local_res8 + 1;
            pFVar14 = pFVar14 + 4;
            uVar12 = uVar12 + 0x20;
          } while (local_res8 < uVar10);
        }
      }
    }
    else {
      if (((this->GroupInfos).ArrayNum <= (int)uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)((this->GroupInfos).AllocatorInstance.Data + (ulonglong)uVar9 * 4);
      uVar9 = this->PerObjectInfoStorageCountPerItem;
      pFVar2 = (this->PerObjectInfoStorage).AllocatorInstance.Data;
      if (((this->ValidConnections).BitCount != (this->NewConnections).BitCount) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("A.GetNumBits() == B.GetNumBits()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x555,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = (this->ValidConnections).Storage.ArrayNum;
      uVar13 = (this->ValidConnections).BitCount;
      pFVar14 = (this->ValidConnections).Storage.AllocatorInstance.Data;
      uVar12 = 0;
      local_res8 = 0;
      if (uVar10 != 0) {
        lVar7 = (longlong)(this->NewConnections).Storage.AllocatorInstance.Data - (longlong)pFVar14;
        local_78 = lVar7;
        do {
          uVar8 = 0xffffffff;
          if (local_res8 == uVar10 - 1) {
            uVar8 = 0xffffffff >> (-(char)uVar13 & 0x1fU);
          }
          uVar8 = uVar8 & ~*(uint *)(pFVar14 + lVar7) & *(uint *)pFVar14;
          if (uVar8 != 0) {
            uVar11 = 1;
            uVar6 = uVar12;
            do {
              if (((uVar8 & 1) != 0) &&
                 ((*(uint *)(pFVar2 + (ulonglong)(uVar6 >> 5) * 4 + (ulonglong)(iVar1 * uVar9) * 4)
                  & uVar11) == 0)) {
                uVar5 = 0;
                if ((int)uVar6 < (this->ConnectionInfos).ArrayNum) {
                  uVar5 = ~uVar6 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                ClearGroupExclusionFilterEffectsForObject(this,param_2,uVar6);
              }
              uVar6 = uVar6 + 1;
              uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
              uVar8 = uVar8 >> 1;
              lVar7 = local_78;
            } while (uVar8 != 0);
          }
          local_res8 = local_res8 + 1;
          pFVar14 = pFVar14 + 4;
          uVar12 = uVar12 + 0x20;
        } while (local_res8 < uVar10);
      }
    }
  }
  else {
    pFVar2 = (this->DirtySubObjectFilterGroups).Storage.AllocatorInstance.Data;
    if (((this->DirtySubObjectFilterGroups).BitCount <= uVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)(pFVar2 + lVar7) = *(uint *)(pFVar2 + lVar7) | 1 << (uVar10 & 0x1f);
  }
  return;
}

// NotifyRemovedDependentObject @ 144245b20

void __thiscall
UE::Net::Private::FReplicationFiltering::NotifyRemovedDependentObject
          (FReplicationFiltering *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->ObjectsRequiringDynamicFilterUpdate).Storage.AllocatorInstance.Data;
  if ((this->ObjectsRequiringDynamicFilterUpdate).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) =
       *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) | 1 << (param_1 & 0x1f);
  return;
}

// OnInternalNetRefIndicesFreed @ 144246350

void __thiscall
UE::Net::Private::FReplicationFiltering::OnInternalNetRefIndicesFreed
          (FReplicationFiltering *this,TArrayView<unsigned_int_const_,int> *param_1)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = param_1->DataPtr;
  puVar1 = puVar6 + param_1->ArrayNum;
  while( true ) {
    if (puVar6 == puVar1) {
      return;
    }
    uVar2 = *puVar6;
    uVar5 = 0;
    if ((int)uVar2 < (this->ObjectIndexToOwningConnection).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    puVar6 = puVar6 + 1;
    *(undefined2 *)
     ((this->ObjectIndexToOwningConnection).AllocatorInstance.Data + (longlong)(int)uVar2 * 2) = 0;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144246790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::OnMaxInternalNetRefIndexIncreased
          (FReplicationFiltering *this,uint param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_4c;
  
  this->MaxInternalNetRefIndex = param_1;
  SetNetObjectListsSize(this,param_1);
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId300,"FReplicationFiltering_ResizeAllPerConnectionLists",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,300);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId300);
  }
  uVar3 = (this->ValidConnections).Storage.ArrayNum;
  uVar14 = 0;
  pFVar16 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  uVar10 = 0xffffffff >> (-(char)(this->ValidConnections).BitCount & 0x1fU);
  uVar15 = 0;
  uVar9 = uVar3 - 1;
  local_res18 = uVar10;
  local_res20 = uVar9;
  if (uVar3 != 0) {
    do {
      uVar13 = 0xffffffff;
      if (uVar15 == uVar9) {
        uVar13 = uVar10;
      }
      uVar12 = uVar14;
      for (uVar13 = uVar13 & *(uint *)pFVar16; uVar13 != 0; uVar13 = uVar13 >> 1) {
        if ((uVar13 & 1) != 0) {
          uVar10 = 0;
          if ((int)uVar12 < (this->ConnectionInfos).ArrayNum) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          SetPerConnectionListsSize
                    (this,(FPerConnectionInfo *)
                          ((this->ConnectionInfos).AllocatorInstance.Data +
                          (longlong)(int)uVar12 * 0x160),param_1);
        }
        uVar12 = uVar12 + 1;
        uVar10 = local_res18;
        uVar9 = local_res20;
      }
      uVar15 = uVar15 + 1;
      pFVar16 = pFVar16 + 4;
      uVar14 = uVar14 + 0x20;
    } while (uVar15 < uVar3);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar16 = (this->NetObjectFilteringInfos).AllocatorInstance.Data;
  iVar4 = (this->NetObjectFilteringInfos).ArrayNum;
  if ((iVar4 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar5 = (this->DynamicFilterInfos).ArrayNum;
  pFVar11 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar2 = pFVar11 + (longlong)iVar5 * 0x18;
  while( true ) {
    if ((this->DynamicFilterInfos).ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar2) break;
    if ((*(longlong *)pFVar11 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar6 = *(longlong **)pFVar11;
    *(uint *)(plVar6 + 7) = param_1;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(plVar6 + 5),param_1 + 0x1f >> 5,
               No);
    if ((int)plVar6[7] != 0) {
      puVar1 = (uint *)(plVar6[5] + (longlong)(int)plVar6[6] * 4 + -4);
      *puVar1 = *puVar1 & 0xffffffffU >> (-(char)(int)plVar6[7] & 0x1fU);
    }
    local_58 = SUB84(pFVar16,0);
    uStack_54 = (undefined4)((ulonglong)pFVar16 >> 0x20);
    *(undefined4 *)(plVar6 + 10) = local_58;
    *(undefined4 *)((longlong)plVar6 + 0x54) = uStack_54;
    *(int *)(plVar6 + 0xb) = iVar4;
    *(undefined4 *)((longlong)plVar6 + 0x5c) = uStack_4c;
    (**(code **)(*plVar6 + 0x308))(plVar6,param_1);
    pFVar11 = pFVar11 + 0x18;
  }
  return;
}

// PostUpdateDynamicFiltering @ 1442471a0

void __thiscall
UE::Net::Private::FReplicationFiltering::PostUpdateDynamicFiltering(FReplicationFiltering *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [16];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1708,"FReplicationFiltering_PostUpdateDynamicFiltering",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x6ac);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1708);
  }
  memset((this->ObjectsRequiringDynamicFilterUpdate).Storage.AllocatorInstance.Data,0,
         (longlong)(this->ObjectsRequiringDynamicFilterUpdate).Storage.ArrayNum << 2);
  iVar2 = (this->DynamicFilterInfos).ArrayNum;
  pFVar5 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->DynamicFilterInfos).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(int *)(pFVar5 + 0x10) != 0) {
      if ((*(longlong *)pFVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)pFVar5 + 0x2e8))();
    }
    pFVar5 = pFVar5 + 0x18;
  }
  (this->HysteresisState).ObjectsToClearCount = 0;
  memset((this->HysteresisState).ObjectsToClear.Storage.AllocatorInstance.Data,0,
         (longlong)(this->HysteresisState).ObjectsToClear.Storage.ArrayNum << 2);
  memset((this->HysteresisState).ObjectsExemptFromHysteresis.Storage.AllocatorInstance.Data,0,
         (longlong)(this->HysteresisState).ObjectsExemptFromHysteresis.Storage.ArrayNum << 2);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostUpdateObjectScopeHysteresis @ 144247300

void __thiscall
UE::Net::Private::FReplicationFiltering::PostUpdateObjectScopeHysteresis
          (FReplicationFiltering *this)

{
  (this->HysteresisState).ObjectsToClearCount = 0;
  memset((this->HysteresisState).ObjectsToClear.Storage.AllocatorInstance.Data,0,
         (longlong)(this->HysteresisState).ObjectsToClear.Storage.ArrayNum << 2);
  memset((this->HysteresisState).ObjectsExemptFromHysteresis.Storage.AllocatorInstance.Data,0,
         (longlong)(this->HysteresisState).ObjectsExemptFromHysteresis.Storage.ArrayNum << 2);
  return;
}

// PreUpdateDynamicFiltering @ 1442476d0

void __thiscall
UE::Net::Private::FReplicationFiltering::PreUpdateDynamicFiltering(FReplicationFiltering *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  FNetBitArrayView local_58;
  uint *local_48;
  undefined8 uStack_40;
  FScriptContainerElement *local_38;
  ulonglong uStack_30;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1272,"FReplicationFiltering_PreUpdateDynamicFiltering",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x4f8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1272);
  }
  iVar2 = (this->DynamicFilterInfos).ArrayNum;
  pFVar7 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
  do {
    if ((this->DynamicFilterInfos).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if (*(int *)(pFVar7 + 0x10) != 0) {
      iVar3 = (this->NetObjectFilteringInfos).ArrayNum;
      local_48 = (uint *)((longlong)&uStack_40 + 4);
      pFVar4 = (this->NetObjectFilteringInfos).AllocatorInstance.Data;
      uStack_40 = 0;
      local_38 = (FScriptContainerElement *)0x0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      if ((iVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_30 = CONCAT44(uStack_5c,iVar3);
      local_38 = pFVar4;
      FNetBitArrayView::FNetBitArrayView
                (&local_58,(uint *)(this->ValidConnections).Storage.AllocatorInstance.Data,
                 (this->ValidConnections).BitCount);
      local_48 = local_58.Storage;
      uStack_40._0_4_ = local_58.WordCount;
      uStack_40._4_4_ = local_58.BitCount;
      if ((*(longlong *)pFVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(**(longlong **)pFVar7 + 0x2d8))(*(longlong **)pFVar7,&local_48);
    }
    pFVar7 = pFVar7 + 0x18;
  } while( true );
}

// PreUpdateObjectScopeHysteresis @ 1442478a0

void __thiscall
UE::Net::Private::FReplicationFiltering::PreUpdateObjectScopeHysteresis(FReplicationFiltering *this)

{
  uint uVar1;
  uint uVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  FNetBitArrayView local_48;
  
  if ((this->HysteresisState).Mode == Enabled) {
    if (((this->Config).Object == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = (this->Config).Object;
    bVar8 = pUVar3[1].field_0x2;
    bVar7 = 0x80;
    if (bVar8 < 0x80) {
      bVar7 = bVar8;
    }
    bVar8 = 1;
    if (1 < bVar7) {
      bVar8 = bVar7;
    }
    (this->HysteresisState).ConnectionStartId = this->FrameIndex % (uint)bVar8;
    if ((pUVar3 == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar8 = (this->Config).Object[1].field_0x2;
    bVar7 = 0x80;
    if (bVar8 < 0x80) {
      bVar7 = bVar8;
    }
    bVar8 = 1;
    if (1 < bVar7) {
      bVar8 = bVar7;
    }
    (this->HysteresisState).ConnectionIdStride = (uint)bVar8;
  }
  if ((this->HysteresisState).ObjectsToClearCount != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2842,
                 "FObjectScopeHysteresisUpdater_ClearObjectsFromHysteresis",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                 ,0xb1a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2842);
    }
    uVar1 = (this->ValidConnections).Storage.ArrayNum;
    uVar2 = (this->ValidConnections).BitCount;
    uVar14 = 0;
    pFVar13 = (this->ValidConnections).Storage.AllocatorInstance.Data;
    uVar15 = 0;
    if (uVar1 != 0) {
      do {
        uVar12 = 0xffffffff;
        if (uVar15 == uVar1 - 1) {
          uVar12 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
        }
        uVar11 = uVar14;
        for (uVar12 = uVar12 & *(uint *)pFVar13; uVar12 != 0; uVar12 = uVar12 >> 1) {
          if ((uVar12 & 1) != 0) {
            uVar10 = 0;
            if ((int)uVar11 < (this->ConnectionInfos).ArrayNum) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (this->ConnectionInfos).AllocatorInstance.Data;
            FNetBitArrayView::FNetBitArrayView
                      (&local_48,
                       (uint *)(this->HysteresisState).ObjectsToClear.Storage.AllocatorInstance.Data
                       ,(this->HysteresisState).ObjectsToClear.BitCount);
            FObjectScopeHysteresisUpdater::RemoveHysteresis
                      ((FObjectScopeHysteresisUpdater *)
                       (pFVar4 + (longlong)(int)uVar11 * 0x160 + 0xc0),&local_48);
          }
          uVar11 = uVar11 + 1;
        }
        uVar15 = uVar15 + 1;
        pFVar13 = pFVar13 + 4;
        uVar14 = uVar14 + 0x20;
      } while (uVar15 < uVar1);
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// PrintFilterObjectInfo @ 1442487d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::Net::Private::FReplicationFiltering::PrintFilterObjectInfo
          (FReplicationFiltering *this,FString *__return_storage_ptr__,uint param_1,uint param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FString *pFVar8;
  void *pvVar9;
  FNetObjectGroup *pFVar10;
  ForElementType<UE::Net::FReplicationView::FView> FVar11;
  ForElementType<UE::Net::FReplicationView::FView> FVar12;
  longlong lVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint *puVar16;
  uint *puVar17;
  undefined1 auStackY_6d8 [32];
  uint local_698 [2];
  FScriptContainerElement local_690 [4];
  uint local_68c;
  uint local_688;
  FString *local_680;
  longlong local_678;
  FScriptContainerElement *local_670;
  int iStack_668;
  undefined4 uStack_664;
  TArrayView<unsigned_int_const_,int> local_660;
  FName local_650;
  FString local_648;
  FNetBitArrayView local_638;
  FReplicationFiltering *local_628;
  uint *local_620;
  FScriptContainerElement *local_618;
  FScriptContainerElement *local_610;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  void *local_5d8 [2];
  FName local_5c8;
  FScriptContainerElement *local_5c0;
  undefined8 uStack_5b8;
  uint local_5b0;
  FReplicationView local_5a8;
  TStringBuilderBase<wchar_t> local_478;
  wchar_t local_458 [512];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  pFVar15 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  local_478.Base = local_458;
  local_478.CurPos = local_458;
  local_478.End = (wchar_t *)local_58;
  local_478.bIsDynamic = false;
  local_478.bIsExternal = false;
  local_698[0] = param_1;
  local_68c = param_2;
  local_680 = __return_storage_ptr__;
  if (((this->ValidConnections).BitCount <= param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  local_688 = 1 << ((byte)param_2 & 0x1f);
  local_678 = (ulonglong)(param_2 >> 5) * 4;
  if ((*(uint *)(pFVar15 + local_678) & local_688) != 0) {
    bVar4 = HasOwnerFilter(this,local_698[0]);
    if (bVar4) {
      uVar5 = 0;
      if ((int)local_698[0] < (this->ObjectIndexToOwningConnection).ArrayNum) {
        uVar5 = ~local_698[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar3)();
        return pFVar8;
      }
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_478,L"\r\t OwnerFilter to connectionId:%u | %s");
    }
    uVar5 = 0;
    if ((int)param_2 < (this->ConnectionInfos).ArrayNum) {
      uVar5 = ~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    pFVar15 = (this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_2 * 0x160;
    local_670 = pFVar15;
    FNetObjectGroups::GetGroupIndexesOfNetObject(this->Groups,&local_660,local_698[0]);
    uVar5 = local_698[0];
    lVar13 = *(longlong *)(pFVar15 + 0x18);
    if ((*(uint *)(pFVar15 + 0x28) <= local_698[0]) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    if ((*(uint *)(lVar13 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
      if (local_478.End < local_478.CurPos + 0x13) {
        TStringBuilderBase<wchar_t>::Extend(&local_478,0x13);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_478.CurPos,L"\r\t ExclusionGroups:",0x26);
      uVar5 = local_688;
      local_478.CurPos = (wchar_t *)((longlong)pvVar9 + 0x26);
      puVar17 = local_660.DataPtr + local_660.ArrayNum;
      for (puVar16 = local_660.DataPtr; puVar16 != puVar17; puVar16 = puVar16 + 1) {
        uVar7 = *puVar16;
        pFVar15 = (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data;
        if (((this->ExclusionFilterGroups).BitCount <= uVar7) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar3)();
          return pFVar8;
        }
        if ((*(uint *)(pFVar15 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
          pFVar10 = FNetObjectGroups::GetGroupFromIndex(this->Groups,uVar7);
          if ((pFVar10 == (FNetObjectGroup *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Group",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                                 ,0xab4,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar3)();
            return pFVar8;
          }
          uVar6 = 0;
          if ((int)uVar7 < (this->GroupInfos).ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar3)();
            return pFVar8;
          }
          pFVar15 = (this->PerObjectInfoStorage).AllocatorInstance.Data +
                    (ulonglong)
                    (*(int *)((this->GroupInfos).AllocatorInstance.Data + (longlong)(int)uVar7 * 4)
                    * this->PerObjectInfoStorageCountPerItem) * 4;
          if ((pFVar15 == (FScriptContainerElement *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ConnectionState",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                                 ,0xab6,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar3)();
            return pFVar8;
          }
          if ((*(uint *)(pFVar15 + local_678) & uVar5) == 0) {
            ::FName::ToString(&pFVar10->GroupName,&local_608);
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_478,L" | %s status: %s");
            if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_608.Data.AllocatorInstance.Data);
            }
          }
        }
        pFVar15 = local_670;
      }
    }
    uVar5 = local_698[0];
    lVar13 = *(longlong *)(pFVar15 + 0x48);
    if ((*(uint *)(pFVar15 + 0x58) <= local_698[0]) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    __return_storage_ptr__ = local_680;
    param_2 = local_68c;
    if ((*(uint *)(lVar13 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
      if (local_478.End < local_478.CurPos + 0x13) {
        TStringBuilderBase<wchar_t>::Extend(&local_478,0x13);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_478.CurPos,L"\r\t InclusionGroups:",0x26);
      lVar13 = local_678;
      local_478.CurPos = (wchar_t *)((longlong)pvVar9 + 0x26);
      param_2 = local_68c;
      __return_storage_ptr__ = local_680;
      for (puVar17 = local_660.DataPtr; local_68c = param_2, local_680 = __return_storage_ptr__,
          puVar17 != local_660.DataPtr + local_660.ArrayNum; puVar17 = puVar17 + 1) {
        uVar5 = *puVar17;
        pFVar15 = (this->InclusionFilterGroups).Storage.AllocatorInstance.Data;
        if (((this->InclusionFilterGroups).BitCount <= uVar5) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar3)();
          return pFVar8;
        }
        if ((*(uint *)(pFVar15 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
          pFVar10 = FNetObjectGroups::GetGroupFromIndex(this->Groups,uVar5);
          if ((pFVar10 == (FNetObjectGroup *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Group",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                                 ,0xacd,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar3)();
            return pFVar8;
          }
          uVar7 = 0;
          if ((int)uVar5 < (this->GroupInfos).ArrayNum) {
            uVar7 = ~uVar5 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar3)();
            return pFVar8;
          }
          pFVar15 = (this->PerObjectInfoStorage).AllocatorInstance.Data +
                    (ulonglong)
                    (*(int *)((this->GroupInfos).AllocatorInstance.Data + (longlong)(int)uVar5 * 4)
                    * this->PerObjectInfoStorageCountPerItem) * 4;
          if ((pFVar15 == (FScriptContainerElement *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ConnectionState",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                                 ,0xacf,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar3)();
            return pFVar8;
          }
          if ((*(uint *)(pFVar15 + lVar13) & local_688) != 0) {
            ::FName::ToString(&pFVar10->GroupName,&local_5f8);
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_478,L" | %s status: %s");
            if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
            }
          }
        }
        param_2 = local_68c;
        __return_storage_ptr__ = local_680;
      }
    }
  }
  lVar13 = (longlong)(int)local_698[0];
  uVar5 = 0;
  if ((int)local_698[0] < (this->ObjectIndexToDynamicFilterIndex).ArrayNum) {
    uVar5 = ~local_698[0] >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  local_690[0] = (this->ObjectIndexToDynamicFilterIndex).AllocatorInstance.Data[lVar13];
  uVar14 = (ulonglong)(byte)local_690[0];
  if (local_690[0] == (FScriptContainerElement)0xff) {
    if (local_478.End < local_478.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_478,1);
    }
    *local_478.CurPos = L'\0';
    ::FString::PrintfImpl(__return_storage_ptr__,L"[NoDynamicFilter] %s");
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
  }
  else {
    if (((this->DynamicFilterInfos).ArrayNum <= (int)(uint)(byte)local_690[0]) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    pFVar2 = (this->DynamicFilterInfos).AllocatorInstance.Data;
    pFVar15 = pFVar2 + uVar14 * 0x18;
    if ((*(longlong *)(pFVar2 + uVar14 * 0x18) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    FNetBitArrayView::FNetBitArrayView
              (&local_638,*(uint **)(*(longlong *)pFVar15 + 0x28),
               *(uint *)(*(longlong *)pFVar15 + 0x38));
    uVar5 = local_698[0];
    if ((local_638.BitCount <= local_698[0]) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    if ((local_638.Storage[uVar5 >> 5] >> (uVar5 & 0x1f) & 1) == 0) {
      local_620 = local_698;
      local_618 = local_690;
      local_628 = this;
      local_610 = pFVar15;
      `UE::Net::Private::FReplicationFiltering::PrintFilterObjectInfo'::__l68::<lambda_1>::
      operator()(&local_628);
      if (local_478.End < local_478.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_478,1);
      }
      *local_478.CurPos = L'\0';
      ::FString::PrintfImpl(local_680,L"[WrongFilter Setting!] %s");
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
      __return_storage_ptr__ = local_680;
    }
    else {
      iVar1 = (this->NetObjectFilteringInfos).ArrayNum;
      local_5a8.Views.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Net::FReplicationView::FView>)0x0;
      local_5a8.Views.ArrayNum = 0;
      local_5a8.Views.ArrayMax = 4;
      local_5c8 = *(FName *)(pFVar15 + 8);
      local_670 = (this->NetObjectFilteringInfos).AllocatorInstance.Data;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar3)();
        return pFVar8;
      }
      uStack_5b8 = CONCAT44(uStack_664,iVar1);
      local_5c0 = local_670;
      iStack_668 = iVar1;
      local_5b0 = param_2;
      FVar11 = (ForElementType<UE::Net::FReplicationView::FView>)
               FReplicationConnections::GetReplicationView(this->Connections,param_2);
      if ((ForElementType<UE::Net::FReplicationView::FView>)&local_5a8 != FVar11) {
        iVar1 = *(int *)((longlong)FVar11 + 0x128);
        if (*(ForElementType<UE::Net::FReplicationView::FView> *)((longlong)FVar11 + 0x120) !=
            (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
          FVar11 = *(ForElementType<UE::Net::FReplicationView::FView> *)((longlong)FVar11 + 0x120);
        }
        local_5a8.Views.ArrayNum = iVar1;
        if ((iVar1 != 0) || (local_5a8.Views.ArrayMax != 0)) {
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationView::FView>_>
                    (0x48,8,iVar1,local_5a8.Views.ArrayMax,
                     (ForElementType<UE::Net::FReplicationView::FView> *)&local_5a8,iVar1,
                     &local_5a8.Views.ArrayMax);
          FVar12 = (ForElementType<UE::Net::FReplicationView::FView>)&local_5a8;
          if (local_5a8.Views.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
            FVar12 = local_5a8.Views.AllocatorInstance.SecondaryData;
          }
          ConstructItems<UE::Net::FReplicationView::FView,UE::Net::FReplicationView::FView,int>
                    ((void *)FVar12,(FView *)FVar11,iVar1);
        }
      }
      if (local_478.End < local_478.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_478,1);
      }
      *local_478.CurPos = L'\0';
      if ((*(longlong *)pFVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar3)();
        return pFVar8;
      }
      (**(code **)(**(longlong **)pFVar15 + 0x2f0))
                (*(longlong **)pFVar15,local_5d8,&local_5c8,local_698[0]);
      if ((*(longlong *)pFVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar3)();
        return pFVar8;
      }
      local_650 = *(FName *)(*(longlong *)(*(longlong *)pFVar15 + 0x10) + 0x18);
      ::FName::ToString(&local_650,&local_648);
      ::FName::ToString((FName *)(pFVar15 + 8),&local_5e8);
      __return_storage_ptr__ = local_680;
      ::FString::PrintfImpl(local_680,L"[DynamicFilter]: %s (%s)\r\t %s%s");
      if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
      }
      if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_648.Data.AllocatorInstance.Data);
      }
      if (local_5d8[0] != (void *)0x0) {
        FMemory::Free(local_5d8[0]);
      }
      if (local_5a8.Views.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
        FMemory::Free((void *)local_5a8.Views.AllocatorInstance.SecondaryData);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
    }
  }
  return __return_storage_ptr__;
}

// RemoveConnection @ 14424db80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::RemoveConnection(FReplicationFiltering *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  <lambda_1> local_38;
  
  this->bHasRemovedConnection = 1;
  pFVar2 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  if ((this->ValidConnections).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = (ulonglong)(param_1 >> 5);
  *(uint *)(pFVar2 + uVar6 * 4) = *(uint *)(pFVar2 + uVar6 * 4) & ~(1 << (param_1 & 0x1f));
  pFVar2 = (this->NewConnections).Storage.AllocatorInstance.Data;
  if ((this->NewConnections).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(pFVar2 + uVar6 * 4) = *(uint *)(pFVar2 + uVar6 * 4) & ~(1 << (param_1 & 0x1f));
  if (5 < (byte)LogIrisFiltering._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
  }
  uVar5 = 0;
  if ((int)param_1 < (this->ConnectionInfos).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FPerConnectionInfo::Deinit
            ((FPerConnectionInfo *)
             ((this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x160));
  iVar1 = (this->DynamicFilterInfos).ArrayNum;
  pFVar7 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar2 = pFVar7 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->DynamicFilterInfos).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar2) break;
    if (*(longlong *)pFVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar7 + 0x2b8))(*(longlong **)pFVar7,param_1);
    pFVar7 = pFVar7 + 0x18;
  }
  local_38.ConnectionHandle.ChildConnectionId = 0;
  local_38.__this = this;
  local_38.ConnectionId = param_1;
  local_38.ConnectionHandle.ParentConnectionId = param_1;
  FNetBitArrayHelper::
  ForAllSetBits<_UE::Net::Private::FReplicationFiltering::RemoveConnection_::__l2::<lambda_1>_&>
            ((uint *)(this->SubObjectFilterGroups).Storage.AllocatorInstance.Data,
             (this->SubObjectFilterGroups).Storage.ArrayNum,(this->SubObjectFilterGroups).BitCount,
             &local_38);
  return;
}

// RemoveFromDynamicFilter @ 14424e2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::RemoveFromDynamicFilter
          (FReplicationFiltering *this,uint param_1,uint param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FName this_00;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  FNetBitArrayView local_58;
  FString local_48;
  FString local_38;
  
  if (5 < (byte)LogIrisFiltering._0_1_) {
    uVar7 = 0;
    if ((int)param_1 < (this->ObjectIndexToDynamicFilterIndex).ArrayNum) {
      uVar7 = ~param_1 >> 0x1f;
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
    this_00 = GetFilterName(this,(uint)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_48,param_1);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  uVar7 = 0;
  if ((int)param_1 < (this->ObjectIndexToDynamicFilterIndex).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
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
  (this->ObjectIndexToDynamicFilterIndex).AllocatorInstance.Data[(int)param_1] =
       (FScriptContainerElement)0xff;
  uVar7 = 0;
  if ((int)param_1 < (this->NetObjectFilteringInfos).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
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
  pFVar3 = (this->NetObjectFilteringInfos).AllocatorInstance.Data;
  uVar7 = 0;
  if ((int)param_2 < (this->DynamicFilterInfos).ArrayNum) {
    uVar7 = ~param_2 >> 0x1f;
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
  pFVar4 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)(int)param_2 * 0x18 + 0x10;
  *(int *)pFVar2 = *(int *)pFVar2 + -1;
  pFVar4 = pFVar4 + (longlong)(int)param_2 * 0x18;
  if ((*(longlong *)pFVar4 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_58,*(uint **)(*(longlong *)pFVar4 + 0x28),*(uint *)(*(longlong *)pFVar4 + 0x38))
  ;
  if ((local_58.BitCount <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = (ulonglong)(param_1 >> 5);
  uVar7 = param_1 & 0x1f;
  local_58.Storage[uVar8] = local_58.Storage[uVar8] & ~(1 << uVar7);
  if ((*(longlong *)pFVar4 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)(**(longlong **)pFVar4 + 0x2c8))
            (*(longlong **)pFVar4,param_1,pFVar3 + (longlong)(int)param_1 * 8);
  pFVar3 = (this->DynamicFilterEnabledObjects).Storage.AllocatorInstance.Data;
  if (((this->DynamicFilterEnabledObjects).BitCount <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(uint *)(pFVar3 + uVar8 * 4) = *(uint *)(pFVar3 + uVar8 * 4) & ~(1 << uVar7);
  pFVar3 = (this->ObjectsRequiringDynamicFilterUpdate).Storage.AllocatorInstance.Data;
  if (((this->ObjectsRequiringDynamicFilterUpdate).BitCount <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(uint *)(pFVar3 + uVar8 * 4) = *(uint *)(pFVar3 + uVar8 * 4) | 1 << uVar7;
  pFVar3 = (this->HysteresisState).ObjectsToClear.Storage.AllocatorInstance.Data;
  if (((this->HysteresisState).ObjectsToClear.BitCount <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(uint *)(pFVar3 + uVar8 * 4) = *(uint *)(pFVar3 + uVar8 * 4) | 1 << uVar7;
  puVar1 = &(this->HysteresisState).ObjectsToClearCount;
  *puVar1 = *puVar1 + 1;
  return;
}

// RemoveGroupFilter @ 14424e8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::RemoveGroupFilter
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  FNetObjectGroups *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint local_res8;
  FName local_74;
  FName local_6c;
  FString local_60;
  FString local_50;
  
  bVar6 = FNetObjectGroups::IsValidGroup(this->Groups,param_1);
  if (!bVar6) {
    return;
  }
  pFVar11 = (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data;
  uVar9 = param_1.field0_0x0._0_4_;
  uVar13 = uVar9 & 0xffffff;
  if (((this->ExclusionFilterGroups).BitCount <= uVar13) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(uint *)(pFVar11 + (ulonglong)(uVar13 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0) {
    bVar6 = FNetBitArray::GetBit(&this->InclusionFilterGroups,uVar13);
    if (!bVar6) {
      return;
    }
    FNetBitArray::ClearBit(&this->DirtyInclusionFilterGroups,uVar13);
    SetGroupFilterStatus(this,param_1,Disallow);
    FNetBitArray::ClearBit(&this->InclusionFilterGroups,uVar13);
    if (((this->GroupInfos).ArrayNum <= (int)uVar13) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)((this->GroupInfos).AllocatorInstance.Data + (ulonglong)uVar13 * 4);
    if (((this->GroupInfos).ArrayNum <= (int)uVar13) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)((this->GroupInfos).AllocatorInstance.Data + (ulonglong)uVar13 * 4) = 0;
    FreePerObjectInfo(this,uVar2);
    pFVar4 = this->Groups;
    bVar6 = FNetObjectGroups::IsValidGroup(pFVar4,param_1);
    if ((bVar6) &&
       (lVar10 = (ulonglong)(uVar9 & 0xffffff) * 0x20 + *(longlong *)&pFVar4->Groups, lVar10 != 0))
    {
      puVar1 = (uint *)(lVar10 + 0x1c);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    if ((byte)LogIrisFiltering._0_1_ < 6) {
      return;
    }
    pFVar4 = this->Groups;
    bVar6 = FNetObjectGroups::IsValidGroup(pFVar4,param_1);
    if ((bVar6) &&
       (lVar10 = (ulonglong)(uVar9 & 0xffffff) * 0x20 + *(longlong *)&pFVar4->Groups, lVar10 != 0))
    {
      local_6c = *(FName *)(lVar10 + 0x10);
    }
    else {
      local_6c.ComparisonIndex.Value = 0;
      local_6c.Number = 0;
    }
    ::FName::ToString(&local_6c,&local_50);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
    local_60.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
  }
  else {
    FNetBitArray::ClearBit(&this->DirtyExclusionFilterGroups,uVar13);
    uVar2 = (this->ValidConnections).Storage.ArrayNum;
    uVar12 = 0;
    uVar3 = (this->ValidConnections).BitCount;
    pFVar11 = (this->ValidConnections).Storage.AllocatorInstance.Data;
    local_res8 = 0;
    if (uVar2 != 0) {
      do {
        uVar7 = 0xffffffff;
        if (uVar12 == uVar2 - 1) {
          uVar7 = 0xffffffff >> (-(char)uVar3 & 0x1fU);
        }
        uVar8 = local_res8;
        for (uVar7 = uVar7 & *(uint *)pFVar11; uVar7 != 0; uVar7 = uVar7 >> 1) {
          if ((uVar7 & 1) != 0) {
            SetGroupFilterStatus(this,param_1,uVar8,Allow);
          }
          uVar8 = uVar8 + 1;
        }
        local_res8 = local_res8 + 0x20;
        uVar12 = uVar12 + 1;
        pFVar11 = pFVar11 + 4;
      } while (uVar12 < uVar2);
    }
    FNetBitArray::ClearBit(&this->ExclusionFilterGroups,uVar13);
    if (((this->GroupInfos).ArrayNum <= (int)uVar13) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)((this->GroupInfos).AllocatorInstance.Data + (ulonglong)uVar13 * 4);
    if (((this->GroupInfos).ArrayNum <= (int)uVar13) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)((this->GroupInfos).AllocatorInstance.Data + (ulonglong)uVar13 * 4) = 0;
    FreePerObjectInfo(this,uVar2);
    FNetObjectGroups::RemoveExclusionFilterTrait(this->Groups,param_1);
    if ((byte)LogIrisFiltering._0_1_ < 6) {
      return;
    }
    pFVar4 = this->Groups;
    bVar6 = FNetObjectGroups::IsValidGroup(pFVar4,param_1);
    if ((bVar6) &&
       (lVar10 = (ulonglong)(uVar9 & 0xffffff) * 0x20 + *(longlong *)&pFVar4->Groups, lVar10 != 0))
    {
      local_74 = *(FName *)(lVar10 + 0x10);
    }
    else {
      local_74.ComparisonIndex.Value = 0;
      local_74.Number = 0;
    }
    ::FName::ToString(&local_74,&local_60);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveSubObjectFilter @ 14424f6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::RemoveSubObjectFilter
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1)

{
  FScriptContainerElement *pFVar1;
  FNetObjectGroups *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar10;
  uint local_res10 [2];
  FName local_res18 [2];
  FString local_38;
  uint uVar9;
  
  if (param_1.field0_0x0 != 0) {
    uVar9 = param_1.field0_0x0._0_4_;
    uVar8 = uVar9 & 0xffffff;
    pFVar1 = (this->SubObjectFilterGroups).Storage.AllocatorInstance.Data;
    if (((this->SubObjectFilterGroups).BitCount <= uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(uint *)(pFVar1 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0) {
      FNetBitArray::ClearBit(&this->SubObjectFilterGroups,uVar8);
      if (*(int *)&(this->SubObjectFilterGroupInfos).field_0x8 !=
          *(int *)&(this->SubObjectFilterGroupInfos).field_0x34) {
        puVar6 = *(undefined1 **)&(this->SubObjectFilterGroupInfos).field_0x40;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &(this->SubObjectFilterGroupInfos).field_0x38;
        }
        uVar4 = *(uint *)(puVar6 + (ulonglong)
                                   (*(int *)&(this->SubObjectFilterGroupInfos).field_0x48 - 1U &
                                   uVar8) * 4);
        if (uVar4 != 0xffffffff) {
          do {
            puVar5 = (uint *)((longlong)(int)uVar4 * 0x68 +
                             *(longlong *)&(this->SubObjectFilterGroupInfos).field_0x0);
            if (*puVar5 == uVar8) {
              puVar7 = puVar5 + 2;
              if (puVar5 == (uint *)0x0) {
                puVar7 = (uint *)0x0;
              }
              if ((puVar7 != (uint *)0x0) &&
                 (FreePerObjectInfo(this,puVar7[0x14]), local_res10[0] = uVar8,
                 *(int *)&(this->SubObjectFilterGroupInfos).field_0x8 !=
                 *(int *)&(this->SubObjectFilterGroupInfos).field_0x34)) {
                TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned_int>
                          ((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo,0>,FDefaultSetAllocator>
                            *)&this->SubObjectFilterGroupInfos,uVar8,local_res10);
              }
              break;
            }
            uVar4 = puVar5[0x18];
          } while (uVar4 != 0xffffffff);
        }
      }
      if (5 < (byte)LogIrisFiltering._0_1_) {
        this_00 = this->Groups;
        bVar3 = FNetObjectGroups::IsValidGroup(this_00,param_1);
        if ((bVar3) &&
           (lVar10 = (ulonglong)(uVar9 & 0xffffff) * 0x20 + *(longlong *)&this_00->Groups,
           lVar10 != 0)) {
          local_res18[0] = *(FName *)(lVar10 + 0x10);
        }
        else {
          local_res18[0].ComparisonIndex.Value = 0;
          local_res18[0].Number = 0;
        }
        ::FName::ToString(local_res18,&local_38);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// ResetRemovedConnections @ 14424fc00

void __thiscall
UE::Net::Private::FReplicationFiltering::ResetRemovedConnections(FReplicationFiltering *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  <lambda_1> local_res8;
  
  if (this->bHasRemovedConnection != 0) {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId817,"FReplicationFiltering_ResetRemovedConnections",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                 ,0x331);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId817);
    }
    this->bHasRemovedConnection = 0;
    local_res8.__this = this;
    if (((this->ExclusionFilterGroups).BitCount != (this->InclusionFilterGroups).BitCount) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("A.GetNumBits() == B.GetNumBits()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x555,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FNetBitArrayHelper::
    ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UE::Net::Private::FReplicationFiltering::ResetRemovedConnections_::__l2::<lambda_1>_&>
              ((uint *)(this->ExclusionFilterGroups).Storage.AllocatorInstance.Data,
               (uint *)(this->InclusionFilterGroups).Storage.AllocatorInstance.Data,
               (this->ExclusionFilterGroups).Storage.ArrayNum,(this->ExclusionFilterGroups).BitCount
               ,FNetBitArrayBase::OrOp,&local_res8);
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// SetConnectionFilterStatus @ 144251680

void __thiscall
UE::Net::Private::FReplicationFiltering::SetConnectionFilterStatus
          (FReplicationFiltering *this,FPerObjectInfo *param_1,uint param_2,ENetFilterStatus param_3
          )

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1 << ((byte)param_2 & 0x1f);
  uVar1 = 0;
  if (param_3 == Allow) {
    uVar1 = uVar2;
  }
  param_1[param_2 >> 5].ConnectionIds[0] = ~uVar2 & param_1[param_2 >> 5].ConnectionIds[0] | uVar1;
  return;
}

// SetFilter @ 144251860

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationFiltering::SetFilter
          (FReplicationFiltering *this,uint param_1,uint param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName this_00;
  FNetRefHandleManager *this_01;
  UNetObjectFilter *pUVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res18 [2];
  FName local_res20;
  uint local_e8;
  undefined1 local_e4 [4];
  uint *local_e0;
  uint *local_d8;
  FName local_d0;
  FReplicationFiltering *local_c8;
  FReplicatedObjectData *local_c0;
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *local_b8;
  FName local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_res18[0] = param_2;
  local_res20 = param_3;
  if (param_2 == 2) {
    `UE::Net::Private::FReplicationFiltering::SetFilter'::__l5::<lambda_1>::operator()(local_e4);
    return false;
  }
  if (5 < (byte)LogIrisFiltering._0_1_) {
    ::FName::ToString(&local_res20,&local_80);
    FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_90,param_1);
    this_00 = GetFilterName(this,(uint)local_a8);
    ::FName::ToString((FName *)this_00,&local_a0);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  uVar8 = local_res18[0] & 0x80000000;
  uVar6 = 0;
  if ((int)param_1 < (this->ObjectIndexToDynamicFilterIndex).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar6 = (uint)(byte)(this->ObjectIndexToDynamicFilterIndex).AllocatorInstance.Data[(int)param_1];
  if (uVar8 == 0) {
    local_e8 = 0xff;
    if (1 < local_res18[0]) {
      local_d8 = local_res18;
      `UE::Net::Private::FReplicationFiltering::SetFilter'::__l30::<lambda_3>::operator()(&local_d8)
      ;
      return false;
    }
    local_c0 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (this->NetRefHandleManager,param_1);
    this_01 = this->NetRefHandleManager;
  }
  else {
    local_e8 = 0xffffffff;
    if ((int)local_res18[0] < 0) {
      local_e8 = local_res18[0] & 0x7fffffff;
    }
    if ((uint)(this->DynamicFilterInfos).ArrayNum <= local_e8) {
      local_e0 = &local_e8;
      `UE::Net::Private::FReplicationFiltering::SetFilter'::__l26::<lambda_2>::operator()(&local_e0)
      ;
      return false;
    }
    local_c0 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (this->NetRefHandleManager,param_1);
    this_01 = this->NetRefHandleManager;
    if (local_c0->SubObjectRootIndex != 0) {
      if ((byte)LogIrisFiltering._0_1_ < 3) {
        return false;
      }
      FNetRefHandleManager::PrintObjectFromIndex(this_01,&local_70,param_1);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
      if (local_70.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return false;
      }
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
      return false;
    }
  }
  local_b8 = &this_01->ReplicatedObjectStateBuffers;
  local_b0 = local_res20;
  local_c8 = this;
  if (uVar6 == 0xff) {
    this->bHasDirtyOwnerFilter = 1;
    pFVar1 = (this->ObjectsWithOwnerFilter).Storage.AllocatorInstance.Data;
    if (((this->ObjectsWithOwnerFilter).BitCount <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2b7,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar9 = (ulonglong)(param_1 >> 5);
    *(uint *)(pFVar1 + uVar9 * 4) = *(uint *)(pFVar1 + uVar9 * 4) & ~(1 << (param_1 & 0x1f));
    pFVar1 = (this->ObjectsWithDirtyOwnerFilter).Storage.AllocatorInstance.Data;
    if (((this->ObjectsWithDirtyOwnerFilter).BitCount <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    *(uint *)(pFVar1 + uVar9 * 4) = *(uint *)(pFVar1 + uVar9 * 4) | 1 << (param_1 & 0x1f);
    FreePerObjectInfoForObject(this,param_1);
  }
  else {
    RemoveFromDynamicFilter(this,param_1,uVar6);
  }
  if (uVar8 == 0) {
    if (local_res18[0] != 0) {
      if (local_res18[0] != 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                           ,0x238,L"");
        if (!bVar3) {
          return false;
        }
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FNetBitArray::SetBit(&this->ObjectsWithOwnerFilter,param_1);
    }
  }
  else {
    bVar3 = `UE::Net::Private::FReplicationFiltering::SetFilter'::__l2::<lambda_5>::operator()
                      (&local_c8,param_1,local_e8);
    if (!bVar3) {
      if (5 < (byte)LogIrisFiltering._0_1_) {
        FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_50,param_1);
        lVar7 = (longlong)(int)local_e8;
        uVar6 = 0;
        if ((int)local_e8 < (this->DynamicFilterInfos).ArrayNum) {
          uVar6 = ~local_e8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pUVar5 = TStrongObjectPtr<UNetObjectFilter,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 ::operator->((TStrongObjectPtr<UNetObjectFilter,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                               *)((this->DynamicFilterInfos).AllocatorInstance.Data + lVar7 * 0x18))
        ;
        local_d0 = (FName)pUVar5->_padding_;
        ::FName::GetPlainNameString(&local_d0,&local_60);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      return false;
    }
  }
  return true;
}

// SetGroupFilterStatus @ 144251ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::SetGroupFilterStatus
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,FNetBitArrayView *param_2,
          ENetFilterStatus param_3)

{
  FNetObjectGroups *pFVar1;
  FStaticBasicLogRecord *pFVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ENetFilterStatus EVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  FName local_res10;
  FString local_50;
  
  bVar9 = CpuChannel->Enabled < 0;
  if (bVar9) {
    local_res10 = (FName)((ulonglong)(uint7)local_res10._1_7_ << 8);
  }
  else {
    local_res10.ComparisonIndex.Value._0_1_ = 1;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2122,"SetGroupFilterStatus",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x84a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2122);
  }
  cVar3 = !bVar9;
  uVar4 = param_1.field0_0x0._0_4_;
  uVar7 = uVar4 & 0xffffff;
  if (uVar7 - 1 < 3) {
    if ((byte)LogIrisFiltering._0_1_ < 3) goto LAB_144252212;
    pFVar1 = this->Groups;
    bVar9 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
    if ((bVar9) &&
       (lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar5 != 0)) {
      local_res10 = *(FName *)(lVar5 + 0x10);
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    ::FName::ToString(&local_res10,&local_50);
    pFVar2 = &::LOG_Static;
  }
  else {
    if (param_2->BitCount <= (this->ValidConnections).BitCount) {
      bVar9 = FNetBitArray::GetBit(&this->ExclusionFilterGroups,uVar7);
      if (bVar9) {
        uVar4 = (this->ValidConnections).BitCount;
        uVar7 = 1;
        if (1 < uVar4) {
          local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)&DAT_00000001;
          uVar8 = 2;
          do {
            if ((param_2->BitCount <= uVar7) ||
               (EVar6 = param_3,
               (param_2->Storage[(ulonglong)local_50.Data.AllocatorInstance.Data >> 5] & uVar8) == 0
               )) {
              EVar6 = (ENetFilterStatus)(param_3 != Allow);
            }
            InternalSetExclusionGroupFilterStatus(this,param_1,uVar7,EVar6);
            uVar7 = uVar7 + 1;
            local_50.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data + 1;
            uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
          } while (uVar7 < uVar4);
          cVar3 = (char)local_res10.ComparisonIndex.Value;
        }
      }
      else {
        bVar9 = FNetBitArray::GetBit(&this->InclusionFilterGroups,uVar7);
        if (bVar9) {
          uVar4 = (this->ValidConnections).BitCount;
          uVar7 = 1;
          if (1 < uVar4) {
            local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)&DAT_00000001;
            uVar8 = 2;
            do {
              if ((param_2->BitCount <= uVar7) ||
                 (EVar6 = param_3,
                 (param_2->Storage[(ulonglong)local_50.Data.AllocatorInstance.Data >> 5] & uVar8) ==
                 0)) {
                EVar6 = (ENetFilterStatus)(param_3 != Allow);
              }
              InternalSetInclusionGroupFilterStatus(this,param_1,uVar7,EVar6);
              uVar7 = uVar7 + 1;
              local_50.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data + 1;
              uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
            } while (uVar7 < uVar4);
            cVar3 = (char)local_res10.ComparisonIndex.Value;
          }
        }
        else if (2 < (byte)LogIrisFiltering._0_1_) {
          pFVar1 = this->Groups;
          bVar9 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
          if ((bVar9) &&
             (lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups,
             lVar5 != 0)) {
            local_res10 = *(FName *)(lVar5 + 0x10);
          }
          else {
            local_res10.ComparisonIndex.Value = 0;
            local_res10.Number = 0;
          }
          ::FName::ToString(&local_res10,&local_50);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
      goto LAB_144252212;
    }
    if ((byte)LogIrisFiltering._0_1_ < 3) goto LAB_144252212;
    pFVar1 = this->Groups;
    bVar9 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
    if ((bVar9) &&
       (lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar5 != 0)) {
      local_res10 = *(FName *)(lVar5 + 0x10);
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    ::FName::ToString(&local_res10,&local_50);
    pFVar2 = &::LOG_Static;
  }
  Logging::Private::BasicLog<3>(pFVar2,(FLogCategoryBase *)&LogIrisFiltering);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
LAB_144252212:
  if (cVar3 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// SetGroupFilterStatus @ 144252250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::SetGroupFilterStatus
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,uint param_2,
          ENetFilterStatus param_3)

{
  FNetObjectGroups *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  FName local_res10;
  FName local_58;
  FString local_50;
  FString local_40;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2174,"SetGroupFilterStatus",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x87e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2174);
  }
  uVar6 = param_1.field0_0x0._0_4_;
  uVar5 = uVar6 & 0xffffff;
  if (uVar5 - 1 < 3) {
    if ((byte)LogIrisFiltering._0_1_ < 3) goto LAB_14425246f;
    pFVar1 = this->Groups;
    bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
    if ((bVar4) &&
       (lVar7 = (ulonglong)(uVar6 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar7 != 0)) {
      local_res10 = *(FName *)(lVar7 + 0x10);
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    ::FName::ToString(&local_res10,&local_50);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
  }
  else {
    pFVar2 = (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data;
    if (((this->ExclusionFilterGroups).BitCount <= uVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)(pFVar2 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) {
      InternalSetExclusionGroupFilterStatus(this,param_1,param_2,param_3);
      goto LAB_14425246f;
    }
    bVar4 = FNetBitArray::GetBit(&this->InclusionFilterGroups,uVar5);
    if (bVar4) {
      InternalSetInclusionGroupFilterStatus(this,param_1,param_2,param_3);
      goto LAB_14425246f;
    }
    if ((byte)LogIrisFiltering._0_1_ < 3) goto LAB_14425246f;
    pFVar1 = this->Groups;
    bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
    if ((bVar4) &&
       (lVar7 = (ulonglong)(uVar6 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar7 != 0)) {
      local_58 = *(FName *)(lVar7 + 0x10);
    }
    else {
      local_58.ComparisonIndex.Value = 0;
      local_58.Number = 0;
    }
    ::FName::ToString(&local_58,&local_40);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
    local_50.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
LAB_14425246f:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetGroupFilterStatus @ 1442524c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::SetGroupFilterStatus
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,ENetFilterStatus param_2)

{
  FNetObjectGroups *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  FName local_res10;
  FName local_res20;
  FString local_48;
  FString local_38;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2091,"SetGroupFilterStatus",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x82b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2091);
  }
  uVar6 = param_1.field0_0x0._0_4_;
  uVar5 = uVar6 & 0xffffff;
  if (uVar5 - 1 < 3) {
    if ((byte)LogIrisFiltering._0_1_ < 3) goto LAB_1442526dd;
    pFVar1 = this->Groups;
    bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
    if ((bVar4) &&
       (lVar7 = (ulonglong)(uVar6 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar7 != 0)) {
      local_res10 = *(FName *)(lVar7 + 0x10);
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    ::FName::ToString(&local_res10,&local_48);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
  }
  else {
    pFVar2 = (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data;
    if (((this->ExclusionFilterGroups).BitCount <= uVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)(pFVar2 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) {
      uVar5 = 1;
      if (1 < (this->ValidConnections).BitCount) {
        do {
          InternalSetExclusionGroupFilterStatus(this,param_1,uVar5,param_2);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (this->ValidConnections).BitCount);
      }
      goto LAB_1442526dd;
    }
    bVar4 = FNetBitArray::GetBit(&this->InclusionFilterGroups,uVar5);
    if (bVar4) {
      InternalSetInclusionGroupFilterStatus(this,param_1,param_2);
      goto LAB_1442526dd;
    }
    if ((byte)LogIrisFiltering._0_1_ < 3) goto LAB_1442526dd;
    pFVar1 = this->Groups;
    bVar4 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
    if ((bVar4) &&
       (lVar7 = (ulonglong)(uVar6 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar7 != 0)) {
      local_res20 = *(FName *)(lVar7 + 0x10);
    }
    else {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
    }
    ::FName::ToString(&local_res20,&local_38);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
    local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_1442526dd:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// SetNetObjectListsSize @ 1442528c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::SetNetObjectListsSize
          (FReplicationFiltering *this,uint param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FNetObjectFilteringInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  
  uVar6 = param_1 + 0x1f >> 5;
  this->WordCountForObjectBitArrays = uVar6;
  (this->ObjectsWithDirtyOwnerFilter).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->ObjectsWithDirtyOwnerFilter).Storage,uVar6,No);
  uVar10 = (this->ObjectsWithDirtyOwnerFilter).BitCount;
  if (uVar10 != 0) {
    pFVar9 = (this->ObjectsWithDirtyOwnerFilter).Storage.AllocatorInstance.Data +
             (longlong)(this->ObjectsWithDirtyOwnerFilter).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar9 = *(uint *)pFVar9 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  (this->ObjectsWithDirtyOwner).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->ObjectsWithDirtyOwner).Storage,uVar6,No);
  uVar10 = (this->ObjectsWithDirtyOwner).BitCount;
  if (uVar10 != 0) {
    pFVar9 = (this->ObjectsWithDirtyOwner).Storage.AllocatorInstance.Data +
             (longlong)(this->ObjectsWithDirtyOwner).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar9 = *(uint *)pFVar9 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  (this->ObjectsWithOwnerFilter).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->ObjectsWithOwnerFilter).Storage,uVar6,No);
  uVar10 = (this->ObjectsWithOwnerFilter).BitCount;
  if (uVar10 != 0) {
    pFVar9 = (this->ObjectsWithOwnerFilter).Storage.AllocatorInstance.Data +
             (longlong)(this->ObjectsWithOwnerFilter).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar9 = *(uint *)pFVar9 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  (this->ObjectsWithPerObjectInfo).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->ObjectsWithPerObjectInfo).Storage,uVar6,No);
  uVar10 = (this->ObjectsWithPerObjectInfo).BitCount;
  if (uVar10 != 0) {
    pFVar9 = (this->ObjectsWithPerObjectInfo).Storage.AllocatorInstance.Data +
             (longlong)(this->ObjectsWithPerObjectInfo).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar9 = *(uint *)pFVar9 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  (this->DynamicFilterEnabledObjects).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->DynamicFilterEnabledObjects).Storage,uVar6,No);
  uVar10 = (this->DynamicFilterEnabledObjects).BitCount;
  if (uVar10 != 0) {
    pFVar9 = (this->DynamicFilterEnabledObjects).Storage.AllocatorInstance.Data +
             (longlong)(this->DynamicFilterEnabledObjects).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar9 = *(uint *)pFVar9 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  (this->ObjectsRequiringDynamicFilterUpdate).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->ObjectsRequiringDynamicFilterUpdate).Storage,uVar6,No);
  uVar10 = (this->ObjectsRequiringDynamicFilterUpdate).BitCount;
  if (uVar10 != 0) {
    pFVar9 = (this->ObjectsRequiringDynamicFilterUpdate).Storage.AllocatorInstance.Data +
             (longlong)(this->ObjectsRequiringDynamicFilterUpdate).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar9 = *(uint *)pFVar9 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->ObjectIndexToPerObjectInfoIndex,param_1,Default);
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->ObjectIndexToOwningConnection,param_1,Default);
  pTVar2 = &this->ObjectScopeHysteresisFrameCounts;
  iVar8 = (this->ObjectScopeHysteresisFrameCounts).ArrayNum;
  piVar1 = &(this->ObjectScopeHysteresisFrameCounts).ArrayNum;
  if (iVar8 < (int)param_1) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar8,&pTVar2->AllocatorInstance,piVar1,
                       &(this->ObjectScopeHysteresisFrameCounts).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + iVar7,0,(longlong)(int)(param_1 - iVar8));
  }
  else {
    if ((int)param_1 < 0) goto LAB_144252e1e;
    if ((int)param_1 < iVar8) {
      uVar10 = iVar8 - param_1;
      if ((int)(uVar10 | param_1) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar10 != 0) {
        pFVar9 = (pTVar2->AllocatorInstance).Data + (int)param_1;
        iVar8 = (*piVar1 - uVar10) - param_1;
        if (iVar8 != 0) {
          memmove(pFVar9,pFVar9 + (int)uVar10,(longlong)iVar8);
        }
        *piVar1 = *piVar1 - uVar10;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&pTVar2->AllocatorInstance,*piVar1,
                   &(this->ObjectScopeHysteresisFrameCounts).ArrayMax);
      }
    }
  }
  pTVar3 = &this->NetObjectFilteringInfos;
  iVar8 = (this->NetObjectFilteringInfos).ArrayNum;
  piVar1 = &(this->NetObjectFilteringInfos).ArrayNum;
  if (iVar8 < (int)param_1) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar8,&pTVar3->AllocatorInstance,piVar1,
                       &(this->NetObjectFilteringInfos).ArrayMax);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8,0,
           (longlong)(int)(param_1 - iVar8) << 3);
  }
  else {
    if ((int)param_1 < 0) goto LAB_144252e1e;
    if ((int)param_1 < iVar8) {
      uVar10 = iVar8 - param_1;
      if ((int)(uVar10 | param_1) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar10 != 0) {
        pFVar9 = (pTVar3->AllocatorInstance).Data + (longlong)(int)param_1 * 8;
        iVar8 = (*piVar1 - uVar10) - param_1;
        if (iVar8 != 0) {
          memmove(pFVar9,pFVar9 + (longlong)(int)uVar10 * 8,(longlong)iVar8 << 3);
        }
        *piVar1 = *piVar1 - uVar10;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar3->AllocatorInstance,*piVar1,&(this->NetObjectFilteringInfos).ArrayMax)
        ;
      }
    }
  }
  piVar1 = &(this->ObjectIndexToDynamicFilterIndex).ArrayNum;
  uVar10 = *piVar1;
  pTVar2 = &this->ObjectIndexToDynamicFilterIndex;
  if ((int)uVar10 < (int)param_1) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1 - uVar10,&pTVar2->AllocatorInstance,piVar1,
               &(this->ObjectIndexToDynamicFilterIndex).ArrayMax);
  }
  else {
    if ((int)param_1 < 0) {
LAB_144252e1e:
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if ((int)param_1 < (int)uVar10) {
      uVar6 = uVar10 - param_1;
      if ((int)(uVar6 | param_1) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar6 != 0) {
        pFVar9 = (pTVar2->AllocatorInstance).Data + (int)param_1;
        iVar8 = ((this->ObjectIndexToDynamicFilterIndex).ArrayNum - uVar6) - param_1;
        if (iVar8 != 0) {
          memmove(pFVar9,pFVar9 + (int)uVar6,(longlong)iVar8);
        }
        piVar1 = &(this->ObjectIndexToDynamicFilterIndex).ArrayNum;
        *piVar1 = *piVar1 - uVar6;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&pTVar2->AllocatorInstance,(this->ObjectIndexToDynamicFilterIndex).ArrayNum,
                   &(this->ObjectIndexToDynamicFilterIndex).ArrayMax);
      }
    }
  }
  if (param_1 != 0) {
    if (param_1 <= uVar10) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxInternalIndex > (uint32)PrevMaxSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                         ,0x118,L"Not expected for the array to get smaller.");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    memset((pTVar2->AllocatorInstance).Data + (int)uVar10,0xff,(ulonglong)(param_1 - uVar10));
  }
  uVar10 = this->MaxInternalNetRefIndex;
  (this->HysteresisState).ObjectsToClear.BitCount = uVar10;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->HysteresisState).ObjectsToClear.Storage,uVar10 + 0x1f >> 5,No);
  uVar10 = (this->HysteresisState).ObjectsToClear.BitCount;
  if (uVar10 != 0) {
    pFVar9 = (this->HysteresisState).ObjectsToClear.Storage.AllocatorInstance.Data +
             (longlong)(this->HysteresisState).ObjectsToClear.Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar9 = *(uint *)pFVar9 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  uVar10 = this->MaxInternalNetRefIndex;
  (this->HysteresisState).ObjectsExemptFromHysteresis.BitCount = uVar10;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->HysteresisState).ObjectsExemptFromHysteresis.Storage,uVar10 + 0x1f >> 5,No);
  uVar10 = (this->HysteresisState).ObjectsExemptFromHysteresis.BitCount;
  if (uVar10 != 0) {
    pFVar9 = (this->HysteresisState).ObjectsExemptFromHysteresis.Storage.AllocatorInstance.Data +
             (longlong)(this->HysteresisState).ObjectsExemptFromHysteresis.Storage.ArrayNum * 4 + -4
    ;
    *(uint *)pFVar9 = *(uint *)pFVar9 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  return;
}

// SetOwningConnection @ 144253410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::SetOwningConnection
          (FReplicationFiltering *this,uint param_1,uint param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((param_2 == 0) ||
     ((param_2 < (this->Connections->ValidConnections).BitCount &&
      ((*(uint *)((this->Connections->ValidConnections).Storage.AllocatorInstance.Data +
                 (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)))) {
    uVar4 = 0;
    if ((int)param_1 < (this->ObjectIndexToOwningConnection).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar1 = *(ushort *)
             ((this->ObjectIndexToOwningConnection).AllocatorInstance.Data +
             (longlong)(int)param_1 * 2);
    uVar4 = 0;
    if ((int)param_1 < (this->ObjectIndexToOwningConnection).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(short *)((this->ObjectIndexToOwningConnection).AllocatorInstance.Data +
              (longlong)(int)param_1 * 2) = (short)param_2;
    if (param_2 != uVar1) {
      this->bHasDirtyOwner = 1;
      FNetBitArray::SetBit(&this->ObjectsWithDirtyOwner,param_1);
      bVar3 = HasOwnerFilter(this,param_1);
      if (bVar3) {
        this->bHasDirtyOwnerFilter = 1;
        FNetBitArray::SetBit(&this->ObjectsWithDirtyOwnerFilter,param_1);
        return;
      }
    }
  }
  else if (2 < (byte)LogIrisFiltering._0_1_) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
    return;
  }
  return;
}

// SetPerConnectionListsSize @ 1442535a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::SetPerConnectionListsSize
          (FReplicationFiltering *this,FPerConnectionInfo *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  
  (param_1->ConnectionFilteredObjects).BitCount = param_2;
  uVar3 = param_2 + 0x1f >> 5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)param_1,uVar3,No);
  uVar2 = (param_1->ConnectionFilteredObjects).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (param_1->ConnectionFilteredObjects).Storage.AllocatorInstance.Data +
             (longlong)(param_1->ConnectionFilteredObjects).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  (param_1->GroupExcludedObjects).BitCount = param_2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(param_1->GroupExcludedObjects).Storage,uVar3,No);
  uVar2 = (param_1->GroupExcludedObjects).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (param_1->GroupExcludedObjects).Storage.AllocatorInstance.Data +
             (longlong)(param_1->GroupExcludedObjects).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  (param_1->GroupIncludedObjects).BitCount = param_2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(param_1->GroupIncludedObjects).Storage,uVar3,No);
  uVar2 = (param_1->GroupIncludedObjects).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (param_1->GroupIncludedObjects).Storage.AllocatorInstance.Data +
             (longlong)(param_1->GroupIncludedObjects).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  (param_1->ObjectsInScopeBeforeDynamicFiltering).BitCount = param_2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(param_1->ObjectsInScopeBeforeDynamicFiltering).Storage,uVar3,No);
  uVar2 = (param_1->ObjectsInScopeBeforeDynamicFiltering).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (param_1->ObjectsInScopeBeforeDynamicFiltering).Storage.AllocatorInstance.Data +
             (longlong)(param_1->ObjectsInScopeBeforeDynamicFiltering).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  (param_1->ObjectsInScope).BitCount = param_2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(param_1->ObjectsInScope).Storage,uVar3,No);
  uVar2 = (param_1->ObjectsInScope).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (param_1->ObjectsInScope).Storage.AllocatorInstance.Data +
             (longlong)(param_1->ObjectsInScope).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  if (this->bHasDynamicFilters != 0) {
    (param_1->DynamicFilteredOutObjects).BitCount = param_2;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&(param_1->DynamicFilteredOutObjects).Storage,uVar3,No);
    uVar2 = (param_1->DynamicFilteredOutObjects).BitCount;
    if (uVar2 != 0) {
      pFVar1 = (param_1->DynamicFilteredOutObjects).Storage.AllocatorInstance.Data +
               (longlong)(param_1->DynamicFilteredOutObjects).Storage.ArrayNum * 4 + -4;
      *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
    }
    (param_1->InProgressDynamicFilteredOutObjects).BitCount = param_2;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&(param_1->InProgressDynamicFilteredOutObjects).Storage,uVar3,No);
    uVar2 = (param_1->InProgressDynamicFilteredOutObjects).BitCount;
    if (uVar2 != 0) {
      pFVar1 = (param_1->InProgressDynamicFilteredOutObjects).Storage.AllocatorInstance.Data +
               (longlong)(param_1->InProgressDynamicFilteredOutObjects).Storage.ArrayNum * 4 + -4;
      *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
    }
    (param_1->DynamicFilteredOutObjectsHysteresisAdjusted).BitCount = param_2;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&(param_1->DynamicFilteredOutObjectsHysteresisAdjusted).Storage,uVar3,No);
    uVar2 = (param_1->DynamicFilteredOutObjectsHysteresisAdjusted).BitCount;
    if (uVar2 != 0) {
      pFVar1 = (param_1->DynamicFilteredOutObjectsHysteresisAdjusted).Storage.AllocatorInstance.Data
               + (longlong)(param_1->DynamicFilteredOutObjectsHysteresisAdjusted).Storage.ArrayNum *
                 4 + -4;
      *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
    }
    (param_1->HysteresisUpdater).ObjectsToUpdate.BitCount = param_2;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&(param_1->HysteresisUpdater).ObjectsToUpdate.Storage,uVar3,No);
    uVar2 = (param_1->HysteresisUpdater).ObjectsToUpdate.BitCount;
    if (uVar2 != 0) {
      pFVar1 = (param_1->HysteresisUpdater).ObjectsToUpdate.Storage.AllocatorInstance.Data +
               (longlong)(param_1->HysteresisUpdater).ObjectsToUpdate.Storage.ArrayNum * 4 + -4;
      *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
    }
  }
  return;
}

// SetPerObjectInfoFilterStatus @ 1442537d0

void __thiscall
UE::Net::Private::FReplicationFiltering::SetPerObjectInfoFilterStatus
          (FReplicationFiltering *this,FPerObjectInfo *param_1,ENetFilterStatus param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)this->PerObjectInfoStorageCountPerItem;
  uVar1 = 0;
  if (param_2 == Allow) {
    uVar1 = 0xffffffff;
  }
  if (this->PerObjectInfoStorageCountPerItem != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      param_1->ConnectionIds[0] = uVar1;
      param_1 = param_1 + 1;
    }
  }
  return;
}

// SetSubObjectFilterStatus @ 144254260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::SetSubObjectFilterStatus
          (FReplicationFiltering *this,FNetObjectGroupHandle param_1,FConnectionHandle param_2,
          ENetFilterStatus param_3)

{
  FNetObjectGroups *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FConnectionHandle FVar4;
  bool bVar5;
  uint uVar6;
  FPerSubObjectFilterGroupInfo *this_00;
  FSharedConnectionFilterStatus *pFVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint local_res10 [2];
  FConnectionHandle local_res18;
  uint local_98 [2];
  uint local_90;
  FName local_8c;
  FName local_84;
  uint local_7c;
  undefined4 uStack_78;
  ulonglong local_70;
  longlong local_68;
  FString local_60;
  FString local_50;
  uint uVar15;
  
  uVar15 = param_1.field0_0x0._0_4_;
  uVar14 = uVar15 & 0xffffff;
  local_res18 = param_2;
  if (uVar14 - 1 < 3) {
    if (2 < (byte)LogIrisFiltering._0_1_) {
      pFVar1 = this->Groups;
      bVar5 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
      if ((bVar5) &&
         (lVar13 = (ulonglong)(uVar15 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups, lVar13 != 0
         )) {
        local_8c = *(FName *)(lVar13 + 0x10);
      }
      else {
        local_8c.ComparisonIndex.Value = 0;
        local_8c.Number = 0;
      }
      ::FName::ToString(&local_8c,&local_60);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar2 = (this->ValidConnections).Storage.AllocatorInstance.Data;
    uVar11 = param_2.ParentConnectionId;
    if (((this->ValidConnections).BitCount <= uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_70 = (ulonglong)param_2 & 0xffffffff;
    local_90 = 1 << ((byte)param_2.ParentConnectionId & 0x1f);
    local_68 = (local_70 >> 5) * 4;
    if (((*(uint *)(pFVar2 + local_68) & local_90) == 0) ||
       (bVar5 = FNetBitArray::GetBit(&this->SubObjectFilterGroups,uVar14), !bVar5)) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7127879573563242598>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                         ,0x79a,
                         "ValidConnections.GetBit(ParentConnectionId) && SubObjectFilterGroups.GetBit(GroupIndex)"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if (5 < (byte)LogIrisFiltering._0_1_) {
        pFVar1 = this->Groups;
        local_res10[0] = 0;
        if (uVar11 != 0) {
          local_res10[0] = local_res18.ChildConnectionId;
        }
        bVar5 = FNetObjectGroups::IsValidGroup(pFVar1,param_1);
        if ((bVar5) &&
           (lVar13 = (ulonglong)(uVar15 & 0xffffff) * 0x20 + *(longlong *)&pFVar1->Groups,
           lVar13 != 0)) {
          local_84 = *(FName *)(lVar13 + 0x10);
        }
        else {
          local_84.ComparisonIndex.Value = 0;
          local_84.Number = 0;
        }
        ::FName::ToString(&local_84,&local_50);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      this_00 = GetPerSubObjectFilterGroupInfo(this,uVar14);
      if (uVar11 == 0) {
        if (1 < (byte)LogIrisFiltering._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
        }
      }
      else if (param_3 == Allow) {
        local_res10[0] = uVar11;
        pFVar7 = TMapBase<unsigned_int,UE::Net::FSharedConnectionFilterStatus,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>_>
                 ::FindOrAddImpl<unsigned_int_const_&>
                           ((TMapBase<unsigned_int,UE::Net::FSharedConnectionFilterStatus,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>_>
                             *)this_00,uVar11,local_res10);
        local_7c = local_res10[0];
        uStack_78 = 0;
        FVar4.ChildConnectionId = 0;
        FVar4.ParentConnectionId = local_res10[0];
        FSharedConnectionFilterStatus::SetFilterStatus(pFVar7,FVar4,Disallow);
        FSharedConnectionFilterStatus::SetFilterStatus(pFVar7,param_2,Allow);
      }
      else {
        pFVar7 = FSharedConnectionFilterStatusCollection::FindSharedConnectionFilterStatus
                           (&this_00->ConnectionFilterStatus,uVar11);
        if (((pFVar7 != (FSharedConnectionFilterStatus *)0x0) &&
            (FSharedConnectionFilterStatus::SetFilterStatus(pFVar7,param_2,param_3),
            *(int *)&(pFVar7->AllowConnections).Elements.field_0x38 ==
            *(int *)&(pFVar7->AllowConnections).Elements.field_0x5c)) &&
           (local_98[0] = uVar11,
           *(int *)&(this_00->ConnectionFilterStatus).ParentToFilterStatus.field_0x8 !=
           *(int *)&(this_00->ConnectionFilterStatus).ParentToFilterStatus.field_0x34)) {
          TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
                      *)this_00,uVar11,local_98);
        }
      }
      uVar12 = 0;
      uVar15 = uVar12;
      if (*(int *)&(this_00->ConnectionFilterStatus).ParentToFilterStatus.field_0x8 !=
          *(int *)&(this_00->ConnectionFilterStatus).ParentToFilterStatus.field_0x34) {
        puVar10 = *(undefined1 **)&(this_00->ConnectionFilterStatus).ParentToFilterStatus.field_0x40
        ;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(this_00->ConnectionFilterStatus).ParentToFilterStatus.field_0x38;
        }
        uVar6 = *(uint *)(puVar10 +
                         (*(int *)&(this_00->ConnectionFilterStatus).ParentToFilterStatus.field_0x48
                          - 1 & local_70) * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar8 = (uint *)((longlong)(int)uVar6 * 0x90 +
                             *(longlong *)&(this_00->ConnectionFilterStatus).ParentToFilterStatus);
            if (*puVar8 == uVar11) {
              puVar9 = puVar8 + 2;
              if (puVar8 == (uint *)0x0) {
                puVar9 = (uint *)0x0;
              }
              if (puVar9 != (uint *)0x0) {
                uVar15 = (uint)(puVar9[0xe] != puVar9[0x17]);
              }
              break;
            }
            uVar6 = puVar8[0x22];
          } while (uVar6 != 0xffffffff);
        }
      }
      pFVar2 = (this->PerObjectInfoStorage).AllocatorInstance.Data +
               (ulonglong)(this->PerObjectInfoStorageCountPerItem * this_00->ConnectionStateIndex) *
               4;
      if (uVar15 == 1) {
        uVar12 = local_90;
      }
      *(uint *)((longlong)&pFVar2->field_0x0 + local_68) =
           ~local_90 & *(uint *)((longlong)&pFVar2->field_0x0 + local_68) | uVar12;
      bVar5 = IsAnyConnectionFilterStatusAllowed(this,(FPerObjectInfo *)pFVar2);
      if (!bVar5) {
        FNetBitArray::SetBit(&this->DirtySubObjectFilterGroups,uVar14);
      }
    }
  }
  return;
}

// StaticChecks @ 144254870

void __cdecl UE::Net::Private::FReplicationFiltering::StaticChecks(void)

{
  return;
}

// UpdateCreationDependentParent @ 144256ce0

void __thiscall
UE::Net::Private::FReplicationFiltering::UpdateCreationDependentParent
          (FReplicationFiltering *this,uint param_1,FNetBitArrayView *param_2,
          FNetBitArrayView *param_3,bool param_4)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  TArrayView<unsigned_int_const_,int> local_80;
  TArrayView<unsigned_int_const_,int> local_70;
  FNetBitArrayView local_58;
  FNetBitArrayView local_48;
  
  puVar9 = param_3->Storage;
  if ((param_3->BitCount <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = param_1 >> 5;
  uVar8 = 1 << ((byte)param_1 & 0x1f);
  if ((puVar9[uVar1] & uVar8) != 0) {
    FNetRefHandleManager::GetCreationDependencies(this->NetRefHandleManager,&local_80,param_1);
    for (puVar9 = local_80.DataPtr; puVar9 != local_80.DataPtr + local_80.ArrayNum;
        puVar9 = puVar9 + 1) {
      uVar6 = *puVar9;
      puVar2 = param_2->Storage;
      if ((param_2->BitCount <= uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar4 = uVar6 >> 5;
      uVar7 = 1 << ((byte)uVar6 & 0x1f);
      if ((puVar2[uVar4] & uVar7) != 0) {
        puVar2 = param_3->Storage;
        if ((param_3->BitCount <= uVar6) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((puVar2[uVar4] & uVar7) != 0) {
          local_58.Storage = param_3->Storage;
          local_58.WordCount = param_3->WordCount;
          local_58.BitCount = param_3->BitCount;
          local_48.Storage = param_2->Storage;
          local_48.WordCount = param_2->WordCount;
          local_48.BitCount = param_2->BitCount;
          UpdateCreationDependentParent(this,uVar6,&local_48,&local_58,true);
        }
      }
      puVar2 = param_3->Storage;
      if ((param_3->BitCount <= uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = puVar2[uVar4];
      puVar2 = param_3->Storage;
      if ((param_3->BitCount <= param_1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2d6,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 & uVar7) == 0) {
        uVar6 = ~uVar8;
      }
      else {
        uVar6 = 0xffffffff;
      }
      puVar2[uVar1] = puVar2[uVar1] & uVar6;
    }
    puVar9 = param_3->Storage;
    if ((param_3->BitCount <= param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((!param_4) && ((uVar8 & puVar9[uVar1]) == 0)) {
      FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_70,param_1);
      for (puVar9 = local_70.DataPtr; puVar9 != local_70.DataPtr + local_70.ArrayNum;
          puVar9 = puVar9 + 1) {
        uVar1 = *puVar9;
        puVar2 = param_3->Storage;
        if ((param_3->BitCount <= uVar1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2b7,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar2[uVar1 >> 5] = puVar2[uVar1 >> 5] & ~(1 << (uVar1 & 0x1f));
      }
    }
  }
  return;
}

// UpdateDynamicFiltering @ 144257750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Net::Private::FReplicationFiltering::UpdateDynamicFiltering(FReplicationFiltering *this)

{
  FNetBitArray *pFVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement FVar5;
  FNetRefHandleManager *pFVar6;
  void *_Dst;
  FReplicationConnections *pFVar7;
  FNetHandle_u_0 FVar8;
  UReplicationSystem *this_00;
  longlong *plVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  FReplicationFiltering *pFVar21;
  bool bVar22;
  ENetFilterStatus EVar23;
  longlong lVar24;
  FReplicationSystemInternal *pFVar25;
  FDependencyInfo *pFVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  char *pcVar31;
  uint *puVar32;
  int *piVar33;
  uint uVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  FScriptContainerElement *pFVar38;
  uint *puVar39;
  undefined1 *puVar40;
  uint *puVar41;
  FNetHandle_u_0 FVar42;
  ForElementType<unsigned_int> FVar43;
  ulonglong uVar44;
  undefined1 *puVar45;
  char cVar46;
  uint uVar47;
  uint uVar48;
  FScriptContainerElement *pFVar49;
  ushort uVar50;
  uint *puVar51;
  int iVar52;
  int iVar53;
  FObjectScopeHysteresisUpdater *pFVar54;
  FScriptContainerElement *pFVar55;
  uint uVar56;
  undefined1 *puVar57;
  ForElementType<unsigned_int> FVar58;
  ForAnyElementType FVar59;
  bool bVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auStackY_1418 [32];
  char local_13c8 [8];
  FReplicationFiltering *local_13c0;
  uint local_13b8;
  bool local_13b4;
  char local_13b3;
  uint local_13b0;
  FNetBitArrayView local_13a8;
  uint local_1398 [2];
  FScriptContainerElement *local_1390;
  undefined1 local_1388;
  undefined1 local_1387;
  undefined1 local_1386;
  undefined1 local_1385;
  undefined1 local_1384;
  undefined1 local_1383;
  undefined1 local_1382;
  undefined1 local_1381;
  undefined1 local_1380 [8];
  uint *local_1378;
  ForElementType<unsigned_int> local_1370;
  uint local_1368 [2];
  ForElementType<unsigned_int> local_1360;
  FObjectScopeHysteresisUpdater *local_1358;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_1350;
  uint *local_1340;
  ForElementType<unsigned_int> local_1338;
  uint *local_1330;
  FNetBitArrayView local_1328;
  uint *local_1318;
  uint uStack_1310;
  uint uStack_130c;
  TArrayView<unsigned_int_const_,int> local_1308;
  TArrayView<unsigned_int_const_,int> local_12f8;
  TArrayView<unsigned_int_const_,int> local_12e8;
  TArrayView<unsigned_int_const_,int> local_12d8;
  TArrayView<unsigned_int_const_,int> local_12c8;
  TArrayView<unsigned_int_const_,int> local_12b8;
  int local_12a8;
  int local_12a4;
  uint *local_12a0;
  uint *local_1298;
  uint *local_1290;
  uint *local_1288;
  FNetBitArrayView local_1278;
  FNetBitArrayView local_1268;
  <lambda_1> local_1258;
  FNetBitArrayView local_1240;
  FNetBitArrayView local_1228;
  FNetBitArrayView local_1218;
  FNetBitArrayView local_1208;
  FNetBitArrayView local_11f8;
  uint *local_11e8;
  undefined8 uStack_11e0;
  FScriptContainerElement *local_11d8;
  int local_11d0;
  undefined8 local_11c8;
  uint local_11c0;
  undefined1 local_11b8 [288];
  undefined1 *local_1098;
  int local_1090;
  undefined4 local_108c;
  FNetBitArrayView local_1088;
  ForElementType<unsigned_int> local_1078;
  uint local_d70;
  uint local_d6c;
  ForElementType<unsigned_int> local_d68;
  uint local_a60;
  uint local_a5c;
  ForElementType<unsigned_int> local_a58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  puVar45 = auStackY_1418;
  local_48 = __security_cookie.value ^ (ulonglong)local_13c8;
  bVar60 = CpuChannel->Enabled < 0;
  local_13c0 = this;
  if (bVar60) {
    local_13b3 = '\0';
  }
  else {
    local_13b3 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1339,"FReplicationFiltering_UpdateDynamicFiltering",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x53b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1339);
  }
  puVar32 = (uint *)0x0;
  iVar53 = 0;
  local_4c = 0x280;
  local_a58.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50 = 0;
  local_d68.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a60 = 0;
  local_a5c = 0xc0;
  local_1078.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d70 = 0;
  local_d6c = 0xc0;
  local_1350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1350.ArrayNum = 0;
  local_1350.ArrayMax = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x100,&local_1350.AllocatorInstance,0,&local_1350.ArrayMax);
  uVar35 = this->WordCountForObjectBitArrays;
  lVar24 = (ulonglong)uVar35 * 4;
  if ((ulonglong)uVar35 == 0) {
    local_1340 = (uint *)0x0;
  }
  else {
    uVar36 = lVar24 + 0x1e;
    if (uVar36 <= lVar24 + 0xfU) {
      uVar36 = 0xffffffffffffff0;
    }
    puVar45 = auStackY_1418 + -(uVar36 & 0xfffffffffffffff0);
    local_1340 = (uint *)((longlong)&local_13c0 + -(uVar36 & 0xfffffffffffffff0));
  }
  uStack_130c = this->MaxInternalNetRefIndex;
  uStack_1310 = uStack_130c + 0x1f >> 5;
  pFVar6 = this->NetRefHandleManager;
  local_1318 = &uStack_130c;
  if (uStack_130c != 0) {
    local_1318 = local_1340;
  }
  *(undefined8 *)(puVar45 + -8) = 0x1442578fe;
  FNetBitArray::GetDataChecked(&pFVar6->SubObjectInternalIndices,uVar35);
  uVar35 = this->WordCountForObjectBitArrays;
  *(undefined8 *)(puVar45 + -8) = 0x144257910;
  local_12a0 = FNetBitArray::GetDataChecked(&this->ObjectsRequiringDynamicFilterUpdate,uVar35);
  uVar35 = (this->NetRefHandleManager->DependentObjectInternalIndices).BitCount;
  pFVar49 = (this->NetRefHandleManager->DependentObjectInternalIndices).Storage.AllocatorInstance.
            Data;
  *(undefined8 *)(puVar45 + -8) = 0x144257936;
  FNetBitArrayView::FNetBitArrayView(&local_1268,(uint *)pFVar49,uVar35);
  uVar35 = this->WordCountForObjectBitArrays;
  if (local_1268.WordCount < uVar35) {
    *(uint *)(puVar45 + 0x28) = local_1268.WordCount;
    *(uint *)(puVar45 + 0x20) = uVar35;
    *(undefined8 *)(puVar45 + -8) = 0x14425796d;
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("MaxWordIterationCount <= WordCount",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                        ,0x1b0,
                        L"MaxWordIterationCount (%u) is higher than this NetBitArrayView word count (%u). Out of Bounds memory access will occur."
                       );
    if (bVar22) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  local_1288 = local_1268.Storage;
  uVar35 = (this->NetRefHandleManager->ObjectsWithCreationDependencies).BitCount;
  pFVar49 = (this->NetRefHandleManager->ObjectsWithCreationDependencies).Storage.AllocatorInstance.
            Data;
  *(undefined8 *)(puVar45 + -8) = 0x1442579a0;
  FNetBitArrayView::FNetBitArrayView(&local_1328,(uint *)pFVar49,uVar35);
  uVar35 = this->WordCountForObjectBitArrays;
  if (local_1328.WordCount < uVar35) {
    *(uint *)(puVar45 + 0x28) = local_1328.WordCount;
    *(uint *)(puVar45 + 0x20) = uVar35;
    *(undefined8 *)(puVar45 + -8) = 0x1442579d7;
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("MaxWordIterationCount <= WordCount",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                        ,0x1b0,
                        L"MaxWordIterationCount (%u) is higher than this NetBitArrayView word count (%u). Out of Bounds memory access will occur."
                       );
    if (bVar22) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar35 = (this->ValidConnections).BitCount;
  local_1298 = local_1328.Storage;
  lVar24 = (ulonglong)uVar35 * 4;
  puVar39 = puVar32;
  if ((ulonglong)uVar35 != 0) {
    uVar36 = lVar24 + 0x1e;
    if (uVar36 <= lVar24 + 0xfU) {
      uVar36 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar45 + -8) = 0x144257a1c;
    puVar57 = puVar45 + -(uVar36 & 0xfffffffffffffff0) + 0x5f;
    puVar45 = puVar45 + -(uVar36 & 0xfffffffffffffff0);
    puVar39 = (uint *)((ulonglong)puVar57 & 0xfffffffffffffff0);
  }
  uVar29 = (this->ValidConnections).Storage.ArrayNum;
  pFVar49 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  puVar51 = puVar32;
  puVar27 = puVar32;
  if (uVar29 != 0) {
    do {
      iVar52 = (int)puVar27;
      uVar28 = 0xffffffff;
      if ((int)puVar51 == uVar29 - 1) {
        uVar28 = 0xffffffff >> (-(char)uVar35 & 0x1fU);
      }
      for (uVar28 = uVar28 & *(uint *)pFVar49; iVar53 = (int)puVar32, uVar28 != 0;
          uVar28 = uVar28 >> 1) {
        puVar41 = puVar32;
        if ((uVar28 & 1) != 0) {
          puVar41 = (uint *)(ulonglong)(iVar53 + 1);
          puVar39[(longlong)puVar32] = (uint)puVar27;
        }
        puVar27 = (uint *)(ulonglong)((uint)puVar27 + 1);
        puVar32 = puVar41;
      }
      uVar28 = (int)puVar51 + 1;
      puVar51 = (uint *)(ulonglong)uVar28;
      pFVar49 = pFVar49 + 4;
      puVar27 = (uint *)(ulonglong)(iVar52 + 0x20);
    } while (uVar28 < uVar29);
  }
  local_1330 = puVar39;
  if (iVar53 < 0) {
    *(undefined8 *)(puVar45 + -8) = 0x144257aba;
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar22) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  local_1290 = puVar39 + iVar53;
  cVar46 = !bVar60;
  if (puVar39 != local_1290) {
    do {
      uVar35 = *puVar39;
      lVar24 = (longlong)(int)uVar35;
      puVar32 = (uint *)0x0;
      iVar53 = (this->ConnectionInfos).ArrayNum;
      uVar28 = ~uVar35 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar35 < iVar53) {
        uVar29 = uVar28;
      }
      local_13b8 = uVar35;
      if (uVar29 == 0) {
        *(longlong *)(puVar45 + 0x28) = (longlong)iVar53;
        *(longlong *)(puVar45 + 0x20) = lVar24;
        *(undefined8 *)(puVar45 + -8) = 0x144257b2d;
        bVar60 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar60) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      FVar58 = (ForElementType<unsigned_int>)(lVar24 * 0x160);
      pFVar49 = (this->ConnectionInfos).AllocatorInstance.Data + (longlong)FVar58;
      iVar53 = *(int *)(pFVar49 + 0x98);
      _Dst = *(void **)(pFVar49 + 0x90);
      local_1390 = pFVar49;
      local_1370 = FVar58;
      *(undefined8 *)(puVar45 + -8) = 0x144257b66;
      memset(_Dst,0,(longlong)iVar53 << 2);
      if (this->bHasDynamicFilters != 0) {
        uVar29 = this->WordCountForObjectBitArrays;
        if (*(int *)(pFVar49 + 0x98) < (int)uVar29) {
          *(int *)(puVar45 + 0x28) = *(int *)(pFVar49 + 0x98);
          *(uint *)(puVar45 + 0x20) = uVar29;
          *(undefined8 *)(puVar45 + -8) = 0x144257bac;
          bVar60 = ::FDebug::CheckVerifyFailedImpl2
                             ("(int32)MaxWordIterationCount <= Storage.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x8e,
                              L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                             );
          if (bVar60) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        puVar32 = *(uint **)(pFVar49 + 0x90);
      }
      local_1378 = puVar32;
      local_13b0 = (local_13c0->DynamicFilterInfos).ArrayNum;
      uVar36 = (ulonglong)(int)local_13b0;
      pFVar49 = (local_13c0->DynamicFilterInfos).AllocatorInstance.Data;
      FVar43 = (ForElementType<unsigned_int>)(pFVar49 + uVar36 * 0x18);
      local_1360 = FVar43;
      while( true ) {
        puVar32 = local_1378;
        if ((local_13c0->DynamicFilterInfos).ArrayNum != (int)uVar36) {
          local_1388 = 0;
          *(undefined8 *)(puVar45 + -8) = 0x144257bf9;
          `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_1388);
        }
        pFVar55 = local_1390;
        if ((ForElementType<unsigned_int>)pFVar49 == FVar43) break;
        if (*(int *)(pFVar49 + 0x10) != 0) {
          iVar53 = (local_13c0->NetObjectFilteringInfos).ArrayNum;
          pFVar55 = (local_13c0->NetObjectFilteringInfos).AllocatorInstance.Data;
          local_11e8 = local_1318;
          uStack_11e0 = CONCAT44(uStack_130c,uStack_1310);
          if (iVar53 < 0) {
            *(undefined8 *)(puVar45 + -8) = 0x144257c51;
            bVar60 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L"");
            if (bVar60) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          local_11d0 = iVar53;
          pFVar7 = local_13c0->Connections;
          local_11d8 = pFVar55;
          local_11c8 = 0;
          local_11c0 = uVar35;
          iVar53 = (pFVar7->ReplicationViews).ArrayNum;
          uVar29 = 0;
          if ((int)uVar35 < iVar53) {
            uVar29 = uVar28;
          }
          if (uVar29 == 0) {
            *(longlong *)(puVar45 + 0x28) = (longlong)iVar53;
            *(longlong *)(puVar45 + 0x20) = lVar24;
            *(undefined8 *)(puVar45 + -8) = 0x144257cb5;
            bVar60 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar60) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          local_1098 = (undefined1 *)0x0;
          FVar42 = (FNetHandle_u_0)
                   ((pFVar7->ReplicationViews).AllocatorInstance.Data + lVar24 * 0x130);
          FVar8 = (((FView *)((longlong)FVar42 + 0x120))->Controller).field0_0x0;
          iVar53 = (((FView *)((longlong)FVar42 + 0x120))->ViewTarget).field0_0x0.Value.ObjectIndex;
          local_1090 = iVar53;
          if (FVar8 != (FNetHandle_u_0)0x0) {
            FVar42 = FVar8;
          }
          if (iVar53 == 0) {
            local_108c = 4;
          }
          else {
            *(undefined4 **)(puVar45 + 0x30) = &local_108c;
            *(int *)(puVar45 + 0x28) = iVar53;
            *(undefined1 **)(puVar45 + 0x20) = local_11b8;
            *(undefined8 *)(puVar45 + -8) = 0x144257d2b;
            Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationView::FView>_>
                      (0x48,8,iVar53,0,
                       *(ForElementType<UE::Net::FReplicationView::FView> **)(puVar45 + 0x20),
                       *(int *)(puVar45 + 0x28),*(int **)(puVar45 + 0x30));
            puVar57 = local_11b8;
            if (local_1098 != (undefined1 *)0x0) {
              puVar57 = local_1098;
            }
            *(undefined8 *)(puVar45 + -8) = 0x144257d4b;
            ConstructItems<UE::Net::FReplicationView::FView,UE::Net::FReplicationView::FView,int>
                      (puVar57,(FView *)FVar42,iVar53);
          }
          pFVar21 = local_13c0;
          this_00 = (local_13c0->ReplicationSystem).field0_0x0.DebugPtr;
          *(undefined8 *)(puVar45 + -8) = 0x144257d58;
          pFVar25 = UReplicationSystem::GetReplicationSystemInternal(this_00);
          iVar53 = (pFVar25->Filtering).ConnectionInfos.ArrayNum;
          uVar29 = 0;
          if ((int)uVar35 < iVar53) {
            uVar29 = uVar28;
          }
          if (uVar29 == 0) {
            *(longlong *)(puVar45 + 0x28) = (longlong)iVar53;
            *(longlong *)(puVar45 + 0x20) = lVar24;
            *(undefined8 *)(puVar45 + -8) = 0x144257d98;
            bVar60 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar60) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          pFVar55 = (pFVar25->Filtering).ConnectionInfos.AllocatorInstance.Data;
          uVar29 = *(uint *)(pFVar55 + (longlong)FVar58 + 0x28);
          puVar39 = *(uint **)(pFVar55 + (longlong)FVar58 + 0x18);
          *(undefined8 *)(puVar45 + -8) = 0x144257dbb;
          FNetBitArrayView::FNetBitArrayView(&local_1088,puVar39,uVar29);
          if (*(longlong *)pFVar49 == 0) {
            *(undefined8 *)(puVar45 + -8) = 0x144257de1;
            bVar60 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                ,0x67,L"");
            if (bVar60) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          plVar9 = *(longlong **)pFVar49;
          pcVar10 = *(code **)(*plVar9 + 0x2e0);
          *(undefined8 *)(puVar45 + -8) = 0x144257dfa;
          (*pcVar10)(plVar9,&local_11e8);
          if (*(longlong *)pFVar49 == 0) {
            *(undefined8 *)(puVar45 + -8) = 0x144257e20;
            bVar60 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                ,0x67,L"");
            if (bVar60) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          uVar29 = *(uint *)(*(longlong *)pFVar49 + 0x38);
          puVar39 = *(uint **)(*(longlong *)pFVar49 + 0x28);
          *(undefined8 *)(puVar45 + -8) = 0x144257e3d;
          FNetBitArrayView::FNetBitArrayView(&local_1240,puVar39,uVar29);
          puVar57 = local_1098;
          uVar44 = (ulonglong)pFVar21->WordCountForObjectBitArrays;
          uVar36 = 0;
          if (uVar44 != 0) {
            uVar37 = uVar36;
            if (((0xf < uVar44) &&
                ((local_1340 + (uVar44 - 1) < puVar32 || (puVar32 + (uVar44 - 1) < local_1340)))) &&
               ((local_1240.Storage + (uVar44 - 1) < puVar32 ||
                (uVar37 = 0, puVar32 + (uVar44 - 1) < local_1240.Storage)))) {
              lVar30 = (longlong)local_1340 - (longlong)puVar32;
              puVar39 = puVar32 + 4;
              do {
                puVar51 = (uint *)((longlong)puVar39 + lVar30);
                uVar36 = uVar36 + 0x10;
                puVar41 = (uint *)((longlong)local_1240.Storage + (-0x10 - (longlong)puVar32) +
                                  (longlong)puVar39);
                uVar29 = puVar41[1];
                uVar47 = puVar41[2];
                uVar48 = puVar41[3];
                puVar27 = (uint *)((longlong)local_1240.Storage + (0x10 - (longlong)puVar32) +
                                  (longlong)puVar39);
                uVar56 = *puVar27;
                uVar34 = puVar27[1];
                uVar11 = puVar27[2];
                uVar12 = puVar27[3];
                puVar2 = (uint *)(lVar30 + -0x10 + (longlong)puVar39);
                uVar13 = puVar2[1];
                uVar14 = puVar2[2];
                uVar15 = puVar2[3];
                puVar27 = puVar39 + 0x10;
                puVar39[-4] = ~*puVar2 & *puVar41 | ~*puVar41 & puVar39[-4];
                puVar39[-3] = ~uVar13 & uVar29 | ~uVar29 & puVar39[-3];
                puVar39[-2] = ~uVar14 & uVar47 | ~uVar47 & puVar39[-2];
                puVar39[-1] = ~uVar15 & uVar48 | ~uVar48 & puVar39[-1];
                puVar41 = (uint *)((longlong)puVar51 +
                                  ((longlong)local_1240.Storage - (longlong)local_1340));
                uVar29 = puVar41[1];
                uVar47 = puVar41[2];
                uVar48 = puVar41[3];
                uVar13 = puVar51[1];
                uVar14 = puVar51[2];
                uVar15 = puVar51[3];
                puVar2 = (uint *)(lVar30 + -0x30 + (longlong)puVar27);
                uVar16 = *puVar2;
                uVar17 = puVar2[1];
                uVar18 = puVar2[2];
                uVar19 = puVar2[3];
                *puVar39 = ~*puVar41 & *puVar39 | ~*puVar51 & *puVar41;
                puVar39[1] = ~uVar29 & puVar39[1] | ~uVar13 & uVar29;
                puVar39[2] = ~uVar47 & puVar39[2] | ~uVar14 & uVar47;
                puVar39[3] = ~uVar48 & puVar39[3] | ~uVar15 & uVar48;
                puVar51 = (uint *)((longlong)local_1240.Storage + (-0x20 - (longlong)puVar32) +
                                  (longlong)puVar27);
                uVar29 = *puVar51;
                uVar47 = puVar51[1];
                uVar48 = puVar51[2];
                uVar13 = puVar51[3];
                puVar39[4] = ~uVar16 & uVar56 | ~uVar56 & puVar39[4];
                puVar39[5] = ~uVar17 & uVar34 | ~uVar34 & puVar39[5];
                puVar39[6] = ~uVar18 & uVar11 | ~uVar11 & puVar39[6];
                puVar39[7] = ~uVar19 & uVar12 | ~uVar12 & puVar39[7];
                puVar51 = (uint *)(lVar30 + -0x20 + (longlong)puVar27);
                auVar61._0_4_ = ~*puVar51 & uVar29;
                auVar61._4_4_ = ~puVar51[1] & uVar47;
                auVar61._8_4_ = ~puVar51[2] & uVar48;
                auVar61._12_4_ = ~puVar51[3] & uVar13;
                auVar63._0_4_ = ~uVar29 & puVar39[8];
                auVar63._4_4_ = ~uVar47 & puVar39[9];
                auVar63._8_4_ = ~uVar48 & puVar39[10];
                auVar63._12_4_ = ~uVar13 & puVar39[0xb];
                *(undefined1 (*) [16])(puVar39 + 8) = auVar61 | auVar63;
                puVar39 = puVar27;
              } while (uVar36 != (uVar44 & 0xfffffffffffffff0));
              uVar37 = uVar36;
              if (uVar36 == uVar44) goto LAB_144257fb6;
            }
            lVar30 = uVar44 - uVar37;
            puVar32 = local_1378 + uVar37;
            do {
              uVar29 = *(uint *)((longlong)local_1240.Storage +
                                (longlong)puVar32 +
                                (((longlong)local_1340 - (longlong)local_1378) -
                                (longlong)local_1340));
              *puVar32 = ~*(uint *)((longlong)puVar32 +
                                   ((longlong)local_1340 - (longlong)local_1378)) & uVar29 |
                         ~uVar29 & *puVar32;
              lVar30 = lVar30 + -1;
              puVar32 = puVar32 + 1;
            } while (lVar30 != 0);
          }
LAB_144257fb6:
          FVar43 = local_1360;
          FVar58 = local_1370;
          if (local_1098 != (undefined1 *)0x0) {
            *(undefined8 *)(puVar45 + -8) = 0x144257fc7;
            FMemory::Free(puVar57);
            FVar43 = local_1360;
            FVar58 = local_1370;
          }
        }
        uVar36 = (ulonglong)local_13b0;
        pFVar49 = pFVar49 + 0x18;
      }
      uVar35 = *(uint *)(local_1390 + 0x88);
      puVar32 = *(uint **)(local_1390 + 0x78);
      *(undefined8 *)(puVar45 + -8) = 0x144257ffe;
      FNetBitArrayView::FNetBitArrayView(&local_11f8,puVar32,uVar35);
      uVar35 = *(uint *)(pFVar55 + 0xb8);
      puVar32 = *(uint **)(pFVar55 + 0xa8);
      *(undefined8 *)(puVar45 + -8) = 0x144258015;
      FNetBitArrayView::FNetBitArrayView(&local_13a8,puVar32,uVar35);
      bVar60 = CpuChannel->Enabled < 0;
      if (bVar60) {
        local_13c8[0] = '\0';
      }
      else {
        local_13c8[0] = '\x01';
        *(undefined8 *)(puVar45 + -8) = 0x14425804b;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1425,"FReplicationFiltering_OnFilterStatusChanged",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                   ,0x591);
        *(undefined8 *)(puVar45 + -8) = 0x144258056;
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1425);
      }
      local_50 = 0;
      if (((int)local_4c < 0) && (local_4c != 0)) {
        *(uint **)(puVar45 + 0x28) = &local_4c;
        *(undefined4 *)(puVar45 + 0x20) = 0;
        *(undefined8 *)(puVar45 + -8) = 0x14425809a;
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<640,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,0,&local_a58,*(int *)(puVar45 + 0x20),*(int **)(puVar45 + 0x28));
      }
      local_d70 = 0;
      if (((int)local_d6c < 0) && (local_d6c != 0)) {
        *(uint **)(puVar45 + 0x28) = &local_d6c;
        *(undefined4 *)(puVar45 + 0x20) = 0;
        *(undefined8 *)(puVar45 + -8) = 0x1442580d4;
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<192,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,0,&local_1078,*(int *)(puVar45 + 0x20),*(int **)(puVar45 + 0x28));
      }
      local_a60 = 0;
      if (((int)local_a5c < 0) && (local_a5c != 0)) {
        *(uint **)(puVar45 + 0x28) = &local_a5c;
        *(undefined4 *)(puVar45 + 0x20) = 0;
        *(undefined8 *)(puVar45 + -8) = 0x14425810e;
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<192,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,0,&local_d68,*(int *)(puVar45 + 0x20),*(int **)(puVar45 + 0x28));
      }
      uVar36 = 0;
      local_1360 = *(ForElementType<unsigned_int> *)(pFVar55 + 0x78);
      local_1358 = *(FObjectScopeHysteresisUpdater **)(pFVar55 + 0x48);
      local_1370 = (ForElementType<unsigned_int>)
                   (local_13c0->DynamicFilterEnabledObjects).Storage.AllocatorInstance.Data;
      uVar35 = local_13c0->WordCountForObjectBitArrays;
      cVar46 = !bVar60;
      if (uVar35 != 0) {
        iVar53 = 0;
        do {
          uVar29 = local_1298[uVar36];
          uVar48 = ~*(uint *)((longlong)&(local_1358->FrameCounters).AllocatorInstance.Data +
                             uVar36 * 4) & local_1378[uVar36];
          uVar28 = local_1288[uVar36];
          uVar47 = (uVar48 ^ *(uint *)((longlong)local_1360 + uVar36 * 4) | ~uVar29 & uVar28) &
                   *(uint *)((longlong)local_1370 + uVar36 * 4) | local_12a0[uVar36];
          if (uVar47 != 0) {
            *(uint *)((longlong)local_1360 + uVar36 * 4) = uVar48;
            uVar56 = uVar47 & uVar48;
            FVar58 = local_1078.SecondaryData;
            while (local_1078.SecondaryData = FVar58, uVar56 != 0) {
              uVar34 = -uVar56 & uVar56;
              uVar56 = uVar56 & uVar56 - 1;
              local_12a8 = 0;
              if (uVar34 != 0) {
                for (; (uVar34 >> local_12a8 & 1) == 0; local_12a8 = local_12a8 + 1) {
                }
              }
              iVar52 = 0x20;
              if (uVar34 != 0) {
                iVar52 = local_12a8;
              }
              local_1398[0] = iVar52 + iVar53;
              if ((~uVar29 & uVar28 & uVar34) == 0) {
                FVar58 = (ForElementType<unsigned_int>)&local_a58;
                if (local_a58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar58 = local_a58.SecondaryData;
                }
                if ((ulonglong)FVar58 <= local_1398) {
                  FVar58 = (ForElementType<unsigned_int>)&local_a58;
                  if (local_a58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                    FVar58 = local_a58.SecondaryData;
                  }
                  if ((FScriptContainerElement *)local_1398 <
                      (FScriptContainerElement *)((longlong)FVar58 + (longlong)(int)local_4c * 4)) {
                    *(undefined8 *)(puVar45 + 0x40) = 4;
                    *(longlong *)(puVar45 + 0x38) = (longlong)(int)local_50;
                    *(longlong *)(puVar45 + 0x30) = (longlong)(int)local_4c;
                    FVar58 = (ForElementType<unsigned_int>)&local_a58;
                    if (local_a58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                      FVar58 = local_a58.SecondaryData;
                    }
                    *(ForElementType<unsigned_int> *)(puVar45 + 0x28) = FVar58;
                    *(uint **)(puVar45 + 0x20) = local_1398;
                    *(undefined8 *)(puVar45 + -8) = 0x14425834e;
                    bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    if (bVar60) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                }
                uVar34 = local_50;
                if (local_50 == local_4c) {
                  *(undefined8 *)(puVar45 + -8) = 0x144258381;
                  uVar34 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<640,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                     (0x404,&local_a58,(int *)&local_4c);
                }
                local_50 = uVar34 + 1;
                puVar57 = &stack0x00000998;
                FVar58 = local_a58.SecondaryData;
              }
              else {
                FVar43 = (ForElementType<unsigned_int>)&local_1078;
                if (FVar58 != (ForElementType<unsigned_int>)0x0) {
                  FVar43 = FVar58;
                }
                if ((ulonglong)FVar43 <= local_1398) {
                  lVar24 = (longlong)(int)local_d6c;
                  FVar43 = (ForElementType<unsigned_int>)&local_1078;
                  if (FVar58 != (ForElementType<unsigned_int>)0x0) {
                    FVar43 = FVar58;
                  }
                  if ((FScriptContainerElement *)local_1398 <
                      (FScriptContainerElement *)((longlong)FVar43 + lVar24 * 4)) {
                    lVar30 = (longlong)(int)local_d70;
                    *(undefined8 *)(puVar45 + 0x40) = 4;
                    *(longlong *)(puVar45 + 0x38) = lVar30;
                    *(longlong *)(puVar45 + 0x30) = lVar24;
                    FVar43 = (ForElementType<unsigned_int>)&local_1078;
                    if (FVar58 != (ForElementType<unsigned_int>)0x0) {
                      FVar43 = FVar58;
                    }
                    *(ForElementType<unsigned_int> *)(puVar45 + 0x28) = FVar43;
                    *(uint **)(puVar45 + 0x20) = local_1398;
                    *(undefined8 *)(puVar45 + -8) = 0x144258269;
                    bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    if (bVar60) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                }
                if (local_d70 == local_d6c) {
                  *(undefined8 *)(puVar45 + -8) = 0x14425829c;
                  local_d70 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<192,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                        (0x404,&local_1078,(int *)&local_d6c);
                }
                puVar57 = &stack0x00000378;
                FVar58 = local_1078.SecondaryData;
                uVar34 = local_d70;
                local_d70 = local_d70 + 1;
              }
              FVar43 = (ForElementType<unsigned_int>)((longlong)puVar57 + -0x13f0);
              if (FVar58 != (ForElementType<unsigned_int>)0x0) {
                FVar43 = FVar58;
              }
              *(uint *)((longlong)FVar43 + (longlong)(int)uVar34 * 4) = local_1398[0];
              FVar58 = local_1078.SecondaryData;
            }
            uVar47 = ~uVar48 & uVar47;
            FVar58 = local_d68.SecondaryData;
            while (local_d68.SecondaryData = FVar58, uVar47 != 0) {
              uVar29 = -uVar47 & uVar47;
              uVar47 = uVar47 & uVar47 - 1;
              local_12a4 = 0;
              if (uVar29 != 0) {
                for (; (uVar29 >> local_12a4 & 1) == 0; local_12a4 = local_12a4 + 1) {
                }
              }
              iVar52 = 0x20;
              if (uVar29 != 0) {
                iVar52 = local_12a4;
              }
              local_1368[0] = iVar52 + iVar53;
              FVar43 = (ForElementType<unsigned_int>)&local_d68;
              if (FVar58 != (ForElementType<unsigned_int>)0x0) {
                FVar43 = FVar58;
              }
              if ((ulonglong)FVar43 <= local_1368) {
                lVar24 = (longlong)(int)local_a5c;
                FVar43 = (ForElementType<unsigned_int>)&local_d68;
                if (FVar58 != (ForElementType<unsigned_int>)0x0) {
                  FVar43 = FVar58;
                }
                if (local_1368 < (uint *)((longlong)FVar43 + lVar24 * 4)) {
                  lVar30 = (longlong)(int)local_a60;
                  *(undefined8 *)(puVar45 + 0x40) = 4;
                  *(longlong *)(puVar45 + 0x38) = lVar30;
                  *(longlong *)(puVar45 + 0x30) = lVar24;
                  FVar43 = (ForElementType<unsigned_int>)&local_d68;
                  if (FVar58 != (ForElementType<unsigned_int>)0x0) {
                    FVar43 = FVar58;
                  }
                  *(ForElementType<unsigned_int> *)(puVar45 + 0x28) = FVar43;
                  *(uint **)(puVar45 + 0x20) = local_1368;
                  *(undefined8 *)(puVar45 + -8) = 0x14425847c;
                  bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar60) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
              }
              if (local_a60 == local_a5c) {
                *(undefined8 *)(puVar45 + -8) = 0x1442584af;
                local_a60 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<192,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                      (0x404,&local_d68,(int *)&local_a5c);
              }
              FVar58 = (ForElementType<unsigned_int>)&local_d68;
              if (local_d68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar58 = local_d68.SecondaryData;
              }
              lVar24 = (longlong)(int)local_a60;
              local_a60 = local_a60 + 1;
              *(uint *)((longlong)FVar58 + lVar24 * 4) = local_1368[0];
              FVar58 = local_d68.SecondaryData;
            }
          }
          uVar29 = (int)uVar36 + 1;
          uVar36 = (ulonglong)uVar29;
          iVar53 = iVar53 + 0x20;
          cVar46 = local_13c8[0];
        } while (uVar29 != uVar35);
      }
      pFVar21 = local_13c0;
      if (cVar46 != '\0') {
        *(undefined8 *)(puVar45 + -8) = 0x14425850b;
        FCpuProfilerTrace::OutputEndEvent();
      }
      uVar35 = local_13b8 % (pFVar21->HysteresisState).ConnectionIdStride;
      local_13b0 = uVar35;
      if ((pFVar21->HysteresisState).Mode == Enabled) {
        if (__CsvProfilerStat1498 == false) {
          *(undefined8 *)(puVar45 + -8) = 0x144258543;
          FCsvProfilerTrace::OutputInlineStat
                    ("FReplicationFiltering_OnFilterStatusChanged_Hysteresis",
                     _GCsvCategory_Iris.Index);
          __CsvProfilerStat1498 = true;
        }
        local_13b8 = _GCsvCategory_Iris.Index;
        *(undefined8 *)(puVar45 + -8) = 0x144258568;
        FCsvProfiler::BeginStat
                  ("FReplicationFiltering_OnFilterStatusChanged_Hysteresis",_GCsvCategory_Iris.Index
                   ,"CSV_FReplicationFiltering_OnFilterStatusChanged_Hysteresis");
        if (CpuChannel->Enabled < 0) {
          local_13c8[0] = '\0';
        }
        else {
          local_13c8[0] = '\x01';
          *(undefined8 *)(puVar45 + -8) = 0x14425859d;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1498,
                     "FReplicationFiltering_OnFilterStatusChanged_Hysteresis",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                     ,0x5da);
          *(undefined8 *)(puVar45 + -8) = 0x1442585a8;
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1498);
        }
        pFVar49 = local_1390;
        uVar29 = (pFVar21->HysteresisState).ConnectionIdStride;
        lVar24 = (longlong)(int)local_a60;
        pFVar54 = (FObjectScopeHysteresisUpdater *)(local_1390 + 0xc0);
        local_1358 = pFVar54;
        local_1378 = (uint *)CONCAT44(local_1378._4_4_,
                                      uVar29 - ((uVar29 - (pFVar21->HysteresisState).
                                                          ConnectionStartId) + uVar35) % uVar29);
        FVar58 = (ForElementType<unsigned_int>)&local_d68;
        if (local_d68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar58 = local_d68.SecondaryData;
        }
        if ((int)local_a60 < 0) {
          *(undefined8 *)(puVar45 + -8) = 0x144258619;
          bVar60 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar60) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        bVar60 = -1 < CpuChannel->Enabled;
        if (bVar60) {
          *(undefined8 *)(puVar45 + -8) = 0x144258652;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId61,"FObjectScopeHysteresisUpdater_RemoveHysteresis",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ObjectScopeHysteresisUpdater.cpp"
                     ,0x3d);
          *(undefined8 *)(puVar45 + -8) = 0x14425865d;
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId61);
        }
        if (*(int *)(pFVar49 + 0xe8) != *(int *)(pFVar49 + 0x114)) {
          FVar43 = (ForElementType<unsigned_int>)((longlong)FVar58 + lVar24 * 4);
          for (; FVar58 != FVar43; FVar58 = (ForElementType<unsigned_int>)((longlong)FVar58 + 4)) {
            uVar35 = *(uint *)FVar58;
            *(undefined8 *)(puVar45 + -8) = 0x14425868b;
            FObjectScopeHysteresisUpdater::RemoveHysteresis(pFVar54,uVar35);
          }
        }
        if (bVar60) {
          *(undefined8 *)(puVar45 + -8) = 0x14425869d;
          FCpuProfilerTrace::OutputEndEvent();
        }
        uVar35 = local_a60;
        pFVar21 = local_13c0;
        uVar36 = (ulonglong)(int)local_a60;
        FVar58 = (ForElementType<unsigned_int>)&local_d68;
        if (local_d68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar58 = local_d68.SecondaryData;
        }
        FVar43 = (ForElementType<unsigned_int>)((longlong)FVar58 + uVar36 * 4);
        while( true ) {
          if ((uint)uVar36 != uVar35) {
            local_1387 = 0;
            *(undefined8 *)(puVar45 + -8) = 0x1442586e1;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1387);
          }
          uVar28 = local_50;
          pFVar54 = local_1358;
          puVar39 = local_1378;
          uVar29 = local_13a8.BitCount;
          puVar32 = local_13a8.Storage;
          if (FVar58 == FVar43) break;
          uVar28 = *(uint *)FVar58;
          *(undefined8 *)(puVar45 + -8) = 0x1442586fc;
          FNetBitArrayHelper::ClearBit(puVar32,uVar29,uVar28);
          pFVar6 = pFVar21->NetRefHandleManager;
          *(undefined8 *)(puVar45 + -8) = 0x14425870e;
          pFVar26 = TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                    ::Find((TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                            *)&pFVar6->SubObjects,uVar28);
          if ((pFVar26 == (FDependencyInfo *)0x0) ||
             (uVar29 = pFVar26->ArrayIndices[0], uVar29 == 0xffffffff)) {
            local_1308.DataPtr = (uint *)0x0;
            local_1308.ArrayNum = 0;
          }
          else {
            lVar24 = *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage;
            *(undefined8 *)(puVar45 + -8) = 0x144258736;
            MakeArrayView<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                      (&local_1308,
                       (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)(int)uVar29 * 0x30 + lVar24));
          }
          puVar32 = local_1308.DataPtr + local_1308.ArrayNum;
          puVar39 = local_13a8.Storage;
          uVar29 = local_13a8.BitCount;
          for (puVar27 = local_1308.DataPtr; local_13a8.Storage = puVar39,
              local_13a8.BitCount = uVar29, puVar27 != puVar32; puVar27 = puVar27 + 1) {
            uVar28 = *puVar27;
            *(undefined8 *)(puVar45 + -8) = 0x144258770;
            FNetBitArrayHelper::ClearBit(puVar39,uVar29,uVar28);
            puVar39 = local_13a8.Storage;
            uVar29 = local_13a8.BitCount;
          }
          uVar36 = (ulonglong)local_a60;
          FVar58 = (ForElementType<unsigned_int>)((longlong)FVar58 + 4);
        }
        uVar36 = (ulonglong)(int)local_50;
        FVar58 = (ForElementType<unsigned_int>)&local_a58;
        if (local_a58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar58 = local_a58.SecondaryData;
        }
        FVar43 = (ForElementType<unsigned_int>)((longlong)FVar58 + uVar36 * 4);
        while( true ) {
          if ((uint)uVar36 != uVar28) {
            local_1386 = 0;
            *(undefined8 *)(puVar45 + -8) = 0x1442587d1;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1386);
          }
          pFVar21 = local_13c0;
          if (FVar58 == FVar43) break;
          uVar35 = *(uint *)FVar58;
          iVar53 = (local_13c0->ObjectScopeHysteresisFrameCounts).ArrayNum;
          uVar29 = 0;
          if ((int)uVar35 < iVar53) {
            uVar29 = ~uVar35 >> 0x1f;
          }
          if (uVar29 == 0) {
            *(longlong *)(puVar45 + 0x28) = (longlong)iVar53;
            *(longlong *)(puVar45 + 0x20) = (longlong)(int)uVar35;
            *(undefined8 *)(puVar45 + -8) = 0x144258824;
            bVar60 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar60) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          uVar29 = local_13a8.BitCount;
          puVar32 = local_13a8.Storage;
          FVar5 = (pFVar21->ObjectScopeHysteresisFrameCounts).AllocatorInstance.Data[(int)uVar35];
          *(undefined8 *)(puVar45 + -8) = 0x144258845;
          bVar60 = FNetBitArrayHelper::GetBit(puVar32,uVar29,uVar35);
          if ((bVar60) || (FVar5 == (FScriptContainerElement)0x0)) {
LAB_1442588a9:
            uVar29 = local_13a8.BitCount;
            puVar32 = local_13a8.Storage;
            *(undefined8 *)(puVar45 + -8) = 0x1442588b8;
            FNetBitArrayHelper::SetBit(puVar32,uVar29,uVar35);
            pFVar6 = local_13c0->NetRefHandleManager;
            *(undefined8 *)(puVar45 + -8) = 0x1442588ce;
            pFVar26 = TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                      ::Find((TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                              *)&pFVar6->SubObjects,uVar35);
            if ((pFVar26 == (FDependencyInfo *)0x0) ||
               (uVar35 = pFVar26->ArrayIndices[0], uVar35 == 0xffffffff)) {
              local_12f8.DataPtr = (uint *)0x0;
              local_12f8.ArrayNum = 0;
            }
            else {
              lVar24 = *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage;
              *(undefined8 *)(puVar45 + -8) = 0x1442588f6;
              MakeArrayView<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_12f8,
                         (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                          *)((longlong)(int)uVar35 * 0x30 + lVar24));
            }
            puVar32 = local_12f8.DataPtr + local_12f8.ArrayNum;
            puVar27 = local_13a8.Storage;
            uVar35 = local_13a8.BitCount;
            for (puVar51 = local_12f8.DataPtr; local_13a8.Storage = puVar27,
                local_13a8.BitCount = uVar35, puVar51 != puVar32; puVar51 = puVar51 + 1) {
              uVar29 = *puVar51;
              *(undefined8 *)(puVar45 + -8) = 0x144258930;
              FNetBitArrayHelper::SetBit(puVar27,uVar35,uVar29);
              puVar27 = local_13a8.Storage;
              uVar35 = local_13a8.BitCount;
            }
            uVar36 = (ulonglong)local_50;
            FVar58 = (ForElementType<unsigned_int>)((longlong)FVar58 + 4);
          }
          else {
            uVar29 = (local_13c0->DynamicFilterEnabledObjects).BitCount;
            pFVar49 = (local_13c0->DynamicFilterEnabledObjects).Storage.AllocatorInstance.Data;
            *(undefined8 *)(puVar45 + -8) = 0x144258867;
            bVar60 = FNetBitArrayHelper::GetBit((uint *)pFVar49,uVar29,uVar35);
            if (!bVar60) goto LAB_1442588a9;
            uVar29 = (local_13c0->HysteresisState).ObjectsExemptFromHysteresis.BitCount;
            pFVar49 = (local_13c0->HysteresisState).ObjectsExemptFromHysteresis.Storage.
                      AllocatorInstance.Data;
            *(undefined8 *)(puVar45 + -8) = 0x144258884;
            bVar60 = FNetBitArrayHelper::GetBit((uint *)pFVar49,uVar29,uVar35);
            if (bVar60) goto LAB_1442588a9;
            *(undefined8 *)(puVar45 + -8) = 0x14425889a;
            FObjectScopeHysteresisUpdater::SetHysteresisFrameCount
                      (pFVar54,uVar35,((byte)FVar5 - 1) + (short)puVar39);
            uVar36 = (ulonglong)local_50;
            FVar58 = (ForElementType<unsigned_int>)((longlong)FVar58 + 4);
          }
        }
        if (local_13b0 == (local_13c0->HysteresisState).ConnectionStartId) {
          iVar53 = local_1350.ArrayMax;
          if ((longlong)local_1350._8_8_ < 0) {
            local_1350._8_8_ = (ulonglong)(uint)local_1350.ArrayMax << 0x20;
            if (iVar53 != 0) {
              *(int **)(puVar45 + 0x28) = &local_1350.ArrayMax;
              *(undefined4 *)(puVar45 + 0x20) = 0;
              *(undefined8 *)(puVar45 + -8) = 0x1442589a4;
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_1350.AllocatorInstance,*(int *)(puVar45 + 0x20),
                         *(int **)(puVar45 + 0x28));
            }
          }
          else {
            local_1350._8_8_ = (ulonglong)(uint)local_1350.ArrayMax << 0x20;
          }
          pFVar21 = local_13c0;
          uVar35 = (local_13c0->HysteresisState).ConnectionIdStride;
          *(undefined8 *)(puVar45 + -8) = 0x1442589bb;
          FObjectScopeHysteresisUpdater::Update(pFVar54,(uchar)uVar35,&local_1350);
          iVar53 = local_1350.ArrayNum;
          uVar36 = (ulonglong)local_1350.ArrayNum;
          pFVar49 = local_1350.AllocatorInstance.Data + uVar36 * 4;
          FVar59.Data = local_1350.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar36 != iVar53) {
              local_1380[0] = 0;
              *(undefined8 *)(puVar45 + -8) = 0x1442589e1;
              `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_1380);
            }
            uVar35 = local_13a8.BitCount;
            puVar32 = local_13a8.Storage;
            if (FVar59.Data == pFVar49) break;
            uVar29 = *(uint *)FVar59.Data;
            *(undefined8 *)(puVar45 + -8) = 0x1442589fc;
            FNetBitArrayHelper::SetBit(puVar32,uVar35,uVar29);
            pFVar6 = pFVar21->NetRefHandleManager;
            *(undefined8 *)(puVar45 + -8) = 0x144258a0e;
            pFVar26 = TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                      ::Find((TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                              *)&pFVar6->SubObjects,uVar29);
            if ((pFVar26 == (FDependencyInfo *)0x0) ||
               (uVar35 = pFVar26->ArrayIndices[0], uVar35 == 0xffffffff)) {
              local_12e8.DataPtr = (uint *)0x0;
              local_12e8.ArrayNum = 0;
            }
            else {
              lVar24 = *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage;
              *(undefined8 *)(puVar45 + -8) = 0x144258a36;
              MakeArrayView<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_12e8,
                         (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                          *)((longlong)(int)uVar35 * 0x30 + lVar24));
            }
            puVar32 = local_12e8.DataPtr + local_12e8.ArrayNum;
            puVar39 = local_13a8.Storage;
            uVar35 = local_13a8.BitCount;
            for (puVar27 = local_12e8.DataPtr; local_13a8.Storage = puVar39,
                local_13a8.BitCount = uVar35, puVar27 != puVar32; puVar27 = puVar27 + 1) {
              uVar29 = *puVar27;
              *(undefined8 *)(puVar45 + -8) = 0x144258a70;
              FNetBitArrayHelper::SetBit(puVar39,uVar35,uVar29);
              puVar39 = local_13a8.Storage;
              uVar35 = local_13a8.BitCount;
            }
            uVar36 = local_1350._8_8_ & 0xffffffff;
            FVar59.Data = FVar59.Data + 4;
          }
        }
        if (local_13c8[0] != '\0') {
          *(undefined8 *)(puVar45 + -8) = 0x144258a96;
          FCpuProfilerTrace::OutputEndEvent();
        }
        pcVar31 = "FReplicationFiltering_OnFilterStatusChanged_Hysteresis";
      }
      else {
        if (__CsvProfilerStat1560 == false) {
          *(undefined8 *)(puVar45 + -8) = 0x144258abd;
          FCsvProfilerTrace::OutputInlineStat
                    ("FReplicationFiltering_OnFilterStatusChanged_NonHysteresis",
                     _GCsvCategory_Iris.Index);
          __CsvProfilerStat1560 = true;
        }
        local_13b8 = _GCsvCategory_Iris.Index;
        *(undefined8 *)(puVar45 + -8) = 0x144258ae2;
        FCsvProfiler::BeginStat
                  ("FReplicationFiltering_OnFilterStatusChanged_NonHysteresis",
                   _GCsvCategory_Iris.Index,
                   "CSV_FReplicationFiltering_OnFilterStatusChanged_NonHysteresis");
        if (CpuChannel->Enabled < 0) {
          local_13c8[0] = '\0';
        }
        else {
          local_13c8[0] = '\x01';
          *(undefined8 *)(puVar45 + -8) = 0x144258b17;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1560,
                     "FReplicationFiltering_OnFilterStatusChanged_NonHysteresis",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                     ,0x618);
          *(undefined8 *)(puVar45 + -8) = 0x144258b22;
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1560);
        }
        uVar35 = local_a60;
        pFVar21 = local_13c0;
        uVar36 = (ulonglong)(int)local_a60;
        FVar58 = (ForElementType<unsigned_int>)&local_d68;
        if (local_d68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar58 = local_d68.SecondaryData;
        }
        FVar43 = (ForElementType<unsigned_int>)((longlong)FVar58 + uVar36 * 4);
        while( true ) {
          if ((uint)uVar36 != uVar35) {
            local_1385 = 0;
            *(undefined8 *)(puVar45 + -8) = 0x144258b71;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1385);
          }
          uVar28 = local_50;
          uVar29 = local_13a8.BitCount;
          puVar32 = local_13a8.Storage;
          cVar46 = local_13c8[0];
          if (FVar58 == FVar43) break;
          uVar28 = *(uint *)FVar58;
          *(undefined8 *)(puVar45 + -8) = 0x144258b8c;
          FNetBitArrayHelper::ClearBit(puVar32,uVar29,uVar28);
          pFVar6 = pFVar21->NetRefHandleManager;
          *(undefined8 *)(puVar45 + -8) = 0x144258b9e;
          pFVar26 = TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                    ::Find((TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                            *)&pFVar6->SubObjects,uVar28);
          if ((pFVar26 == (FDependencyInfo *)0x0) ||
             (uVar29 = pFVar26->ArrayIndices[0], uVar29 == 0xffffffff)) {
            local_12d8.DataPtr = (uint *)0x0;
            local_12d8.ArrayNum = 0;
          }
          else {
            lVar24 = *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage;
            *(undefined8 *)(puVar45 + -8) = 0x144258bc6;
            MakeArrayView<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                      (&local_12d8,
                       (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)(int)uVar29 * 0x30 + lVar24));
          }
          puVar32 = local_12d8.DataPtr + local_12d8.ArrayNum;
          puVar39 = local_13a8.Storage;
          uVar29 = local_13a8.BitCount;
          for (puVar27 = local_12d8.DataPtr; local_13a8.Storage = puVar39,
              local_13a8.BitCount = uVar29, puVar27 != puVar32; puVar27 = puVar27 + 1) {
            uVar28 = *puVar27;
            *(undefined8 *)(puVar45 + -8) = 0x144258c00;
            FNetBitArrayHelper::ClearBit(puVar39,uVar29,uVar28);
            puVar39 = local_13a8.Storage;
            uVar29 = local_13a8.BitCount;
          }
          uVar36 = (ulonglong)local_a60;
          FVar58 = (ForElementType<unsigned_int>)((longlong)FVar58 + 4);
        }
        uVar36 = (ulonglong)(int)local_50;
        FVar58 = (ForElementType<unsigned_int>)&local_a58;
        if (local_a58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar58 = local_a58.SecondaryData;
        }
        FVar43 = (ForElementType<unsigned_int>)((longlong)FVar58 + uVar36 * 4);
        while( true ) {
          if ((uint)uVar36 != uVar28) {
            local_1384 = 0;
            *(undefined8 *)(puVar45 + -8) = 0x144258c61;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1384);
          }
          uVar35 = local_13a8.BitCount;
          puVar32 = local_13a8.Storage;
          if (FVar58 == FVar43) break;
          uVar29 = *(uint *)FVar58;
          *(undefined8 *)(puVar45 + -8) = 0x144258c7c;
          FNetBitArrayHelper::SetBit(puVar32,uVar35,uVar29);
          pFVar6 = local_13c0->NetRefHandleManager;
          *(undefined8 *)(puVar45 + -8) = 0x144258c92;
          pFVar26 = TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                    ::Find((TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                            *)&pFVar6->SubObjects,uVar29);
          if ((pFVar26 == (FDependencyInfo *)0x0) ||
             (uVar35 = pFVar26->ArrayIndices[0], uVar35 == 0xffffffff)) {
            local_12c8.DataPtr = (uint *)0x0;
            local_12c8.ArrayNum = 0;
          }
          else {
            lVar24 = *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage;
            *(undefined8 *)(puVar45 + -8) = 0x144258cba;
            MakeArrayView<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                      (&local_12c8,
                       (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)(int)uVar35 * 0x30 + lVar24));
          }
          puVar32 = local_12c8.DataPtr + local_12c8.ArrayNum;
          puVar39 = local_13a8.Storage;
          uVar35 = local_13a8.BitCount;
          for (puVar27 = local_12c8.DataPtr; local_13a8.Storage = puVar39,
              local_13a8.BitCount = uVar35, puVar27 != puVar32; puVar27 = puVar27 + 1) {
            uVar29 = *puVar27;
            *(undefined8 *)(puVar45 + -8) = 0x144258cff;
            FNetBitArrayHelper::SetBit(puVar39,uVar35,uVar29);
            puVar39 = local_13a8.Storage;
            uVar35 = local_13a8.BitCount;
          }
          uVar36 = (ulonglong)local_50;
          FVar58 = (ForElementType<unsigned_int>)((longlong)FVar58 + 4);
        }
        if (cVar46 != '\0') {
          *(undefined8 *)(puVar45 + -8) = 0x144258d20;
          FCpuProfilerTrace::OutputEndEvent();
        }
        pcVar31 = "FReplicationFiltering_OnFilterStatusChanged_NonHysteresis";
      }
      uVar35 = local_13b8;
      *(undefined8 *)(puVar45 + -8) = 0x144258d2f;
      FCsvProfiler::EndStat(pcVar31,uVar35);
      uVar29 = local_13a8.BitCount;
      uVar35 = local_13a8.WordCount;
      puVar32 = local_13a8.Storage;
      pFVar21 = local_13c0;
      if (bCVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject != false) {
        local_1258.Objects = &local_1228;
        local_1258.bReturnValue = &local_13b4;
        local_13b4 = false;
        local_1258.__this = local_13c0;
        *(undefined8 *)(puVar45 + -8) = 0x144258d96;
        FNetBitArrayHelper::
        ForAllSetBits<_UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject_::__l2::<lambda_1>_&>
                  (puVar32,uVar35,uVar29,&local_1258);
        if (local_13b4 != false) {
          *(char **)(puVar45 + 0x20) =
               "!bCVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject || !HasSubObjectInScopeWithFilteredOutRootObject(DynamicFilteredOutObjectsHysteresisAdjusted)"
          ;
          *(undefined8 *)(puVar45 + -8) = 0x144258dc3;
          bVar60 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_7127879573563242961>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                              ,0x62f,*(char **)(puVar45 + 0x20));
          if (bVar60) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
      bVar60 = -1 < CpuChannel->Enabled;
      if (bVar60) {
        *(undefined8 *)(puVar45 + -8) = 0x144258dfc;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1587,"FReplicationFiltering_UpdateConnectionScope",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                   ,0x633);
        *(undefined8 *)(puVar45 + -8) = 0x144258e07;
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1587);
      }
      pFVar49 = local_1390;
      uVar35 = pFVar21->WordCountForObjectBitArrays;
      if (*(int *)(local_1390 + 0x68) < (int)uVar35) {
        *(int *)(puVar45 + 0x28) = *(int *)(local_1390 + 0x68);
        *(uint *)(puVar45 + 0x20) = uVar35;
        *(undefined8 *)(puVar45 + -8) = 0x144258e42;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(int32)MaxWordIterationCount <= Storage.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                            ,0x8e,
                            L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                           );
        if (bVar22) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar35 = pFVar21->WordCountForObjectBitArrays;
      puVar32 = *(uint **)(pFVar49 + 0x60);
      if (*(int *)(pFVar49 + 0x38) < (int)uVar35) {
        *(int *)(puVar45 + 0x28) = *(int *)(pFVar49 + 0x38);
        *(uint *)(puVar45 + 0x20) = uVar35;
        *(undefined8 *)(puVar45 + -8) = 0x144258e7f;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(int32)MaxWordIterationCount <= Storage.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                            ,0x8e,
                            L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                           );
        if (bVar22) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar35 = pFVar21->WordCountForObjectBitArrays;
      puVar39 = *(uint **)(pFVar49 + 0x30);
      if (local_13a8.WordCount < uVar35) {
        *(uint *)(puVar45 + 0x28) = local_13a8.WordCount;
        *(uint *)(puVar45 + 0x20) = uVar35;
        *(undefined8 *)(puVar45 + -8) = 0x144258ebc;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaxWordIterationCount <= WordCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                            ,0x1ba,
                            L"MaxWordIterationCount (%u) is higher than this NetBitArrayView word count (%u). Out of Bounds memory access will occur."
                           );
        if (bVar22) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar35 = local_d70;
      uVar44 = (ulonglong)pFVar21->WordCountForObjectBitArrays;
      uVar36 = 0;
      if (uVar44 != 0) {
        uVar37 = uVar36;
        if (((1 < uVar44) &&
            ((puVar39 + (uVar44 - 1) < puVar32 || (puVar32 + (uVar44 - 1) < puVar39)))) &&
           ((local_13a8.Storage + (uVar44 - 1) < puVar32 ||
            (uVar37 = 0, puVar32 + (uVar44 - 1) < local_13a8.Storage)))) {
          if (uVar44 < 0x10) {
LAB_144258fa6:
            puVar27 = puVar39 + uVar36;
            do {
              uVar3 = *(undefined8 *)
                       (((longlong)local_13a8.Storage - (longlong)puVar39) + (longlong)puVar27);
              uVar36 = uVar36 + 2;
              uVar4 = *(undefined8 *)puVar27;
              puVar27 = puVar27 + 2;
              *(ulonglong *)((longlong)puVar32 + (-8 - (longlong)puVar39) + (longlong)puVar27) =
                   CONCAT44(~(uint)((ulonglong)uVar3 >> 0x20) & (uint)((ulonglong)uVar4 >> 0x20),
                            ~(uint)uVar3 & (uint)uVar4);
            } while (uVar36 != (uVar44 & 0xfffffffffffffffe));
          }
          else {
            uVar37 = (ulonglong)(pFVar21->WordCountForObjectBitArrays & 0xf);
            lVar24 = (longlong)local_13a8.Storage - (longlong)puVar39;
            lVar30 = (longlong)puVar32 - (longlong)puVar39;
            puVar27 = puVar39 + 4;
            do {
              uVar29 = puVar27[-3];
              uVar28 = puVar27[-2];
              uVar47 = puVar27[-1];
              uVar36 = uVar36 + 0x10;
              puVar41 = (uint *)(lVar24 + -0x10 + (longlong)puVar27);
              uVar48 = puVar41[1];
              uVar56 = puVar41[2];
              uVar34 = puVar41[3];
              puVar51 = (uint *)((longlong)puVar27 + lVar24);
              uVar11 = *puVar51;
              uVar12 = puVar51[1];
              uVar13 = puVar51[2];
              uVar14 = puVar51[3];
              puVar51 = puVar27 + 0x10;
              uVar15 = *puVar27;
              uVar16 = puVar27[1];
              uVar17 = puVar27[2];
              uVar18 = puVar27[3];
              puVar2 = (uint *)(lVar30 + -0x50 + (longlong)puVar51);
              *puVar2 = ~*puVar41 & puVar27[-4];
              puVar2[1] = ~uVar48 & uVar29;
              puVar2[2] = ~uVar56 & uVar28;
              puVar2[3] = ~uVar34 & uVar47;
              uVar29 = puVar27[4];
              uVar28 = puVar27[5];
              uVar47 = puVar27[6];
              uVar48 = puVar27[7];
              puVar41 = (uint *)(lVar24 + -0x30 + (longlong)puVar51);
              uVar56 = *puVar41;
              uVar34 = puVar41[1];
              uVar19 = puVar41[2];
              uVar20 = puVar41[3];
              puVar41 = (uint *)((longlong)puVar27 + lVar30);
              *puVar41 = ~uVar11 & uVar15;
              puVar41[1] = ~uVar12 & uVar16;
              puVar41[2] = ~uVar13 & uVar17;
              puVar41[3] = ~uVar14 & uVar18;
              auVar62._0_4_ = ~uVar56 & uVar29;
              auVar62._4_4_ = ~uVar34 & uVar28;
              auVar62._8_4_ = ~uVar19 & uVar47;
              auVar62._12_4_ = ~uVar20 & uVar48;
              uVar29 = puVar27[8];
              uVar28 = puVar27[9];
              uVar47 = puVar27[10];
              uVar48 = puVar27[0xb];
              puVar27 = (uint *)(lVar24 + -0x20 + (longlong)puVar51);
              uVar56 = *puVar27;
              uVar34 = puVar27[1];
              uVar11 = puVar27[2];
              uVar12 = puVar27[3];
              *(undefined1 (*) [16])(lVar30 + -0x30 + (longlong)puVar51) = auVar62;
              puVar27 = (uint *)(lVar30 + -0x20 + (longlong)puVar51);
              *puVar27 = ~uVar56 & uVar29;
              puVar27[1] = ~uVar34 & uVar28;
              puVar27[2] = ~uVar11 & uVar47;
              puVar27[3] = ~uVar12 & uVar48;
              puVar27 = puVar51;
            } while (uVar36 != uVar44 - uVar37);
            if (1 < uVar37) goto LAB_144258fa6;
          }
          uVar37 = uVar36;
          if (uVar36 == uVar44) goto LAB_14425900a;
        }
        lVar24 = uVar44 - uVar37;
        puVar27 = puVar39 + uVar37;
        do {
          *(uint *)((longlong)puVar32 + (-4 - (longlong)puVar39) + (longlong)(puVar27 + 1)) =
               ~*(uint *)(((longlong)local_13a8.Storage - (longlong)puVar39) + (longlong)puVar27) &
               *puVar27;
          lVar24 = lVar24 + -1;
          puVar27 = puVar27 + 1;
        } while (lVar24 != 0);
      }
LAB_14425900a:
      uVar36 = (ulonglong)(int)local_d70;
      FVar58 = (ForElementType<unsigned_int>)&local_1078;
      if (local_1078.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar58 = local_1078.SecondaryData;
      }
      FVar43 = (ForElementType<unsigned_int>)((longlong)FVar58 + uVar36 * 4);
      while( true ) {
        if ((uint)uVar36 != uVar35) {
          local_1383 = 0;
          *(undefined8 *)(puVar45 + -8) = 0x14425904a;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1383);
        }
        if (FVar58 == FVar43) break;
        uVar29 = *(uint *)FVar58;
        lVar24 = *(longlong *)(pFVar49 + 0x60);
        if (*(uint *)(pFVar49 + 0x70) <= uVar29) {
          *(undefined8 *)(puVar45 + -8) = 0x14425907c;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2b7,L"");
          if (bVar22) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        *(uint *)(lVar24 + (ulonglong)(uVar29 >> 5) * 4) =
             *(uint *)(lVar24 + (ulonglong)(uVar29 >> 5) * 4) & ~(1 << (uVar29 & 0x1f));
        FVar58 = (ForElementType<unsigned_int>)((longlong)FVar58 + 4);
        uVar36 = (ulonglong)local_d70;
      }
      if (bVar60) {
        *(undefined8 *)(puVar45 + -8) = 0x1442590ae;
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar60 = CpuChannel->Enabled < 0;
      if (bVar60) {
        local_13c8[0] = '\0';
      }
      else {
        local_13c8[0] = '\x01';
        *(undefined8 *)(puVar45 + -8) = 0x1442590e4;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1608,"FReplicationFiltering_UpdateCreationDependencies",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                   ,0x648);
        *(undefined8 *)(puVar45 + -8) = 0x1442590ef;
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1608);
      }
      uVar35 = *(uint *)(pFVar49 + 0x70);
      puVar32 = *(uint **)(pFVar49 + 0x60);
      *(undefined8 *)(puVar45 + -8) = 0x14425910a;
      FNetBitArrayView::FNetBitArrayView(&local_1278,puVar32,uVar35);
      if (local_1328.BitCount != local_1278.BitCount) {
        *(undefined8 *)(puVar45 + -8) = 0x144259138;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("A.GetNumBits() == B.GetNumBits()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                            ,0x668,L"");
        if (bVar22) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar35 = local_1328.WordCount;
      pFVar21 = local_13c0;
      uVar29 = 0xffffffff >> (-(char)local_1328.BitCount & 0x1fU);
      uVar28 = 0;
      local_1378 = (uint *)CONCAT44(local_1378._4_4_,uVar29);
      local_13b8 = 0;
      puVar32 = local_1328.Storage;
      puVar39 = local_1278.Storage;
      cVar46 = !bVar60;
      if (local_1328.WordCount != 0) {
        do {
          uVar47 = 0xffffffff;
          if (uVar28 == uVar35 - 1) {
            uVar47 = uVar29;
          }
          uVar48 = uVar47 & *puVar39 & *puVar32;
          uVar47 = local_13b8;
          if (uVar48 != 0) {
            do {
              if ((uVar48 & 1) != 0) {
                local_1218.Storage = local_1278.Storage;
                puVar45[0x20] = 0;
                *(undefined8 *)(puVar45 + -8) = 0x1442591da;
                UpdateCreationDependentParent
                          (pFVar21,uVar47,&local_1208,&local_1218,(bool)puVar45[0x20]);
              }
              uVar47 = uVar47 + 1;
              uVar48 = uVar48 >> 1;
            } while (uVar48 != 0);
            uVar29 = (uint)local_1378;
          }
          uVar28 = uVar28 + 1;
          local_13b8 = local_13b8 + 0x20;
          puVar32 = puVar32 + 1;
          pFVar49 = local_1390;
          puVar39 = puVar39 + 1;
          cVar46 = local_13c8[0];
        } while (uVar28 < uVar35);
      }
      if (cVar46 != '\0') {
        *(undefined8 *)(puVar45 + -8) = 0x144259211;
        FCpuProfilerTrace::OutputEndEvent();
      }
      this = local_13c0;
      if ((local_13c0->HysteresisState).Mode == Enabled) {
        if (__CsvProfilerStat1621 == false) {
          *(undefined8 *)(puVar45 + -8) = 0x14425923f;
          FCsvProfilerTrace::OutputInlineStat
                    ("FReplicationFiltering_DependentObjects_Hysteresis",_GCsvCategory_Iris.Index);
          __CsvProfilerStat1621 = true;
        }
        local_13b8 = _GCsvCategory_Iris.Index;
        *(undefined8 *)(puVar45 + -8) = 0x144259267;
        FCsvProfiler::BeginStat
                  ("FReplicationFiltering_DependentObjects_Hysteresis",_GCsvCategory_Iris.Index,
                   "CSV_FReplicationFiltering_DependentObjects_Hysteresis");
        if (CpuChannel->Enabled < 0) {
          local_13c8[0] = '\0';
        }
        else {
          local_13c8[0] = '\x01';
          *(undefined8 *)(puVar45 + -8) = 0x14425929c;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1621,
                     "FReplicationFiltering_DependentObjects_Hysteresis",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                     ,0x655);
          *(undefined8 *)(puVar45 + -8) = 0x1442592a7;
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1621);
        }
        uVar35 = (this->HysteresisState).ConnectionIdStride;
        pFVar1 = (FNetBitArray *)(pFVar49 + 0x60);
        uVar36 = (ulonglong)(int)local_d70;
        local_1378 = (uint *)CONCAT44(local_1378._4_4_,
                                      (((this->HysteresisState).ConnectionStartId - local_13b0) +
                                      uVar35) % uVar35);
        FVar58 = (ForElementType<unsigned_int>)&local_1078;
        if (local_1078.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar58 = local_1078.SecondaryData;
        }
        local_13b0 = local_d70;
        FVar43 = (ForElementType<unsigned_int>)&local_1078;
        if (local_1078.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar43 = local_1078.SecondaryData;
        }
        local_1338 = (ForElementType<unsigned_int>)((longlong)FVar58 + uVar36 * 4);
        uVar44 = uVar36;
        pFVar55 = pFVar49;
        while( true ) {
          FVar58 = local_1338;
          local_1360 = FVar43;
          if ((int)uVar44 != (int)uVar36) {
            local_1382 = 0;
            *(undefined8 *)(puVar45 + -8) = 0x14425931c;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1382);
          }
          if (FVar43 == FVar58) break;
          pFVar6 = this->NetRefHandleManager;
          uVar35 = *(uint *)FVar43;
          if (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x8 !=
              *(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x34) {
            puVar57 = *(undefined1 **)&(pFVar6->SubObjects).DependencyInfos.field_0x40;
            puVar40 = &(pFVar6->SubObjects).DependencyInfos.field_0x38;
            if (puVar57 != (undefined1 *)0x0) {
              puVar40 = puVar57;
            }
            iVar53 = *(int *)(puVar40 +
                             (ulonglong)
                             (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x48 - 1U & uVar35
                             ) * 4);
            if (iVar53 != -1) {
              lVar24 = *(longlong *)&(pFVar6->SubObjects).DependencyInfos;
              do {
                lVar30 = lVar24 + (longlong)iVar53 * 0x28;
                if (*(uint *)(lVar24 + (longlong)iVar53 * 0x28) == uVar35) {
                  lVar24 = lVar30 + 4;
                  if (lVar30 == 0) {
                    lVar24 = 0;
                  }
                  if ((lVar24 != 0) && (*(int *)(lVar24 + 8) != -1)) {
                    puVar32 = (uint *)((longlong)*(int *)(lVar24 + 8) * 0x30 +
                                      *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage);
                    uVar29 = puVar32[10];
                    if (*(uint **)(puVar32 + 8) != (uint *)0x0) {
                      puVar32 = *(uint **)(puVar32 + 8);
                    }
                    if ((int)uVar29 < 0) {
                      *(undefined8 *)(puVar45 + -8) = 0x1442594df;
                      bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L"");
                      if (bVar60) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    goto LAB_144259393;
                  }
                  break;
                }
                iVar53 = *(int *)(lVar30 + 0x20);
              } while (iVar53 != -1);
            }
          }
          puVar32 = (uint *)0x0;
          uVar29 = 0;
LAB_144259393:
          puVar39 = puVar32 + (int)uVar29;
          for (; puVar32 != puVar39; puVar32 = puVar32 + 1) {
            uVar29 = *puVar32;
            *(undefined8 *)(puVar45 + -8) = 0x1442593ae;
            EVar23 = GetDependentObjectFilterStatus(pFVar6,pFVar1,uVar29);
            if (EVar23 == Allow) goto LAB_14425940d;
          }
          pFVar38 = (pFVar1->Storage).AllocatorInstance.Data;
          if (*(uint *)(pFVar49 + 0x70) <= uVar35) {
            *(undefined8 *)(puVar45 + -8) = 0x1442593e8;
            bVar60 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L"");
            if (bVar60) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          puVar32 = local_13a8.Storage;
          if ((*(uint *)(pFVar38 + (ulonglong)(uVar35 >> 5) * 4) >> (uVar35 & 0x1f) & 1) == 0) {
            if (local_13a8.BitCount <= uVar35) {
              *(undefined8 *)(puVar45 + -8) = 0x14425977d;
              bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < BitCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x2c1,L"");
              if (bVar60) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            pFVar38 = local_1390;
            uVar29 = local_13a8.BitCount;
            puVar39 = local_13a8.Storage;
            uVar28 = 1 << (sbyte)(uVar35 & 0x1f);
            if ((uVar28 & puVar32[uVar35 >> 5]) == 0) {
              local_1370 = *(ForElementType<unsigned_int> *)(local_1390 + 0x148);
              if (*(uint *)(local_1390 + 0x158) <= uVar35) {
                *(undefined8 *)(puVar45 + -8) = 0x1442597e6;
                bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < BitCount",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                    ,0x2c1,L"");
                if (bVar60) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              pFVar21 = local_13c0;
              bVar60 = false;
              if ((*(uint *)((longlong)local_1370 + (ulonglong)(uVar35 >> 5) * 4) & uVar28) == 0) {
                iVar53 = (local_13c0->ObjectScopeHysteresisFrameCounts).ArrayNum;
                uVar29 = 0;
                if ((int)uVar35 < iVar53) {
                  uVar29 = ~uVar35 >> 0x1f;
                }
                if (uVar29 == 0) {
                  *(longlong *)(puVar45 + 0x28) = (longlong)iVar53;
                  *(longlong *)(puVar45 + 0x20) = (longlong)(int)uVar35;
                  *(undefined8 *)(puVar45 + -8) = 0x144259848;
                  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar22) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                FVar5 = (pFVar21->ObjectScopeHysteresisFrameCounts).AllocatorInstance.Data
                        [(int)uVar35];
                if (FVar5 == (FScriptContainerElement)0x0) {
                  bVar60 = true;
                }
                else {
                  uVar50 = ((byte)FVar5 - 1) + (short)local_1378;
                  *(undefined8 *)(puVar45 + -8) = 0x144259879;
                  FObjectScopeHysteresisUpdater::SetHysteresisFrameCount
                            ((FObjectScopeHysteresisUpdater *)(pFVar38 + 0xc0),uVar35,uVar50);
                }
              }
              uVar29 = *(uint *)(pFVar38 + 0x70);
              pFVar55 = (pFVar1->Storage).AllocatorInstance.Data;
              *(undefined8 *)(puVar45 + -8) = 0x14425989a;
              FNetBitArrayHelper::SetBitValue((uint *)pFVar55,uVar29,uVar35,(bool)(bVar60 ^ 1));
              pFVar6 = pFVar21->NetRefHandleManager;
              *(undefined8 *)(puVar45 + -8) = 0x1442598ac;
              pFVar26 = TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                        ::Find((TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
                                *)&pFVar6->SubObjects,uVar35);
              if ((pFVar26 == (FDependencyInfo *)0x0) ||
                 (uVar35 = pFVar26->ArrayIndices[0], uVar35 == 0xffffffff)) {
                local_12b8.DataPtr = (uint *)0x0;
                local_12b8.ArrayNum = 0;
              }
              else {
                lVar24 = *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage;
                *(undefined8 *)(puVar45 + -8) = 0x1442598d4;
                MakeArrayView<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                          (&local_12b8,
                           (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)((longlong)(int)uVar35 * 0x30 + lVar24));
              }
              puVar32 = local_12b8.DataPtr + local_12b8.ArrayNum;
              puVar39 = local_13a8.Storage;
              uVar35 = local_13a8.BitCount;
              pFVar55 = pFVar38;
              for (puVar27 = local_12b8.DataPtr; this = local_13c0, local_13a8.Storage = puVar39,
                  local_13a8.BitCount = uVar35, puVar27 != puVar32; puVar27 = puVar27 + 1) {
                uVar29 = *puVar27;
                *(undefined8 *)(puVar45 + -8) = 0x144259926;
                FNetBitArrayHelper::SetBitValue(puVar39,uVar35,uVar29,bVar60);
                lVar24 = *(longlong *)(pFVar38 + 0x30);
                if (*(uint *)(pFVar38 + 0x40) <= uVar29) {
                  *(undefined8 *)(puVar45 + -8) = 0x14425994f;
                  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2c1,L"");
                  if (bVar22) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                if ((bVar60 == false) &&
                   ((1 << ((byte)uVar29 & 0x1f) & *(uint *)(lVar24 + (ulonglong)(uVar29 >> 5) * 4))
                    != 0)) {
                  bVar22 = true;
                }
                else {
                  bVar22 = false;
                }
                uVar35 = *(uint *)(pFVar49 + 0x70);
                pFVar55 = (pFVar1->Storage).AllocatorInstance.Data;
                *(undefined8 *)(puVar45 + -8) = 0x144259988;
                FNetBitArrayHelper::SetBitValue((uint *)pFVar55,uVar35,uVar29,bVar22);
                FVar43 = local_1360;
                puVar39 = local_13a8.Storage;
                uVar35 = local_13a8.BitCount;
                pFVar55 = local_1390;
              }
            }
            else {
              *(undefined8 *)(puVar45 + -8) = 0x1442599b1;
              FNetBitArrayHelper::SetBit(puVar39,uVar29,uVar35);
              pFVar38 = local_1390;
              pFVar55 = (pFVar1->Storage).AllocatorInstance.Data;
              uVar29 = *(uint *)(local_1390 + 0x70);
              *(undefined8 *)(puVar45 + -8) = 0x1442599c4;
              FNetBitArrayHelper::ClearBit((uint *)pFVar55,uVar29,uVar35);
              this = local_13c0;
              pFVar6 = local_13c0->NetRefHandleManager;
              if (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x8 !=
                  *(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x34) {
                puVar57 = *(undefined1 **)&(pFVar6->SubObjects).DependencyInfos.field_0x40;
                puVar40 = &(pFVar6->SubObjects).DependencyInfos.field_0x38;
                if (puVar57 != (undefined1 *)0x0) {
                  puVar40 = puVar57;
                }
                iVar53 = *(int *)(puVar40 +
                                 (ulonglong)
                                 (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x48 - 1U &
                                 uVar35) * 4);
                if (iVar53 != -1) {
                  lVar24 = *(longlong *)&(pFVar6->SubObjects).DependencyInfos;
                  do {
                    lVar30 = lVar24 + (longlong)iVar53 * 0x28;
                    if (*(uint *)(lVar24 + (longlong)iVar53 * 0x28) == uVar35) {
                      piVar33 = (int *)(lVar30 + 4);
                      if (lVar30 == 0) {
                        piVar33 = (int *)0x0;
                      }
                      if ((piVar33 != (int *)0x0) && (*piVar33 != -1)) {
                        pFVar54 = (FObjectScopeHysteresisUpdater *)
                                  ((longlong)*piVar33 * 0x30 +
                                  *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage);
                        iVar53 = *(int *)&(pFVar54->NetRefIndexToLocalIndex).field_0x8;
                        if (*(FObjectScopeHysteresisUpdater **)&pFVar54->NetRefIndexToLocalIndex !=
                            (FObjectScopeHysteresisUpdater *)0x0) {
                          pFVar54 = *(FObjectScopeHysteresisUpdater **)
                                     &pFVar54->NetRefIndexToLocalIndex;
                        }
                        if (iVar53 < 0) {
                          *(undefined8 *)(puVar45 + -8) = 0x144259b5f;
                          bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                             ("InCount >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xeb,L"");
                          if (bVar60) {
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                        }
                        goto LAB_144259a32;
                      }
                      break;
                    }
                    iVar53 = *(int *)(lVar30 + 0x20);
                  } while (iVar53 != -1);
                }
              }
              pFVar54 = (FObjectScopeHysteresisUpdater *)0x0;
              iVar53 = 0;
LAB_144259a32:
              local_1358 = (FObjectScopeHysteresisUpdater *)
                           ((longlong)&(pFVar54->FrameCounters).AllocatorInstance.Data +
                           (longlong)iVar53 * 4);
              pFVar55 = pFVar38;
              if (pFVar54 != local_1358) {
                do {
                  puVar32 = local_13a8.Storage;
                  uVar35 = *(uint *)&(pFVar54->FrameCounters).AllocatorInstance.Data;
                  if (local_13a8.BitCount <= uVar35) {
                    *(undefined8 *)(puVar45 + -8) = 0x144259a7c;
                    bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < BitCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                        ,0x2a2,L"");
                    if (bVar60) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                  uVar36 = (ulonglong)(uVar35 >> 5);
                  puVar32[uVar36] = puVar32[uVar36] | 1 << (uVar35 & 0x1f);
                  pFVar55 = (pFVar1->Storage).AllocatorInstance.Data;
                  if (*(uint *)(pFVar38 + 0x70) <= uVar35) {
                    *(undefined8 *)(puVar45 + -8) = 0x144259ac6;
                    bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < BitCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                        ,0x2b7,L"");
                    if (bVar60) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                  pFVar54 = (FObjectScopeHysteresisUpdater *)
                            ((longlong)&(pFVar54->FrameCounters).AllocatorInstance.Data + 4);
                  *(uint *)(pFVar55 + uVar36 * 4) =
                       *(uint *)(pFVar55 + uVar36 * 4) & ~(1 << (uVar35 & 0x1f));
                  FVar43 = local_1360;
                  this = local_13c0;
                  pFVar55 = local_1390;
                } while (pFVar54 != local_1358);
              }
            }
          }
          else {
LAB_14425940d:
            if (*(int *)(pFVar55 + 0xe8) != *(int *)(pFVar55 + 0x114)) {
              pFVar38 = pFVar55 + 0x118;
              if (*(FScriptContainerElement **)(pFVar55 + 0x120) != (FScriptContainerElement *)0x0)
              {
                pFVar38 = *(FScriptContainerElement **)(pFVar55 + 0x120);
              }
              uVar29 = *(uint *)(pFVar38 + (ulonglong)(*(int *)(pFVar55 + 0x128) - 1U & uVar35) * 4)
              ;
              if (uVar29 != 0xffffffff) {
                do {
                  puVar32 = (uint *)((longlong)(int)uVar29 * 0x10 + *(longlong *)(pFVar55 + 0xe0));
                  if (*puVar32 == uVar35) {
                    puVar39 = puVar32 + 1;
                    if (puVar32 == (uint *)0x0) {
                      puVar39 = (uint *)0x0;
                    }
                    if (puVar39 != (uint *)0x0) {
                      uVar29 = *puVar39;
                      *(undefined8 *)(puVar45 + -8) = 0x144259519;
                      FObjectScopeHysteresisUpdater::FreeLocalIndex
                                ((FObjectScopeHysteresisUpdater *)(pFVar55 + 0xc0),uVar29);
                    }
                    break;
                  }
                  uVar29 = puVar32[2];
                } while (uVar29 != 0xffffffff);
              }
            }
            puVar32 = local_13a8.Storage;
            if (local_13a8.BitCount <= uVar35) {
              *(undefined8 *)(puVar45 + -8) = 0x144259542;
              bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < BitCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x2b7,L"");
              if (bVar60) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            uVar36 = (ulonglong)(uVar35 >> 5);
            puVar32[uVar36] = puVar32[uVar36] & ~(1 << (uVar35 & 0x1f));
            pFVar38 = (pFVar1->Storage).AllocatorInstance.Data;
            if (*(uint *)(pFVar55 + 0x70) <= uVar35) {
              *(undefined8 *)(puVar45 + -8) = 0x144259584;
              bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < BitCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x2a2,L"");
              if (bVar60) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            this = local_13c0;
            *(uint *)(pFVar38 + uVar36 * 4) = *(uint *)(pFVar38 + uVar36 * 4) | 1 << (uVar35 & 0x1f)
            ;
            pFVar6 = local_13c0->NetRefHandleManager;
            if (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x8 !=
                *(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x34) {
              puVar57 = *(undefined1 **)&(pFVar6->SubObjects).DependencyInfos.field_0x40;
              puVar40 = &(pFVar6->SubObjects).DependencyInfos.field_0x38;
              if (puVar57 != (undefined1 *)0x0) {
                puVar40 = puVar57;
              }
              iVar53 = *(int *)(puVar40 +
                               (ulonglong)
                               (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x48 - 1U &
                               uVar35) * 4);
              if (iVar53 != -1) {
                lVar24 = *(longlong *)&(pFVar6->SubObjects).DependencyInfos;
                do {
                  lVar30 = lVar24 + (longlong)iVar53 * 0x28;
                  if (*(uint *)(lVar24 + (longlong)iVar53 * 0x28) == uVar35) {
                    piVar33 = (int *)(lVar30 + 4);
                    if (lVar30 == 0) {
                      piVar33 = (int *)0x0;
                    }
                    if ((piVar33 != (int *)0x0) && (*piVar33 != -1)) {
                      pFVar54 = (FObjectScopeHysteresisUpdater *)
                                ((longlong)*piVar33 * 0x30 +
                                *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage);
                      iVar53 = *(int *)&(pFVar54->NetRefIndexToLocalIndex).field_0x8;
                      if (*(FObjectScopeHysteresisUpdater **)&pFVar54->NetRefIndexToLocalIndex !=
                          (FObjectScopeHysteresisUpdater *)0x0) {
                        pFVar54 = *(FObjectScopeHysteresisUpdater **)
                                   &pFVar54->NetRefIndexToLocalIndex;
                      }
                      if (iVar53 < 0) {
                        *(undefined8 *)(puVar45 + -8) = 0x144259745;
                        bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L"");
                        if (bVar60) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                      }
                      goto LAB_144259602;
                    }
                    break;
                  }
                  iVar53 = *(int *)(lVar30 + 0x20);
                } while (iVar53 != -1);
              }
            }
            pFVar54 = (FObjectScopeHysteresisUpdater *)0x0;
            iVar53 = 0;
LAB_144259602:
            pFVar38 = local_1390;
            local_1358 = (FObjectScopeHysteresisUpdater *)
                         ((longlong)&(pFVar54->FrameCounters).AllocatorInstance.Data +
                         (longlong)iVar53 * 4);
            if (pFVar54 != local_1358) {
              do {
                puVar32 = local_13a8.Storage;
                uVar35 = *(uint *)&(pFVar54->FrameCounters).AllocatorInstance.Data;
                if (local_13a8.BitCount <= uVar35) {
                  *(undefined8 *)(puVar45 + -8) = 0x14425964c;
                  bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2b7,L"");
                  if (bVar60) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                uVar36 = (ulonglong)(uVar35 >> 5);
                puVar32[uVar36] = puVar32[uVar36] & ~(1 << (uVar35 & 0x1f));
                lVar24 = *(longlong *)(pFVar38 + 0x30);
                if (*(uint *)(pFVar38 + 0x40) <= uVar35) {
                  *(undefined8 *)(puVar45 + -8) = 0x14425969d;
                  bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2c1,L"");
                  if (bVar60) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                uVar29 = *(uint *)(uVar36 * 4 + lVar24);
                uVar28 = *(uint *)(pFVar38 + 0x70);
                pFVar55 = (pFVar1->Storage).AllocatorInstance.Data;
                *(undefined8 *)(puVar45 + -8) = 0x1442596bd;
                FNetBitArrayHelper::SetBitValue
                          ((uint *)pFVar55,uVar28,uVar35,(uVar29 >> (uVar35 & 0x1f) & 1) != 0);
                pFVar54 = (FObjectScopeHysteresisUpdater *)
                          ((longlong)&(pFVar54->FrameCounters).AllocatorInstance.Data + 4);
                FVar43 = local_1360;
                this = local_13c0;
                pFVar55 = local_1390;
              } while (pFVar54 != local_1358);
            }
          }
          uVar44 = (ulonglong)local_d70;
          FVar43 = (ForElementType<unsigned_int>)((longlong)FVar43 + 4);
          uVar36 = (ulonglong)local_13b0;
        }
        if (local_13c8[0] != '\0') {
          *(undefined8 *)(puVar45 + -8) = 0x144259b9a;
          FCpuProfilerTrace::OutputEndEvent();
        }
        pcVar31 = "FReplicationFiltering_DependentObjects_Hysteresis";
      }
      else {
        if (DAT_155078650 == '\0') {
          *(undefined8 *)(puVar45 + -8) = 0x144259bc1;
          FCsvProfilerTrace::OutputInlineStat
                    ("FReplicationFiltering_DependentObjects_Standard",_GCsvCategory_Iris.Index);
          DAT_155078650 = '\x01';
        }
        local_13b8 = _GCsvCategory_Iris.Index;
        *(undefined8 *)(puVar45 + -8) = 0x144259be6;
        FCsvProfiler::BeginStat
                  ("FReplicationFiltering_DependentObjects_Standard",_GCsvCategory_Iris.Index,
                   "CSV_FReplicationFiltering_DependentObjects_Standard");
        if (CpuChannel->Enabled < 0) {
          local_13c8[0] = '\0';
        }
        else {
          local_13c8[0] = '\x01';
          *(undefined8 *)(puVar45 + -8) = 0x144259c1b;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&DAT_155078654,"FReplicationFiltering_DependentObjects_Standard",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                     ,0x69a);
          *(undefined8 *)(puVar45 + -8) = 0x144259c26;
          FCpuProfilerTrace::OutputBeginEvent(DAT_155078654);
        }
        uVar36 = (ulonglong)(int)local_d70;
        local_1378 = (uint *)CONCAT44(local_1378._4_4_,local_d70);
        FVar58 = (ForElementType<unsigned_int>)&local_1078;
        if (local_1078.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar58 = local_1078.SecondaryData;
        }
        FVar43 = (ForElementType<unsigned_int>)((longlong)FVar58 + uVar36 * 4);
        local_1338 = FVar43;
        uVar44 = uVar36;
        while( true ) {
          local_1370 = FVar58;
          if ((int)uVar36 != (int)uVar44) {
            local_1381 = 0;
            *(undefined8 *)(puVar45 + -8) = 0x144259c7a;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1381);
          }
          if (FVar58 == FVar43) break;
          pFVar6 = this->NetRefHandleManager;
          uVar35 = *(uint *)FVar58;
          if (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x8 !=
              *(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x34) {
            puVar57 = *(undefined1 **)&(pFVar6->SubObjects).DependencyInfos.field_0x40;
            puVar40 = &(pFVar6->SubObjects).DependencyInfos.field_0x38;
            if (puVar57 != (undefined1 *)0x0) {
              puVar40 = puVar57;
            }
            iVar53 = *(int *)(puVar40 +
                             (ulonglong)
                             (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x48 - 1U & uVar35
                             ) * 4);
            if (iVar53 != -1) {
              lVar24 = *(longlong *)&(pFVar6->SubObjects).DependencyInfos;
              do {
                lVar30 = lVar24 + (longlong)iVar53 * 0x28;
                if (*(uint *)(lVar24 + (longlong)iVar53 * 0x28) == uVar35) {
                  lVar24 = lVar30 + 4;
                  if (lVar30 == 0) {
                    lVar24 = 0;
                  }
                  if ((lVar24 != 0) && (*(int *)(lVar24 + 8) != -1)) {
                    puVar32 = (uint *)((longlong)*(int *)(lVar24 + 8) * 0x30 +
                                      *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage);
                    uVar29 = puVar32[10];
                    if (*(uint **)(puVar32 + 8) != (uint *)0x0) {
                      puVar32 = *(uint **)(puVar32 + 8);
                    }
                    if ((int)uVar29 < 0) {
                      *(undefined8 *)(puVar45 + -8) = 0x144259ede;
                      bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L"");
                      if (bVar60) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    goto LAB_144259cf3;
                  }
                  break;
                }
                iVar53 = *(int *)(lVar30 + 0x20);
              } while (iVar53 != -1);
            }
          }
          puVar32 = (uint *)0x0;
          uVar29 = 0;
LAB_144259cf3:
          puVar39 = puVar32 + (int)uVar29;
          for (; puVar32 != puVar39; puVar32 = puVar32 + 1) {
            uVar29 = *puVar32;
            *(undefined8 *)(puVar45 + -8) = 0x144259d0f;
            EVar23 = GetDependentObjectFilterStatus(pFVar6,(FNetBitArray *)(pFVar49 + 0x60),uVar29);
            if (EVar23 == Allow) {
              local_13b0 = 1;
              goto LAB_144259d6d;
            }
          }
          lVar24 = *(longlong *)(pFVar49 + 0x60);
          if (*(uint *)(pFVar49 + 0x70) <= uVar35) {
            *(undefined8 *)(puVar45 + -8) = 0x144259d4b;
            bVar60 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L"");
            if (bVar60) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          local_13b0 = (uint)((*(uint *)(lVar24 + (ulonglong)(uVar35 >> 5) * 4) >> (uVar35 & 0x1f) &
                              1) != 0);
LAB_144259d6d:
          puVar39 = (uint *)0x0;
          puVar32 = *(uint **)(pFVar49 + 0x60);
          bVar60 = SUB41(local_13b0,0);
          uVar29 = *(uint *)(local_1390 + 0x70);
          *(undefined8 *)(puVar45 + -8) = 0x144259d87;
          FNetBitArrayHelper::SetBitValue(puVar32,uVar29,uVar35,bVar60);
          pFVar6 = local_13c0->NetRefHandleManager;
          if (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x8 !=
              *(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x34) {
            puVar57 = *(undefined1 **)&(pFVar6->SubObjects).DependencyInfos.field_0x40;
            puVar40 = &(pFVar6->SubObjects).DependencyInfos.field_0x38;
            if (puVar57 != (undefined1 *)0x0) {
              puVar40 = puVar57;
            }
            iVar53 = *(int *)(puVar40 +
                             (ulonglong)
                             (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x48 - 1U & uVar35
                             ) * 4);
            if (iVar53 != -1) {
              lVar24 = *(longlong *)&(pFVar6->SubObjects).DependencyInfos;
              do {
                lVar30 = lVar24 + (longlong)iVar53 * 0x28;
                if (*(uint *)(lVar24 + (longlong)iVar53 * 0x28) == uVar35) {
                  puVar32 = (uint *)(lVar30 + 4);
                  if (lVar30 == 0) {
                    puVar32 = puVar39;
                  }
                  if ((puVar32 != (uint *)0x0) && (*puVar32 != 0xffffffff)) {
                    puVar39 = (uint *)((longlong)(int)*puVar32 * 0x30 +
                                      *(longlong *)&(pFVar6->SubObjects).DependentObjectsStorage);
                    uVar35 = puVar39[10];
                    if (*(uint **)(puVar39 + 8) != (uint *)0x0) {
                      puVar39 = *(uint **)(puVar39 + 8);
                    }
                    if ((int)uVar35 < 0) {
                      *(undefined8 *)(puVar45 + -8) = 0x144259f64;
                      bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L"");
                      if (bVar60) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    goto LAB_144259df2;
                  }
                  break;
                }
                iVar53 = *(int *)(lVar30 + 0x20);
              } while (iVar53 != -1);
            }
          }
          uVar35 = 0;
LAB_144259df2:
          pFVar55 = local_1390;
          uVar29 = local_13b0;
          puVar32 = puVar39 + (int)uVar35;
          if (puVar39 != puVar32) {
            do {
              uVar35 = *puVar39;
              lVar24 = *(longlong *)(pFVar55 + 0x30);
              if (*(uint *)(pFVar55 + 0x40) <= uVar35) {
                *(undefined8 *)(puVar45 + -8) = 0x144259e3d;
                bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < BitCount",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                    ,0x2c1,L"");
                if (bVar60) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              if (((*(uint *)(lVar24 + (ulonglong)(uVar35 >> 5) * 4) >> (uVar35 & 0x1f) & 1) == 0)
                 || ((char)uVar29 == '\0')) {
                bVar60 = false;
              }
              else {
                bVar60 = true;
              }
              uVar28 = *(uint *)(pFVar49 + 0x70);
              puVar27 = *(uint **)(pFVar49 + 0x60);
              *(undefined8 *)(puVar45 + -8) = 0x144259f86;
              FNetBitArrayHelper::SetBitValue(puVar27,uVar28,uVar35,bVar60);
              puVar39 = puVar39 + 1;
            } while (puVar39 != puVar32);
            uVar44 = (ulonglong)local_1378 & 0xffffffff;
            FVar43 = local_1338;
          }
          uVar36 = (ulonglong)local_d70;
          FVar58 = (ForElementType<unsigned_int>)((longlong)local_1370 + 4);
          this = local_13c0;
        }
        if (local_13c8[0] != '\0') {
          *(undefined8 *)(puVar45 + -8) = 0x144259fbf;
          FCpuProfilerTrace::OutputEndEvent();
        }
        pcVar31 = "FReplicationFiltering_DependentObjects_Standard";
      }
      uVar35 = local_13b8;
      *(undefined8 *)(puVar45 + -8) = 0x144259fce;
      FCsvProfiler::EndStat(pcVar31,uVar35);
      puVar39 = local_1330 + 1;
      cVar46 = local_13b3;
      local_1330 = puVar39;
    } while (puVar39 != local_1290);
  }
  FVar59.Data = local_1350.AllocatorInstance.Data;
  if (local_1350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(puVar45 + -8) = 0x144259fff;
    FMemory::Free(FVar59.Data);
  }
  FVar58 = local_1078.SecondaryData;
  if (local_1078.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    *(undefined8 *)(puVar45 + -8) = 0x14425a010;
    FMemory::Free((void *)FVar58);
  }
  FVar58 = local_d68.SecondaryData;
  if (local_d68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    *(undefined8 *)(puVar45 + -8) = 0x14425a021;
    FMemory::Free((void *)FVar58);
  }
  if (local_a58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    *(undefined8 *)(puVar45 + -8) = 0x14425a032;
    FMemory::Free((void *)local_a58.SecondaryData);
  }
  if (cVar46 != '\0') {
    *(undefined8 *)(puVar45 + -8) = 0x14425a03c;
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(undefined8 *)(puVar45 + -8) = 0x14425a04b;
  return;
}

// UpdateDynamicFilters @ 14425a080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationFiltering::UpdateDynamicFilters(FReplicationFiltering *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FReplicationSystemInternal *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 auStackY_9e8 [32];
  undefined1 local_9b8;
  undefined1 local_9b7 [7];
  FNetBitArrayView local_9b0;
  uint *local_9a0;
  undefined8 uStack_998;
  FScriptContainerElement *local_990;
  ulonglong uStack_988;
  FScriptContainerElement *local_980;
  int iStack_978;
  undefined4 uStack_974;
  FNetBitArrayView local_970;
  FUpdateDirtyObjectsBatchHelper local_960;
  uint local_838 [512];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  if (this->bHasDynamicFiltersWithUpdateTrait != 0) {
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1737,"FReplicationFiltering_UpdateFilterWithDirtyObjects",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                 ,0x6c9);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1737);
    }
    pFVar8 = UReplicationSystem::GetReplicationSystemInternal
                       ((this->ReplicationSystem).field0_0x0.DebugPtr);
    if (((pFVar8->DirtyNetObjectTracker).NetRefHandleManager == (FNetRefHandleManager *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyNetObjectTracker.IsInit()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                           ,0x41,
                           L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pFVar8->DirtyNetObjectTracker).bIsExternalAccessAllowed = false;
    FNetBitArrayView::FNetBitArrayView
              (&local_9b0,
               (uint *)(pFVar8->DirtyNetObjectTracker).DirtyNetObjects.Storage.AllocatorInstance.
                       Data,(pFVar8->DirtyNetObjectTracker).DirtyNetObjects.BitCount);
    FUpdateDirtyObjectsBatchHelper::FUpdateDirtyObjectsBatchHelper
              (&local_960,this->NetRefHandleManager,&this->DynamicFilterInfos);
    for (uVar7 = FNetBitArrayHelper::GetSetBitIndices
                           (local_9b0.Storage,local_9b0.BitCount,0,0xffffffff,local_838,0x200);
        uVar7 != 0;
        uVar7 = FNetBitArrayHelper::GetSetBitIndices
                          (local_9b0.Storage,local_9b0.BitCount,local_838[uVar7 - 1] + 1,0xffffffff,
                           local_838,0x200)) {
      BatchNotifyFiltersOfDirtyObjects(this,&local_960,local_838,uVar7);
      if (local_838[uVar7 - 1] + 1 == local_9b0.BitCount || uVar7 < 0x200) break;
    }
    if (local_960.ObjectIndicesStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_960.ObjectIndicesStorage.AllocatorInstance.Data);
    }
    if (local_960.PerFilterInfos.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
         )0x0) {
      FMemory::Free((void *)local_960.PerFilterInfos.AllocatorInstance.SecondaryData);
    }
    (pFVar8->DirtyNetObjectTracker).bIsExternalAccessAllowed = true;
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1272,"FReplicationFiltering_PreUpdateDynamicFiltering",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x4f8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1272);
  }
  iVar2 = (this->DynamicFilterInfos).ArrayNum;
  pFVar9 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x18;
  do {
    if ((this->DynamicFilterInfos).ArrayNum != iVar2) {
      local_9b8 = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_9b8);
    }
    if (pFVar9 == pFVar1) {
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      UpdateDynamicFiltering(this);
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1708,"FReplicationFiltering_PostUpdateDynamicFiltering",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                   ,0x6ac);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1708);
      }
      memset((this->ObjectsRequiringDynamicFilterUpdate).Storage.AllocatorInstance.Data,0,
             (longlong)(this->ObjectsRequiringDynamicFilterUpdate).Storage.ArrayNum << 2);
      iVar2 = (this->DynamicFilterInfos).ArrayNum;
      pFVar9 = (this->DynamicFilterInfos).AllocatorInstance.Data;
      pFVar1 = pFVar9 + (longlong)iVar2 * 0x18;
      while( true ) {
        if ((this->DynamicFilterInfos).ArrayNum != iVar2) {
          local_9b7[0] = 0;
          `TCheckedPointerIterator<UE::Net::Private::FReplicationFiltering::FFilterInfo,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_9b7);
        }
        if (pFVar9 == pFVar1) break;
        if (*(int *)(pFVar9 + 0x10) != 0) {
          if ((*(longlong *)pFVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                 ,0x67,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)(**(longlong **)pFVar9 + 0x2e8))();
        }
        pFVar9 = pFVar9 + 0x18;
      }
      (this->HysteresisState).ObjectsToClearCount = 0;
      memset((this->HysteresisState).ObjectsToClear.Storage.AllocatorInstance.Data,0,
             (longlong)(this->HysteresisState).ObjectsToClear.Storage.ArrayNum << 2);
      memset((this->HysteresisState).ObjectsExemptFromHysteresis.Storage.AllocatorInstance.Data,0,
             (longlong)(this->HysteresisState).ObjectsExemptFromHysteresis.Storage.ArrayNum << 2);
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if (*(int *)(pFVar9 + 0x10) != 0) {
      iVar3 = (this->NetObjectFilteringInfos).ArrayNum;
      local_9a0 = (uint *)((longlong)&uStack_998 + 4);
      local_990 = (FScriptContainerElement *)0x0;
      uStack_988 = uStack_988 & 0xffffffff00000000;
      pFVar4 = (this->NetObjectFilteringInfos).AllocatorInstance.Data;
      uStack_998 = 0;
      if ((iVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_988 = CONCAT44(uStack_974,iVar3);
      local_990 = pFVar4;
      local_980 = pFVar4;
      iStack_978 = iVar3;
      FNetBitArrayView::FNetBitArrayView
                (&local_970,(uint *)(this->ValidConnections).Storage.AllocatorInstance.Data,
                 (this->ValidConnections).BitCount);
      local_9a0 = local_970.Storage;
      uStack_998._0_4_ = local_970.WordCount;
      uStack_998._4_4_ = local_970.BitCount;
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(**(longlong **)pFVar9 + 0x2d8))();
    }
    pFVar9 = pFVar9 + 0x18;
  } while( true );
}

// UpdateGroupExclusionFiltering @ 14425a510

void __thiscall
UE::Net::Private::FReplicationFiltering::UpdateGroupExclusionFiltering(FReplicationFiltering *this)

{
  <lambda_1> local_res8 [4];
  
  if (this->bHasDirtyExclusionFilterGroup != 0) {
    local_res8[0].__this = this;
    FNetBitArrayHelper::
    ForAllSetBits<_UE::Net::Private::FReplicationFiltering::UpdateGroupExclusionFiltering_::__l2::<lambda_1>_&>
              ((uint *)(this->DirtyExclusionFilterGroups).Storage.AllocatorInstance.Data,
               (this->DirtyExclusionFilterGroups).Storage.ArrayNum,
               (this->DirtyExclusionFilterGroups).BitCount,local_res8);
    this->bHasDirtyExclusionFilterGroup = 0;
    memset((this->DirtyExclusionFilterGroups).Storage.AllocatorInstance.Data,0,
           (longlong)(this->DirtyExclusionFilterGroups).Storage.ArrayNum << 2);
    return;
  }
  return;
}

// UpdateGroupInclusionFiltering @ 14425a580

void __thiscall
UE::Net::Private::FReplicationFiltering::UpdateGroupInclusionFiltering(FReplicationFiltering *this)

{
  <lambda_1> local_res8 [4];
  
  if (this->bHasDirtyInclusionFilterGroup != 0) {
    local_res8[0].__this = this;
    FNetBitArrayHelper::
    ForAllSetBits<_UE::Net::Private::FReplicationFiltering::UpdateGroupInclusionFiltering_::__l2::<lambda_1>_&>
              ((uint *)(this->DirtyInclusionFilterGroups).Storage.AllocatorInstance.Data,
               (this->DirtyInclusionFilterGroups).Storage.ArrayNum,
               (this->DirtyInclusionFilterGroups).BitCount,local_res8);
    this->bHasDirtyInclusionFilterGroup = 0;
    memset((this->DirtyInclusionFilterGroups).Storage.AllocatorInstance.Data,0,
           (longlong)(this->DirtyInclusionFilterGroups).Storage.ArrayNum << 2);
    return;
  }
  return;
}

// UpdateObjectsInScope @ 14425a7f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationFiltering::UpdateObjectsInScope(FReplicationFiltering *this)

{
  undefined1 *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  FNetRefHandleManager *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  uint local_154;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_140;
  FNetBitArrayRangedForConstIterator local_130;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  uint local_108;
  uint local_100;
  uint *local_f8;
  FScriptContainerElement *local_f0;
  uint *local_e8;
  FNetBitArrayView local_e0;
  int local_d0;
  int local_cc;
  int local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  uint *local_a8;
  FScriptContainerElement *local_a0;
  FNetBitArrayView local_98;
  FNetBitArrayView local_88;
  TArrayView<unsigned_int_const_,int> local_78;
  FNetBitArrayRangedForConstIterator local_68;
  
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId868,"FReplicationFiltering_UpdateObjectsInScope",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x364);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId868);
  }
  pFVar5 = this->NetRefHandleManager;
  if (((pFVar5->ScopeFrameData).bIsValid == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScopeFrameData.bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                          ,0xef,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_98,
             (uint *)(pFVar5->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar5->ScopeFrameData).CurrentFrameScopableInternalIndices.BitCount);
  pFVar5 = this->NetRefHandleManager;
  if (((pFVar5->ScopeFrameData).bIsValid == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScopeFrameData.bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                          ,0xf2,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_e0,
             (uint *)(pFVar5->ScopeFrameData).PrevFrameScopableInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar5->ScopeFrameData).PrevFrameScopableInternalIndices.BitCount);
  uVar25 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_10c = 0;
  local_108 = local_98.BitCount;
  local_110 = 0;
  uVar16 = local_98.BitCount + 0x1f >> 5;
  if (local_98.BitCount + 0x1f >> 5 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&local_118,0,&local_10c);
  }
  iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,uVar16,&local_118,&local_110,&local_10c);
  memset(local_118.Data + (longlong)iVar13 * 4,0,(ulonglong)uVar16 << 2);
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_140,this->WordCountForObjectBitArrays,Default);
  if (((this->ObjectsWithDirtyOwnerFilter).Storage.ArrayNum < (int)this->WordCountForObjectBitArrays
      ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(int32)MaxWordIterationCount <= Storage.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x8e,
                                L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                               ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar18 = (this->ObjectsWithDirtyOwnerFilter).Storage.AllocatorInstance.Data;
  local_c0 = pFVar18;
  if (((this->ObjectsWithDirtyOwner).Storage.ArrayNum < (int)this->WordCountForObjectBitArrays) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(int32)MaxWordIterationCount <= Storage.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x8e,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                         ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar6 = (this->ObjectsWithDirtyOwner).Storage.AllocatorInstance.Data;
  local_b8 = pFVar6;
  if ((local_98.WordCount < this->WordCountForObjectBitArrays) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxWordIterationCount <= WordCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x1b0,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArrayView word count (%u). Out of Bounds memory access will occur."
                         ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_f8 = local_98.Storage;
  if ((local_110 < (int)this->WordCountForObjectBitArrays) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(int32)MaxWordIterationCount <= Storage.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x8e,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                         ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar11.Data = local_140.AllocatorInstance.Data;
  local_f0 = local_118.Data;
  if ((local_e0.WordCount < this->WordCountForObjectBitArrays) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxWordIterationCount <= WordCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x1b0,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArrayView word count (%u). Out of Bounds memory access will occur."
                         ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar16 = this->WordCountForObjectBitArrays;
  uVar21 = 0;
  if (uVar16 != 0) {
    do {
      uVar23 = local_f8[uVar21];
      lVar3 = uVar21 * 4;
      uVar19 = local_e0.Storage[uVar21];
      uVar15 = (*(uint *)(pFVar18 + lVar3) | *(uint *)(pFVar6 + lVar3)) & ~(uVar19 | uVar23);
      *(uint *)(local_f0 + lVar3) = uVar15 | uVar19;
      *(int *)(FVar11.Data + uVar25 * 4) = (int)uVar21;
      uVar20 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar20;
      uVar23 = (int)uVar25 + (uint)(uVar19 != uVar23 || uVar15 != 0);
      uVar25 = (ulonglong)uVar23;
    } while (uVar20 != uVar16);
    if (uVar23 != 0) {
      if (((this->ObjectsWithOwnerFilter).Storage.ArrayNum < (int)this->WordCountForObjectBitArrays)
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(int32)MaxWordIterationCount <= Storage.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x8e,
                                 L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                                ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar18 = (this->ObjectsWithOwnerFilter).Storage.AllocatorInstance.Data;
      local_a0 = pFVar18;
      if (((this->HysteresisState).ObjectsExemptFromHysteresis.Storage.ArrayNum <
           (int)this->WordCountForObjectBitArrays) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(int32)MaxWordIterationCount <= Storage.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x8e,
                              L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_b0 = (this->HysteresisState).ObjectsExemptFromHysteresis.Storage.AllocatorInstance.Data;
      FNetBitArrayView::FNetBitArrayView
                (&local_88,
                 (uint *)(this->NetRefHandleManager->SubObjectInternalIndices).Storage.
                         AllocatorInstance.Data,
                 (this->NetRefHandleManager->SubObjectInternalIndices).BitCount);
      uVar16 = 0;
      local_154 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar16 < local_140.ArrayNum) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar19 = *(uint *)(local_140.AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
        uVar25 = (ulonglong)uVar19;
        uVar15 = *(uint *)(local_f0 + uVar25 * 4);
        uVar20 = local_f8[uVar25];
        *(uint *)(local_c0 + uVar25 * 4) = *(uint *)(local_c0 + uVar25 * 4) & uVar20;
        *(uint *)(pFVar18 + uVar25 * 4) = *(uint *)(pFVar18 + uVar25 * 4) & uVar20;
        *(uint *)(local_b8 + uVar25 * 4) = *(uint *)(local_b8 + uVar25 * 4) & uVar20;
        uVar24 = ~uVar20 & uVar15;
        while (uVar24 != 0) {
          uVar14 = -uVar24 & uVar24;
          uVar24 = uVar24 & uVar24 - 1;
          local_d0 = 0;
          if (uVar14 != 0) {
            for (; (uVar14 >> local_d0 & 1) == 0; local_d0 = local_d0 + 1) {
            }
          }
          iVar13 = 0x20;
          if (uVar14 != 0) {
            iVar13 = local_d0;
          }
          uVar17 = iVar13 + uVar19 * 0x20;
          FreePerObjectInfoForObject(this,uVar17);
          uVar14 = 0;
          if ((int)uVar17 < (this->ObjectIndexToDynamicFilterIndex).ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar14 = (uint)(byte)(this->ObjectIndexToDynamicFilterIndex).AllocatorInstance.Data
                               [(int)uVar17];
          if (uVar14 != 0xff) {
            RemoveFromDynamicFilter(this,uVar17,uVar14);
          }
        }
        uVar20 = ~uVar15 & uVar20;
        *(uint *)(local_b0 + uVar25 * 4) = *(uint *)(local_b0 + uVar25 * 4) | uVar20;
        if ((local_88.WordCount <= uVar19) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("WordIndex < WordCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x1c7,L"NetBitArrayView index out of bounds: %u / max %u"), bVar12)
           ) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar20 = local_88.Storage[uVar25] & uVar20;
        pFVar18 = local_a0;
        while (local_a0 = pFVar18, uVar20 != 0) {
          pFVar5 = this->NetRefHandleManager;
          uVar15 = -uVar20 & uVar20;
          uVar20 = uVar20 & uVar20 - 1;
          local_cc = 0;
          if (uVar15 != 0) {
            for (; (uVar15 >> local_cc & 1) == 0; local_cc = local_cc + 1) {
            }
          }
          iVar13 = 0x20;
          if (uVar15 != 0) {
            iVar13 = local_cc;
          }
          iVar13 = iVar13 + uVar19 * 0x20;
          uVar15 = iVar13 / 100;
          uVar24 = 0;
          if ((int)uVar15 < (int)(pFVar5->ReplicatedObjectData)._padding_) {
            uVar24 = ~uVar15 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar15 = *(uint *)((longlong)(iVar13 % 100) * 0x38 + 0x28 +
                            *(longlong *)
                             ((pFVar5->ReplicatedObjectData)._padding_ + (longlong)(int)uVar15 * 8))
          ;
          pFVar18 = local_a0;
          if ((uVar15 != local_154) && (uVar15 != 0)) {
            pFVar18 = (this->ObjectsRequiringDynamicFilterUpdate).Storage.AllocatorInstance.Data;
            if (((this->ObjectsRequiringDynamicFilterUpdate).BitCount <= uVar15) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < BitCount",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                    ,0x2a2,L""), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar25 = (ulonglong)(uVar15 >> 5);
            uVar24 = uVar15 & 0x1f;
            *(uint *)(pFVar18 + uVar25 * 4) = *(uint *)(pFVar18 + uVar25 * 4) | 1 << uVar24;
            local_100 = uVar24;
            FNetObjectGroups::GetGroupIndexesOfNetObject(this->Groups,&local_78,uVar15);
            local_e8 = local_78.DataPtr;
            local_a8 = local_78.DataPtr + local_78.ArrayNum;
            if (local_78.DataPtr != local_a8) {
              do {
                uVar24 = *local_e8;
                pFVar18 = (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data;
                if (((this->ExclusionFilterGroups).BitCount <= uVar24) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < BitCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                        ,0x2c1,L""), bVar12)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar14 = uVar24 & 0x1f;
                uVar17 = 1 << (sbyte)uVar14;
                lVar3 = (ulonglong)(uVar24 >> 5) * 4;
                if ((*(uint *)(pFVar18 + (ulonglong)(uVar24 >> 5) * 4) & uVar17) == 0) {
                  pFVar18 = (this->InclusionFilterGroups).Storage.AllocatorInstance.Data;
                  if (((this->InclusionFilterGroups).BitCount <= uVar24) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index < BitCount",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                          ,0x2c1,L""), bVar12)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  if ((*(uint *)(pFVar18 + lVar3) & uVar17) != 0) {
                    pFVar18 = (this->DirtyInclusionFilterGroups).Storage.AllocatorInstance.Data;
                    if (((this->DirtyInclusionFilterGroups).BitCount <= uVar24) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index < BitCount",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                            ,0x2a2,L""), bVar12)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    *(uint *)(pFVar18 + lVar3) = *(uint *)(pFVar18 + lVar3) | 1 << uVar14;
                    this->bHasDirtyInclusionFilterGroup = 1;
                  }
                }
                else {
                  pFVar18 = (this->DirtyExclusionFilterGroups).Storage.AllocatorInstance.Data;
                  if (((this->DirtyExclusionFilterGroups).BitCount <= uVar24) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index < BitCount",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                          ,0x2a2,L""), bVar12)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  *(uint *)(pFVar18 + lVar3) = *(uint *)(pFVar18 + lVar3) | 1 << uVar14;
                  this->bHasDirtyExclusionFilterGroup = 1;
                }
                local_e8 = local_e8 + 1;
                uVar24 = local_100;
              } while (local_e8 != local_a8);
            }
            puVar2 = local_e0.Storage;
            if ((local_e0.BitCount <= uVar15) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < BitCount",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                    ,0x2c1,L""), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar14 = 1 << ((byte)uVar24 & 0x1f);
            local_154 = uVar15;
            pFVar18 = local_a0;
            if ((puVar2[uVar25] & uVar14) != 0) {
              uVar17 = 0;
              if ((int)uVar15 < (this->ObjectIndexToOwningConnection).ArrayNum) {
                uVar17 = ~uVar15 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (*(short *)((this->ObjectIndexToOwningConnection).AllocatorInstance.Data +
                            (longlong)(int)uVar15 * 2) != 0) {
                this->bHasDirtyOwner = 1;
                pFVar18 = (this->ObjectsWithDirtyOwner).Storage.AllocatorInstance.Data;
                if (((this->ObjectsWithDirtyOwner).BitCount <= uVar15) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < BitCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                        ,0x2a2,L""), bVar12)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(uint *)(pFVar18 + uVar25 * 4) =
                     *(uint *)(pFVar18 + uVar25 * 4) | 1 << (uVar24 & 0x1f);
              }
              pFVar6 = (this->ObjectsWithOwnerFilter).Storage.AllocatorInstance.Data;
              if (((this->ObjectsWithOwnerFilter).BitCount <= uVar15) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2c1,L""), bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar18 = local_a0;
              if ((*(uint *)(pFVar6 + uVar25 * 4) & uVar14) != 0) {
                this->bHasDirtyOwnerFilter = 1;
                pFVar18 = (this->ObjectsWithDirtyOwnerFilter).Storage.AllocatorInstance.Data;
                if (((this->ObjectsWithDirtyOwnerFilter).BitCount <= uVar15) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < BitCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                        ,0x2a2,L""), bVar12)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(uint *)(pFVar18 + uVar25 * 4) =
                     *(uint *)(pFVar18 + uVar25 * 4) | 1 << (uVar24 & 0x1f);
                pFVar18 = local_a0;
              }
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar23);
      FNetBitArray::begin(&this->ValidConnections,&local_130);
      FNetBitArray::end(&this->ValidConnections,&local_68);
LAB_14425b230:
      do {
        uVar16 = local_130.CurrentBitIndex;
        if ((local_130.Data != local_68.Data) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("this->Data == It.Data",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x6cb,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar16 == local_68.CurrentBitIndex) break;
        uVar19 = 0;
        if ((int)uVar16 < (this->ConnectionInfos).ArrayNum) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar18 = (this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x160;
        if ((*(int *)(pFVar18 + 8) < (int)this->WordCountForObjectBitArrays) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(int32)MaxWordIterationCount <= Storage.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x8e,
                                L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar3 = *(longlong *)pFVar18;
        if ((*(int *)(pFVar18 + 0x20) < (int)this->WordCountForObjectBitArrays) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(int32)MaxWordIterationCount <= Storage.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x8e,
                                L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)(pFVar18 + 0x18);
        if ((*(int *)(pFVar18 + 0x50) < (int)this->WordCountForObjectBitArrays) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(int32)MaxWordIterationCount <= Storage.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x8e,
                                L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar8 = *(longlong *)(pFVar18 + 0x48);
        if ((*(int *)(pFVar18 + 0x38) < (int)this->WordCountForObjectBitArrays) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(int32)MaxWordIterationCount <= Storage.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x8e,
                                L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar9 = *(longlong *)(pFVar18 + 0x30);
        if (this->bHasDynamicFilters == 0) {
          lVar22 = 0;
        }
        else {
          if ((*(int *)(pFVar18 + 0x80) < (int)this->WordCountForObjectBitArrays) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(int32)MaxWordIterationCount <= Storage.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x8e,
                                  L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                                 ), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar22 = *(longlong *)(pFVar18 + 0x78);
        }
        if (this->bHasDynamicFilters == 0) {
          lVar26 = 0;
        }
        else {
          if ((*(int *)(pFVar18 + 0xb0) < (int)this->WordCountForObjectBitArrays) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(int32)MaxWordIterationCount <= Storage.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x8e,
                                  L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                                 ), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar26 = *(longlong *)(pFVar18 + 0xa8);
        }
        uVar16 = 0;
        do {
          uVar19 = 0;
          if ((int)uVar16 < local_140.ArrayNum) {
            uVar19 = ~uVar16 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar4 = (ulonglong)*(uint *)(local_140.AllocatorInstance.Data + (longlong)(int)uVar16 * 4)
                  * 4;
          uVar19 = local_f8[*(uint *)(local_140.AllocatorInstance.Data + (longlong)(int)uVar16 * 4)]
          ;
          uVar15 = *(uint *)(local_f0 + lVar4);
          uVar24 = (~uVar15 & uVar19 | *(uint *)(lVar4 + lVar3)) & uVar19;
          *(uint *)(lVar4 + lVar3) = uVar24;
          puVar2 = (uint *)(lVar4 + lVar7);
          *puVar2 = *puVar2 & uVar19;
          uVar20 = *(uint *)(lVar4 + lVar7);
          *(uint *)(lVar4 + lVar8) = *(uint *)(lVar4 + lVar8) & uVar19;
          *(uint *)(lVar4 + lVar9) = ~uVar20 & uVar24;
          if (this->bHasDynamicFilters != 0) {
            uVar19 = ~(~uVar15 & uVar19);
            *(uint *)(lVar4 + lVar22) = *(uint *)(lVar4 + lVar22) & uVar19;
            *(uint *)(lVar4 + lVar26) = *(uint *)(lVar4 + lVar26) & uVar19;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar23);
        uVar25 = (ulonglong)(local_130.CurrentBitIndex >> 5);
        while (local_130.CurrentWord == 0) {
          uVar16 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar16;
          if (local_130.WordCount <= uVar16) {
            local_130.CurrentBitIndex = local_130.BitCount;
            goto LAB_14425b230;
          }
          local_130.CurrentBitIndex = local_130.CurrentBitIndex + 0x20;
          local_130.CurrentWord = local_130.Data[uVar25];
        }
        local_c8 = 0;
        if (local_130.CurrentWord != 0) {
          for (; (local_130.CurrentWord >> local_c8 & 1) == 0; local_c8 = local_c8 + 1) {
          }
        }
        iVar13 = 0x20;
        if (local_130.CurrentWord != 0) {
          iVar13 = local_c8;
        }
        uVar16 = iVar13 + (local_130.CurrentBitIndex & 0xffffffe0);
        local_130.CurrentBitIndex = local_130.BitCount;
        if (uVar16 < local_130.BitCount) {
          local_130.CurrentBitIndex = uVar16;
        }
        local_130.CurrentWord = local_130.CurrentWord & local_130.CurrentWord - 1;
      } while( true );
    }
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateOwnerFiltering @ 14425b600

void __thiscall
UE::Net::Private::FReplicationFiltering::UpdateOwnerFiltering(FReplicationFiltering *this)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  FNetRefHandleManager *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  <lambda_1> local_res20;
  FNetBitArrayView local_b8;
  FNetBitArrayView local_a8;
  FNetBitArrayView local_98;
  FNetBitArrayView local_88;
  <lambda_1> local_78;
  
  if (this->bHasDirtyOwnerFilter != 0 || this->bHasDirtyOwner != 0) {
    if (this->bHasDirtyOwner != 0) {
      bVar14 = -1 < CpuChannel->Enabled;
      if (bVar14) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1089,"FReplicationFiltering_UpdateDirtyOwnerValue",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                   ,0x441);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1089);
      }
      local_res20.__this = this;
      FNetBitArrayHelper::
      ForAllSetBits<_UE::Net::Private::FReplicationFiltering::UpdateOwnerFiltering_::__l8::<lambda_1>_&>
                ((uint *)(this->ObjectsWithDirtyOwner).Storage.AllocatorInstance.Data,
                 (this->ObjectsWithDirtyOwner).Storage.ArrayNum,
                 (this->ObjectsWithDirtyOwner).BitCount,&local_res20);
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    pFVar4 = this->NetRefHandleManager;
    if (((pFVar4->ScopeFrameData).bIsValid == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScopeFrameData.bIsValid",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                            ,0xef,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FNetBitArrayView::FNetBitArrayView
              (&local_88,
               (uint *)(pFVar4->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.
                       AllocatorInstance.Data,
               (pFVar4->ScopeFrameData).CurrentFrameScopableInternalIndices.BitCount);
    if (this->bHasDirtyOwnerFilter != 0) {
      bVar14 = -1 < CpuChannel->Enabled;
      if (bVar14) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1113,"FReplicationFiltering_UpdateDirtyOwnerFilter",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                   ,0x459);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1113);
      }
      uVar2 = (this->ValidConnections).Storage.ArrayNum;
      uVar3 = (this->ValidConnections).BitCount;
      uVar12 = 0;
      pFVar11 = (this->ValidConnections).Storage.AllocatorInstance.Data;
      uVar13 = 0;
      if (uVar2 != 0) {
        do {
          uVar10 = 0xffffffff;
          if (uVar13 == uVar2 - 1) {
            uVar10 = 0xffffffff >> (-(char)uVar3 & 0x1fU);
          }
          uVar8 = uVar12;
          for (uVar10 = uVar10 & *(uint *)pFVar11; uVar10 != 0; uVar10 = uVar10 >> 1) {
            if ((uVar10 & 1) != 0) {
              uVar7 = 0;
              if ((int)uVar8 < (this->ConnectionInfos).ArrayNum) {
                uVar7 = ~uVar8 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar9 = (this->ConnectionInfos).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x160
              ;
              FNetBitArrayView::FNetBitArrayView
                        (&local_b8,*(uint **)pFVar9,*(uint *)(pFVar9 + 0x10));
              FNetBitArrayView::FNetBitArrayView
                        (&local_a8,*(uint **)(pFVar9 + 0x18),*(uint *)(pFVar9 + 0x28));
              FNetBitArrayView::FNetBitArrayView
                        (&local_98,*(uint **)(pFVar9 + 0x30),*(uint *)(pFVar9 + 0x40));
              local_78.ConnectionScope = &local_b8;
              local_78.GroupExcludedObjects = &local_a8;
              local_78.ObjectsInScopeBeforeDynamicFiltering = &local_98;
              local_78.CurrentFrameObjectsInScope = &local_88;
              local_78.__this = this;
              local_78.ConnectionId = uVar8;
              FNetBitArrayHelper::
              ForAllSetBits<__UE::Net::Private::FReplicationFiltering::UpdateOwnerFiltering_::__l11::<lambda_2>::operator()_::__l3::<lambda_1>_&>
                        ((uint *)(this->ObjectsWithDirtyOwnerFilter).Storage.AllocatorInstance.Data,
                         (this->ObjectsWithDirtyOwnerFilter).Storage.ArrayNum,
                         (this->ObjectsWithDirtyOwnerFilter).BitCount,&local_78);
            }
            uVar8 = uVar8 + 1;
          }
          uVar13 = uVar13 + 1;
          pFVar11 = pFVar11 + 4;
          uVar12 = uVar12 + 0x20;
        } while (uVar13 < uVar2);
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    this->bHasDirtyOwnerFilter = 0;
    this->bHasDirtyOwner = 0;
    memset((this->ObjectsWithDirtyOwnerFilter).Storage.AllocatorInstance.Data,0,
           (longlong)(this->ObjectsWithDirtyOwnerFilter).Storage.ArrayNum << 2);
    memset((this->ObjectsWithDirtyOwner).Storage.AllocatorInstance.Data,0,
           (longlong)(this->ObjectsWithDirtyOwner).Storage.ArrayNum << 2);
  }
  return;
}

// UpdateSubObjectFilters @ 14425bfa0

void __thiscall
UE::Net::Private::FReplicationFiltering::UpdateSubObjectFilters(FReplicationFiltering *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  <lambda_1> local_res8;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1913,"FReplicationFiltering_UpdateSubObjectFilters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
               ,0x779);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1913);
  }
  local_res8.__this = this;
  if (((this->DirtySubObjectFilterGroups).BitCount != (this->SubObjectFilterGroups).BitCount) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x555,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FNetBitArrayHelper::
  ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UE::Net::Private::FReplicationFiltering::UpdateSubObjectFilters_::__l2::<lambda_1>_&>
            ((uint *)(this->DirtySubObjectFilterGroups).Storage.AllocatorInstance.Data,
             (uint *)(this->SubObjectFilterGroups).Storage.AllocatorInstance.Data,
             (this->DirtySubObjectFilterGroups).Storage.ArrayNum,
             (this->DirtySubObjectFilterGroups).BitCount,FNetBitArrayBase::AndOp,&local_res8);
  memset((this->DirtySubObjectFilterGroups).Storage.AllocatorInstance.Data,0,
         (longlong)(this->DirtySubObjectFilterGroups).Storage.ArrayNum << 2);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ~FReplicationFiltering @ 1442f8b10

void __thiscall
UE::Net::Private::FReplicationFiltering::~FReplicationFiltering(FReplicationFiltering *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  UObject *pUVar3;
  
  pFVar1 = (this->HysteresisState).ObjectsExemptFromHysteresis.Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HysteresisState).ObjectsToClear.Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectsRequiringDynamicFilterUpdate).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicFilterEnabledObjects).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Net::Private::FReplicationFiltering::FFilterInfo,int>
            ((FFilterInfo *)(this->DynamicFilterInfos).AllocatorInstance.Data,
             (this->DynamicFilterInfos).ArrayNum);
  pFVar1 = (this->DynamicFilterInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectIndexToDynamicFilterIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NetObjectFilteringInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectIndexToPerObjectInfoIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllConnectionFilteredObjects).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DirtySubObjectFilterGroups).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubObjectFilterGroups).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DirtyInclusionFilterGroups).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DirtyExclusionFilterGroups).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InclusionFilterGroups).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExclusionFilterGroups).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectScopeHysteresisFrameCounts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SubObjectFilterGroupInfos).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SubObjectFilterGroupInfos).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubObjectFilterGroupInfos);
  pFVar1 = (this->GroupInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectsWithPerObjectInfo).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedPerObjectInfoStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerObjectInfoStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectIndexToOwningConnection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectsWithOwnerFilter).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectsWithDirtyOwner).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectsWithDirtyOwnerFilter).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewConnections).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Net::Private::FReplicationFiltering::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)(this->ConnectionInfos).AllocatorInstance.Data,
             (this->ConnectionInfos).ArrayNum);
  pFVar1 = (this->ConnectionInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pUVar3 = (this->Config).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    (this->Config).Object = (UObject *)0x0;
  }
  return;
}

// operator() @ 1504b33a0

bool __thiscall
`UE::Net::Private::FReplicationFiltering::AddExclusionFilterGroup'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563242562>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563242562>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b3400

bool __thiscall
`UE::Net::Private::FReplicationFiltering::AddInclusionFilterGroup'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563242531>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563242531>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b3460

bool __thiscall
`UE::Net::Private::FReplicationFiltering::AddSubObjectFilter'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563242669>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563242669>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b3780

bool __thiscall
`UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::__l3::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241652>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241652>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b38a0

bool __thiscall
`UE::Net::Private::FReplicationFiltering::SetFilter'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563244075>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563244075>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b3a30

bool __thiscall
`UE::Net::Private::FReplicationFiltering::InitFilters'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241902>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241902>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b3a9b;
    }
  }
  bVar2 = false;
LAB_1504b3a9b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b3b20

bool __thiscall
`UE::Net::Private::FReplicationFiltering::PrintFilterObjectInfo'::__l68::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241755>);
  if (bVar4) {
    ::FName::ToString((FName *)(*(longlong *)((longlong)this + 0x18) + 8),&local_28);
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x10),&local_38,
               **(uint **)((longlong)this + 8));
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241755>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b3be9;
    }
  }
  bVar4 = false;
LAB_1504b3be9:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b3c40

bool __thiscall
`UE::Net::Private::FReplicationFiltering::AddExclusionFilterGroup'::__l2::<lambda_2>::operator()
          (void *this)

{
  FNetObjectGroupHandle_u_0_s_1 FVar1;
  FNetObjectGroups *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563242553>);
  if (bVar3) {
    FVar1 = (*(FNetObjectGroupHandle_u_0 **)((longlong)this + 8))->_s_1;
    this_00 = *(FNetObjectGroups **)(*(longlong *)this + 0x20);
    bVar3 = UE::Net::Private::FNetObjectGroups::IsValidGroup(this_00,(FNetObjectGroupHandle)FVar1);
    if ((bVar3) &&
       (lVar6 = (ulonglong)(FVar1._0_4_ & 0xffffff) * 0x20 + *(longlong *)&this_00->Groups,
       lVar6 != 0)) {
      local_res10 = *(FName *)(lVar6 + 0x10);
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    ::FName::ToString(&local_res10,&local_28);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563242553>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504b3d1d;
    }
  }
  bVar3 = false;
LAB_1504b3d1d:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 1504b3d50

bool __thiscall
`UE::Net::Private::FReplicationFiltering::AddInclusionFilterGroup'::__l2::<lambda_2>::operator()
          (void *this)

{
  FNetObjectGroupHandle_u_0_s_1 FVar1;
  FNetObjectGroups *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563242522>);
  if (bVar3) {
    FVar1 = (*(FNetObjectGroupHandle_u_0 **)((longlong)this + 8))->_s_1;
    this_00 = *(FNetObjectGroups **)(*(longlong *)this + 0x20);
    bVar3 = UE::Net::Private::FNetObjectGroups::IsValidGroup(this_00,(FNetObjectGroupHandle)FVar1);
    if ((bVar3) &&
       (lVar6 = (ulonglong)(FVar1._0_4_ & 0xffffff) * 0x20 + *(longlong *)&this_00->Groups,
       lVar6 != 0)) {
      local_res10 = *(FName *)(lVar6 + 0x10);
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    ::FName::ToString(&local_res10,&local_28);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563242522>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504b3e2d;
    }
  }
  bVar3 = false;
LAB_1504b3e2d:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 1504b3e60

bool __thiscall
`UE::Net::Private::FReplicationFiltering::AddSubObjectFilter'::__l2::<lambda_2>::operator()
          (void *this)

{
  FNetObjectGroupHandle_u_0_s_1 FVar1;
  FNetObjectGroups *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563242660>);
  if (bVar3) {
    FVar1 = (*(FNetObjectGroupHandle_u_0 **)((longlong)this + 8))->_s_1;
    this_00 = *(FNetObjectGroups **)(*(longlong *)this + 0x20);
    bVar3 = UE::Net::Private::FNetObjectGroups::IsValidGroup(this_00,(FNetObjectGroupHandle)FVar1);
    if ((bVar3) &&
       (lVar6 = (ulonglong)(FVar1._0_4_ & 0xffffff) * 0x20 + *(longlong *)&this_00->Groups,
       lVar6 != 0)) {
      local_res10 = *(FName *)(lVar6 + 0x10);
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    ::FName::ToString(&local_res10,&local_28);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563242660>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504b3f3d;
    }
  }
  bVar3 = false;
LAB_1504b3f3d:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 1504b3f70

bool __thiscall
`UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::__l5::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241650>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241650>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b3fb0

bool __thiscall
`UE::Net::Private::FReplicationFiltering::InitFilters'::__l22::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241892>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 0x10),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241892>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b401b;
    }
  }
  bVar2 = false;
LAB_1504b401b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b4050

bool __thiscall
`UE::Net::Private::FReplicationFiltering::SetFilter'::__l26::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563244061>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563244061>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b41d0

bool __thiscall
`UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::__l5::
<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241649>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241649>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b4210

bool __thiscall
`UE::Net::Private::FReplicationFiltering::SetFilter'::__l30::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563244056>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563244056>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b4260

bool __thiscall
`UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::__l5::
<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241648>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241648>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b42a0

bool __thiscall
`UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::__l5::
<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241647>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241647>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b42e0

bool __thiscall
`UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::__l5::
<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241646>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

