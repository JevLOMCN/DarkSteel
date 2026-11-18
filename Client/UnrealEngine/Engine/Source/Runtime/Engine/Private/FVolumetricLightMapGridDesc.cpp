// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticStruct @ 148a73aa0

UScriptStruct * __cdecl FVolumetricLightMapGridDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridDesc.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc,(UObject *)pUVar1,
                         L"VolumetricLightMapGridDesc");
  }
  return Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridDesc.OuterSingleton;
}

// GetCell @ 148a947a0

FVolumetricLightMapGridCell * __thiscall
FVolumetricLightMapGridDesc::GetCell(FVolumetricLightMapGridDesc *this,TVector<double> *param_1)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FVolumetricLightMapGridCell *pFVar7;
  FVolumetricLightMapGridCell *pFVar8;
  undefined1 local_res8 [8];
  
  if (((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\StaticLightingData\\VolumetricLightmapGrid.cpp"
                            ,0x62,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FVolumetricLightMapGridCell *)(*pcVar5)();
    return pFVar7;
  }
  iVar4 = (this->Cells).ArrayNum;
  pFVar7 = (FVolumetricLightMapGridCell *)(this->Cells).AllocatorInstance.Data;
  pFVar8 = pFVar7 + iVar4;
  while( true ) {
    if ((this->Cells).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FVolumetricLightMapGridCell_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    dVar3 = (param_1->field0_0x0)._s_0.X;
    if (((((pFVar7->Bounds).Min.field0_0x0._s_0.X <= dVar3) &&
         (pTVar1 = &(pFVar7->Bounds).Max,
         dVar3 < (pTVar1->field0_0x0)._s_0.X || dVar3 == (pTVar1->field0_0x0)._s_0.X)) &&
        (dVar3 = (param_1->field0_0x0)._s_0.Y, (pFVar7->Bounds).Min.field0_0x0._s_0.Y <= dVar3)) &&
       (((pdVar2 = &(pFVar7->Bounds).Max.field0_0x0._s_0.Y, dVar3 < *pdVar2 || dVar3 == *pdVar2 &&
         (dVar3 = (param_1->field0_0x0)._s_0.Z, (pFVar7->Bounds).Min.field0_0x0._s_0.Z <= dVar3)) &&
        (pdVar2 = &(pFVar7->Bounds).Max.field0_0x0._s_0.Z, dVar3 < *pdVar2 || dVar3 == *pdVar2)))) {
      return pFVar7;
    }
    pFVar7 = pFVar7 + 1;
  }
  return (FVolumetricLightMapGridCell *)0x0;
}

// GetCell @ 148a94880

FVolumetricLightMapGridCell * __thiscall
FVolumetricLightMapGridDesc::GetCell(FVolumetricLightMapGridDesc *this,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVolumetricLightMapGridCell *pFVar4;
  FVolumetricLightMapGridCell *pFVar5;
  undefined1 local_res8 [8];
  FGuid local_38;
  FGuid local_28;
  
  if (((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\StaticLightingData\\VolumetricLightmapGrid.cpp"
                            ,0x53,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVolumetricLightMapGridCell *)(*pcVar2)();
    return pFVar4;
  }
  iVar1 = (this->Cells).ArrayNum;
  pFVar4 = (FVolumetricLightMapGridCell *)(this->Cells).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if ((this->Cells).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVolumetricLightMapGridCell_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    local_38.A = pFVar4->CellID;
    local_38.B = local_38.A;
    local_38.C = local_38.A;
    local_38.D = local_38.A;
    FGuid::Combine(&local_28,&this->Guid,&local_38);
    if (((local_28.C == param_1->C && local_28.B == param_1->B) && local_28.A == param_1->A) &&
        local_28.D == param_1->D) {
      return pFVar4;
    }
    pFVar4 = pFVar4 + 1;
  }
  return (FVolumetricLightMapGridCell *)0x0;
}

// GetCellDesc @ 148a94ef0

FString * __thiscall
FVolumetricLightMapGridDesc::GetCellDesc
          (FVolumetricLightMapGridDesc *this,FString *__return_storage_ptr__,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FGuid local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58;
  FString local_48;
  FString local_38;
  
  local_68._0_4_ = param_1->A;
  local_68._4_4_ = param_1->B;
  uStack_60._0_4_ = param_1->C;
  uStack_60._4_4_ = param_1->D;
  if (((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\StaticLightingData\\VolumetricLightmapGrid.cpp"
                            ,0x53,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  iVar1 = (this->Cells).ArrayNum;
  pFVar6 = (this->Cells).AllocatorInstance.Data;
  uVar3 = uStack_60._4_4_;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((this->Cells).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVolumetricLightMapGridCell_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) goto LAB_148a95080;
    local_78.A = *(uint *)(pFVar6 + 0x60);
    local_78.B = local_78.A;
    local_78.C = local_78.A;
    local_78.D = local_78.A;
    FGuid::Combine(&local_58,&this->Guid,&local_78);
    if (((uVar3 == local_58.D && (uint)uStack_60 == local_58.C) && local_68._4_4_ == local_58.B) &&
        (uint)local_68 == local_58.A) break;
    pFVar6 = pFVar6 + 0x68;
  }
  if (pFVar6 == (FScriptContainerElement *)0x0) {
LAB_148a95080:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(__return_storage_ptr__,L"Cell: %i (%s -> %s)");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetCellGuid @ 148a950c0

FGuid * __thiscall
FVolumetricLightMapGridDesc::GetCellGuid
          (FVolumetricLightMapGridDesc *this,FGuid *__return_storage_ptr__,uint param_1)

{
  FGuid local_18;
  
  local_18.A = param_1;
  local_18.B = param_1;
  local_18.C = param_1;
  local_18.D = param_1;
  FGuid::Combine(__return_storage_ptr__,&this->Guid,&local_18);
  return __return_storage_ptr__;
}

// GetIntersectingCells @ 148a954d0

TArray<FVolumetricLightMapGridCell_*,TSizedDefaultAllocator<32>_> * __thiscall
FVolumetricLightMapGridDesc::GetIntersectingCells
          (FVolumetricLightMapGridDesc *this,
          TArray<FVolumetricLightMapGridCell_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TBox<double> *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  long64 lVar6;
  TArray<FVolumetricLightMapGridCell_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = (this->Cells).ArrayNum;
  pFVar8 = (this->Cells).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((this->Cells).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVolumetricLightMapGridCell,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    lVar6 = FBulkData::GetBulkDataSize((FBulkData *)(pFVar8 + 0x38));
    if (((((*(double *)pFVar8 <= (param_1->Max).field0_0x0._s_0.X) &&
          ((param_1->Min).field0_0x0._s_0.X <= *(double *)(pFVar8 + 0x18))) &&
         (*(double *)(pFVar8 + 8) <= (param_1->Max).field0_0x0._s_0.Y)) &&
        (((param_1->Min).field0_0x0._s_0.Y <= *(double *)(pFVar8 + 0x20) &&
         (*(double *)(pFVar8 + 0x10) <= (param_1->Max).field0_0x0._s_0.Z)))) &&
       (((param_1->Min).field0_0x0._s_0.Z <= *(double *)(pFVar8 + 0x28) &&
        ((0 < lVar6 || (!param_2)))))) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_38[0] = pFVar8;
      if ((pFVar2 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 <
          pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FVolumetricLightMapGridCell_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(FScriptContainerElement **)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_38[0];
    }
    pFVar8 = pFVar8 + 0x68;
  }
  return __return_storage_ptr__;
}

// GetOrCreatePrecomputedVolumetricLightmapBuildData @ 148a95790

FPrecomputedVolumetricLightmapData * __thiscall
FVolumetricLightMapGridDesc::GetOrCreatePrecomputedVolumetricLightmapBuildData
          (FVolumetricLightMapGridDesc *this,FGuid *param_1)

{
  return (FPrecomputedVolumetricLightmapData *)0x0;
}

// GetPrecomputedVolumetricLightmapBuildData @ 148a957f0

FPrecomputedVolumetricLightmapData * __thiscall
FVolumetricLightMapGridDesc::GetPrecomputedVolumetricLightmapBuildData
          (FVolumetricLightMapGridDesc *this,FGuid *param_1)

{
  return (FPrecomputedVolumetricLightmapData *)0x0;
}

// LoadVolumetricLightMapCell @ 148a9a880

void __thiscall
FVolumetricLightMapGridDesc::LoadVolumetricLightMapCell
          (FVolumetricLightMapGridDesc *this,FVolumetricLightMapGridCell *param_1,
          FPrecomputedVolumetricLightmapData **param_2)

{
  long64 lVar1;
  bool local_res10 [24];
  undefined1 local_158 [152];
  FArchive local_c0;
  void *local_30;
  char local_18;
  FBulkData *local_10;
  
  lVar1 = FBulkData::GetBulkDataSize((FBulkData *)&param_1->BulkData);
  if (lVar1 != 0) {
    local_res10[0] = true;
    TVersionedReader<FBulkDataReader>::
    TVersionedReader<FBulkDataReader><TBulkData<unsigned_char>_&,bool>
              ((TVersionedReader<FBulkDataReader> *)local_158,&param_1->BulkData,local_res10);
    ::operator<<((FArchive *)local_158,param_2);
    FArchiveProxy::~FArchiveProxy((FArchiveProxy *)local_158);
    local_c0._0_8_ = &___7FBulkDataReader__6B_;
    FBulkData::Unlock(local_10);
    if (local_18 != '\0') {
      FMemory::Free(local_30);
      local_30 = (void *)0x0;
    }
    local_c0._0_8_ = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive(&local_c0);
  }
  return;
}

// SerializeBulkData @ 148aa22a0

void __thiscall
FVolumetricLightMapGridDesc::SerializeBulkData
          (FVolumetricLightMapGridDesc *this,FArchive *param_1,UObject *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Cells).ArrayNum;
  pFVar2 = (this->Cells).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((this->Cells).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVolumetricLightMapGridCell,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    FBulkData::Serialize((FBulkData *)(pFVar2 + 0x38),param_1,param_2,false,1,None);
    pFVar2 = pFVar2 + 0x68;
  }
  return;
}

