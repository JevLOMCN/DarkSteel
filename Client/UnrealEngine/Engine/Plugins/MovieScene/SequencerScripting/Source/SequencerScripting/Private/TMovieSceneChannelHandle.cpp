// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 1

// operator= @ 14c675f80

TMovieSceneChannelHandle<FMovieSceneChannel> * __thiscall
TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
          (TMovieSceneChannelHandle<FMovieSceneChannel> *this,
          TMovieSceneChannelHandle<FMovieSceneChannel> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)&param_1->field_0x8;
  uVar4 = *(undefined8 *)param_1;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)&this->field_0x8;
  *(undefined8 *)this = uVar4;
  *(longlong *)&this->field_0x8 = lVar3;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
  return this;
}

