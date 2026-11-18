// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 4

// Render_OnCreate @ 1431249d0

void __thiscall
FTransformStateStreamImpl::Render_OnCreate
          (FTransformStateStreamImpl *this,FTransformStaticState *param_1,
          FTransformDynamicState *param_2,FTransformObject **param_3,bool param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FTransformObject *pFVar4;
  FTransformObject *pFVar5;
  
  pFVar5 = *param_3;
  if (pFVar5 == (FTransformObject *)0x0) {
    pFVar4 = ::operator_new(0xb0);
    pFVar5 = (FTransformObject *)0x0;
    if (pFVar4 != (FTransformObject *)0x0) {
      *(undefined8 *)&pFVar4->field_0x18 = 0;
      *(undefined8 *)&pFVar4->field_0x38 = 0;
      *(undefined8 *)&pFVar4->field_0xa2 = 0;
      *(undefined4 *)&pFVar4->field_0xaa = 0;
      *(undefined2 *)&pFVar4->field_0xae = 0;
      (pFVar4->Parent).Reference = (FTransformObject *)0x0;
      *(undefined8 *)&pFVar4->field_0x8 = 0;
      *(undefined8 *)&pFVar4->field_0x10 = 0;
      *(undefined ***)pFVar4 = &___7FTransformObject__6B_;
      pFVar4->First = (FTransformObjectListener *)0x0;
      pFVar4->LocalState = (FTransformDynamicState *)0x0;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
      (pFVar4->WorldTransform).Rotation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[0];
      (pFVar4->WorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
      (pFVar4->WorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
      (pFVar4->WorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
      (pFVar4->WorldTransform).Translation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      (pFVar4->WorldTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
      (pFVar4->WorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
      (pFVar4->WorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
      (pFVar4->WorldTransform).Scale3D.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[0];
      (pFVar4->WorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
      (pFVar4->WorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
      (pFVar4->WorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
      pFVar4->bDirty = true;
      pFVar4->bVisible = true;
      pFVar5 = pFVar4;
    }
    LOCK();
    *(int *)&pFVar5->field_0x18 = *(int *)&pFVar5->field_0x18 + 1;
    UNLOCK();
    pFVar5->LocalState = param_2;
    *param_3 = pFVar5;
  }
  SetParent(this,pFVar5,param_2);
  return;
}

// Render_OnUpdate @ 143124ad0

void __thiscall
FTransformStateStreamImpl::Render_OnUpdate
          (FTransformStateStreamImpl *this,FTransformStaticState *param_1,
          FTransformDynamicState *param_2,FTransformObject **param_3)

{
  uint uVar1;
  FTransformObject *pFVar2;
  FTransformObjectListener *pFVar3;
  
  uVar1 = param_2->ModifiedFlags;
  pFVar2 = *param_3;
  if ((((uVar1 & 1) != 0) || ((uVar1 & 8) != 0)) || ((uVar1 & 2) != 0)) {
    pFVar3 = pFVar2->First;
    pFVar2->bDirty = true;
    for (; pFVar3 != (FTransformObjectListener *)0x0; pFVar3 = pFVar3->Next) {
      (**(code **)pFVar3->_padding_)(pFVar3);
    }
  }
  if ((param_2->ModifiedFlags & 4) != 0) {
    SetParent(this,pFVar2,param_2);
  }
  return;
}

// Render_OnDestroy @ 143124b50

void __thiscall
FTransformStateStreamImpl::Render_OnDestroy
          (FTransformStateStreamImpl *this,FTransformStaticState *param_1,
          FTransformDynamicState *param_2,FTransformObject **param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FTransformObject *pFVar3;
  
  pFVar3 = *param_3;
  puVar1 = &pFVar3->field_0x18;
  LOCK();
  iVar2 = *(int *)puVar1;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (puVar1 == (undefined1 *)0x0) {
      pFVar3 = (FTransformObject *)0x0;
    }
    if (pFVar3 != (FTransformObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143124b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      return;
    }
  }
  return;
}

// SetParent @ 143128750

void __thiscall
FTransformStateStreamImpl::SetParent
          (FTransformStateStreamImpl *this,FTransformObject *param_1,FTransformDynamicState *param_2
          )

{
  undefined1 *puVar1;
  int iVar2;
  FTransformObject *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  FInstance *pFVar9;
  FTransformObject *pFVar10;
  
  iVar2 = *(int *)&(param_2->Parent).field_0xc;
  if ((iVar2 != 0) && ((param_1->Parent).Reference == (FTransformObject *)0x0)) {
    pFVar9 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
             ::GetElementAt((FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                             *)&this->field_0x20,iVar2 - 1);
    pFVar10 = pFVar9->UserData;
    if (pFVar10 == (FTransformObject *)0x0) {
      pFVar10 = ::operator_new(0xb0);
      if (pFVar10 != (FTransformObject *)0x0) {
        *(undefined8 *)&pFVar10->field_0x18 = 0;
        *(undefined8 *)&pFVar10->field_0x38 = 0;
        *(undefined8 *)&pFVar10->field_0xa2 = 0;
        *(undefined4 *)&pFVar10->field_0xaa = 0;
        *(undefined2 *)&pFVar10->field_0xae = 0;
        (pFVar10->Parent).Reference = (FTransformObject *)0x0;
        *(undefined8 *)&pFVar10->field_0x8 = 0;
        *(undefined8 *)&pFVar10->field_0x10 = 0;
        *(undefined ***)pFVar10 = &___7FTransformObject__6B_;
        pFVar10->First = (FTransformObjectListener *)0x0;
        pFVar10->LocalState = (FTransformDynamicState *)0x0;
        fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
        fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
        (pFVar10->WorldTransform).Rotation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[0];
        (pFVar10->WorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar5;
        (pFVar10->WorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar6;
        (pFVar10->WorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar7;
        fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
        fVar6 = GlobalVectorConstants::FloatZero.m128_f32[2];
        fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
        (pFVar10->WorldTransform).Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        (pFVar10->WorldTransform).Translation.XY.m128d_f64[1] = (double)fVar5;
        (pFVar10->WorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar6;
        (pFVar10->WorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar7;
        fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
        (pFVar10->WorldTransform).Scale3D.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[0];
        (pFVar10->WorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar5;
        (pFVar10->WorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar6;
        (pFVar10->WorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar7;
        pFVar10->bDirty = true;
        pFVar10->bVisible = true;
      }
      LOCK();
      *(int *)&pFVar10->field_0x18 = *(int *)&pFVar10->field_0x18 + 1;
      UNLOCK();
      pFVar9->UserData = pFVar10;
      iVar2 = *(int *)&(param_2->Parent).field_0xc;
      if ((iVar2 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Id",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                             ,0x221,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
               ::GetElementAt((FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                               *)&this->field_0x20,iVar2 - 1);
      if (((pFVar9->RendDynamicState).bIsSet == false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SetParent(this,pFVar10,&(pFVar9->RendDynamicState).TypedValue);
    }
    if (pFVar10->First != (FTransformObjectListener *)0x0) {
      *(FTransformObjectListener **)&param_1->field_0x10 = pFVar10->First;
      pFVar10->First->Prev = (FTransformObjectListener *)param_1;
    }
    pFVar10->First = (FTransformObjectListener *)param_1;
    pFVar3 = (param_1->Parent).Reference;
    if (pFVar3 != pFVar10) {
      (param_1->Parent).Reference = pFVar10;
      if (pFVar10 != (FTransformObject *)0x0) {
        LOCK();
        *(int *)&pFVar10->field_0x18 = *(int *)&pFVar10->field_0x18 + 1;
        UNLOCK();
      }
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
    }
  }
  return;
}

