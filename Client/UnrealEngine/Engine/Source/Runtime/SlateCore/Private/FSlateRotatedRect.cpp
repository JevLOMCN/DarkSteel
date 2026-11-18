// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// IsUnderLocation @ 142511870

bool __thiscall
FSlateRotatedRect::IsUnderLocation(FSlateRotatedRect *this,FDeprecateVector2DParameter param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res10;
  float fStackX_14;
  
  fVar5 = (this->ExtentX).field0_0x0._s_0.Y;
  fVar1 = (this->ExtentX).field0_0x0._s_0.X;
  fVar2 = (this->ExtentY).field0_0x0._s_0.X;
  fVar3 = (this->ExtentY).field0_0x0._s_0.Y;
  local_res10 = param_1._0_4_;
  local_res10 = local_res10 - (this->TopLeft).field0_0x0._s_0.X;
  fStackX_14 = param_1._4_4_;
  fStackX_14 = fStackX_14 - (this->TopLeft).field0_0x0._s_0.Y;
  fVar4 = __real_3f800000 / (fVar3 * fVar1 - fVar2 * fVar5);
  fVar5 = (fVar5 * local_res10 - fVar1 * fStackX_14) * fVar4;
  if ((((fVar5 <= __real_80000000) && (__real_bf800000 <= fVar5)) &&
      (fVar4 = (fVar3 * local_res10 - fVar2 * fStackX_14) * fVar4, 0.0 <= fVar4)) &&
     (fVar4 <= __real_3f800000)) {
    return true;
  }
  return false;
}

// MakeRotatedRect @ 1425147a0

FSlateRotatedRect * __cdecl
FSlateRotatedRect::MakeRotatedRect
          (FSlateRotatedRect *__return_storage_ptr__,FSlateRect *param_1,TTransform2<float> *param_2
          )

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  TVector2<float>_u_0 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  
  local_20._s_0.X = param_1->Left;
  local_20._s_0.Y = param_1->Top;
  local_18 = param_1->Right - local_20._s_0.X;
  local_c = param_1->Bottom - local_20._s_0.Y;
  local_14 = 0;
  TransformRect<TTransform2<float>_>
            ((FSlateRotatedRect *)&local_38._s_0,param_2,(FSlateRotatedRect *)&local_20._s_0);
  TVar3._s_0.Y = local_38._s_0.Y;
  TVar3._s_0.X = local_38._s_0.X;
  (__return_storage_ptr__->TopLeft).field0_0x0 = TVar3;
  TVar1._s_0.Y = (local_38._s_0.Y + local_2c) - local_38._s_0.Y;
  TVar1._s_0.X = (local_30 + local_38._s_0.X) - local_38._s_0.X;
  (__return_storage_ptr__->ExtentX).field0_0x0 = TVar1;
  TVar2._s_0.Y = (local_24 + local_38._s_0.Y) - local_38._s_0.Y;
  TVar2._s_0.X = (local_28 + local_38._s_0.X) - local_38._s_0.X;
  (__return_storage_ptr__->ExtentY).field0_0x0 = TVar2;
  return __return_storage_ptr__;
}

// MakeSnappedRotatedRect @ 1425150f0

FSlateRotatedRect * __cdecl
FSlateRotatedRect::MakeSnappedRotatedRect
          (FSlateRotatedRect *__return_storage_ptr__,FSlateRect *param_1,TTransform2<float> *param_2
          )

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 unaff_XMM7 [16];
  float fVar7;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar8 [16];
  TVector2<float>_u_0 local_68;
  float local_60;
  undefined8 local_5c;
  float local_54;
  TVector2<float>_u_0 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  local_68._s_0.X = param_1->Left;
  local_68._s_0.Y = param_1->Top;
  local_60 = param_1->Right - local_68._s_0.X;
  local_54 = param_1->Bottom - local_68._s_0.Y;
  local_5c = 0;
  TransformRect<TTransform2<float>_>
            ((FSlateRotatedRect *)&local_50._s_0,param_2,(FSlateRotatedRect *)&local_68._s_0);
  fVar4 = __real_3f000000;
  auVar8 = roundps(unaff_XMM8,ZEXT416((uint)(local_50._s_0.Y + __real_3f000000)),1);
  fVar7 = auVar8._0_4_;
  auVar8 = roundps(unaff_XMM7,ZEXT416((uint)(local_50._s_0.X + __real_3f000000)),1);
  fVar6 = auVar8._0_4_;
  TVar1._s_0.Y = fVar7;
  TVar1._s_0.X = fVar6;
  (__return_storage_ptr__->TopLeft).field0_0x0 = TVar1;
  auVar5 = roundps(in_XMM5,ZEXT416((uint)(local_44 + local_50._s_0.Y + fVar4)),1);
  auVar8 = roundps(in_XMM3,ZEXT416((uint)(local_48 + local_50._s_0.X + fVar4)),1);
  TVar2._s_0.Y = auVar5._0_4_ - fVar7;
  TVar2._s_0.X = auVar8._0_4_ - fVar6;
  (__return_storage_ptr__->ExtentX).field0_0x0 = TVar2;
  auVar5 = roundps(ZEXT416((uint)local_50._s_0.Y),
                   ZEXT416((uint)(local_3c + local_50._s_0.Y + fVar4)),1);
  auVar8 = ZEXT416((uint)(local_40 + local_50._s_0.X + fVar4));
  auVar8 = roundps(auVar8,auVar8,1);
  TVar3._s_0.Y = auVar5._0_4_ - fVar7;
  TVar3._s_0.X = auVar8._0_4_ - fVar6;
  (__return_storage_ptr__->ExtentY).field0_0x0 = TVar3;
  return __return_storage_ptr__;
}

// ToBoundingRect @ 1425200a0

FSlateRect * __thiscall
FSlateRotatedRect::ToBoundingRect(FSlateRotatedRect *this,FSlateRect *__return_storage_ptr__)

{
  TVector2<float>_u_0_s_0 TVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_58;
  float fStack_54;
  
  fVar9 = (this->TopLeft).field0_0x0._s_0.Y;
  fVar8 = (this->TopLeft).field0_0x0._s_0.X;
  fVar3 = (this->ExtentY).field0_0x0._s_0.X;
  fVar5 = (this->ExtentY).field0_0x0._s_0.Y;
  TVar1 = (this->TopLeft).field0_0x0._s_0;
  fVar4 = fVar3 + fVar8;
  fVar6 = fVar5 + fVar9;
  fVar8 = fVar8 + (this->ExtentX).field0_0x0._s_0.X;
  fVar9 = fVar9 + (this->ExtentX).field0_0x0._s_0.Y;
  fVar2 = fVar4;
  if (fVar8 <= fVar4) {
    fVar2 = fVar8;
  }
  fVar3 = fVar3 + fVar8;
  fVar7 = fVar6;
  if (fVar6 <= fVar9) {
    fVar7 = fVar9;
  }
  fVar5 = fVar5 + fVar9;
  if (fVar9 <= fVar6) {
    fVar6 = fVar9;
  }
  if (fVar4 <= fVar8) {
    fVar4 = fVar8;
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  if (fVar7 <= fVar5) {
    fVar7 = fVar5;
  }
  if (fVar5 <= fVar6) {
    fVar6 = fVar5;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  local_58 = TVar1.X;
  if (local_58 <= fVar2) {
    fVar2 = local_58;
  }
  fStack_54 = TVar1.Y;
  if (fVar7 <= fStack_54) {
    fVar7 = fStack_54;
  }
  if (fStack_54 <= fVar6) {
    fVar6 = fStack_54;
  }
  if (fVar4 <= local_58) {
    fVar4 = local_58;
  }
  __return_storage_ptr__->Left = fVar2;
  __return_storage_ptr__->Bottom = fVar7;
  __return_storage_ptr__->Top = fVar6;
  __return_storage_ptr__->Right = fVar4;
  return __return_storage_ptr__;
}

