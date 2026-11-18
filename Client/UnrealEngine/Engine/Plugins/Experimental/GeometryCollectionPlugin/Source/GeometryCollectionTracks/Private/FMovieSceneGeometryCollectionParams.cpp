// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionTracks
// Functions: 5

// StaticStruct @ 14e7fb5f0

UScriptStruct * __cdecl FMovieSceneGeometryCollectionParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams,
                         (UObject *)pUVar1,L"MovieSceneGeometryCollectionParams");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionParams.OuterSingleton;
}

// FMovieSceneGeometryCollectionParams @ 14e7fc430

FMovieSceneGeometryCollectionParams * __thiscall
FMovieSceneGeometryCollectionParams::FMovieSceneGeometryCollectionParams
          (FMovieSceneGeometryCollectionParams *this,FMovieSceneGeometryCollectionParams *param_1)

{
  FUtf8String *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  
  pFVar1 = &(this->GeometryCollectionCache).SubPathString;
  this->_padding_ = (longlong)&___7FMovieSceneGeometryCollectionParams__6B_;
  piVar2 = &(this->GeometryCollectionCache).SubPathString.Data.ArrayMax;
  FVar4 = (param_1->GeometryCollectionCache).AssetPath.AssetName;
  (this->GeometryCollectionCache).AssetPath.PackageName =
       (param_1->GeometryCollectionCache).AssetPath.PackageName;
  (this->GeometryCollectionCache).AssetPath.AssetName = FVar4;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->GeometryCollectionCache).SubPathString.Data.ArrayNum;
  _Src = (param_1->GeometryCollectionCache).SubPathString.Data.AllocatorInstance.Data;
  (this->GeometryCollectionCache).SubPathString.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3);
  }
  (this->StartFrameOffset).Value = (param_1->StartFrameOffset).Value;
  (this->EndFrameOffset).Value = (param_1->EndFrameOffset).Value;
  this->PlayRate = param_1->PlayRate;
  return this;
}

// FMovieSceneGeometryCollectionParams @ 14e7fc4f0

FMovieSceneGeometryCollectionParams * __thiscall
FMovieSceneGeometryCollectionParams::FMovieSceneGeometryCollectionParams
          (FMovieSceneGeometryCollectionParams *this)

{
  this->PlayRate = 1.0;
  this->_padding_ = (longlong)&___7FMovieSceneGeometryCollectionParams__6B_;
  (this->GeometryCollectionCache).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GeometryCollectionCache).AssetPath.PackageName.Number = 0;
  (this->GeometryCollectionCache).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GeometryCollectionCache).AssetPath.AssetName.Number = 0;
  (this->GeometryCollectionCache).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GeometryCollectionCache).SubPathString.Data.ArrayNum = 0;
  (this->GeometryCollectionCache).SubPathString.Data.ArrayMax = 0;
  this->StartFrameOffset = 0;
  this->EndFrameOffset = 0;
  return this;
}

// ~FMovieSceneGeometryCollectionParams @ 14e7fc7e0

void __thiscall
FMovieSceneGeometryCollectionParams::~FMovieSceneGeometryCollectionParams
          (FMovieSceneGeometryCollectionParams *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FMovieSceneGeometryCollectionParams__6B_;
  pFVar1 = (this->GeometryCollectionCache).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// GetSequenceLength @ 14e7fdc40

float __thiscall
FMovieSceneGeometryCollectionParams::GetSequenceLength(FMovieSceneGeometryCollectionParams *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  uint uVar6;
  float fVar7;
  
  if ((float)((uint)this->PlayRate & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    return 0.0;
  }
  pUVar4 = FSoftObjectPath::ResolveObject(&this->GeometryCollectionCache);
  if (pUVar4 == (UObject *)0x0) {
    return 0.0;
  }
  pUVar4 = FSoftObjectPath::ResolveObject(&this->GeometryCollectionCache);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UGeometryCollectionCache_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14e7fdcb0;
  }
  pUVar4 = (UObject *)0x0;
LAB_14e7fdcb0:
  iVar1 = *(int *)&pUVar4[1].field_0x8;
  if (iVar1 < 1) {
    return 0.0;
  }
  uVar6 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar6 = ~(iVar1 - 1U) >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar7 = (float)(*pcVar2)();
    return fVar7;
  }
  return *(float *)((longlong)*(int *)&pUVar4[1].field_0x8 * 0xb8 + -8 + *(longlong *)(pUVar4 + 1));
}

