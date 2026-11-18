// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// ~IAnimationDataModel @ 147436940

void __thiscall IAnimationDataModel::~IAnimationDataModel(IAnimationDataModel *this)

{
  *this = (IAnimationDataModel)&___7IAnimationDataModel__6B_;
  return;
}

// GenerateGuid @ 14744bda0

FGuid * __thiscall
IAnimationDataModel::GenerateGuid(IAnimationDataModel *this,FGuid *__return_storage_ptr__)

{
  byte local_res8 [32];
  
  local_res8[0] = local_res8[0] | 0xf;
  (**(code **)((longlong)*this + 0x160))(this,__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// _getUObject @ 1474846b0

UObject * __thiscall IAnimationDataModel::_getUObject(IAnimationDataModel *this)

{
  return (UObject *)0x0;
}

// execGetAnimationSequence @ 147485800

void __cdecl
IAnimationDataModel::execGetAnimationSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x148))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetBoneAnimationTracks @ 147485900

void __cdecl
IAnimationDataModel::execGetBoneAnimationTracks(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FBoneAnimationTrack *pFVar3;
  undefined8 *puVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x30))();
  if (param_3 != puVar4) {
    DestructItems<FBoneAnimationTrack,int>
              (*(FBoneAnimationTrack **)param_3,*(int *)((longlong)param_3 + 8));
    iVar2 = *(int *)(puVar4 + 1);
    piVar1 = (int *)((longlong)param_3 + 0xc);
    pFVar3 = (FBoneAnimationTrack *)*puVar4;
    *(int *)((longlong)param_3 + 8) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar2,*piVar1,param_3,iVar2,piVar1);
    ConstructItems<FBoneAnimationTrack,FBoneAnimationTrack,int>(*(void **)param_3,pFVar3,iVar2);
  }
  return;
}

// execGetBoneTrackByIndex @ 1474859b0

void __cdecl
IAnimationDataModel::execGetBoneTrackByIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FBoneAnimationTrack *pFVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = (FBoneAnimationTrack *)(**(code **)(*(longlong *)param_1 + 0x60))(param_1,local_res8[0]);
  FBoneAnimationTrack::operator=(param_3,pFVar2);
  return;
}

// execGetBoneTrackByName @ 147485a60

void __cdecl
IAnimationDataModel::execGetBoneTrackByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FBoneAnimationTrack *pFVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = (FBoneAnimationTrack *)(**(code **)(*(longlong *)param_1 + 0x68))(param_1,local_res8);
  FBoneAnimationTrack::operator=(param_3,pFVar2);
  return;
}

// execGetBoneTrackIndex @ 147485b10

void __cdecl
IAnimationDataModel::execGetBoneTrackIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  void **ppvVar3;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  
  local_18 = 0xffffffff;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_14 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  ppvVar3 = &local_48;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x80))(param_1,ppvVar3);
  *(undefined4 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetBoneTrackIndexByName @ 147485c10

void __cdecl
IAnimationDataModel::execGetBoneTrackIndexByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x88))(param_1,local_res8);
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execGetBoneTrackNames @ 147485cc0

void __cdecl
IAnimationDataModel::execGetBoneTrackNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar2 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xa8))(param_1,ppvVar2);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetFrameRate @ 147486240

void __cdecl IAnimationDataModel::execGetFrameRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x28))(param_1,local_res8);
  *(undefined8 *)param_3 = *puVar1;
  return;
}

// execGetNumBoneTracks @ 147487560

void __cdecl
IAnimationDataModel::execGetNumBoneTracks(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xa0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetNumberOfFloatCurves @ 1474875a0

void __cdecl
IAnimationDataModel::execGetNumberOfFloatCurves(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xc0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetNumberOfFrames @ 1474875e0

void __cdecl
IAnimationDataModel::execGetNumberOfFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x18))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetNumberOfKeys @ 147487620

void __cdecl
IAnimationDataModel::execGetNumberOfKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x20))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetNumberOfTransformCurves @ 147487660

void __cdecl
IAnimationDataModel::execGetNumberOfTransformCurves(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xb8))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetPlayLength @ 147487720

void __cdecl IAnimationDataModel::execGetPlayLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x10))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execIsValidBoneTrackIndex @ 1474886c0

void __cdecl
IAnimationDataModel::execIsValidBoneTrackIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x90))(param_1,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execIsValidBoneTrackName @ 147488760

void __cdecl
IAnimationDataModel::execIsValidBoneTrackName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x98))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

