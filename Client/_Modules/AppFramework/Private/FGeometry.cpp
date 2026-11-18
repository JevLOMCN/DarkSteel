// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 4

// GetAccumulatedLayoutTransform @ 1430c73e0

FSlateLayoutTransform * __thiscall
FGeometry::GetAccumulatedLayoutTransform
          (FGeometry *this,FSlateLayoutTransform *__return_storage_ptr__)

{
  __return_storage_ptr__->Scale = this->Scale;
  (__return_storage_ptr__->Translation).field0_0x0 = (this->AbsolutePosition).field0_0x0;
  return __return_storage_ptr__;
}

// GetAccumulatedRenderTransform @ 1430c7400

TTransform2<float> * __thiscall FGeometry::GetAccumulatedRenderTransform(FGeometry *this)

{
  return &this->AccumulatedRenderTransform;
}

// GetLocalSize @ 1430c9970

FDeprecateSlateVector2D __thiscall FGeometry::GetLocalSize(FGeometry *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  *(FDeprecateSlateVector2D *)in_RDX = this->Size;
  return in_RDX;
}

// ToOffsetPaintGeometry @ 143105520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPaintGeometry * __thiscall
FGeometry::ToOffsetPaintGeometry
          (FGeometry *this,FPaintGeometry *__return_storage_ptr__,
          FDeprecateVector2DParameter *param_1)

{
  float fVar1;
  char cVar2;
  TVector2<float>_u_0_s_0 TVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float local_58;
  float fStack_54;
  TTransform2<float> local_48;
  TTransform2<float> local_30;
  
  TVar3 = (this->AbsolutePosition).field0_0x0._s_0;
  local_48.Trans.field0_0x0._s_0 = *(TVector2<float>_u_0 *)param_1;
  cVar2 = this->field_0x34;
  TVar4 = *(TVector2<float>_u_0 *)&this->Size;
  local_48.M.M[0][1] = TVar3.X;
  local_48.M.M[1][0] = TVar3.Y;
  fVar1 = this->Scale;
  local_58 = local_48.Trans.field0_0x0._0_4_;
  fStack_54 = local_48.Trans.field0_0x0._4_4_;
  fVar7 = fVar1 * local_58 + local_48.M.M[0][1];
  fVar8 = fVar1 * fStack_54 + local_48.M.M[1][0];
  local_48.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
  local_48.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_48.M.M[1][0] = (float)_UNK_15076b188;
  local_48.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  Concatenate<TTransform2<float>_>(&local_30,&local_48,&this->AccumulatedRenderTransform);
  TVar5._s_0.Y = fVar8;
  TVar5._s_0.X = fVar7;
  (__return_storage_ptr__->DrawPosition).field0_0x0 = TVar5;
  (__return_storage_ptr__->DrawSize).field0_0x0 = (TVector2<float>_u_0)0x0;
  bVar6 = __return_storage_ptr__->field_0x34 & 0xfe;
  __return_storage_ptr__->DrawScale = fVar1;
  (__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] = local_30.M.M[0];
  (__return_storage_ptr__->AccumulatedRenderTransform).M.M[1] = local_30.M.M[1];
  (__return_storage_ptr__->LocalSize).field0_0x0 = TVar4;
  __return_storage_ptr__->field_0x34 = (cVar2 * '\x02' ^ bVar6) & 2 ^ bVar6;
  (__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 = local_30.Trans.field0_0x0;
  return __return_storage_ptr__;
}

