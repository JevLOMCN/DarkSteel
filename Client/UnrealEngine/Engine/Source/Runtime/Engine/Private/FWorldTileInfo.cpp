// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FWorldTileInfo @ 148a41d20

FWorldTileInfo * __thiscall
FWorldTileInfo::FWorldTileInfo(FWorldTileInfo *this,FWorldTileInfo *param_1)

{
  int *piVar1;
  TArray<FWorldTileLODInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  
  *(undefined8 *)&(this->Position).field0_0x0 = *(undefined8 *)&(param_1->Position).field0_0x0;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->AbsolutePosition).field0_0x0 =
       *(undefined8 *)&(param_1->AbsolutePosition).field0_0x0;
  (this->AbsolutePosition).field0_0x0._s_0.Z = (param_1->AbsolutePosition).field0_0x0._s_0.Z;
  dVar4 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar4;
  uVar5 = (param_1->Bounds).Pad[0];
  uVar6 = (param_1->Bounds).Pad[1];
  uVar7 = (param_1->Bounds).Pad[2];
  uVar8 = (param_1->Bounds).Pad[3];
  uVar9 = (param_1->Bounds).Pad[4];
  uVar10 = (param_1->Bounds).Pad[5];
  uVar11 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar5;
  (this->Bounds).Pad[1] = uVar6;
  (this->Bounds).Pad[2] = uVar7;
  (this->Bounds).Pad[3] = uVar8;
  (this->Bounds).Pad[4] = uVar9;
  (this->Bounds).Pad[5] = uVar10;
  (this->Bounds).Pad[6] = uVar11;
  ::FString::FString(&(this->Layer).Name,&(param_1->Layer).Name);
  (this->Layer).Reserved0 = (param_1->Layer).Reserved0;
  (this->Layer).Reserved1.field0_0x0 = (param_1->Layer).Reserved1.field0_0x0;
  (this->Layer).StreamingDistance = (param_1->Layer).StreamingDistance;
  (this->Layer).DistanceStreamingEnabled = (param_1->Layer).DistanceStreamingEnabled;
  this->bHideInTileView = param_1->bHideInTileView;
  ::FString::FString(&this->ParentTilePackageName,&param_1->ParentTilePackageName);
  pTVar2 = &this->LODList;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LODList).ArrayMax;
  iVar3 = (param_1->LODList).ArrayNum;
  _Src = (param_1->LODList).AllocatorInstance.Data;
  (this->LODList).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x14);
  }
  this->ZOrder = param_1->ZOrder;
  return this;
}

// FWorldTileInfo @ 148a41e60

FWorldTileInfo * __thiscall FWorldTileInfo::FWorldTileInfo(FWorldTileInfo *this)

{
  *(undefined8 *)&(this->Position).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Position).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->AbsolutePosition).field0_0x0 + 4) = 0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  ::FString::FString(&(this->Layer).Name,L"Uncategorized");
  *(undefined8 *)&(this->Layer).Reserved0 = 0;
  (this->Layer).Reserved1.field0_0x0._s_0.Y = 0;
  (this->Layer).StreamingDistance = 50000;
  (this->Layer).DistanceStreamingEnabled = true;
  this->bHideInTileView = false;
  (this->ParentTilePackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentTilePackageName).Data.ArrayNum = 0;
  (this->ParentTilePackageName).Data.ArrayMax = 0;
  (this->LODList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODList).ArrayNum = 0;
  (this->LODList).ArrayMax = 0;
  this->ZOrder = 0;
  return this;
}

// operator= @ 148a44cb0

FWorldTileInfo * __thiscall FWorldTileInfo::operator=(FWorldTileInfo *this,FWorldTileInfo *param_1)

{
  int *piVar1;
  TArray<FWorldTileLODInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  
  *(undefined8 *)&(this->Position).field0_0x0 = *(undefined8 *)&(param_1->Position).field0_0x0;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->AbsolutePosition).field0_0x0 =
       *(undefined8 *)&(param_1->AbsolutePosition).field0_0x0;
  (this->AbsolutePosition).field0_0x0._s_0.Z = (param_1->AbsolutePosition).field0_0x0._s_0.Z;
  dVar4 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar4;
  uVar5 = (param_1->Bounds).Pad[0];
  uVar6 = (param_1->Bounds).Pad[1];
  uVar7 = (param_1->Bounds).Pad[2];
  uVar8 = (param_1->Bounds).Pad[3];
  uVar9 = (param_1->Bounds).Pad[4];
  uVar10 = (param_1->Bounds).Pad[5];
  uVar11 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar5;
  (this->Bounds).Pad[1] = uVar6;
  (this->Bounds).Pad[2] = uVar7;
  (this->Bounds).Pad[3] = uVar8;
  (this->Bounds).Pad[4] = uVar9;
  (this->Bounds).Pad[5] = uVar10;
  (this->Bounds).Pad[6] = uVar11;
  ::FString::operator=(&(this->Layer).Name,&(param_1->Layer).Name);
  (this->Layer).Reserved0 = (param_1->Layer).Reserved0;
  (this->Layer).Reserved1.field0_0x0 = (param_1->Layer).Reserved1.field0_0x0;
  (this->Layer).StreamingDistance = (param_1->Layer).StreamingDistance;
  (this->Layer).DistanceStreamingEnabled = (param_1->Layer).DistanceStreamingEnabled;
  this->bHideInTileView = param_1->bHideInTileView;
  ::FString::operator=(&this->ParentTilePackageName,&param_1->ParentTilePackageName);
  pTVar2 = &this->LODList;
  if (pTVar2 != &param_1->LODList) {
    iVar3 = (param_1->LODList).ArrayNum;
    piVar1 = &(this->LODList).ArrayMax;
    _Src = (param_1->LODList).AllocatorInstance.Data;
    (this->LODList).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x14);
      }
    }
  }
  this->ZOrder = param_1->ZOrder;
  return this;
}

// operator== @ 148a44e30

bool __thiscall FWorldTileInfo::operator==(FWorldTileInfo *this,FWorldTileInfo *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  
  if ((this->Position).field0_0x0._s_0.X != (param_1->Position).field0_0x0._s_0.X) {
    return false;
  }
  if ((this->Position).field0_0x0._s_0.Y != (param_1->Position).field0_0x0._s_0.Y) {
    return false;
  }
  if ((this->Position).field0_0x0._s_0.Z != (param_1->Position).field0_0x0._s_0.Z) {
    return false;
  }
  dVar4 = (this->Bounds).Min.field0_0x0._s_0.X - (param_1->Bounds).Min.field0_0x0._s_0.X;
  if (__real_3fe0000000000000 <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    return false;
  }
  dVar4 = (this->Bounds).Min.field0_0x0._s_0.Y - (param_1->Bounds).Min.field0_0x0._s_0.Y;
  if (__real_3fe0000000000000 <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    return false;
  }
  dVar4 = (this->Bounds).Min.field0_0x0._s_0.Z - (param_1->Bounds).Min.field0_0x0._s_0.Z;
  if (__real_3fe0000000000000 <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    return false;
  }
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.X - (param_1->Bounds).Max.field0_0x0._s_0.X;
  if (__real_3fe0000000000000 <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    return false;
  }
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Y - (param_1->Bounds).Max.field0_0x0._s_0.Y;
  if (__real_3fe0000000000000 <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    return false;
  }
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Z - (param_1->Bounds).Max.field0_0x0._s_0.Z;
  if (__real_3fe0000000000000 <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    return false;
  }
  iVar2 = (this->ParentTilePackageName).Data.ArrayNum;
  iVar1 = (param_1->ParentTilePackageName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->ParentTilePackageName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->ParentTilePackageName).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_148a44f2d;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_148a44f2d:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (this->Layer).Name.Data.ArrayNum;
  iVar1 = (param_1->Layer).Name.Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_148a44f64;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Layer).Name.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Layer).Name.Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_148a44f64:
  if (((((this->Layer).StreamingDistance == (param_1->Layer).StreamingDistance) &&
       ((this->Layer).DistanceStreamingEnabled == (param_1->Layer).DistanceStreamingEnabled)) &&
      (this->bHideInTileView == param_1->bHideInTileView)) &&
     (((this->ZOrder == param_1->ZOrder &&
       (iVar2 = (this->LODList).ArrayNum, iVar2 == (param_1->LODList).ArrayNum)) &&
      (bVar3 = CompareItems<FWorldTileLODInfo,int>
                         ((FWorldTileLODInfo *)(this->LODList).AllocatorInstance.Data,
                          (FWorldTileLODInfo *)(param_1->LODList).AllocatorInstance.Data,iVar2),
      bVar3)))) {
    return true;
  }
  return false;
}

