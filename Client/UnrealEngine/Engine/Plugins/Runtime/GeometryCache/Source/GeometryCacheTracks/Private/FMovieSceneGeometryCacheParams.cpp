// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCacheTracks
// Functions: 5

// StaticStruct @ 14cd86ac0

UScriptStruct * __cdecl FMovieSceneGeometryCacheParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCacheTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams,(UObject *)pUVar1,
                         L"MovieSceneGeometryCacheParams");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheParams.OuterSingleton;
}

// FMovieSceneGeometryCacheParams @ 14cd88030

FMovieSceneGeometryCacheParams * __thiscall
FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams
          (FMovieSceneGeometryCacheParams *this,FMovieSceneGeometryCacheParams *param_1)

{
  FUtf8String *pFVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  UGeometryCache *pUVar5;
  FScriptContainerElement *_Src;
  FName FVar6;
  
  pUVar5 = (param_1->GeometryCacheAsset).field0_0x0.DebugPtr;
  (this->GeometryCacheAsset).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UGeometryCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pFVar1 = &(this->GeometryCache_DEPRECATED).SubPathString;
  (this->FirstLoopStartFrameOffset).Value = (param_1->FirstLoopStartFrameOffset).Value;
  (this->StartFrameOffset).Value = (param_1->StartFrameOffset).Value;
  (this->EndFrameOffset).Value = (param_1->EndFrameOffset).Value;
  this->PlayRate = param_1->PlayRate;
  *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 ^ (this->bReverse ^ param_1->bReverse) & 1
  ;
  this->StartOffset_DEPRECATED = param_1->StartOffset_DEPRECATED;
  this->EndOffset_DEPRECATED = param_1->EndOffset_DEPRECATED;
  piVar2 = &(this->GeometryCache_DEPRECATED).SubPathString.Data.ArrayMax;
  FVar6 = (param_1->GeometryCache_DEPRECATED).AssetPath.AssetName;
  (this->GeometryCache_DEPRECATED).AssetPath.PackageName =
       (param_1->GeometryCache_DEPRECATED).AssetPath.PackageName;
  (this->GeometryCache_DEPRECATED).AssetPath.AssetName = FVar6;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->GeometryCache_DEPRECATED).SubPathString.Data.ArrayNum;
  _Src = (param_1->GeometryCache_DEPRECATED).SubPathString.Data.AllocatorInstance.Data;
  (this->GeometryCache_DEPRECATED).SubPathString.Data.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,(ForAnyElementType *)pFVar1,iVar4,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar4);
  }
  return this;
}

// FMovieSceneGeometryCacheParams @ 14cd88110

FMovieSceneGeometryCacheParams * __thiscall
FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams(FMovieSceneGeometryCacheParams *this)

{
  float fVar1;
  FUtf8String *this_00;
  
  this->FirstLoopStartFrameOffset = 0;
  this->StartFrameOffset = 0;
  (this->EndFrameOffset).Value = 0;
  this_00 = &(this->GeometryCache_DEPRECATED).SubPathString;
  (this->GeometryCacheAsset).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryCache_DEPRECATED).SubPathString.Data.ArrayNum = 0;
  (this->GeometryCache_DEPRECATED).SubPathString.Data.ArrayMax = 0;
  (this->GeometryCache_DEPRECATED).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GeometryCache_DEPRECATED).AssetPath.AssetName.Number = 0;
  (this->GeometryCache_DEPRECATED).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GeometryCache_DEPRECATED).AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(this_00,0);
  fVar1 = GeometryCacheDeprecatedMagicNumber;
  this->bReverse = 0;
  this->StartOffset_DEPRECATED = fVar1;
  this->EndOffset_DEPRECATED = fVar1;
  this->PlayRate = 1.0;
  return this;
}

// operator= @ 14cd88620

FMovieSceneGeometryCacheParams * __thiscall
FMovieSceneGeometryCacheParams::operator=
          (FMovieSceneGeometryCacheParams *this,FMovieSceneGeometryCacheParams *param_1)

{
  FUtf8String *pFVar1;
  FUtf8String *pFVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  UGeometryCache *pUVar7;
  FScriptContainerElement *_Src;
  FName FVar8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar7 = (param_1->GeometryCacheAsset).field0_0x0.DebugPtr, pUVar7 != (UGeometryCache *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar1 = &(this->GeometryCache_DEPRECATED).SubPathString;
  (this->GeometryCacheAsset).field0_0x0 = (param_1->GeometryCacheAsset).field0_0x0;
  (this->FirstLoopStartFrameOffset).Value = (param_1->FirstLoopStartFrameOffset).Value;
  (this->StartFrameOffset).Value = (param_1->StartFrameOffset).Value;
  (this->EndFrameOffset).Value = (param_1->EndFrameOffset).Value;
  this->PlayRate = param_1->PlayRate;
  *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 ^ (this->bReverse ^ param_1->bReverse) & 1
  ;
  pFVar2 = &(param_1->GeometryCache_DEPRECATED).SubPathString;
  this->StartOffset_DEPRECATED = param_1->StartOffset_DEPRECATED;
  this->EndOffset_DEPRECATED = param_1->EndOffset_DEPRECATED;
  FVar8 = (param_1->GeometryCache_DEPRECATED).AssetPath.AssetName;
  (this->GeometryCache_DEPRECATED).AssetPath.PackageName =
       (param_1->GeometryCache_DEPRECATED).AssetPath.PackageName;
  (this->GeometryCache_DEPRECATED).AssetPath.AssetName = FVar8;
  if (pFVar1 != pFVar2) {
    iVar5 = (param_1->GeometryCache_DEPRECATED).SubPathString.Data.ArrayNum;
    piVar3 = &(this->GeometryCache_DEPRECATED).SubPathString.Data.ArrayMax;
    iVar6 = *piVar3;
    _Src = (pFVar2->Data).AllocatorInstance.Data;
    (this->GeometryCache_DEPRECATED).SubPathString.Data.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar5,iVar6,(ForAnyElementType *)pFVar1,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar5);
      }
    }
  }
  return this;
}

// GetSequenceLength @ 14cd89b20

float __thiscall
FMovieSceneGeometryCacheParams::GetSequenceLength(FMovieSceneGeometryCacheParams *this)

{
  UGeometryCache *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  pUVar1 = (this->GeometryCacheAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UGeometryCache *)0x0) {
    return 0.0;
  }
  lVar6 = (longlong)(pUVar1->Tracks).ArrayNum;
  uVar5 = 0;
  if (lVar6 < 1) {
    fVar8 = 0.0;
  }
  else {
    lVar7 = 0;
    fVar9 = 0.0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (pUVar1->Tracks).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
      fVar8 = (float)(**(code **)(**(longlong **)
                                    ((pUVar1->Tracks).AllocatorInstance.Data + lVar7 * 8) + 0x2e0))
                               ();
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
      fVar9 = fVar8;
    } while (lVar7 < lVar6);
  }
  return fVar8;
}

