// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FSimpleElementVertex @ 147687a50

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex
          (FSimpleElementVertex *this,TVector4<float> *param_1,TVector2<float> *param_2,
          FLinearColor *param_3,FColor *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Position).High.field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->Position).High.field0_0x0 + 8) = uVar1;
  *(undefined8 *)&(this->Position).Low.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Position).Low.field0_0x0 + 8) = 0;
  (this->TextureCoordinate).field0_0x0 = param_2->field0_0x0;
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar1;
  (this->HitProxyIdColor).field0_0x0 = param_4->field0_0x0;
  return this;
}

// FSimpleElementVertex @ 147687a90

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex
          (FSimpleElementVertex *this,TVector4<float> *param_1,TVector2<float> *param_2,
          FLinearColor *param_3,FHitProxyId param_4)

{
  undefined8 uVar1;
  FColor FVar2;
  undefined4 extraout_var;
  
  FVar2 = FHitProxyId::GetColor(&param_4);
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Position).High.field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->Position).High.field0_0x0 + 8) = uVar1;
  *(undefined8 *)&(this->Position).Low.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Position).Low.field0_0x0 + 8) = 0;
  (this->TextureCoordinate).field0_0x0 = param_2->field0_0x0;
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar1;
  (this->HitProxyIdColor).field0_0x0 = *(FColor_u_0 *)CONCAT44(extraout_var,FVar2.field0_0x0);
  return this;
}

// FSimpleElementVertex @ 147687b00

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex
          (FSimpleElementVertex *this,TVector4<float> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,FColor *param_4)

{
  double dVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Position).High.field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->Position).High.field0_0x0 + 8) = uVar2;
  *(undefined8 *)&(this->Position).Low.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Position).Low.field0_0x0 + 8) = 0;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->TextureCoordinate).field0_0x0._s_0.X = (float)(param_2->field0_0x0)._s_0.X;
  (this->TextureCoordinate).field0_0x0._s_0.Y = (float)dVar1;
  uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar2;
  (this->HitProxyIdColor).field0_0x0 = param_4->field0_0x0;
  return this;
}

// FSimpleElementVertex @ 147687b50

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex
          (FSimpleElementVertex *this,TVector4<float> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,FHitProxyId param_4)

{
  double dVar1;
  undefined8 uVar2;
  FColor FVar3;
  undefined4 extraout_var;
  
  FVar3 = FHitProxyId::GetColor(&param_4);
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Position).High.field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->Position).High.field0_0x0 + 8) = uVar2;
  *(undefined8 *)&(this->Position).Low.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Position).Low.field0_0x0 + 8) = 0;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->TextureCoordinate).field0_0x0._s_0.X = (float)(param_2->field0_0x0)._s_0.X;
  (this->TextureCoordinate).field0_0x0._s_0.Y = (float)dVar1;
  uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar2;
  (this->HitProxyIdColor).field0_0x0 = *(FColor_u_0 *)CONCAT44(extraout_var,FVar3.field0_0x0);
  return this;
}

// FSimpleElementVertex @ 147687be0

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex
          (FSimpleElementVertex *this,TVector4<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,FColor *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(undefined8 *)((longlong)&(this->Position).High.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)&(this->Position).High.field0_0x0 = 0;
  (this->Position).High.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->Position).Low.field0_0x0 + 4) = 0;
  (this->Position).Low.field0_0x0._s_0.W = 1.0;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.W;
  fVar7 = (float)dVar2;
  fVar8 = (float)dVar3;
  fVar9 = (float)dVar4;
  fVar6 = (float)dVar1;
  (this->Position).High.field0_0x0._s_0.X = fVar6;
  (this->Position).High.field0_0x0._s_0.Y = fVar7;
  (this->Position).High.field0_0x0._s_0.Z = fVar8;
  (this->Position).High.field0_0x0._s_0.W = fVar9;
  (this->Position).Low.field0_0x0._s_0.X = (float)(dVar1 - (double)fVar6);
  (this->Position).Low.field0_0x0._s_0.Y = (float)(dVar2 - (double)fVar7);
  (this->Position).Low.field0_0x0._s_0.Z = (float)(dVar3 - (double)fVar8);
  (this->Position).Low.field0_0x0._s_0.W = (float)(dVar4 - (double)fVar9);
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->TextureCoordinate).field0_0x0._s_0.X = (float)(param_2->field0_0x0)._s_0.X;
  (this->TextureCoordinate).field0_0x0._s_0.Y = (float)dVar1;
  uVar5 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar5;
  (this->HitProxyIdColor).field0_0x0 = param_4->field0_0x0;
  return this;
}

// FSimpleElementVertex @ 147687d10

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex
          (FSimpleElementVertex *this,TVector4<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,FHitProxyId param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  FColor FVar6;
  undefined4 extraout_var;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FVar6 = FHitProxyId::GetColor(&param_4);
  *(undefined8 *)((longlong)&(this->Position).High.field0_0x0 + 0xc) = 0x3f800000;
  (this->Position).Low.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->Position).High.field0_0x0 = 0;
  (this->Position).High.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->Position).Low.field0_0x0 + 4) = 0;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.W;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  fVar8 = (float)dVar1;
  fVar9 = (float)dVar2;
  fVar10 = (float)dVar3;
  fVar7 = (float)dVar4;
  (this->Position).High.field0_0x0._s_0.X = fVar7;
  (this->Position).High.field0_0x0._s_0.Y = fVar8;
  (this->Position).High.field0_0x0._s_0.Z = fVar9;
  (this->Position).High.field0_0x0._s_0.W = fVar10;
  (this->Position).Low.field0_0x0._s_0.X = (float)(dVar4 - (double)fVar7);
  (this->Position).Low.field0_0x0._s_0.Y = (float)(dVar1 - (double)fVar8);
  (this->Position).Low.field0_0x0._s_0.Z = (float)(dVar2 - (double)fVar9);
  (this->Position).Low.field0_0x0._s_0.W = (float)(dVar3 - (double)fVar10);
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->TextureCoordinate).field0_0x0._s_0.X = (float)(param_2->field0_0x0)._s_0.X;
  (this->TextureCoordinate).field0_0x0._s_0.Y = (float)dVar1;
  uVar5 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar5;
  (this->HitProxyIdColor).field0_0x0 = *(FColor_u_0 *)CONCAT44(extraout_var,FVar6.field0_0x0);
  return this;
}

// FSimpleElementVertex @ 147687e70

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex
          (FSimpleElementVertex *this,TVector<float> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,FColor *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  (this->Position).High.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Position).High.field0_0x0._s_0.Y = fVar1;
  (this->Position).High.field0_0x0._s_0.Z = fVar2;
  (this->Position).High.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->Position).Low.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Position).Low.field0_0x0 + 8) = 0;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  (this->TextureCoordinate).field0_0x0._s_0.X = (float)(param_2->field0_0x0)._s_0.X;
  (this->TextureCoordinate).field0_0x0._s_0.Y = (float)dVar3;
  uVar4 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar4;
  (this->HitProxyIdColor).field0_0x0 = param_4->field0_0x0;
  return this;
}

// FSimpleElementVertex @ 147687ee0

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex
          (FSimpleElementVertex *this,TVector<float> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,FHitProxyId param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  FColor FVar5;
  undefined4 extraout_var;
  
  FVar5 = FHitProxyId::GetColor(&param_4);
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  (this->Position).High.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Position).High.field0_0x0._s_0.Y = fVar1;
  (this->Position).High.field0_0x0._s_0.Z = fVar2;
  (this->Position).High.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->Position).Low.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Position).Low.field0_0x0 + 8) = 0;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  (this->TextureCoordinate).field0_0x0._s_0.X = (float)(param_2->field0_0x0)._s_0.X;
  (this->TextureCoordinate).field0_0x0._s_0.Y = (float)dVar3;
  uVar4 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar4;
  (this->HitProxyIdColor).field0_0x0 = *(FColor_u_0 *)CONCAT44(extraout_var,FVar5.field0_0x0);
  return this;
}

// FSimpleElementVertex @ 147687f90

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex
          (FSimpleElementVertex *this,TVector<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,FColor *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *(undefined8 *)((longlong)&(this->Position).High.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)&(this->Position).High.field0_0x0 = 0;
  (this->Position).High.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->Position).Low.field0_0x0 + 4) = 0;
  (this->Position).Low.field0_0x0._s_0.W = 1.0;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar6 = (float)dVar2;
  fVar5 = (float)dVar1;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar7 = (float)dVar3;
  (this->Position).High.field0_0x0._s_0.X = fVar5;
  (this->Position).High.field0_0x0._s_0.Y = fVar6;
  (this->Position).High.field0_0x0._s_0.Z = fVar7;
  (this->Position).High.field0_0x0._s_0.W = 1.0;
  (this->Position).Low.field0_0x0._s_0.X = (float)(dVar1 - (double)fVar5);
  (this->Position).Low.field0_0x0._s_0.Y = (float)(dVar2 - (double)fVar6);
  (this->Position).Low.field0_0x0._s_0.Z = (float)(dVar3 - (double)fVar7);
  (this->Position).Low.field0_0x0._s_0.W = 0.0;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->TextureCoordinate).field0_0x0._s_0.X = (float)(param_2->field0_0x0)._s_0.X;
  (this->TextureCoordinate).field0_0x0._s_0.Y = (float)dVar1;
  uVar4 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar4;
  (this->HitProxyIdColor).field0_0x0 = param_4->field0_0x0;
  return this;
}

// FSimpleElementVertex @ 147688090

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex
          (FSimpleElementVertex *this,TVector<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,FHitProxyId param_4)

{
  FColor FVar1;
  undefined4 extraout_var;
  
  FVar1 = FHitProxyId::GetColor(&param_4);
  FSimpleElementVertex
            (this,param_1,param_2,param_3,(FColor *)CONCAT44(extraout_var,FVar1.field0_0x0));
  return this;
}

// FSimpleElementVertex @ 147688100

FSimpleElementVertex * __thiscall
FSimpleElementVertex::FSimpleElementVertex(FSimpleElementVertex *this)

{
  *(undefined8 *)((longlong)&(this->Position).High.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)&(this->Position).High.field0_0x0 = 0;
  (this->Position).High.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->Position).Low.field0_0x0 + 4) = 0;
  (this->Position).Low.field0_0x0._s_0.W = 1.0;
  return this;
}

