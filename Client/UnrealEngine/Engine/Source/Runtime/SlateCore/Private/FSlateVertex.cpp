// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// Make<1> @ 1424e6ff0

FSlateVertex * __cdecl
FSlateVertex::Make<1>
          (FSlateVertex *__return_storage_ptr__,TTransform2<float> *param_1,TVector2<float> param_2,
          TVector2<float> param_3,float param_4,TVector4<float> *param_5,FColor param_6,
          FColor param_7)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_res18;
  float local_res20;
  float fStackX_24;
  
  local_res20 = param_3.field0_0x0._0_4_;
  fStackX_24 = param_3.field0_0x0._4_4_;
  local_res18._0_4_ = param_2.field0_0x0._0_4_;
  local_res18._4_4_ = param_2.field0_0x0._4_4_;
  __return_storage_ptr__->TexCoords[0] = (param_5->field0_0x0)._s_0.X;
  __return_storage_ptr__->TexCoords[1] = (param_5->field0_0x0)._s_0.Y;
  __return_storage_ptr__->TexCoords[2] = (param_5->field0_0x0)._s_0.Z;
  __return_storage_ptr__->TexCoords[3] = (param_5->field0_0x0)._s_0.W;
  fVar7 = (float)local_res18._4_4_ * (param_1->M).M[1][0];
  fVar1 = (param_1->M).M[1][1];
  fVar5 = (float)(undefined4)local_res18 * (param_1->M).M[0][0];
  TVar3._s_0.Y = (float)local_res18._4_4_ / fStackX_24;
  TVar3._s_0.X = (float)(undefined4)local_res18 / local_res20;
  fVar2 = (param_1->M).M[0][1];
  (__return_storage_ptr__->MaterialTexCoords).field0_0x0 = TVar3;
  fVar4 = __real_3f000000;
  fVar8 = local_res20 * param_4 + local_res20 * param_4 + __real_3f000000;
  fVar9 = fStackX_24 * param_4 + fStackX_24 * param_4 + __real_3f000000;
  local_res18._4_4_ =
       (float)(undefined4)local_res18 * fVar2 + (float)local_res18._4_4_ * fVar1 +
       (param_1->Trans).field0_0x0._s_0.Y;
  local_res18._0_4_ = fVar7 + fVar5 + (param_1->Trans).field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0 = local_res18;
  fVar1 = (__return_storage_ptr__->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->Color).field0_0x0._s_0 = (FColor_u_0_s_0)param_6.field0_0x0;
  (__return_storage_ptr__->SecondaryColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_7.field0_0x0;
  auVar6 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)(fVar1 + fVar4)),1);
  fVar1 = (__return_storage_ptr__->Position).field0_0x0._s_0.Y;
  __return_storage_ptr__->PixelSize[0] = (ushort)((int)ROUND(fVar8) >> 1);
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = auVar6._0_4_;
  auVar6 = roundps(auVar6,ZEXT416((uint)(fVar1 + fVar4)),1);
  __return_storage_ptr__->PixelSize[1] = (ushort)((int)ROUND(fVar9) >> 1);
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = auVar6._0_4_;
  return __return_storage_ptr__;
}

// Make<0> @ 1424e7120

FSlateVertex * __cdecl
FSlateVertex::Make<0>
          (FSlateVertex *__return_storage_ptr__,TTransform2<float> *param_1,TVector2<float> param_2,
          TVector2<float> param_3,float param_4,TVector4<float> *param_5,FColor param_6,
          FColor param_7)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_res18;
  float local_res20;
  float fStackX_24;
  
  local_res20 = param_3.field0_0x0._0_4_;
  fStackX_24 = param_3.field0_0x0._4_4_;
  local_res18._0_4_ = param_2.field0_0x0._0_4_;
  local_res18._4_4_ = param_2.field0_0x0._4_4_;
  __return_storage_ptr__->TexCoords[0] = (param_5->field0_0x0)._s_0.X;
  __return_storage_ptr__->TexCoords[1] = (param_5->field0_0x0)._s_0.Y;
  __return_storage_ptr__->TexCoords[2] = (param_5->field0_0x0)._s_0.Z;
  __return_storage_ptr__->TexCoords[3] = (param_5->field0_0x0)._s_0.W;
  fVar4 = (float)local_res18._4_4_ * (param_1->M).M[1][0];
  fVar1 = (param_1->M).M[1][1];
  fVar6 = fStackX_24 * param_4 + fStackX_24 * param_4 + __real_3f000000;
  TVar3._s_0.Y = (float)local_res18._4_4_ / fStackX_24;
  TVar3._s_0.X = (float)(undefined4)local_res18 / local_res20;
  fVar2 = (param_1->M).M[0][0];
  (__return_storage_ptr__->MaterialTexCoords).field0_0x0 = TVar3;
  fVar5 = local_res20 * param_4 + local_res20 * param_4 + __real_3f000000;
  local_res18._4_4_ =
       (float)local_res18._4_4_ * fVar1 + (float)(undefined4)local_res18 * (param_1->M).M[0][1] +
       (param_1->Trans).field0_0x0._s_0.Y;
  local_res18._0_4_ =
       fVar4 + (float)(undefined4)local_res18 * fVar2 + (param_1->Trans).field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0 = local_res18;
  (__return_storage_ptr__->Color).field0_0x0._s_0 = (FColor_u_0_s_0)param_6.field0_0x0;
  (__return_storage_ptr__->SecondaryColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_7.field0_0x0;
  __return_storage_ptr__->PixelSize[0] = (ushort)((int)ROUND(fVar5) >> 1);
  __return_storage_ptr__->PixelSize[1] = (ushort)((int)ROUND(fVar6) >> 1);
  return __return_storage_ptr__;
}

// Make @ 142511fa0

FSlateVertex * __cdecl
FSlateVertex::Make(FSlateVertex *__return_storage_ptr__,TTransform2<float> *param_1,
                  TVector2<float> param_2,TVector2<float> param_3,TVector2<float> param_4,
                  FColor param_5,FColor param_6,ESlateVertexRounding param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TVector2<float>_u_0 TVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_78;
  float fStack_74;
  TVector2<float>_u_0 local_58;
  float fStack_50;
  float fStack_4c;
  undefined4 local_40;
  
  fVar1 = (param_1->M).M[0][0];
  fVar2 = (param_1->M).M[1][1];
  fVar3 = (param_1->M).M[0][1];
  fVar4 = (param_1->M).M[1][0];
  fStack_50 = (param_1->Trans).field0_0x0._s_0.X;
  local_78 = param_4.field0_0x0._0_4_;
  fVar6 = local_78;
  local_78 = param_2.field0_0x0._0_4_;
  fStack_74 = param_2.field0_0x0._4_4_;
  if (param_7 == Enabled) {
    auVar7 = roundps(ZEXT416((uint)fVar6),
                     ZEXT416((uint)(fVar1 * local_78 + fVar4 * fStack_74 +
                                   fStack_50 + __real_3f000000)),1);
    fStack_50 = auVar7._0_4_;
    auVar7 = roundps(auVar7,ZEXT416((uint)(fVar3 * local_78 + (param_1->Trans).field0_0x0._s_0.Y +
                                          fVar2 * fStack_74 + __real_3f000000)),1);
    fStack_4c = auVar7._0_4_;
  }
  else {
    fStack_4c = fVar2 * fStack_74 + fVar3 * local_78 + (param_1->Trans).field0_0x0._s_0.Y;
    fStack_50 = fVar1 * local_78 + fStack_74 * fVar4 + fStack_50;
  }
  TVar5._s_0.Y = fStack_4c;
  TVar5._s_0.X = fStack_50;
  *(TVector2<float>_u_0 *)__return_storage_ptr__->TexCoords = param_3.field0_0x0;
  ((TVector2<float>_u_0 *)(__return_storage_ptr__->TexCoords + 2))->_s_0 =
       (TVector2<float>_u_0_s_0)param_4.field0_0x0;
  (__return_storage_ptr__->MaterialTexCoords).field0_0x0 = local_58;
  (__return_storage_ptr__->Position).field0_0x0 = TVar5;
  __return_storage_ptr__->Color = (FColor)param_5.field0_0x0;
  __return_storage_ptr__->SecondaryColor = (FColor)param_6.field0_0x0;
  *(undefined4 *)__return_storage_ptr__->PixelSize = local_40;
  return __return_storage_ptr__;
}

// Make @ 142512160

FSlateVertex * __cdecl
FSlateVertex::Make(FSlateVertex *__return_storage_ptr__,TTransform2<float> *param_1,
                  TVector2<float> param_2,TVector2<float> param_3,FColor *param_4,FColor param_5,
                  ESlateVertexRounding param_6)

{
  uint uVar1;
  TVector2<float>_u_0 TVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float local_68;
  float fStack_64;
  TVector2<float>_u_0 local_50;
  float fStack_48;
  float fStack_44;
  undefined4 local_38;
  
  fStack_48 = (param_1->Trans).field0_0x0._s_0.X;
  uVar1 = (param_4->field0_0x0).Bits;
  local_68 = param_3.field0_0x0._0_4_;
  auVar3 = ZEXT416((uint)local_68);
  fStack_64 = param_2.field0_0x0._4_4_;
  fVar4 = (param_1->M).M[1][0] * fStack_64;
  fStack_64 = (param_1->M).M[1][1] * fStack_64;
  local_68 = param_2.field0_0x0._0_4_;
  fVar5 = (param_1->M).M[0][1] * local_68;
  local_68 = (param_1->M).M[0][0] * local_68;
  if (param_6 == Enabled) {
    auVar3 = roundps(auVar3,ZEXT416((uint)(fVar4 + fStack_48 + local_68 + __real_3f000000)),1);
    fStack_48 = auVar3._0_4_;
    auVar3 = roundps(auVar3,ZEXT416((uint)(fVar5 + (param_1->Trans).field0_0x0._s_0.Y +
                                          fStack_64 + __real_3f000000)),1);
    fStack_44 = auVar3._0_4_;
  }
  else {
    fStack_48 = fVar4 + local_68 + fStack_48;
    fStack_44 = fStack_64 + fVar5 + (param_1->Trans).field0_0x0._s_0.Y;
  }
  TVar2._s_0.Y = fStack_44;
  TVar2._s_0.X = fStack_48;
  *(TVector2<float>_u_0 *)__return_storage_ptr__->TexCoords = param_3.field0_0x0;
  __return_storage_ptr__->TexCoords[2] = 1.0;
  __return_storage_ptr__->TexCoords[3] = 1.0;
  (__return_storage_ptr__->MaterialTexCoords).field0_0x0 = local_50;
  (__return_storage_ptr__->Position).field0_0x0 = TVar2;
  __return_storage_ptr__->Color = (FColor)uVar1;
  __return_storage_ptr__->SecondaryColor = (FColor)param_5.field0_0x0;
  *(undefined4 *)__return_storage_ptr__->PixelSize = local_38;
  return __return_storage_ptr__;
}

// Make @ 1425122a0

FSlateVertex * __cdecl
FSlateVertex::Make(FSlateVertex *__return_storage_ptr__,TTransform2<float> *param_1,
                  TVector2<float> param_2,TVector2<float> param_3,float param_4,
                  TVector4<float> *param_5,FColor param_6,FColor param_7,
                  ESlateVertexRounding param_8)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  fVar1 = (param_1->M).M[1][0];
  uVar6 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  fVar2 = (param_1->M).M[0][0];
  local_68 = param_3.field0_0x0._0_4_;
  fStack_64 = param_3.field0_0x0._4_4_;
  local_60 = param_2.field0_0x0._0_4_;
  fStack_5c = param_2.field0_0x0._4_4_;
  if (param_8 == Enabled) {
    auVar7 = roundps(ZEXT416((uint)(local_60 / local_68)),
                     ZEXT416((uint)(fVar1 * fStack_5c + (param_1->Trans).field0_0x0._s_0.X +
                                   fVar2 * local_60 + __real_3f000000)),1);
    fStack_40 = auVar7._0_4_;
    uVar5 = CONCAT22((short)((int)ROUND(fStack_64 * param_4 + fStack_64 * param_4 + __real_3f000000)
                            >> 1),
                     (short)((int)ROUND(local_68 * param_4 + local_68 * param_4 + __real_3f000000)
                            >> 1));
    auVar7 = roundps(auVar7,ZEXT416((uint)(fStack_5c * (param_1->M).M[1][1] +
                                           (param_1->Trans).field0_0x0._s_0.Y +
                                          local_60 * (param_1->M).M[0][1] + __real_3f000000)),1);
    fStack_3c = auVar7._0_4_;
  }
  else {
    fStack_3c = local_60 * (param_1->M).M[0][1] + fStack_5c * (param_1->M).M[1][1] +
                (param_1->Trans).field0_0x0._s_0.Y;
    fStack_40 = fVar1 * fStack_5c + fVar2 * local_60 + (param_1->Trans).field0_0x0._s_0.X;
    uVar5 = CONCAT22((short)((int)ROUND(fStack_64 * param_4 + fStack_64 * param_4 + __real_3f000000)
                            >> 1),
                     (short)((int)ROUND(local_68 * param_4 + local_68 * param_4 + __real_3f000000)
                            >> 1));
  }
  fStack_44 = fStack_5c / fStack_64;
  local_48 = local_60 / local_68;
  TVar3._s_0.Y = fStack_44;
  TVar3._s_0.X = local_48;
  TVar4._s_0.Y = fStack_3c;
  TVar4._s_0.X = fStack_40;
  *(undefined8 *)__return_storage_ptr__->TexCoords = *(undefined8 *)&param_5->field0_0x0;
  *(undefined8 *)(__return_storage_ptr__->TexCoords + 2) = uVar6;
  (__return_storage_ptr__->MaterialTexCoords).field0_0x0 = TVar3;
  (__return_storage_ptr__->Position).field0_0x0 = TVar4;
  __return_storage_ptr__->Color = (FColor)param_6.field0_0x0;
  __return_storage_ptr__->SecondaryColor = (FColor)param_7.field0_0x0;
  *(undefined4 *)__return_storage_ptr__->PixelSize = uVar5;
  return __return_storage_ptr__;
}

