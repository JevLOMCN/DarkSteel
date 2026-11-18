// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// SetObjectPropertyValue @ 1466fac10

void __cdecl
UE::MovieScene::FComponentTransformPreAnimatedTraits::SetObjectPropertyValue
          (UObject *param_1,FCustomPropertyAccessor *param_2,FIntermediate3DTransform *param_3)

{
  char cVar1;
  int iVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar3->_padding_)) {
      cVar1 = param_1[10].field_0x1b;
      if (cVar1 == '\x02') {
        (*(code *)param_2[1].PropertyPath)(param_1,param_3);
      }
      else {
        (**(code **)(*(longlong *)param_1 + 0x5f8))(param_1,2);
        (*(code *)param_2[1].PropertyPath)(param_1,param_3);
        (**(code **)(*(longlong *)param_1 + 0x5f8))(param_1,cVar1);
      }
      goto LAB_1466faca8;
    }
  }
  (*(code *)param_2[1].PropertyPath)(param_1,param_3);
  param_1 = (UObject *)0x0;
LAB_1466faca8:
  iVar2 = (**(code **)(*(longlong *)CVarResetComponentVelocity._8_8_ + 200))();
  if (0 < iVar2) {
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)&param_1[10].field_0x8 = 0;
    *(undefined8 *)&param_1[10].field_0x10 = 0;
  }
  return;
}

// SetObjectPropertyValue @ 1466facf0

void __cdecl
UE::MovieScene::FComponentTransformPreAnimatedTraits::SetObjectPropertyValue
          (UObject *param_1,ushort param_2,FIntermediate3DTransform *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  int iVar6;
  UClass *pUVar7;
  char cVar8;
  UObject *pUVar9;
  
  if (param_1 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar7->_padding_)) {
      cVar8 = param_1[10].field_0x1b;
      pUVar9 = param_1;
      if (cVar8 != '\x02') {
        (**(code **)(*(longlong *)param_1 + 0x5f8))(param_1,2);
      }
      goto LAB_1466fad66;
    }
  }
  pUVar9 = (UObject *)0x0;
  cVar8 = '\x02';
LAB_1466fad66:
  dVar5 = param_3->T_Y;
  *(double *)(&param_1->field_0x0 + param_2) = param_3->T_X;
  *(double *)((longlong)(&param_1->field_0x0 + param_2) + 8) = dVar5;
  dVar5 = param_3->R_X;
  *(double *)(&param_1->field_0x10 + param_2) = param_3->T_Z;
  *(double *)((longlong)(&param_1->field_0x10 + param_2) + 8) = dVar5;
  dVar5 = param_3->R_Z;
  *(double *)(&param_1->field_0x20 + param_2) = param_3->R_Y;
  *(double *)((longlong)(&param_1->field_0x20 + param_2) + 8) = dVar5;
  uVar2 = *(undefined4 *)((longlong)&param_3->S_X + 4);
  uVar3 = *(undefined4 *)&param_3->S_Y;
  uVar4 = *(undefined4 *)((longlong)&param_3->S_Y + 4);
  puVar1 = (undefined4 *)(&param_1[1].field_0x8 + param_2);
  *puVar1 = *(undefined4 *)&param_3->S_X;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  *(double *)(&param_1[1].field_0x18 + param_2) = param_3->S_Z;
  if (cVar8 != '\x02') {
    (**(code **)(*(longlong *)pUVar9 + 0x5f8))(pUVar9,cVar8);
  }
  iVar6 = (**(code **)(*(longlong *)CVarResetComponentVelocity._8_8_ + 200))();
  if (0 < iVar6) {
    *(longlong *)(pUVar9 + 10) = 0;
    *(undefined8 *)&pUVar9[10].field_0x8 = 0;
    *(undefined8 *)&pUVar9[10].field_0x10 = 0;
  }
  return;
}

// SetObjectPropertyValue @ 1466fae00

void __cdecl
UE::MovieScene::FComponentTransformPreAnimatedTraits::SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FIntermediate3DTransform *param_3)

{
  char cVar1;
  int iVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar3->_padding_)) {
      cVar1 = param_1[10].field_0x1b;
      if (cVar1 == '\x02') {
        FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
                  (param_2,param_1,param_3);
      }
      else {
        (**(code **)(*(longlong *)param_1 + 0x5f8))(param_1,2);
        FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
                  (param_2,param_1,param_3);
        (**(code **)(*(longlong *)param_1 + 0x5f8))(param_1,cVar1);
      }
      goto LAB_1466faea1;
    }
  }
  FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
            (param_2,param_1,param_3);
  param_1 = (UObject *)0x0;
LAB_1466faea1:
  iVar2 = (**(code **)(*(longlong *)CVarResetComponentVelocity._8_8_ + 200))();
  if (0 < iVar2) {
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)&param_1[10].field_0x8 = 0;
    *(undefined8 *)&param_1[10].field_0x10 = 0;
  }
  return;
}

