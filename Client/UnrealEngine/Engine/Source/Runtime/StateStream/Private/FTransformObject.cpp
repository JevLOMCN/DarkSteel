// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 6

// ~FTransformObject @ 143125df0

void __thiscall FTransformObject::~FTransformObject(FTransformObject *this)

{
  undefined1 *puVar1;
  int iVar2;
  FTransformObject *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  *(undefined ***)this = &___7FTransformObject__6B_;
  pFVar3 = (this->Parent).Reference;
  if (pFVar3 != (FTransformObject *)0x0) {
    if (*(longlong *)&this->field_0x8 == 0) {
      pFVar3->First = *(FTransformObjectListener **)&this->field_0x10;
    }
    else {
      *(FTransformObjectListener **)(*(longlong *)&this->field_0x8 + 0x10) =
           *(FTransformObjectListener **)&this->field_0x10;
    }
    if (*(longlong *)&this->field_0x10 != 0) {
      *(undefined8 *)(*(longlong *)&this->field_0x10 + 8) = *(undefined8 *)&this->field_0x8;
    }
    *(undefined8 *)&this->field_0x10 = 0;
    *(undefined8 *)&this->field_0x8 = 0;
    pFVar3 = (this->Parent).Reference;
    if (pFVar3 != (FTransformObject *)0x0) {
      (this->Parent).Reference = (FTransformObject *)0x0;
      puVar1 = &pFVar3->field_0x18;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      }
    }
  }
  if (this->First != (FTransformObjectListener *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!First",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\TransformStateStreamImpl.cpp"
                       ,0xf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Parent).Reference;
  if (pFVar3 != (FTransformObject *)0x0) {
    puVar1 = &pFVar3->field_0x18;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
    }
  }
  return;
}

// AddListener @ 143126590

void __thiscall
FTransformObject::AddListener(FTransformObject *this,FTransformObjectListener *param_1)

{
  if (this->First != (FTransformObjectListener *)0x0) {
    param_1->Next = this->First;
    this->First->Prev = param_1;
  }
  this->First = param_1;
  return;
}

// CallListeners @ 1431274e0

void __thiscall FTransformObject::CallListeners(FTransformObject *this)

{
  FTransformObjectListener *pFVar1;
  
  for (pFVar1 = this->First; pFVar1 != (FTransformObjectListener *)0x0; pFVar1 = pFVar1->Next) {
    (**(code **)pFVar1->_padding_)(pFVar1);
  }
  return;
}

// GetInfo @ 143127c20

Info * __thiscall FTransformObject::GetInfo(FTransformObject *this,Info *__return_storage_ptr__)

{
  TTransform<double> *pTVar1;
  FTransformDynamicState *pFVar2;
  FTransformObject *this_00;
  double dVar3;
  Info local_28;
  
  pTVar1 = &this->WorldTransform;
  if (this->bDirty != false) {
    pFVar2 = this->LocalState;
    dVar3 = (pFVar2->LocalTransform).Rotation.XY.m128d_f64[1];
    (pTVar1->Rotation).XY.m128d_f64[0] = (pFVar2->LocalTransform).Rotation.XY.m128d_f64[0];
    (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar3;
    dVar3 = (pFVar2->LocalTransform).Rotation.ZW.m128d_f64[1];
    (this->WorldTransform).Rotation.ZW.m128d_f64[0] =
         (pFVar2->LocalTransform).Rotation.ZW.m128d_f64[0];
    (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (pFVar2->LocalTransform).Translation.XY.m128d_f64[1];
    (this->WorldTransform).Translation.XY.m128d_f64[0] =
         (pFVar2->LocalTransform).Translation.XY.m128d_f64[0];
    (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar3;
    dVar3 = (pFVar2->LocalTransform).Translation.ZW.m128d_f64[1];
    (this->WorldTransform).Translation.ZW.m128d_f64[0] =
         (pFVar2->LocalTransform).Translation.ZW.m128d_f64[0];
    (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (pFVar2->LocalTransform).Scale3D.XY.m128d_f64[1];
    (this->WorldTransform).Scale3D.XY.m128d_f64[0] =
         (pFVar2->LocalTransform).Scale3D.XY.m128d_f64[0];
    (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar3;
    dVar3 = (pFVar2->LocalTransform).Scale3D.ZW.m128d_f64[1];
    (this->WorldTransform).Scale3D.ZW.m128d_f64[0] =
         (pFVar2->LocalTransform).Scale3D.ZW.m128d_f64[0];
    (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
    this->bVisible = pFVar2->bVisible;
    this_00 = (this->Parent).Reference;
    if (this_00 != (FTransformObject *)0x0) {
      GetInfo(this_00,&local_28);
      UE::Math::TTransform<double>::Multiply(pTVar1,pTVar1,local_28.WorldTransform);
      this->bVisible = (bool)(this->bVisible | local_28.bVisible);
    }
    this->bDirty = false;
  }
  __return_storage_ptr__->BoneTransforms = &this->LocalState->BoneTransforms;
  __return_storage_ptr__->bVisible = this->bVisible;
  __return_storage_ptr__->WorldTransform = pTVar1;
  return __return_storage_ptr__;
}

// OnTransformObjectDirty @ 143127d40

void __thiscall FTransformObject::OnTransformObjectDirty(FTransformObject *this)

{
  FTransformObjectListener *pFVar1;
  
  pFVar1 = this->First;
  this->bDirty = true;
  for (; pFVar1 != (FTransformObjectListener *)0x0; pFVar1 = pFVar1->Next) {
    (**(code **)pFVar1->_padding_)(pFVar1);
  }
  return;
}

// RemoveListener @ 143127ea0

void __thiscall
FTransformObject::RemoveListener(FTransformObject *this,FTransformObjectListener *param_1)

{
  if (param_1->Prev == (FTransformObjectListener *)0x0) {
    this->First = param_1->Next;
  }
  else {
    param_1->Prev->Next = param_1->Next;
  }
  if (param_1->Next != (FTransformObjectListener *)0x0) {
    param_1->Next->Prev = param_1->Prev;
  }
  param_1->Prev = (FTransformObjectListener *)0x0;
  param_1->Next = (FTransformObjectListener *)0x0;
  return;
}

