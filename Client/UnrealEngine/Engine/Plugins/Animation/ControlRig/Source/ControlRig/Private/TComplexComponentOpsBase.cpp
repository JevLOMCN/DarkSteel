// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 25

// AddReferencedObjects @ 14a3dfbf0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<FMovieSceneControlRigSpaceChannel_const_*>::AddReferencedObjects
          (TComplexComponentOpsBase<FMovieSceneControlRigSpaceChannel_const_*> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  return;
}

// AddReferencedObjects @ 14a3dfc00

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FAccumulatedControlEntryIndex>::AddReferencedObjects
          (TComplexComponentOpsBase<UE::MovieScene::FAccumulatedControlEntryIndex> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  return;
}

// AddReferencedObjects @ 14a3dfc10

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FBaseControlRigEvalData>::AddReferencedObjects
          (TComplexComponentOpsBase<UE::MovieScene::FBaseControlRigEvalData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  return;
}

// AddReferencedObjects @ 14a3dfc20

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FControlRigSourceData>
::AddReferencedObjects
          (TComplexComponentOpsBase<UE::MovieScene::FControlRigSourceData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  return;
}

// AddReferencedObjects @ 14a3dfc30

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FMovieSceneControlRigSpaceBaseKey>::
AddReferencedObjects
          (TComplexComponentOpsBase<FMovieSceneControlRigSpaceBaseKey> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  return;
}

// ConstructItems @ 14a3f5500

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<FMovieSceneControlRigSpaceChannel_const_*>::ConstructItems
          (TComplexComponentOpsBase<FMovieSceneControlRigSpaceChannel_const_*> *this,void *param_1,
          int param_2)

{
  memset(param_1,0,(longlong)param_2 << 3);
  return;
}

// ConstructItems @ 14a3f5520

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FAccumulatedControlEntryIndex>::ConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FAccumulatedControlEntryIndex> *this,
          void *param_1,int param_2)

{
  DefaultConstructItems<UE::MovieScene::FAccumulatedControlEntryIndex,int>(param_1,param_2);
  return;
}

// ConstructItems @ 14a3f5540

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FBaseControlRigEvalData>::ConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FBaseControlRigEvalData> *this,void *param_1,
          int param_2)

{
  DefaultConstructItems<UE::MovieScene::FBaseControlRigEvalData,int>(param_1,param_2);
  return;
}

// ConstructItems @ 14a3f5560

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FControlRigSourceData>
::ConstructItems(TComplexComponentOpsBase<UE::MovieScene::FControlRigSourceData> *this,void *param_1
                ,int param_2)

{
  DefaultConstructItems<UE::MovieScene::FControlRigSourceData,int>(param_1,param_2);
  return;
}

// ConstructItems @ 14a3f5580

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FMovieSceneControlRigSpaceBaseKey>::
ConstructItems(TComplexComponentOpsBase<FMovieSceneControlRigSpaceBaseKey> *this,void *param_1,
              int param_2)

{
  DefaultConstructItems<FMovieSceneControlRigSpaceBaseKey,int>(param_1,param_2);
  return;
}

// CopyItems @ 14a3ff0b0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<FMovieSceneControlRigSpaceChannel_const_*>::CopyItems
          (TComplexComponentOpsBase<FMovieSceneControlRigSpaceChannel_const_*> *this,void *param_1,
          void *param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      param_3 = param_3 + -1;
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
    } while (0 < param_3);
  }
  return;
}

// CopyItems @ 14a3ff0e0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FAccumulatedControlEntryIndex>::CopyItems
          (TComplexComponentOpsBase<UE::MovieScene::FAccumulatedControlEntryIndex> *this,
          void *param_1,void *param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      param_3 = param_3 + -1;
      uVar1 = *(undefined2 *)(lVar2 + 4 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar1;
      param_1 = (void *)((longlong)param_1 + 6);
    } while (0 < param_3);
  }
  return;
}

// CopyItems @ 14a3ff120

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FBaseControlRigEvalData>::CopyItems
          (TComplexComponentOpsBase<UE::MovieScene::FBaseControlRigEvalData> *this,void *param_1,
          void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar4 + (longlong)param_1);
      uVar3 = puVar1[1];
      param_3 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x18);
    } while (0 < param_3);
  }
  return;
}

// CopyItems @ 14a3ff160

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FControlRigSourceData>
::CopyItems(TComplexComponentOpsBase<UE::MovieScene::FControlRigSourceData> *this,void *param_1,
           void *param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      param_3 = param_3 + -1;
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
    } while (0 < param_3);
  }
  return;
}

// CopyItems @ 14a3ff190

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FMovieSceneControlRigSpaceBaseKey>::
CopyItems(TComplexComponentOpsBase<FMovieSceneControlRigSpaceBaseKey> *this,void *param_1,
         void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (0 < param_3) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      param_3 = param_3 + -1;
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
    } while (0 < param_3);
  }
  return;
}

// DestructItems @ 14a403480

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<FMovieSceneControlRigSpaceChannel_const_*>::DestructItems
          (TComplexComponentOpsBase<FMovieSceneControlRigSpaceChannel_const_*> *this,void *param_1,
          int param_2)

{
  return;
}

// DestructItems @ 14a403490

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FAccumulatedControlEntryIndex>::DestructItems
          (TComplexComponentOpsBase<UE::MovieScene::FAccumulatedControlEntryIndex> *this,
          void *param_1,int param_2)

{
  return;
}

// DestructItems @ 14a4034a0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FBaseControlRigEvalData>::DestructItems
          (TComplexComponentOpsBase<UE::MovieScene::FBaseControlRigEvalData> *this,void *param_1,
          int param_2)

{
  return;
}

// DestructItems @ 14a4034b0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FControlRigSourceData>
::DestructItems(TComplexComponentOpsBase<UE::MovieScene::FControlRigSourceData> *this,void *param_1,
               int param_2)

{
  return;
}

// DestructItems @ 14a4034c0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FMovieSceneControlRigSpaceBaseKey>::
DestructItems(TComplexComponentOpsBase<FMovieSceneControlRigSpaceBaseKey> *this,void *param_1,
             int param_2)

{
  return;
}

// RelocateConstructItems @ 14a43aab0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<FMovieSceneControlRigSpaceChannel_const_*>::RelocateConstructItems
          (TComplexComponentOpsBase<FMovieSceneControlRigSpaceChannel_const_*> *this,void *param_1,
          void *param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      param_3 = param_3 + -1;
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
    } while (0 < param_3);
  }
  return;
}

// RelocateConstructItems @ 14a43aae0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FAccumulatedControlEntryIndex>::RelocateConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FAccumulatedControlEntryIndex> *this,
          void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      param_3 = param_3 + -1;
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = *(undefined2 *)(lVar1 + 4 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 6);
    } while (0 < param_3);
  }
  return;
}

// RelocateConstructItems @ 14a43ab20

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FBaseControlRigEvalData>::RelocateConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FBaseControlRigEvalData> *this,void *param_1,
          void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (0 < param_3) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      param_3 = param_3 + -1;
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = *(undefined8 *)
                   (((longlong)param_2 - (longlong)param_1) + -8 + (longlong)(puVar3 + 3));
      puVar3 = puVar3 + 3;
    } while (0 < param_3);
  }
  return;
}

// RelocateConstructItems @ 14a43ab60

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FControlRigSourceData>
::RelocateConstructItems
          (TComplexComponentOpsBase<UE::MovieScene::FControlRigSourceData> *this,void *param_1,
          void *param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      param_3 = param_3 + -1;
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
    } while (0 < param_3);
  }
  return;
}

// RelocateConstructItems @ 14a43ab90

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FMovieSceneControlRigSpaceBaseKey>::
RelocateConstructItems
          (TComplexComponentOpsBase<FMovieSceneControlRigSpaceBaseKey> *this,void *param_1,
          void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (0 < param_3) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      param_3 = param_3 + -1;
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
    } while (0 < param_3);
  }
  return;
}

