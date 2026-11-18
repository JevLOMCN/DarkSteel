// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 77

// Accumulate @ 1475068c0

void __thiscall
UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::Accumulate
          (TAttributeBlendOperator<FQuaternionAnimationAttribute> *this,FAttributeBlendData *param_1
          ,FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::Accumulate_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FQuaternionAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Interpolate @ 147506910

void __thiscall
UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::Interpolate
          (TAttributeBlendOperator<FQuaternionAnimationAttribute> *this,void *param_1,void *param_2,
          float param_3,void *param_4)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar12;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  
  uVar7 = *(undefined8 *)((longlong)param_1 + 8);
  *(undefined8 *)param_4 = *(undefined8 *)param_1;
  *(undefined8 *)((longlong)param_4 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)((longlong)param_4 + 0x10) = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)((longlong)param_4 + 0x18) = uVar7;
  FQuaternionAnimationAttribute::Interpolate(param_4,param_2,param_3);
  dVar3 = *(double *)param_4;
  dVar4 = *(double *)((longlong)param_4 + 8);
  dVar5 = *(double *)((longlong)param_4 + 0x10);
  dVar6 = *(double *)((longlong)param_4 + 0x18);
  dVar10 = dVar5 * dVar5 + dVar3 * dVar3;
  dVar12 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar1 = dVar12 + dVar10;
  dVar10 = dVar10 + dVar12;
  auVar14._8_4_ = SUB84(dVar10,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar14 = sqrtpd(in_XMM4,auVar14);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
  uVar17 = (uint)(uVar8 >> 0x20);
  uVar18 = (uint)(uVar9 >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
  auVar16._0_8_ = uVar8 & (ulonglong)(auVar15._0_8_ * dVar3);
  uVar2 = uVar9 & (ulonglong)(auVar15._8_8_ * dVar4);
  auVar16._8_4_ = (undefined4)uVar2;
  auVar16._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar15._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar15._4_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar15._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._12_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
  auVar13._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar13._4_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar13._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar13._12_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar11._0_8_ = (ulonglong)(auVar14._0_8_ * dVar5) & uVar8;
  uVar9 = (ulonglong)(auVar14._8_8_ * dVar6) & uVar9;
  auVar11._8_4_ = (undefined4)uVar9;
  auVar11._12_4_ = (undefined4)(uVar9 >> 0x20);
  *(undefined1 (*) [16])param_4 = auVar16 | auVar15;
  *(undefined1 (*) [16])((longlong)param_4 + 0x10) = auVar13 | auVar11;
  return;
}

// Override @ 1475069e0

void __thiscall
UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::Override
          (TAttributeBlendOperator<FQuaternionAnimationAttribute> *this,FAttributeBlendData *param_1
          ,FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::Override_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FQuaternionAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Blend @ 147506a20

void __thiscall
UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::Blend
          (TAttributeBlendOperator<FQuaternionAnimationAttribute> *this,FAttributeBlendData *param_1
          ,FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::Blend_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FQuaternionAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachAttributeSet<FQuaternionAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FQuaternionAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::Blend_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FQuaternionAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// BlendPerBone @ 147506aa0

void __thiscall
UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::BlendPerBone
          (TAttributeBlendOperator<FQuaternionAnimationAttribute> *this,FAttributeBlendData *param_1
          ,FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res8;
  TAttributeBlendOperator<FQuaternionAnimationAttribute> *local_28;
  FStackAttributeContainer *local_20;
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = (FStackAttributeContainer **)&local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::BlendPerBone_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FQuaternionAnimationAttribute>_&>
             ::Call;
  local_28 = this;
  local_20 = param_2;
  FAttributeBlendData::ForEachAttributeSet<FQuaternionAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FQuaternionAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::BlendPerBone_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&>
             ::Call;
  local_res8 = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FQuaternionAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// ConvertToAdditive @ 147506b20

void __thiscall
UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::ConvertToAdditive
          (TAttributeBlendOperator<FQuaternionAnimationAttribute> *this,FAttributeBlendData *param_1
          ,FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::ConvertToAdditive_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FQuaternionAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Accumulate @ 147516bc0

void __thiscall
UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::Accumulate
          (TAttributeBlendOperator<FFloatAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::Accumulate_Internal<FFloatAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FFloatAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Interpolate @ 147516c10

void __thiscall
UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::Interpolate
          (TAttributeBlendOperator<FFloatAnimationAttribute> *this,void *param_1,void *param_2,
          float param_3,void *param_4)

{
  float fVar1;
  
  fVar1 = (__real_3f800000 - param_3) * *(float *)param_1;
  *(float *)param_4 = fVar1;
  *(float *)param_4 = param_3 * *(float *)param_2 + fVar1;
  return;
}

// Override @ 147516c40

void __thiscall
UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::Override
          (TAttributeBlendOperator<FFloatAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::Override_Internal<FFloatAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FFloatAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Blend @ 147516c80

void __thiscall
UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::Blend
          (TAttributeBlendOperator<FFloatAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::Blend_Internal<FFloatAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FFloatAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachAttributeSet<FFloatAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FFloatAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::Blend_Internal<FFloatAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FFloatAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// BlendPerBone @ 147516d00

void __thiscall
UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::BlendPerBone
          (TAttributeBlendOperator<FFloatAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res8;
  TAttributeBlendOperator<FFloatAnimationAttribute> *local_28;
  FStackAttributeContainer *local_20;
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = (FStackAttributeContainer **)&local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::BlendPerBone_Internal<FFloatAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FFloatAnimationAttribute>_&>
             ::Call;
  local_28 = this;
  local_20 = param_2;
  FAttributeBlendData::ForEachAttributeSet<FFloatAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FFloatAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::BlendPerBone_Internal<FFloatAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&>
             ::Call;
  local_res8 = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FFloatAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// ConvertToAdditive @ 147516d80

void __thiscall
UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::ConvertToAdditive
          (TAttributeBlendOperator<FFloatAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::ConvertToAdditive_Internal<FFloatAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FFloatAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Accumulate @ 1475172f0

void __thiscall
UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::Accumulate
          (TAttributeBlendOperator<FIntegerAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::Accumulate_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FIntegerAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Interpolate @ 1475173b0

void __thiscall
UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::Interpolate
          (TAttributeBlendOperator<FIntegerAnimationAttribute> *this,void *param_1,void *param_2,
          float param_3,void *param_4)

{
  UScriptStruct *this_00;
  
  this_00 = FIntegerAnimationAttribute::StaticStruct();
  if (__real_3f000000 < param_3) {
    param_1 = param_2;
  }
  UScriptStruct::CopyScriptStruct(this_00,param_4,param_1,1);
  return;
}

// Override @ 147517450

void __thiscall
UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::Override
          (TAttributeBlendOperator<FIntegerAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::Override_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FIntegerAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Blend @ 147517490

void __thiscall
UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::Blend
          (TAttributeBlendOperator<FIntegerAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::Blend_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FIntegerAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachAttributeSet<FIntegerAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FIntegerAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::Blend_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FIntegerAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// BlendPerBone @ 147517550

void __thiscall
UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::BlendPerBone
          (TAttributeBlendOperator<FIntegerAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res8;
  TAttributeBlendOperator<FIntegerAnimationAttribute> *local_28;
  FStackAttributeContainer *local_20;
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = (FStackAttributeContainer **)&local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::BlendPerBone_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FIntegerAnimationAttribute>_&>
             ::Call;
  local_28 = this;
  local_20 = param_2;
  FAttributeBlendData::ForEachAttributeSet<FIntegerAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FIntegerAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::BlendPerBone_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&>
             ::Call;
  local_res8 = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FIntegerAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// ConvertToAdditive @ 1475175d0

void __thiscall
UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::ConvertToAdditive
          (TAttributeBlendOperator<FIntegerAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::ConvertToAdditive_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FIntegerAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Accumulate @ 14751af30

void __thiscall
UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::Accumulate
          (TAttributeBlendOperator<FStringAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::Accumulate_Internal<FStringAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FStringAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Interpolate @ 14751af70

void __thiscall
UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::Interpolate
          (TAttributeBlendOperator<FStringAnimationAttribute> *this,void *param_1,void *param_2,
          float param_3,void *param_4)

{
  UScriptStruct *this_00;
  
  this_00 = FStringAnimationAttribute::StaticStruct();
  if (__real_3f000000 < param_3) {
    param_1 = param_2;
  }
  UScriptStruct::CopyScriptStruct(this_00,param_4,param_1,1);
  return;
}

// Override @ 14751b010

void __thiscall
UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::Override
          (TAttributeBlendOperator<FStringAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::Override_Internal<FStringAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FStringAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Blend @ 14751b050

void __thiscall
UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::Blend
          (TAttributeBlendOperator<FStringAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::Blend_Internal<FStringAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FStringAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachAttributeSet<FStringAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FStringAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::Blend_Internal<FStringAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FStringAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// BlendPerBone @ 14751b0d0

void __thiscall
UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::BlendPerBone
          (TAttributeBlendOperator<FStringAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::BlendPerBone_Internal<FStringAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FStringAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachAttributeSet<FStringAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FStringAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::BlendPerBone_Internal<FStringAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FStringAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// ConvertToAdditive @ 14751b180

void __thiscall
UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::ConvertToAdditive
          (TAttributeBlendOperator<FStringAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::ConvertToAdditive_Internal<FStringAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FStringAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Accumulate @ 14751d610

void __thiscall
UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::Accumulate
          (TAttributeBlendOperator<FTransformAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::Accumulate_Internal<FTransformAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FTransformAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Interpolate @ 14751d650

void __thiscall
UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::Interpolate
          (TAttributeBlendOperator<FTransformAnimationAttribute> *this,void *param_1,void *param_2,
          float param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 in_XMM3_Db;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 auVar23 [16];
  
  uVar12 = *(undefined8 *)((longlong)param_1 + 8);
  auVar21._4_4_ = in_XMM3_Db;
  auVar21._0_4_ = param_3;
  auVar21._8_4_ = in_XMM3_Dc;
  auVar21._12_4_ = in_XMM3_Dd;
  *(undefined8 *)param_4 = *(undefined8 *)param_1;
  *(undefined8 *)((longlong)param_4 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)((longlong)param_4 + 0x10) = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)((longlong)param_4 + 0x18) = uVar12;
  uVar12 = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)((longlong)param_4 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)((longlong)param_4 + 0x28) = uVar12;
  uVar12 = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_4 + 0x30) = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_4 + 0x38) = uVar12;
  uVar12 = *(undefined8 *)((longlong)param_1 + 0x48);
  *(undefined8 *)((longlong)param_4 + 0x40) = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)((longlong)param_4 + 0x48) = uVar12;
  uVar12 = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)((longlong)param_4 + 0x50) = *(undefined8 *)((longlong)param_1 + 0x50);
  *(undefined8 *)((longlong)param_4 + 0x58) = uVar12;
  UE::Math::TTransform<double>::BlendWith(param_4,param_2,param_3);
  dVar8 = *(double *)param_4;
  dVar9 = *(double *)((longlong)param_4 + 8);
  dVar10 = *(double *)((longlong)param_4 + 0x10);
  dVar11 = *(double *)((longlong)param_4 + 0x18);
  dVar5 = dVar10 * dVar10 + dVar8 * dVar8;
  dVar6 = dVar11 * dVar11 + dVar9 * dVar9;
  auVar17._8_4_ = SUB84(dVar6,0);
  auVar17._0_8_ = dVar5;
  auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar18._0_8_ = auVar17._8_8_ + dVar5;
  auVar18._8_8_ = dVar5 + dVar6;
  auVar22 = sqrtpd(auVar21,auVar18);
  uVar13 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar18._0_8_);
  uVar15 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar18._8_8_);
  uVar14 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar18._0_8_);
  uVar16 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar18._8_8_);
  auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
  auVar20._0_8_ = uVar14 & (ulonglong)(auVar19._0_8_ * dVar8);
  uVar7 = uVar16 & (ulonglong)(auVar19._8_8_ * dVar9);
  auVar20._8_4_ = (undefined4)uVar7;
  auVar20._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar23._0_8_ = uVar13 & (ulonglong)(auVar22._0_8_ * dVar10);
  uVar7 = uVar15 & (ulonglong)(auVar22._8_8_ * dVar11);
  auVar23._8_4_ = (undefined4)uVar7;
  auVar23._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar22._4_4_ = ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar22._0_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar22._8_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar22._12_4_ = ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  uVar1 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar2 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])param_4 = auVar20 | auVar22;
  auVar19._4_4_ = ~(uint)(uVar13 >> 0x20) & uVar2;
  auVar19._0_4_ = ~(uint)uVar13 & uVar1;
  auVar19._8_4_ = ~(uint)uVar15 & uVar3;
  auVar19._12_4_ = ~(uint)(uVar15 >> 0x20) & uVar4;
  *(undefined1 (*) [16])((longlong)param_4 + 0x10) = auVar23 | auVar19;
  return;
}

// Override @ 14751d730

void __thiscall
UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::Override
          (TAttributeBlendOperator<FTransformAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::Override_Internal<FTransformAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FTransformAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Blend @ 14751d770

void __thiscall
UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::Blend
          (TAttributeBlendOperator<FTransformAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::Blend_Internal<FTransformAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FTransformAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachAttributeSet<FTransformAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FTransformAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::Blend_Internal<FTransformAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FTransformAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// BlendPerBone @ 14751d7f0

void __thiscall
UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::BlendPerBone
          (TAttributeBlendOperator<FTransformAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res8;
  TAttributeBlendOperator<FTransformAnimationAttribute> *local_28;
  FStackAttributeContainer *local_20;
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = (FStackAttributeContainer **)&local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::BlendPerBone_Internal<FTransformAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FTransformAnimationAttribute>_&>
             ::Call;
  local_28 = this;
  local_20 = param_2;
  FAttributeBlendData::ForEachAttributeSet<FTransformAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FTransformAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::BlendPerBone_Internal<FTransformAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&>
             ::Call;
  local_res8 = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FTransformAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// ConvertToAdditive @ 14751d870

void __thiscall
UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::ConvertToAdditive
          (TAttributeBlendOperator<FTransformAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::ConvertToAdditive_Internal<FTransformAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FTransformAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Accumulate @ 147520340

void __thiscall
UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::Accumulate
          (TAttributeBlendOperator<FVectorAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::Accumulate_Internal<FVectorAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FVectorAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Interpolate @ 147520380

void __thiscall
UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::Interpolate
          (TAttributeBlendOperator<FVectorAnimationAttribute> *this,void *param_1,void *param_2,
          float param_3,void *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar4 = *(undefined8 *)((longlong)param_1 + 8);
  *(undefined8 *)param_4 = *(undefined8 *)param_1;
  *(undefined8 *)((longlong)param_4 + 8) = uVar4;
  *(undefined8 *)((longlong)param_4 + 0x10) = *(undefined8 *)((longlong)param_1 + 0x10);
  dVar1 = *(double *)((longlong)param_2 + 0x10);
  dVar5 = (double)param_3;
  dVar3 = (*(double *)((longlong)param_2 + 8) - *(double *)((longlong)param_4 + 8)) * dVar5 +
          *(double *)((longlong)param_4 + 8);
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (*(double *)param_2 - *(double *)param_4) * dVar5 + *(double *)param_4;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])param_4 = auVar2;
  *(double *)((longlong)param_4 + 0x10) =
       (dVar1 - *(double *)((longlong)param_4 + 0x10)) * dVar5 +
       *(double *)((longlong)param_4 + 0x10);
  return;
}

// Override @ 1475203e0

void __thiscall
UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::Override
          (TAttributeBlendOperator<FVectorAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::Override_Internal<FVectorAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FVectorAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Blend @ 147520450

void __thiscall
UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::Blend
          (TAttributeBlendOperator<FVectorAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::Blend_Internal<FVectorAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FVectorAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachAttributeSet<FVectorAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FVectorAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::Blend_Internal<FVectorAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FVectorAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// BlendPerBone @ 1475204d0

void __thiscall
UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::BlendPerBone
          (TAttributeBlendOperator<FVectorAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res8;
  TAttributeBlendOperator<FVectorAnimationAttribute> *local_28;
  FStackAttributeContainer *local_20;
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = (FStackAttributeContainer **)&local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::BlendPerBone_Internal<FVectorAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FVectorAnimationAttribute>_&>
             ::Call;
  local_28 = this;
  local_20 = param_2;
  FAttributeBlendData::ForEachAttributeSet<FVectorAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FVectorAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::BlendPerBone_Internal<FVectorAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&>
             ::Call;
  local_res8 = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FVectorAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// ConvertToAdditive @ 147520580

void __thiscall
UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::ConvertToAdditive
          (TAttributeBlendOperator<FVectorAnimationAttribute> *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::ConvertToAdditive_Internal<FVectorAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FVectorAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// operator() @ 1475342e0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::
Accumulate_Internal<FFloatAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FFloatAnimationAttribute> *param_1)

{
  int *piVar1;
  float *pfVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FUniqueAttribute *pFVar10;
  UScriptStruct *pUVar11;
  float *pfVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  float fVar16;
  
  iVar8 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar8;
  if (iVar8 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pfVar2 = (float *)pFVar10->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar10->Identifier;
      pUVar11 = FFloatAnimationAttribute::StaticStruct();
      uVar9 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
              FindTypeIndex(pTVar3,pUVar11);
      if (uVar9 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar9 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar13 = ~uVar9 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar15 = (longlong)(int)uVar9 * 0x10;
        piVar14 = *(int **)(pFVar5 + lVar15);
        piVar1 = piVar14 + *(int *)(pFVar5 + lVar15 + 8);
        for (; piVar14 != piVar1; piVar14 = piVar14 + 1) {
          if (*piVar14 == pFVar4->Index) {
            uVar13 = 0;
            if ((int)uVar9 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar13 = ~uVar9 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                    IndexOfByKey<UE::Anim::FAttributeId>
                              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                               ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar15),
                               pFVar4);
            goto LAB_147534437;
          }
        }
      }
      iVar8 = -1;
LAB_147534437:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar11 = FFloatAnimationAttribute::StaticStruct();
      pfVar12 = (float *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
                         ::FindOrAdd(pTVar3,pUVar11,pFVar4);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = param_1->Data;
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar16 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar10->WeightIndex);
      fVar16 = fVar16 * *pfVar2;
      if (iVar8 != -1) {
        fVar16 = fVar16 + *pfVar12;
      }
      *pfVar12 = fVar16;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar8 = param_1->CurrentIndex;
    } while (iVar8 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147534580

void __thiscall
`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::
Accumulate_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FIntegerAnimationAttribute> *param_1)

{
  int *piVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar2;
  FAttributeId *pFVar3;
  FScriptContainerElement *pFVar4;
  FAttributeBlendData *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FUniqueAttribute *pFVar10;
  UScriptStruct *pUVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  float fVar16;
  
  iVar7 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar7;
  if (iVar7 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      piVar1 = (int *)pFVar10->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar2 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar3 = pFVar10->Identifier;
      pUVar11 = FIntegerAnimationAttribute::StaticStruct();
      uVar8 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
              FindTypeIndex(pTVar2,pUVar11);
      if (uVar8 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar8 < (pTVar2->UniqueTypedBoneIndices).ArrayNum) {
          uVar13 = ~uVar8 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pTVar2->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar15 = (longlong)(int)uVar8 * 0x10;
        piVar14 = *(int **)(pFVar4 + lVar15);
        piVar12 = piVar14 + *(int *)(pFVar4 + lVar15 + 8);
        for (; piVar14 != piVar12; piVar14 = piVar14 + 1) {
          if (*piVar14 == pFVar3->Index) {
            uVar13 = 0;
            if ((int)uVar8 < (pTVar2->AttributeIdentifiers).ArrayNum) {
              uVar13 = ~uVar8 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar7 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                    IndexOfByKey<UE::Anim::FAttributeId>
                              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                               ((pTVar2->AttributeIdentifiers).AllocatorInstance.Data + lVar15),
                               pFVar3);
            goto LAB_1475346d7;
          }
        }
      }
      iVar7 = -1;
LAB_1475346d7:
      pTVar2 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar11 = FIntegerAnimationAttribute::StaticStruct();
      piVar12 = (int *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                       FindOrAdd(pTVar2,pUVar11,pFVar3);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = param_1->Data;
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar16 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar10->WeightIndex);
      iVar9 = (int)((float)*piVar1 * fVar16);
      if (iVar7 == -1) {
        *piVar12 = iVar9;
      }
      else {
        *piVar12 = *piVar12 + iVar9;
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar7 = param_1->CurrentIndex;
    } while (iVar7 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147534830

void __thiscall
`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::
Accumulate_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FQuaternionAnimationAttribute> *param_1)

{
  int *piVar1;
  double *pdVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this_00;
  code *pcVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [12];
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  bool bVar25;
  int iVar26;
  uint uVar27;
  FUniqueAttribute *pFVar28;
  UScriptStruct *pUVar29;
  undefined1 (*pauVar30) [16];
  int *piVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar37;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar44;
  undefined1 auVar40 [16];
  double dVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 auVar48 [16];
  double dVar50;
  undefined1 in_XMM4 [16];
  uint uVar51;
  double dVar52;
  undefined1 auVar54 [16];
  double dVar53;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  
  iVar26 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar26;
  dVar24 = __real_bff0000000000000;
  fVar23 = __real_3f800000;
  dVar22 = __real_3e45798ee0000000;
  dVar21 = __real_3ff0000000000000;
  if (iVar26 < (param_1->AttributesView).ArrayNum) {
    uVar63 = SUB84(__real_3ff0000000000000,0);
    uVar19 = (ulonglong)__real_3ff0000000000000 >> 0x20;
    uVar64 = SUB84(__real_bff0000000000000,0);
    uVar20 = (ulonglong)__real_bff0000000000000 >> 0x20;
    do {
      if ((iVar26 < 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x19b,L""), bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar28 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pdVar2 = (double *)pFVar28->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar28 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar28->Identifier;
      pUVar29 = FQuaternionAnimationAttribute::StaticStruct();
      uVar27 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar29);
      if (uVar27 != 0xffffffff) {
        uVar51 = 0;
        if ((int)uVar27 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar51 = ~uVar27 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar32 = (longlong)(int)uVar27 * 0x10;
        piVar31 = *(int **)(pFVar5 + lVar32);
        piVar1 = piVar31 + *(int *)(pFVar5 + lVar32 + 8);
        for (; piVar31 != piVar1; piVar31 = piVar31 + 1) {
          if (*piVar31 == pFVar4->Index) {
            uVar51 = 0;
            if ((int)uVar27 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar51 = ~uVar27 >> 0x1f;
            }
            if ((uVar51 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar26 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                     IndexOfByKey<UE::Anim::FAttributeId>
                               ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                                ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar32),
                                pFVar4);
            goto LAB_1475349ef;
          }
        }
      }
      iVar26 = -1;
LAB_1475349ef:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar29 = FQuaternionAnimationAttribute::StaticStruct();
      pauVar30 = (undefined1 (*) [16])
                 UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                 FindOrAdd(pTVar3,pUVar29,pFVar4);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasContainerWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a2,L""), bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a3,L""), bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = param_1->Data;
      pFVar28 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar35 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar28->WeightIndex);
      auVar55._4_4_ = extraout_XMM0_Db;
      auVar55._0_4_ = fVar35;
      auVar55._8_4_ = extraout_XMM0_Dc;
      auVar55._12_4_ = extraout_XMM0_Dd;
      if (iVar26 == -1) {
        dVar50 = (double)fVar35;
        dVar49 = dVar50 * pdVar2[2];
        dVar44 = dVar50 * pdVar2[3];
        auVar60._8_4_ = SUB84(dVar50 * pdVar2[1],0);
        auVar60._0_8_ = dVar50 * *pdVar2;
        auVar60._12_4_ = (int)((ulonglong)(dVar50 * pdVar2[1]) >> 0x20);
        *pauVar30 = auVar60;
LAB_147534d8b:
        *(double *)pauVar30[1] = dVar49;
        *(double *)(pauVar30[1] + 8) = dVar44;
      }
      else {
        if (param_1->Data->AdditiveType == AAT_None) {
          dVar50 = (double)fVar35;
          auVar47._8_4_ = SUB84(dVar50,0);
          auVar47._0_8_ = dVar50;
          auVar47._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
          in_XMM4._0_8_ = dVar50 * pdVar2[2];
          in_XMM4._8_8_ = dVar50 * pdVar2[3];
          dVar50 = dVar50 * *pdVar2;
          dVar49 = auVar47._8_8_ * pdVar2[1];
          auVar13._4_8_ = in_XMM1._8_8_;
          auVar13._0_4_ = (int)((ulonglong)dVar50 >> 0x20);
          auVar38._0_8_ = auVar13._0_8_ << 0x20;
          auVar38._8_4_ = SUB84(dVar49,0);
          auVar38._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
          uVar36 = uVar64;
          uVar37 = (int)uVar20;
          if (0.0 <= in_XMM4._8_8_ * *(double *)(pauVar30[1] + 8) +
                     in_XMM4._0_8_ * *(double *)pauVar30[1] +
                     auVar38._8_8_ * *(double *)(*pauVar30 + 8) + dVar50 * *(double *)*pauVar30) {
            uVar36 = uVar63;
            uVar37 = (int)uVar19;
          }
          auVar39._0_8_ = (double)CONCAT44(uVar37,uVar36);
          auVar39._8_4_ = uVar36;
          auVar39._12_4_ = uVar37;
          dVar44 = *(double *)(*pauVar30 + 8);
          *(double *)*pauVar30 = dVar50 * (double)CONCAT44(uVar37,uVar36) + *(double *)*pauVar30;
          *(double *)(*pauVar30 + 8) = dVar49 * (double)CONCAT44(uVar37,uVar36) + dVar44;
          dVar49 = auVar39._0_8_ * in_XMM4._0_8_ + *(double *)pauVar30[1];
          dVar44 = auVar39._8_8_ * in_XMM4._8_8_ + *(double *)(pauVar30[1] + 8);
          goto LAB_147534d8b;
        }
        dVar50 = dVar24;
        if (0.0 <= UE::Math::TQuat<double>::Identity.W * pdVar2[3] +
                   UE::Math::TQuat<double>::Identity.Z * pdVar2[2] +
                   UE::Math::TQuat<double>::Identity.Y * pdVar2[1] +
                   UE::Math::TQuat<double>::Identity.X * *pdVar2) {
          dVar50 = dVar21;
        }
        dVar49 = (double)fVar35;
        dVar50 = (double)(fVar23 - fVar35) * dVar50;
        auVar54._8_4_ = SUB84(dVar50,0);
        auVar54._0_8_ = dVar50;
        auVar54._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
        dVar15 = *(double *)pauVar30[1];
        dVar16 = *(double *)(pauVar30[1] + 8);
        dVar44 = dVar50 * UE::Math::TQuat<double>::Identity.Z + dVar49 * pdVar2[2];
        dVar12 = dVar50 * UE::Math::TQuat<double>::Identity.W + dVar49 * pdVar2[3];
        dVar17 = *(double *)*pauVar30;
        dVar18 = *(double *)(*pauVar30 + 8);
        auVar40._8_4_ = SUB84(dVar12,0);
        auVar40._0_8_ = dVar44;
        auVar40._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        dVar52 = dVar50 * UE::Math::TQuat<double>::Identity.X + dVar49 * *pdVar2;
        dVar46 = auVar54._8_8_ * UE::Math::TQuat<double>::Identity.Y + dVar49 * pdVar2[1];
        dVar49 = dVar44 * dVar44 + dVar52 * dVar52;
        dVar45 = auVar40._8_8_ * dVar12 + dVar46 * dVar46;
        dVar50 = dVar45 + dVar49;
        dVar49 = dVar49 + dVar45;
        auVar9._8_4_ = SUB84(dVar49,0);
        auVar9._0_8_ = dVar50;
        auVar9._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        auVar55 = sqrtpd(auVar55,auVar9);
        uVar34 = -(ulonglong)(dVar22 <= dVar50);
        uVar33 = -(ulonglong)(dVar22 <= dVar49);
        auVar60 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55);
        uVar27 = (uint)(uVar34 >> 0x20);
        uVar51 = (uint)(uVar33 >> 0x20);
        auVar41._0_4_ =
             ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar41._4_4_ =
             ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar41._8_4_ =
             ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar41._12_4_ =
             ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar61._0_8_ = uVar34 & (ulonglong)(auVar60._0_8_ * dVar52);
        uVar14 = uVar33 & (ulonglong)(auVar60._8_8_ * dVar46);
        auVar61._8_4_ = (undefined4)uVar14;
        auVar61._12_4_ = (undefined4)(uVar14 >> 0x20);
        auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55);
        auVar57._0_4_ =
             ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar57._4_4_ =
             ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar57._8_4_ =
             ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar57._12_4_ =
             ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar42._0_8_ = (ulonglong)(auVar55._0_8_ * dVar44) & uVar34;
        uVar33 = (ulonglong)(auVar55._8_8_ * dVar12) & uVar33;
        auVar42._8_4_ = (undefined4)uVar33;
        auVar42._12_4_ = (undefined4)(uVar33 >> 0x20);
        dVar59 = SUB168(auVar61 | auVar41,0);
        dVar62 = SUB168(auVar61 | auVar41,8);
        dVar53 = SUB168(auVar57 | auVar42,0);
        dVar58 = SUB168(auVar57 | auVar42,8);
        in_XMM4._8_8_ = dVar15;
        in_XMM4._0_8_ = dVar16;
        dVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        dVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar46 = dVar59 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar18 * dVar58 +
                 dVar16 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar53 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar10._8_4_ = SUB84(dVar46,0);
        auVar10._0_8_ =
             dVar59 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar17 * dVar58 +
             dVar15 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar53 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        auVar10._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        *pauVar30 = auVar10;
        dVar12 = dVar59 * dVar17 * dVar12 + dVar16 * dVar58 + dVar18 * dVar62 * dVar45 +
                 dVar53 * dVar15 * dVar52;
        auVar11._8_4_ = SUB84(dVar12,0);
        auVar11._0_8_ =
             dVar59 * dVar18 * dVar50 + dVar15 * dVar58 + dVar17 * dVar62 * dVar49 +
             dVar53 * dVar16 * dVar44;
        auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        pauVar30[1] = auVar11;
      }
      dVar44 = *(double *)*pauVar30;
      dVar12 = *(double *)(*pauVar30 + 8);
      dVar45 = *(double *)pauVar30[1];
      dVar52 = *(double *)(pauVar30[1] + 8);
      dVar49 = dVar45 * dVar45 + dVar44 * dVar44;
      dVar46 = dVar52 * dVar52 + dVar12 * dVar12;
      dVar50 = dVar46 + dVar49;
      dVar49 = dVar49 + dVar46;
      auVar8._8_4_ = SUB84(dVar49,0);
      auVar8._0_8_ = dVar50;
      auVar8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      in_XMM4 = sqrtpd(in_XMM4,auVar8);
      uVar33 = -(ulonglong)(dVar22 <= dVar50);
      uVar34 = -(ulonglong)(dVar22 <= dVar49);
      uVar27 = (uint)(uVar33 >> 0x20);
      uVar51 = (uint)(uVar34 >> 0x20);
      auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
      fVar35 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar56._0_8_ = uVar33 & (ulonglong)(auVar55._0_8_ * dVar44);
      uVar14 = uVar34 & (ulonglong)(auVar55._8_8_ * dVar12);
      auVar56._8_4_ = (undefined4)uVar14;
      auVar56._12_4_ = (undefined4)(uVar14 >> 0x20);
      auVar43._0_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar43._4_4_ =
           ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar43._8_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar43._12_4_ =
           ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
      *pauVar30 = auVar56 | auVar43;
      in_XMM1._0_8_ = (ulonglong)(auVar55._0_8_ * dVar45) & uVar33;
      uVar14 = (ulonglong)(auVar55._8_8_ * dVar52) & uVar34;
      in_XMM1._8_4_ = (undefined4)uVar14;
      in_XMM1._12_4_ = (undefined4)(uVar14 >> 0x20);
      auVar48._0_4_ = ~(uint)uVar33 & SUB84((double)fVar35,0);
      auVar48._4_4_ = ~uVar27 & (uint)((ulonglong)(double)fVar35 >> 0x20);
      auVar48._8_4_ = ~(uint)uVar34 & SUB84((double)fVar7,0);
      auVar48._12_4_ = ~uVar51 & (uint)((ulonglong)(double)fVar7 >> 0x20);
      pauVar30[1] = auVar48 | in_XMM1;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar26 = param_1->CurrentIndex;
    } while (iVar26 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147534ed0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::
Accumulate_Internal<FStringAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FStringAnimationAttribute> *param_1)

{
  int *piVar1;
  uchar *puVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this_00;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FUniqueAttribute *pFVar11;
  UScriptStruct *pUVar12;
  uchar *puVar13;
  uint uVar14;
  int *piVar15;
  longlong lVar16;
  float fVar17;
  
  iVar9 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar9;
  fVar7 = __real_3f000000;
  if (iVar9 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      puVar2 = pFVar11->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar11->Identifier;
      pUVar12 = FStringAnimationAttribute::StaticStruct();
      uVar10 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar12);
      if (uVar10 != 0xffffffff) {
        uVar14 = 0;
        if ((int)uVar10 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar16 = (longlong)(int)uVar10 * 0x10;
        piVar15 = *(int **)(pFVar5 + lVar16);
        piVar1 = piVar15 + *(int *)(pFVar5 + lVar16 + 8);
        for (; piVar15 != piVar1; piVar15 = piVar15 + 1) {
          if (*piVar15 == pFVar4->Index) {
            uVar14 = 0;
            if ((int)uVar10 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar14 = ~uVar10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                    IndexOfByKey<UE::Anim::FAttributeId>
                              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                               ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar16),
                               pFVar4);
            goto LAB_14753502e;
          }
        }
      }
      iVar9 = -1;
LAB_14753502e:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar12 = FStringAnimationAttribute::StaticStruct();
      puVar13 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar3,pUVar12,pFVar4);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = param_1->Data;
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar17 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar11->WeightIndex);
      if ((iVar9 == -1) || (fVar7 < fVar17)) {
        pUVar12 = FStringAnimationAttribute::StaticStruct();
        UScriptStruct::CopyScriptStruct(pUVar12,puVar13,puVar2,1);
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar9 = param_1->CurrentIndex;
    } while (iVar9 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147535190

void __thiscall
`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::
Accumulate_Internal<FTransformAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FTransformAnimationAttribute> *param_1)

{
  int *piVar1;
  TTransform<double> *pTVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this_00;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  FUniqueAttribute *pFVar26;
  UScriptStruct *pUVar27;
  TTransform<double> *this_01;
  int *piVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar52;
  __m128 local_88 [6];
  
  iVar24 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar24;
  fVar22 = __real_3f7fff58;
  if (iVar24 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar24 < 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x19b,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar26 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar2 = (TTransform<double> *)pFVar26->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar26 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar26->Identifier;
      pUVar27 = FTransformAnimationAttribute::StaticStruct();
      uVar25 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar27);
      if (uVar25 != 0xffffffff) {
        uVar52 = 0;
        if ((int)uVar25 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar52 = ~uVar25 >> 0x1f;
        }
        if ((uVar52 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar29 = (longlong)(int)uVar25 * 0x10;
        piVar28 = *(int **)(pFVar5 + lVar29);
        piVar1 = piVar28 + *(int *)(pFVar5 + lVar29 + 8);
        for (; piVar28 != piVar1; piVar28 = piVar28 + 1) {
          if (*piVar28 == pFVar4->Index) {
            uVar52 = 0;
            if ((int)uVar25 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar52 = ~uVar25 >> 0x1f;
            }
            if ((uVar52 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar24 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                     IndexOfByKey<UE::Anim::FAttributeId>
                               ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                                ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar29),
                                pFVar4);
            goto LAB_147535308;
          }
        }
      }
      iVar24 = -1;
LAB_147535308:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar27 = FTransformAnimationAttribute::StaticStruct();
      this_01 = (TTransform<double> *)
                UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar3,pUVar27,pFVar4);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasContainerWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a2,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a3,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = param_1->Data;
      pFVar26 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar35 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar26->WeightIndex);
      if (iVar24 == -1) {
        dVar15 = (pTVar2->Rotation).XY.m128d_f64[1];
        dVar16 = (pTVar2->Translation).XY.m128d_f64[0];
        dVar43 = (pTVar2->Translation).XY.m128d_f64[1];
        dVar48 = (pTVar2->Translation).ZW.m128d_f64[0];
        dVar17 = (pTVar2->Translation).ZW.m128d_f64[1];
        dVar18 = (pTVar2->Scale3D).XY.m128d_f64[0];
        dVar9 = (pTVar2->Scale3D).XY.m128d_f64[1];
        dVar19 = (pTVar2->Scale3D).ZW.m128d_f64[0];
        dVar10 = (pTVar2->Scale3D).ZW.m128d_f64[1];
        dVar13 = (double)fVar35;
        dVar14 = (double)fVar35;
        dVar11 = (double)fVar35;
        dVar12 = (double)fVar35;
        dVar20 = (pTVar2->Rotation).ZW.m128d_f64[0];
        dVar21 = (pTVar2->Rotation).ZW.m128d_f64[1];
        (this_01->Rotation).XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0] * dVar13;
        (this_01->Rotation).XY.m128d_f64[1] = dVar15 * dVar14;
        (this_01->Rotation).ZW.m128d_f64[0] = dVar20 * dVar11;
        (this_01->Rotation).ZW.m128d_f64[1] = dVar21 * dVar12;
        (this_01->Translation).XY.m128d_f64[0] = dVar16 * dVar13;
        (this_01->Translation).XY.m128d_f64[1] = dVar43 * dVar14;
        (this_01->Translation).ZW.m128d_f64[0] = dVar48 * dVar11;
        (this_01->Translation).ZW.m128d_f64[1] = dVar17 * dVar12;
        dVar9 = dVar9 * dVar14;
        dVar10 = dVar10 * dVar12;
        auVar41._8_4_ = SUB84(dVar9,0);
        auVar41._0_8_ = dVar18 * dVar13;
        auVar41._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        *(undefined1 (*) [16])(this_01->Scale3D).XY.m128d_f64 = auVar41;
        auVar47._8_4_ = SUB84(dVar10,0);
        auVar47._0_8_ = dVar19 * dVar11;
        auVar47._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(this_01->Scale3D).ZW.m128d_f64 = auVar47;
      }
      else {
        local_88[0]._0_4_ = fVar35;
        local_88[0]._4_4_ = fVar35;
        local_88[0]._8_4_ = fVar35;
        local_88[0]._12_4_ = fVar35;
        if (param_1->Data->AdditiveType == AAT_None) {
          dVar13 = (double)fVar35;
          dVar14 = (double)fVar35;
          dVar15 = (double)fVar35;
          dVar16 = (double)fVar35;
          dVar9 = dVar13 * (pTVar2->Rotation).XY.m128d_f64[0];
          dVar10 = dVar14 * (pTVar2->Rotation).XY.m128d_f64[1];
          dVar11 = dVar15 * (pTVar2->Rotation).ZW.m128d_f64[0];
          dVar12 = dVar16 * (pTVar2->Rotation).ZW.m128d_f64[1];
          auVar36._8_4_ = SUB84(dVar10,0);
          auVar36._0_8_ = dVar9;
          auVar36._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          auVar44._8_4_ = SUB84(dVar12,0);
          auVar44._0_8_ = dVar11;
          auVar44._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          dVar43 = dVar11 * (this_01->Rotation).ZW.m128d_f64[0] +
                   dVar9 * (this_01->Rotation).XY.m128d_f64[0];
          dVar48 = auVar44._8_8_ * (this_01->Rotation).ZW.m128d_f64[1] +
                   auVar36._8_8_ * (this_01->Rotation).XY.m128d_f64[1];
          auVar37._8_4_ = SUB84(dVar48,0);
          auVar37._0_8_ = dVar43;
          auVar37._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
          uVar30 = -(ulonglong)(0.0 <= auVar37._8_8_ + dVar43);
          uVar32 = -(ulonglong)(0.0 <= dVar43 + dVar48);
          uVar52 = (uint)(uVar32 >> 0x20);
          auVar49._0_4_ = ~(uint)uVar30 & SUB84(0.0 - dVar9,0);
          uVar25 = (uint)(uVar30 >> 0x20);
          auVar49._4_4_ = ~uVar25 & (uint)((ulonglong)(0.0 - dVar9) >> 0x20);
          auVar49._8_4_ = ~(uint)uVar32 & SUB84(0.0 - dVar10,0);
          auVar49._12_4_ = ~uVar52 & (uint)((ulonglong)(0.0 - dVar10) >> 0x20);
          auVar45._0_8_ = (ulonglong)dVar9 & uVar30;
          auVar45._8_4_ = (undefined4)((ulonglong)dVar10 & uVar32);
          auVar45._12_4_ = (undefined4)(((ulonglong)dVar10 & uVar32) >> 0x20);
          dVar9 = (this_01->Rotation).XY.m128d_f64[1];
          auVar38._0_4_ = ~(uint)uVar30 & SUB84(0.0 - dVar11,0);
          auVar38._4_4_ = ~uVar25 & (uint)((ulonglong)(0.0 - dVar11) >> 0x20);
          auVar38._8_4_ = ~(uint)uVar32 & SUB84(0.0 - dVar12,0);
          auVar38._12_4_ = ~uVar52 & (uint)((ulonglong)(0.0 - dVar12) >> 0x20);
          (this_01->Rotation).XY.m128d_f64[0] =
               SUB168(auVar49 | auVar45,0) + (this_01->Rotation).XY.m128d_f64[0];
          (this_01->Rotation).XY.m128d_f64[1] = SUB168(auVar49 | auVar45,8) + dVar9;
          auVar7._8_4_ = (int)((ulonglong)dVar12 & uVar32);
          auVar7._0_8_ = (ulonglong)dVar11 & uVar30;
          auVar7._12_4_ = (int)(((ulonglong)dVar12 & uVar32) >> 0x20);
          dVar9 = (this_01->Rotation).ZW.m128d_f64[1];
          (this_01->Rotation).ZW.m128d_f64[0] =
               SUB168(auVar38 | auVar7,0) + (this_01->Rotation).ZW.m128d_f64[0];
          (this_01->Rotation).ZW.m128d_f64[1] = SUB168(auVar38 | auVar7,8) + dVar9;
          dVar10 = (pTVar2->Translation).XY.m128d_f64[1];
          dVar11 = (pTVar2->Translation).ZW.m128d_f64[0];
          dVar12 = (pTVar2->Translation).ZW.m128d_f64[1];
          dVar9 = (this_01->Translation).XY.m128d_f64[1];
          (this_01->Translation).XY.m128d_f64[0] =
               (pTVar2->Translation).XY.m128d_f64[0] * dVar13 +
               (this_01->Translation).XY.m128d_f64[0];
          (this_01->Translation).XY.m128d_f64[1] = dVar10 * dVar14 + dVar9;
          dVar9 = (this_01->Translation).ZW.m128d_f64[1];
          (this_01->Translation).ZW.m128d_f64[0] =
               dVar11 * dVar15 + (this_01->Translation).ZW.m128d_f64[0];
          (this_01->Translation).ZW.m128d_f64[1] = dVar12 * dVar16 + dVar9;
          dVar10 = (pTVar2->Scale3D).XY.m128d_f64[1];
          dVar11 = (pTVar2->Scale3D).ZW.m128d_f64[0];
          dVar12 = (pTVar2->Scale3D).ZW.m128d_f64[1];
          dVar9 = (this_01->Scale3D).XY.m128d_f64[1];
          (this_01->Scale3D).XY.m128d_f64[0] =
               (pTVar2->Scale3D).XY.m128d_f64[0] * dVar13 + (this_01->Scale3D).XY.m128d_f64[0];
          (this_01->Scale3D).XY.m128d_f64[1] = dVar10 * dVar14 + dVar9;
          dVar9 = (this_01->Scale3D).ZW.m128d_f64[1];
          (this_01->Scale3D).ZW.m128d_f64[0] = dVar11 * dVar15 + (this_01->Scale3D).ZW.m128d_f64[0];
          (this_01->Scale3D).ZW.m128d_f64[1] = dVar12 * dVar16 + dVar9;
        }
        else if (fVar35 < fVar22) {
          UE::Math::TTransform<double>::BlendFromIdentityAndAccumulate
                    (this_01,pTVar2,(ScalarRegister *)local_88);
        }
        else {
          UE::Math::TTransform<double>::AccumulateWithAdditiveScale
                    (this_01,pTVar2,(ScalarRegister *)local_88);
        }
      }
      dVar9 = (this_01->Rotation).XY.m128d_f64[0];
      dVar10 = (this_01->Rotation).XY.m128d_f64[1];
      dVar11 = (this_01->Rotation).ZW.m128d_f64[0];
      dVar12 = (this_01->Rotation).ZW.m128d_f64[1];
      auVar46._0_8_ = dVar11 * dVar11 + dVar9 * dVar9;
      auVar46._8_8_ = dVar12 * dVar12 + dVar10 * dVar10;
      auVar39._8_4_ = SUB84(auVar46._8_8_,0);
      auVar39._0_8_ = auVar46._0_8_;
      auVar39._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
      auVar40._0_8_ = auVar39._8_8_ + auVar46._0_8_;
      auVar40._8_8_ = auVar46._0_8_ + auVar46._8_8_;
      auVar47 = sqrtpd(auVar46,auVar40);
      uVar32 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar40._0_8_)
      ;
      uVar33 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar40._8_8_)
      ;
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar40._0_8_)
      ;
      uVar34 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar40._8_8_)
      ;
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar47);
      auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
      auVar42._0_8_ = uVar31 & (ulonglong)(auVar41._0_8_ * dVar9);
      uVar30 = uVar34 & (ulonglong)(auVar41._8_8_ * dVar10);
      auVar42._8_4_ = (undefined4)uVar30;
      auVar42._12_4_ = (undefined4)(uVar30 >> 0x20);
      auVar51._0_8_ = uVar32 & (ulonglong)(auVar47._0_8_ * dVar11);
      uVar30 = uVar33 & (ulonglong)(auVar47._8_8_ * dVar12);
      auVar51._8_4_ = (undefined4)uVar30;
      auVar51._12_4_ = (undefined4)(uVar30 >> 0x20);
      auVar8._4_4_ = ~(uint)(uVar31 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar8._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar8._8_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar8._12_4_ =
           ~(uint)(uVar34 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar50._0_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar50._4_4_ =
           ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar50._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar50._12_4_ =
           ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(this_01->Rotation).XY.m128d_f64 = auVar42 | auVar8;
      *(undefined1 (*) [16])(this_01->Rotation).ZW.m128d_f64 = auVar51 | auVar50;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar24 = param_1->CurrentIndex;
    } while (iVar24 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147535650

void __thiscall
`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::
Accumulate_Internal<FVectorAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FVectorAnimationAttribute> *param_1)

{
  int *piVar1;
  double *pdVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FUniqueAttribute *pFVar10;
  UScriptStruct *pUVar11;
  double *pdVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  iVar8 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar8;
  if (iVar8 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pdVar2 = (double *)pFVar10->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar10->Identifier;
      pUVar11 = FVectorAnimationAttribute::StaticStruct();
      uVar9 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
              FindTypeIndex(pTVar3,pUVar11);
      if (uVar9 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar9 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar13 = ~uVar9 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar15 = (longlong)(int)uVar9 * 0x10;
        piVar14 = *(int **)(pFVar5 + lVar15);
        piVar1 = piVar14 + *(int *)(pFVar5 + lVar15 + 8);
        for (; piVar14 != piVar1; piVar14 = piVar14 + 1) {
          if (*piVar14 == pFVar4->Index) {
            uVar13 = 0;
            if ((int)uVar9 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar13 = ~uVar9 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                    IndexOfByKey<UE::Anim::FAttributeId>
                              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                               ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar15),
                               pFVar4);
            goto LAB_1475357a7;
          }
        }
      }
      iVar8 = -1;
LAB_1475357a7:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar11 = FVectorAnimationAttribute::StaticStruct();
      pdVar12 = (double *)
                UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar3,pUVar11,pFVar4);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = param_1->Data;
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar16 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar10->WeightIndex);
      dVar18 = (double)fVar16;
      dVar17 = dVar18 * *pdVar2;
      dVar19 = dVar18 * pdVar2[1];
      dVar18 = dVar18 * pdVar2[2];
      if (iVar8 != -1) {
        dVar17 = dVar17 + *pdVar12;
        dVar19 = dVar19 + pdVar12[1];
        dVar18 = dVar18 + pdVar12[2];
      }
      *pdVar12 = dVar17;
      pdVar12[1] = dVar19;
      pdVar12[2] = dVar18;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar8 = param_1->CurrentIndex;
    } while (iVar8 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147535920

void __thiscall
`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::
BlendPerBone_Internal<FFloatAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FFloatAnimationAttribute> *param_1)

{
  uint uVar1;
  FAttributeId *pFVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar3;
  FAttributeBlendData *this_01;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  ECustomAttributeBlendType EVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  UScriptStruct *pUVar11;
  float *pfVar12;
  FFloatAnimationAttribute *pFVar13;
  int iVar14;
  float fVar15;
  
  pFVar2 = param_1->Collection->Identifier;
  EVar7 = UE::Anim::Attributes::GetAttributeBlendType(pFVar2);
  iVar9 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
          IndexOfByKey<FFloatAnimationAttribute>
                    (*(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)
                      ((longlong)this + 8),pFVar2);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)
             ((longlong)this + 8);
  pUVar11 = FFloatAnimationAttribute::StaticStruct();
  pfVar12 = (float *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                     FindOrAdd(this_00,pUVar11,pFVar2);
  if (EVar7 == Override) {
    pFVar13 = UE::Anim::FAttributeBlendData::TAttributeSetIterator<FFloatAnimationAttribute>::
              GetHighestBoneWeightedValue(param_1);
    *pfVar12 = pFVar13->Value;
  }
  else {
    iVar14 = param_1->CurrentIndex + 1;
    param_1->CurrentIndex = iVar14;
    fVar6 = __real_3f7fff58;
    if (iVar14 < (param_1->Collection->DataPtrs).ArrayNum) {
      do {
        if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Data.HasBoneWeights()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0xc0,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = param_1->CurrentIndex;
        if (((((param_1->Collection->DataPtrs).ArrayNum <= iVar14) || (iVar14 < 0)) ||
            ((param_1->Collection->WeightIndices).ArrayNum <= iVar14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentIndex < Collection.DataPtrs.Num() && Collection.WeightIndices.IsValidIndex(CurrentIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0xc1,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = param_1->Collection;
        uVar1 = param_1->CurrentIndex;
        this_01 = param_1->Data;
        iVar14 = pFVar3->Identifier->Index;
        uVar10 = 0;
        if ((int)uVar1 < (pFVar3->WeightIndices).ArrayNum) {
          uVar10 = ~uVar1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar15 = UE::Anim::FAttributeBlendData::GetBoneWeight
                           (this_01,(pFVar3->WeightIndices).AllocatorInstance.Data[(int)uVar1],
                            iVar14);
        if ((((param_1->Collection->DataPtrs).ArrayNum <= param_1->CurrentIndex) ||
            (param_1->CurrentIndex < 0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(CurrentIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0xb1,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar1 = param_1->CurrentIndex;
        pFVar3 = param_1->Collection;
        uVar10 = 0;
        if ((int)uVar1 < (pFVar3->DataPtrs).ArrayNum) {
          uVar10 = ~uVar1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pfVar4 = (float *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar1];
        if (fVar6 <= fVar15) {
          *pfVar12 = *pfVar4;
          return;
        }
        if ((param_1->CurrentIndex == 0) && (iVar9 == -1)) {
          fVar15 = fVar15 * *pfVar4;
        }
        else {
          fVar15 = fVar15 * *pfVar4 + *pfVar12;
        }
        *pfVar12 = fVar15;
        param_1->CurrentIndex = param_1->CurrentIndex + 1;
      } while (param_1->CurrentIndex < (param_1->Collection->DataPtrs).ArrayNum);
    }
  }
  return;
}

// operator() @ 147535ba0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::
BlendPerBone_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FIntegerAnimationAttribute> *param_1)

{
  uint uVar1;
  FAttributeId *pFVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar3;
  FAttributeBlendData *this_01;
  int *piVar4;
  code *pcVar5;
  float fVar6;
  ECustomAttributeBlendType EVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  UScriptStruct *pUVar11;
  int *piVar12;
  FIntegerAnimationAttribute *pFVar13;
  int iVar14;
  float fVar15;
  
  pFVar2 = param_1->Collection->Identifier;
  EVar7 = UE::Anim::Attributes::GetAttributeBlendType(pFVar2);
  iVar9 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
          IndexOfByKey<FIntegerAnimationAttribute>
                    (*(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)
                      ((longlong)this + 8),pFVar2);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)
             ((longlong)this + 8);
  pUVar11 = FIntegerAnimationAttribute::StaticStruct();
  piVar12 = (int *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                   FindOrAdd(this_00,pUVar11,pFVar2);
  if (EVar7 == Override) {
    pFVar13 = UE::Anim::FAttributeBlendData::TAttributeSetIterator<FIntegerAnimationAttribute>::
              GetHighestBoneWeightedValue(param_1);
    *piVar12 = pFVar13->Value;
  }
  else {
    iVar14 = param_1->CurrentIndex + 1;
    param_1->CurrentIndex = iVar14;
    fVar6 = __real_3f7fff58;
    if (iVar14 < (param_1->Collection->DataPtrs).ArrayNum) {
      do {
        if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Data.HasBoneWeights()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0xc0,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = param_1->CurrentIndex;
        if (((((param_1->Collection->DataPtrs).ArrayNum <= iVar14) || (iVar14 < 0)) ||
            ((param_1->Collection->WeightIndices).ArrayNum <= iVar14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentIndex < Collection.DataPtrs.Num() && Collection.WeightIndices.IsValidIndex(CurrentIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0xc1,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = param_1->Collection;
        uVar1 = param_1->CurrentIndex;
        this_01 = param_1->Data;
        iVar14 = pFVar3->Identifier->Index;
        uVar10 = 0;
        if ((int)uVar1 < (pFVar3->WeightIndices).ArrayNum) {
          uVar10 = ~uVar1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar15 = UE::Anim::FAttributeBlendData::GetBoneWeight
                           (this_01,(pFVar3->WeightIndices).AllocatorInstance.Data[(int)uVar1],
                            iVar14);
        if ((((param_1->Collection->DataPtrs).ArrayNum <= param_1->CurrentIndex) ||
            (param_1->CurrentIndex < 0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(CurrentIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0xb1,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar1 = param_1->CurrentIndex;
        pFVar3 = param_1->Collection;
        uVar10 = 0;
        if ((int)uVar1 < (pFVar3->DataPtrs).ArrayNum) {
          uVar10 = ~uVar1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        piVar4 = (int *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar1];
        if (fVar6 <= fVar15) {
          *piVar12 = *piVar4;
          return;
        }
        if ((param_1->CurrentIndex == 0) && (iVar9 == -1)) {
          *piVar12 = (int)((float)*piVar4 * fVar15);
        }
        else {
          *piVar12 = *piVar12 + (int)((float)*piVar4 * fVar15);
        }
        param_1->CurrentIndex = param_1->CurrentIndex + 1;
      } while (param_1->CurrentIndex < (param_1->Collection->DataPtrs).ArrayNum);
    }
  }
  return;
}

// operator() @ 147535e30

void __thiscall
`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::
BlendPerBone_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FQuaternionAnimationAttribute> *param_1)

{
  FAttributeId *pFVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar2;
  FAttributeBlendData *this_01;
  double *pdVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  ECustomAttributeBlendType EVar17;
  bool bVar18;
  int iVar19;
  UScriptStruct *pUVar20;
  undefined1 (*pauVar21) [16];
  FQuaternionAnimationAttribute *pFVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  undefined1 in_XMM1 [16];
  undefined8 uVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar30;
  double dVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 in_XMM4 [16];
  undefined1 auVar44 [16];
  uint uVar46;
  double dVar43;
  double dVar47;
  uint uVar48;
  undefined1 auVar45 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  
  pFVar1 = param_1->Collection->Identifier;
  EVar17 = UE::Anim::Attributes::GetAttributeBlendType(pFVar1);
  iVar19 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
           IndexOfByKey<FQuaternionAnimationAttribute>
                     (*(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)
                       ((longlong)this + 8),pFVar1);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)
             ((longlong)this + 8);
  pUVar20 = FQuaternionAnimationAttribute::StaticStruct();
  pauVar21 = (undefined1 (*) [16])
             UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                       (this_00,pUVar20,pFVar1);
  if (EVar17 == Override) {
    pFVar22 = UE::Anim::FAttributeBlendData::TAttributeSetIterator<FQuaternionAnimationAttribute>::
              GetHighestBoneWeightedValue(param_1);
    dVar15 = (pFVar22->Value).Y;
    *(double *)*pauVar21 = (pFVar22->Value).X;
    *(double *)(*pauVar21 + 8) = dVar15;
    dVar15 = (pFVar22->Value).W;
    *(double *)pauVar21[1] = (pFVar22->Value).Z;
    *(double *)(pauVar21[1] + 8) = dVar15;
    return;
  }
  iVar23 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar23;
  fVar16 = __real_3f7fff58;
  dVar15 = __real_3e45798ee0000000;
  if (iVar23 < (param_1->Collection->DataPtrs).ArrayNum) {
    uVar59 = (undefined4)__real_3ff0000000000000;
    uVar60 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar61 = (undefined4)__real_bff0000000000000;
    uVar62 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    fVar53 = __real_3f800000;
    do {
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasBoneWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0xc0,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar23 = param_1->CurrentIndex;
      if (((((param_1->Collection->DataPtrs).ArrayNum <= iVar23) || (iVar23 < 0)) ||
          ((param_1->Collection->WeightIndices).ArrayNum <= iVar23)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < Collection.DataPtrs.Num() && Collection.WeightIndices.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0xc1,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = param_1->Collection;
      uVar46 = param_1->CurrentIndex;
      this_01 = param_1->Data;
      iVar23 = pFVar2->Identifier->Index;
      uVar48 = 0;
      if ((int)uVar46 < (pFVar2->WeightIndices).ArrayNum) {
        uVar48 = ~uVar46 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar26 = UE::Anim::FAttributeBlendData::GetBoneWeight
                         (this_01,(pFVar2->WeightIndices).AllocatorInstance.Data[(int)uVar46],iVar23
                         );
      if ((((param_1->Collection->DataPtrs).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0xb1,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar37 = in_XMM1._8_8_;
      uVar46 = param_1->CurrentIndex;
      pFVar2 = param_1->Collection;
      uVar48 = 0;
      if ((int)uVar46 < (pFVar2->DataPtrs).ArrayNum) {
        uVar48 = ~uVar46 >> 0x1f;
      }
      if (uVar48 == 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar37 = in_XMM1._8_8_;
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      fVar54 = __real_3f800000;
      pdVar3 = (double *)(pFVar2->DataPtrs).AllocatorInstance.Data[(int)uVar46];
      if (fVar16 <= fVar26) {
        dVar29 = pdVar3[1];
        *(double *)*pauVar21 = *pdVar3;
        *(double *)(*pauVar21 + 8) = dVar29;
        dVar29 = pdVar3[3];
        *(double *)pauVar21[1] = pdVar3[2];
        *(double *)(pauVar21[1] + 8) = dVar29;
        break;
      }
      if ((param_1->CurrentIndex == 0) && (iVar19 == -1)) {
        dVar29 = (double)fVar26;
        in_XMM1._0_8_ = dVar29 * pdVar3[2];
        in_XMM1._8_8_ = dVar29 * pdVar3[3];
        auVar5._8_4_ = SUB84(dVar29 * pdVar3[1],0);
        auVar5._0_8_ = dVar29 * *pdVar3;
        auVar5._12_4_ = (int)((ulonglong)(dVar29 * pdVar3[1]) >> 0x20);
        *pauVar21 = auVar5;
        pauVar21[1] = in_XMM1;
        fVar54 = fVar53;
      }
      else if (param_1->Data->AdditiveType == AAT_None) {
        dVar30 = (double)fVar26;
        auVar44._8_4_ = SUB84(dVar30,0);
        auVar44._0_8_ = dVar30;
        auVar44._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        dVar29 = pdVar3[3];
        dVar42 = dVar30 * *pdVar3;
        dVar47 = auVar44._8_8_ * pdVar3[1];
        auVar9._4_8_ = uVar37;
        auVar9._0_4_ = (int)((ulonglong)dVar42 >> 0x20);
        auVar31._0_8_ = auVar9._0_8_ << 0x20;
        auVar31._8_4_ = SUB84(dVar47,0);
        auVar31._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        in_XMM1._0_8_ = auVar31._8_8_ * *(double *)(*pauVar21 + 8) + dVar42 * *(double *)*pauVar21;
        in_XMM1._8_8_ = dVar47;
        uVar27 = uVar61;
        uVar28 = uVar62;
        if (0.0 <= dVar30 * dVar29 * *(double *)(pauVar21[1] + 8) +
                   dVar30 * pdVar3[2] * *(double *)pauVar21[1] + in_XMM1._0_8_) {
          uVar27 = uVar59;
          uVar28 = uVar60;
        }
        dVar38 = *(double *)(pauVar21[1] + 8);
        in_XMM4._0_8_ = dVar42 * (double)CONCAT44(uVar28,uVar27) + *(double *)*pauVar21;
        in_XMM4._8_8_ = dVar47 * (double)CONCAT44(uVar28,uVar27) + *(double *)(*pauVar21 + 8);
        *(double *)pauVar21[1] =
             dVar30 * pdVar3[2] * (double)CONCAT44(uVar28,uVar27) + *(double *)pauVar21[1];
        *(double *)(pauVar21[1] + 8) = dVar30 * dVar29 * (double)CONCAT44(uVar28,uVar27) + dVar38;
        *pauVar21 = in_XMM4;
        fVar54 = fVar53;
      }
      else {
        auVar45._8_8_ = UE::Math::TQuat<double>::Identity.W;
        auVar45._0_8_ = UE::Math::TQuat<double>::Identity.Z;
        uVar27 = uVar61;
        uVar28 = uVar62;
        if (0.0 <= UE::Math::TQuat<double>::Identity.W * pdVar3[3] +
                   UE::Math::TQuat<double>::Identity.Z * pdVar3[2] +
                   UE::Math::TQuat<double>::Identity.Y * pdVar3[1] +
                   UE::Math::TQuat<double>::Identity.X * *pdVar3) {
          uVar27 = uVar59;
          uVar28 = uVar60;
        }
        dVar29 = (double)fVar26;
        dVar11 = *(double *)*pauVar21;
        dVar12 = *(double *)(*pauVar21 + 8);
        dVar13 = *(double *)pauVar21[1];
        dVar14 = *(double *)(pauVar21[1] + 8);
        auVar50._8_4_ = SUB84(dVar29,0);
        auVar50._0_8_ = dVar29;
        auVar50._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        dVar30 = (double)(fVar53 - fVar26) * (double)CONCAT44(uVar28,uVar27);
        dVar49 = dVar29 * *pdVar3 + dVar30 * UE::Math::TQuat<double>::Identity.X;
        dVar39 = auVar50._8_8_ * pdVar3[1] + dVar30 * UE::Math::TQuat<double>::Identity.Y;
        dVar42 = dVar29 * pdVar3[2] + dVar30 * UE::Math::TQuat<double>::Identity.Z;
        dVar47 = dVar29 * pdVar3[3] + dVar30 * UE::Math::TQuat<double>::Identity.W;
        auVar32._8_4_ = SUB84(dVar47,0);
        auVar32._0_8_ = dVar42;
        auVar32._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        dVar30 = dVar42 * dVar42 + dVar49 * dVar49;
        dVar38 = auVar32._8_8_ * dVar47 + dVar39 * dVar39;
        dVar29 = dVar38 + dVar30;
        dVar30 = dVar30 + dVar38;
        auVar51._8_4_ = SUB84(dVar30,0);
        auVar51._0_8_ = dVar29;
        auVar51._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        auVar45 = sqrtpd(auVar45,auVar51);
        uVar24 = -(ulonglong)(dVar15 <= dVar29);
        uVar25 = -(ulonglong)(dVar15 <= dVar30);
        auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45);
        uVar46 = (uint)(uVar24 >> 0x20);
        uVar48 = (uint)(uVar25 >> 0x20);
        auVar33._0_4_ =
             ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar33._4_4_ =
             ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar33._8_4_ =
             ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar33._12_4_ =
             ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar57._0_8_ = uVar24 & (ulonglong)(auVar51._0_8_ * dVar49);
        uVar10 = uVar25 & (ulonglong)(auVar51._8_8_ * dVar39);
        auVar57._8_4_ = (undefined4)uVar10;
        auVar57._12_4_ = (undefined4)(uVar10 >> 0x20);
        auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45);
        auVar55._0_4_ =
             ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar55._4_4_ =
             ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar55._8_4_ =
             ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar55._12_4_ =
             ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar34._0_8_ = (ulonglong)(auVar45._0_8_ * dVar42) & uVar24;
        uVar25 = (ulonglong)(auVar45._8_8_ * dVar47) & uVar25;
        auVar34._8_4_ = (undefined4)uVar25;
        auVar34._12_4_ = (undefined4)(uVar25 >> 0x20);
        dVar40 = SUB168(auVar57 | auVar33,0);
        dVar58 = SUB168(auVar57 | auVar33,8);
        dVar43 = SUB168(auVar55 | auVar34,0);
        dVar56 = SUB168(auVar55 | auVar34,8);
        in_XMM4._8_8_ = dVar56;
        in_XMM4._0_8_ = dVar56;
        in_XMM1._0_8_ =
             dVar13 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
        in_XMM1._8_8_ =
             dVar14 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
        dVar29 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        dVar30 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar38 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar39 = dVar13 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar12 * dVar56 + in_XMM1._8_8_ +
                 dVar11 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar7._8_4_ = SUB84(dVar39,0);
        auVar7._0_8_ = dVar14 * dVar40 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       dVar11 * dVar56 + in_XMM1._0_8_ +
                       dVar12 * dVar43 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        auVar7._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        *pauVar21 = auVar7;
        dVar47 = dVar11 * dVar40 * dVar47 + dVar14 * dVar56 + dVar12 * dVar58 * dVar38 +
                 dVar13 * dVar43 * dVar49;
        auVar8._8_4_ = SUB84(dVar47,0);
        auVar8._0_8_ = dVar12 * dVar40 * dVar29 + dVar13 * dVar56 + dVar11 * dVar58 * dVar30 +
                       dVar14 * dVar43 * dVar42;
        auVar8._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        pauVar21[1] = auVar8;
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      fVar53 = fVar54;
    } while (param_1->CurrentIndex < (param_1->Collection->DataPtrs).ArrayNum);
  }
  dVar42 = *(double *)*pauVar21;
  dVar47 = *(double *)(*pauVar21 + 8);
  dVar38 = *(double *)pauVar21[1];
  dVar49 = *(double *)(pauVar21[1] + 8);
  dVar30 = dVar38 * dVar38 + dVar42 * dVar42;
  dVar39 = dVar49 * dVar49 + dVar47 * dVar47;
  dVar29 = dVar39 + dVar30;
  dVar30 = dVar30 + dVar39;
  auVar6._8_4_ = SUB84(dVar30,0);
  auVar6._0_8_ = dVar29;
  auVar6._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  auVar45 = sqrtpd(in_XMM4,auVar6);
  uVar24 = -(ulonglong)(dVar15 <= dVar29);
  uVar25 = -(ulonglong)(dVar15 <= dVar30);
  uVar46 = (uint)(uVar24 >> 0x20);
  uVar48 = (uint)(uVar25 >> 0x20);
  auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45);
  auVar52._0_8_ = uVar24 & (ulonglong)(auVar51._0_8_ * dVar42);
  uVar10 = uVar25 & (ulonglong)(auVar51._8_8_ * dVar47);
  auVar52._8_4_ = (undefined4)uVar10;
  auVar52._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar35._0_4_ = ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar35._4_4_ =
       ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar35._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar35._12_4_ =
       ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45);
  auVar41._0_4_ = ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar41._4_4_ =
       ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar41._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar41._12_4_ =
       ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar36._0_8_ = (ulonglong)(auVar45._0_8_ * dVar38) & uVar24;
  uVar25 = (ulonglong)(auVar45._8_8_ * dVar49) & uVar25;
  auVar36._8_4_ = (undefined4)uVar25;
  auVar36._12_4_ = (undefined4)(uVar25 >> 0x20);
  *pauVar21 = auVar52 | auVar35;
  pauVar21[1] = auVar41 | auVar36;
  return;
}

// operator() @ 1475364b0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::
BlendPerBone_Internal<FTransformAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FTransformAnimationAttribute> *param_1)

{
  FAttributeId *pFVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar2;
  FAttributeBlendData *this_01;
  TTransform<double> *pTVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  ECustomAttributeBlendType EVar27;
  bool bVar28;
  int iVar29;
  UScriptStruct *pUVar30;
  TTransform<double> *pTVar31;
  FTransformAnimationAttribute *pFVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar54;
  uint uVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar56;
  __m128 local_78 [6];
  
  pFVar1 = param_1->Collection->Identifier;
  EVar27 = UE::Anim::Attributes::GetAttributeBlendType(pFVar1);
  iVar29 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
           IndexOfByKey<FTransformAnimationAttribute>
                     (*(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)
                       ((longlong)this + 8),pFVar1);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)
             ((longlong)this + 8);
  pUVar30 = FTransformAnimationAttribute::StaticStruct();
  pTVar31 = (TTransform<double> *)
            UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                      (this_00,pUVar30,pFVar1);
  if (EVar27 == Override) {
    pFVar32 = UE::Anim::FAttributeBlendData::TAttributeSetIterator<FTransformAnimationAttribute>::
              GetHighestBoneWeightedValue(param_1);
    dVar10 = (pFVar32->Value).Rotation.XY.m128d_f64[1];
    (pTVar31->Rotation).XY.m128d_f64[0] = (pFVar32->Value).Rotation.XY.m128d_f64[0];
    (pTVar31->Rotation).XY.m128d_f64[1] = dVar10;
    dVar10 = (pFVar32->Value).Rotation.ZW.m128d_f64[1];
    (pTVar31->Rotation).ZW.m128d_f64[0] = (pFVar32->Value).Rotation.ZW.m128d_f64[0];
    (pTVar31->Rotation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (pFVar32->Value).Translation.XY.m128d_f64[1];
    (pTVar31->Translation).XY.m128d_f64[0] = (pFVar32->Value).Translation.XY.m128d_f64[0];
    (pTVar31->Translation).XY.m128d_f64[1] = dVar10;
    dVar10 = (pFVar32->Value).Translation.ZW.m128d_f64[1];
    (pTVar31->Translation).ZW.m128d_f64[0] = (pFVar32->Value).Translation.ZW.m128d_f64[0];
    (pTVar31->Translation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (pFVar32->Value).Scale3D.XY.m128d_f64[1];
    (pTVar31->Scale3D).XY.m128d_f64[0] = (pFVar32->Value).Scale3D.XY.m128d_f64[0];
    (pTVar31->Scale3D).XY.m128d_f64[1] = dVar10;
    dVar10 = (pFVar32->Value).Scale3D.ZW.m128d_f64[1];
    (pTVar31->Scale3D).ZW.m128d_f64[0] = (pFVar32->Value).Scale3D.ZW.m128d_f64[0];
    (pTVar31->Scale3D).ZW.m128d_f64[1] = dVar10;
  }
  else {
    iVar33 = param_1->CurrentIndex + 1;
    param_1->CurrentIndex = iVar33;
    fVar26 = __real_3f7fff58;
    if (iVar33 < (param_1->Collection->DataPtrs).ArrayNum) {
      do {
        if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HasBoneWeights()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0xc0,L""), bVar28)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar33 = param_1->CurrentIndex;
        if (((((param_1->Collection->DataPtrs).ArrayNum <= iVar33) || (iVar33 < 0)) ||
            ((param_1->Collection->WeightIndices).ArrayNum <= iVar33)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < Collection.DataPtrs.Num() && Collection.WeightIndices.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0xc1,L""), bVar28)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = param_1->Collection;
        uVar54 = param_1->CurrentIndex;
        this_01 = param_1->Data;
        iVar33 = pFVar2->Identifier->Index;
        uVar55 = 0;
        if ((int)uVar54 < (pFVar2->WeightIndices).ArrayNum) {
          uVar55 = ~uVar54 >> 0x1f;
        }
        if ((uVar55 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar39 = UE::Anim::FAttributeBlendData::GetBoneWeight
                           (this_01,(pFVar2->WeightIndices).AllocatorInstance.Data[(int)uVar54],
                            iVar33);
        if ((((param_1->Collection->DataPtrs).ArrayNum <= param_1->CurrentIndex) ||
            (param_1->CurrentIndex < 0)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0xb1,L""), bVar28)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar54 = param_1->CurrentIndex;
        pFVar2 = param_1->Collection;
        uVar55 = 0;
        if ((int)uVar54 < (pFVar2->DataPtrs).ArrayNum) {
          uVar55 = ~uVar54 >> 0x1f;
        }
        if ((uVar55 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar3 = (TTransform<double> *)(pFVar2->DataPtrs).AllocatorInstance.Data[(int)uVar54];
        if (fVar26 <= fVar39) {
          dVar10 = (pTVar3->Rotation).XY.m128d_f64[1];
          (pTVar31->Rotation).XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
          (pTVar31->Rotation).XY.m128d_f64[1] = dVar10;
          dVar10 = (pTVar3->Rotation).ZW.m128d_f64[1];
          (pTVar31->Rotation).ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
          (pTVar31->Rotation).ZW.m128d_f64[1] = dVar10;
          dVar10 = (pTVar3->Translation).XY.m128d_f64[1];
          (pTVar31->Translation).XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
          (pTVar31->Translation).XY.m128d_f64[1] = dVar10;
          dVar10 = (pTVar3->Translation).ZW.m128d_f64[1];
          (pTVar31->Translation).ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
          (pTVar31->Translation).ZW.m128d_f64[1] = dVar10;
          dVar10 = (pTVar3->Scale3D).XY.m128d_f64[1];
          (pTVar31->Scale3D).XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
          (pTVar31->Scale3D).XY.m128d_f64[1] = dVar10;
          dVar10 = (pTVar3->Scale3D).ZW.m128d_f64[1];
          (pTVar31->Scale3D).ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
          (pTVar31->Scale3D).ZW.m128d_f64[1] = dVar10;
          break;
        }
        if ((param_1->CurrentIndex == 0) && (iVar29 == -1)) {
          in_XMM2 = *(undefined1 (*) [16])(pTVar3->Rotation).ZW.m128d_f64;
          dVar15 = (pTVar3->Scale3D).XY.m128d_f64[0];
          dVar19 = (pTVar3->Scale3D).XY.m128d_f64[1];
          dVar21 = (pTVar3->Scale3D).ZW.m128d_f64[0];
          dVar23 = (pTVar3->Scale3D).ZW.m128d_f64[1];
          dVar24 = (pTVar3->Translation).XY.m128d_f64[0];
          dVar25 = (pTVar3->Translation).XY.m128d_f64[1];
          auVar48 = *(undefined1 (*) [16])(pTVar3->Translation).ZW.m128d_f64;
          dVar18 = (double)fVar39;
          dVar20 = (double)fVar39;
          uVar56 = (undefined4)((ulonglong)dVar20 >> 0x20);
          dVar13 = (double)fVar39;
          dVar14 = (double)fVar39;
          auVar40._8_4_ = SUB84(dVar20,0);
          auVar40._0_8_ = dVar18;
          auVar40._12_4_ = uVar56;
          dVar10 = (pTVar3->Rotation).XY.m128d_f64[1];
          (pTVar31->Rotation).XY.m128d_f64[0] = dVar18 * (pTVar3->Rotation).XY.m128d_f64[0];
          (pTVar31->Rotation).XY.m128d_f64[1] = auVar40._8_8_ * dVar10;
          auVar41._8_4_ = SUB84(dVar20,0);
          auVar41._0_8_ = dVar18;
          auVar41._12_4_ = uVar56;
          dVar10 = dVar14 * in_XMM2._8_8_;
          auVar7._8_4_ = SUB84(dVar10,0);
          auVar7._0_8_ = dVar13 * in_XMM2._0_8_;
          auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(pTVar31->Rotation).ZW.m128d_f64 = auVar7;
          (pTVar31->Translation).XY.m128d_f64[0] = dVar18 * dVar24;
          (pTVar31->Translation).XY.m128d_f64[1] = auVar41._8_8_ * dVar25;
          dVar10 = dVar14 * auVar48._8_8_;
          dVar20 = dVar20 * dVar19;
          auVar8._8_4_ = SUB84(dVar10,0);
          auVar8._0_8_ = dVar13 * auVar48._0_8_;
          auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(pTVar31->Translation).ZW.m128d_f64 = auVar8;
          dVar14 = dVar14 * dVar23;
          auVar16._8_4_ = SUB84(dVar20,0);
          auVar16._0_8_ = dVar18 * dVar15;
          auVar16._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
          *(undefined1 (*) [16])(pTVar31->Scale3D).XY.m128d_f64 = auVar16;
          auVar12._8_4_ = SUB84(dVar14,0);
          auVar12._0_8_ = dVar13 * dVar21;
          auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          *(undefined1 (*) [16])(pTVar31->Scale3D).ZW.m128d_f64 = auVar12;
        }
        else {
          local_78[0]._0_4_ = fVar39;
          local_78[0]._4_4_ = fVar39;
          local_78[0]._8_4_ = fVar39;
          local_78[0]._12_4_ = fVar39;
          if (param_1->Data->AdditiveType == AAT_None) {
            dVar19 = (double)fVar39;
            dVar21 = (double)fVar39;
            dVar23 = (double)fVar39;
            dVar24 = (double)fVar39;
            dVar14 = dVar19 * (pTVar3->Rotation).XY.m128d_f64[0];
            dVar18 = dVar21 * (pTVar3->Rotation).XY.m128d_f64[1];
            dVar20 = dVar23 * (pTVar3->Rotation).ZW.m128d_f64[0];
            dVar15 = dVar24 * (pTVar3->Rotation).ZW.m128d_f64[1];
            auVar42._8_4_ = SUB84(dVar18,0);
            auVar42._0_8_ = dVar14;
            auVar42._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
            dVar10 = dVar20 * (pTVar31->Rotation).ZW.m128d_f64[0] +
                     dVar14 * (pTVar31->Rotation).XY.m128d_f64[0];
            dVar13 = dVar15 * (pTVar31->Rotation).ZW.m128d_f64[1] +
                     auVar42._8_8_ * (pTVar31->Rotation).XY.m128d_f64[1];
            auVar43._8_4_ = SUB84(dVar13,0);
            auVar43._0_8_ = dVar10;
            auVar43._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            uVar34 = -(ulonglong)(0.0 <= auVar43._8_8_ + dVar10);
            uVar35 = -(ulonglong)(0.0 <= dVar10 + dVar13);
            uVar54 = (uint)(uVar34 >> 0x20);
            uVar55 = (uint)(uVar35 >> 0x20);
            auVar50._0_4_ = ~(uint)uVar34 & SUB84(0.0 - dVar14,0);
            auVar50._4_4_ = ~uVar54 & (uint)((ulonglong)(0.0 - dVar14) >> 0x20);
            auVar50._8_4_ = ~(uint)uVar35 & SUB84(0.0 - dVar18,0);
            auVar50._12_4_ = ~uVar55 & (uint)((ulonglong)(0.0 - dVar18) >> 0x20);
            auVar48._8_4_ = (int)((ulonglong)dVar18 & uVar35);
            auVar48._0_8_ = (ulonglong)dVar14 & uVar34;
            auVar48._12_4_ = (int)(((ulonglong)dVar18 & uVar35) >> 0x20);
            dVar10 = (pTVar31->Rotation).XY.m128d_f64[1];
            auVar44._0_4_ = ~(uint)uVar34 & SUB84(0.0 - dVar20,0);
            auVar44._4_4_ = ~uVar54 & (uint)((ulonglong)(0.0 - dVar20) >> 0x20);
            auVar44._8_4_ = ~(uint)uVar35 & SUB84(0.0 - dVar15,0);
            auVar44._12_4_ = ~uVar55 & (uint)((ulonglong)(0.0 - dVar15) >> 0x20);
            (pTVar31->Rotation).XY.m128d_f64[0] =
                 SUB168(auVar50 | auVar48,0) + (pTVar31->Rotation).XY.m128d_f64[0];
            (pTVar31->Rotation).XY.m128d_f64[1] = SUB168(auVar50 | auVar48,8) + dVar10;
            auVar52._0_8_ = (ulonglong)dVar20 & uVar34;
            auVar52._8_4_ = (undefined4)(uVar35 & (ulonglong)dVar15);
            auVar52._12_4_ = (undefined4)((uVar35 & (ulonglong)dVar15) >> 0x20);
            dVar10 = (pTVar31->Rotation).ZW.m128d_f64[1];
            (pTVar31->Rotation).ZW.m128d_f64[0] =
                 SUB168(auVar44 | auVar52,0) + (pTVar31->Rotation).ZW.m128d_f64[0];
            (pTVar31->Rotation).ZW.m128d_f64[1] = SUB168(auVar44 | auVar52,8) + dVar10;
            in_XMM2 = *(undefined1 (*) [16])(pTVar3->Translation).ZW.m128d_f64;
            auVar45._8_4_ = SUB84(dVar21,0);
            auVar45._0_8_ = dVar19;
            auVar45._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
            dVar13 = (pTVar3->Translation).XY.m128d_f64[1];
            dVar10 = (pTVar31->Translation).XY.m128d_f64[1];
            (pTVar31->Translation).XY.m128d_f64[0] =
                 dVar19 * (pTVar3->Translation).XY.m128d_f64[0] +
                 (pTVar31->Translation).XY.m128d_f64[0];
            (pTVar31->Translation).XY.m128d_f64[1] = auVar45._8_8_ * dVar13 + dVar10;
            dVar10 = dVar24 * in_XMM2._8_8_ + (pTVar31->Translation).ZW.m128d_f64[1];
            auVar51._8_4_ = SUB84(dVar10,0);
            auVar51._0_8_ = dVar23 * in_XMM2._0_8_ + (pTVar31->Translation).ZW.m128d_f64[0];
            auVar51._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            *(undefined1 (*) [16])(pTVar31->Translation).ZW.m128d_f64 = auVar51;
            dVar13 = (pTVar3->Scale3D).ZW.m128d_f64[0];
            dVar14 = (pTVar3->Scale3D).ZW.m128d_f64[1];
            dVar10 = dVar21 * (pTVar3->Scale3D).XY.m128d_f64[1] + (pTVar31->Scale3D).XY.m128d_f64[1]
            ;
            auVar17._8_4_ = SUB84(dVar10,0);
            auVar17._0_8_ =
                 dVar19 * (pTVar3->Scale3D).XY.m128d_f64[0] + (pTVar31->Scale3D).XY.m128d_f64[0];
            auVar17._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            *(undefined1 (*) [16])(pTVar31->Scale3D).XY.m128d_f64 = auVar17;
            dVar10 = dVar24 * dVar14 + (pTVar31->Scale3D).ZW.m128d_f64[1];
            auVar22._8_4_ = SUB84(dVar10,0);
            auVar22._0_8_ = dVar23 * dVar13 + (pTVar31->Scale3D).ZW.m128d_f64[0];
            auVar22._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            *(undefined1 (*) [16])(pTVar31->Scale3D).ZW.m128d_f64 = auVar22;
          }
          else {
            UE::Math::TTransform<double>::BlendFromIdentityAndAccumulate
                      (pTVar31,pTVar3,(ScalarRegister *)local_78);
          }
        }
        param_1->CurrentIndex = param_1->CurrentIndex + 1;
      } while (param_1->CurrentIndex < (param_1->Collection->DataPtrs).ArrayNum);
    }
    dVar14 = (pTVar31->Rotation).XY.m128d_f64[0];
    dVar18 = (pTVar31->Rotation).XY.m128d_f64[1];
    dVar20 = (pTVar31->Rotation).ZW.m128d_f64[0];
    dVar15 = (pTVar31->Rotation).ZW.m128d_f64[1];
    dVar10 = dVar20 * dVar20 + dVar14 * dVar14;
    dVar13 = dVar15 * dVar15 + dVar18 * dVar18;
    auVar46._8_4_ = SUB84(dVar13,0);
    auVar46._0_8_ = dVar10;
    auVar46._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar47._0_8_ = auVar46._8_8_ + dVar10;
    auVar47._8_8_ = dVar10 + dVar13;
    auVar51 = sqrtpd(in_XMM2,auVar47);
    uVar35 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar47._0_8_);
    uVar37 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar47._8_8_);
    uVar36 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar47._0_8_);
    uVar38 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar47._8_8_);
    auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar51);
    auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar51);
    auVar49._0_8_ = uVar36 & (ulonglong)(auVar48._0_8_ * dVar14);
    uVar34 = uVar38 & (ulonglong)(auVar48._8_8_ * dVar18);
    auVar49._8_4_ = (undefined4)uVar34;
    auVar49._12_4_ = (undefined4)(uVar34 >> 0x20);
    auVar53._0_8_ = uVar35 & (ulonglong)(auVar51._0_8_ * dVar20);
    uVar34 = uVar37 & (ulonglong)(auVar51._8_8_ * dVar15);
    auVar53._8_4_ = (undefined4)uVar34;
    auVar53._12_4_ = (undefined4)(uVar34 >> 0x20);
    auVar11._4_4_ =
         ~(uint)(uVar36 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar11._0_4_ = ~(uint)uVar36 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar11._8_4_ = ~(uint)uVar38 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar11._12_4_ =
         ~(uint)(uVar38 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    uVar54 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    uVar55 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])(pTVar31->Rotation).XY.m128d_f64 = auVar49 | auVar11;
    auVar9._4_4_ = ~(uint)(uVar35 >> 0x20) & uVar55;
    auVar9._0_4_ = ~(uint)uVar35 & uVar54;
    auVar9._8_4_ = ~(uint)uVar37 & uVar5;
    auVar9._12_4_ = ~(uint)(uVar37 >> 0x20) & uVar6;
    *(undefined1 (*) [16])(pTVar31->Rotation).ZW.m128d_f64 = auVar53 | auVar9;
  }
  return;
}

// operator() @ 147536990

void __thiscall
`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::
BlendPerBone_Internal<FVectorAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FVectorAnimationAttribute> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  FAttributeId *pFVar5;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar6;
  FAttributeBlendData *this_01;
  double *pdVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  float fVar11;
  ECustomAttributeBlendType EVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  UScriptStruct *pUVar16;
  undefined1 (*pauVar17) [16];
  FVectorAnimationAttribute *pFVar18;
  int iVar19;
  float fVar20;
  double dVar21;
  
  pFVar5 = param_1->Collection->Identifier;
  EVar12 = UE::Anim::Attributes::GetAttributeBlendType(pFVar5);
  iVar14 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
           IndexOfByKey<FVectorAnimationAttribute>
                     (*(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)
                       ((longlong)this + 8),pFVar5);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)
             ((longlong)this + 8);
  pUVar16 = FVectorAnimationAttribute::StaticStruct();
  pauVar17 = (undefined1 (*) [16])
             UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                       (this_00,pUVar16,pFVar5);
  if (EVar12 == Override) {
    pFVar18 = UE::Anim::FAttributeBlendData::TAttributeSetIterator<FVectorAnimationAttribute>::
              GetHighestBoneWeightedValue(param_1);
    dVar1 = (pFVar18->Value).field0_0x0._s_0.Y;
    *(double *)*pauVar17 = (pFVar18->Value).field0_0x0._s_0.X;
    *(double *)(*pauVar17 + 8) = dVar1;
    *(double *)pauVar17[1] = (pFVar18->Value).field0_0x0._s_0.Z;
  }
  else {
    iVar19 = param_1->CurrentIndex + 1;
    param_1->CurrentIndex = iVar19;
    fVar11 = __real_3f7fff58;
    if (iVar19 < (param_1->Collection->DataPtrs).ArrayNum) {
      do {
        if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HasBoneWeights()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0xc0,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar19 = param_1->CurrentIndex;
        if (((((param_1->Collection->DataPtrs).ArrayNum <= iVar19) || (iVar19 < 0)) ||
            ((param_1->Collection->WeightIndices).ArrayNum <= iVar19)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < Collection.DataPtrs.Num() && Collection.WeightIndices.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0xc1,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = param_1->Collection;
        uVar4 = param_1->CurrentIndex;
        this_01 = param_1->Data;
        iVar19 = pFVar6->Identifier->Index;
        uVar15 = 0;
        if ((int)uVar4 < (pFVar6->WeightIndices).ArrayNum) {
          uVar15 = ~uVar4 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar20 = UE::Anim::FAttributeBlendData::GetBoneWeight
                           (this_01,(pFVar6->WeightIndices).AllocatorInstance.Data[(int)uVar4],
                            iVar19);
        if ((((param_1->Collection->DataPtrs).ArrayNum <= param_1->CurrentIndex) ||
            (param_1->CurrentIndex < 0)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0xb1,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar4 = param_1->CurrentIndex;
        pFVar6 = param_1->Collection;
        uVar15 = 0;
        if ((int)uVar4 < (pFVar6->DataPtrs).ArrayNum) {
          uVar15 = ~uVar4 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pdVar7 = (double *)(pFVar6->DataPtrs).AllocatorInstance.Data[(int)uVar4];
        if (fVar11 <= fVar20) {
          dVar1 = pdVar7[1];
          *(double *)*pauVar17 = *pdVar7;
          *(double *)(*pauVar17 + 8) = dVar1;
          *(double *)pauVar17[1] = pdVar7[2];
          return;
        }
        if ((param_1->CurrentIndex == 0) && (iVar14 == -1)) {
          dVar21 = (double)fVar20;
          dVar1 = pdVar7[2];
          auVar10._8_4_ = SUB84(pdVar7[1] * dVar21,0);
          auVar10._0_8_ = *pdVar7 * dVar21;
          auVar10._12_4_ = (int)((ulonglong)(pdVar7[1] * dVar21) >> 0x20);
          *pauVar17 = auVar10;
          *(double *)pauVar17[1] = dVar21 * dVar1;
        }
        else {
          dVar9 = (double)fVar20;
          dVar1 = pdVar7[2];
          dVar21 = *pdVar7;
          dVar2 = *(double *)pauVar17[1];
          dVar3 = *(double *)*pauVar17;
          *(double *)(*pauVar17 + 8) = dVar9 * pdVar7[1] + *(double *)(*pauVar17 + 8);
          *(double *)pauVar17[1] = dVar9 * dVar1 + dVar2;
          *(double *)*pauVar17 = dVar9 * dVar21 + dVar3;
        }
        param_1->CurrentIndex = param_1->CurrentIndex + 1;
      } while (param_1->CurrentIndex < (param_1->Collection->DataPtrs).ArrayNum);
    }
  }
  return;
}

// operator() @ 147536c70

void __thiscall
`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::
Blend_Internal<FFloatAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FFloatAnimationAttribute> *param_1)

{
  uint uVar1;
  FAttributeId *pFVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar3;
  float *pfVar4;
  FAttributeBlendData *this_01;
  code *pcVar5;
  ECustomAttributeBlendType EVar6;
  bool bVar7;
  int iVar8;
  UScriptStruct *pUVar9;
  float *pfVar10;
  uint uVar11;
  float fVar12;
  
  pFVar2 = param_1->Collection->Identifier;
  EVar6 = UE::Anim::Attributes::GetAttributeBlendType(pFVar2);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
  pUVar9 = FFloatAnimationAttribute::StaticStruct();
  pfVar10 = (float *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                     FindOrAdd(this_00,pUVar9,pFVar2);
  if (EVar6 == Override) {
    if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data.HasContainerWeights()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                           ,200,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->Collection->HighestWeightedIndex;
    if ((((param_1->Collection->DataPtrs).ArrayNum <= iVar8) || (iVar8 < 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Collection.HighestWeightedIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(Collection.HighestWeightedIndex)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                           ,0xc9,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = param_1->Collection;
    uVar1 = pFVar3->HighestWeightedIndex;
    uVar11 = 0;
    if ((int)uVar1 < (pFVar3->DataPtrs).ArrayNum) {
      uVar11 = ~uVar1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *pfVar10 = *(float *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar1];
  }
  else {
    iVar8 = param_1->CurrentIndex + 1;
    param_1->CurrentIndex = iVar8;
    if (iVar8 < (param_1->Collection->DataPtrs).ArrayNum) {
      if ((param_1->Collection->DataPtrs).ArrayNum <= iVar8) goto LAB_147536db6;
      do {
        if (iVar8 < 0) {
LAB_147536db6:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0xb1,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar1 = param_1->CurrentIndex;
        pFVar3 = param_1->Collection;
        uVar11 = 0;
        if ((int)uVar1 < (pFVar3->DataPtrs).ArrayNum) {
          uVar11 = ~uVar1 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pfVar4 = (float *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar1];
        if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Data.HasContainerWeights()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0xb8,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = param_1->CurrentIndex;
        if (((((param_1->Collection->DataPtrs).ArrayNum <= iVar8) || (iVar8 < 0)) ||
            ((param_1->Collection->WeightIndices).ArrayNum <= iVar8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentIndex < Collection.DataPtrs.Num() && Collection.WeightIndices.IsValidIndex(CurrentIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0xb9,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar1 = param_1->CurrentIndex;
        pFVar3 = param_1->Collection;
        this_01 = param_1->Data;
        uVar11 = 0;
        if ((int)uVar1 < (pFVar3->WeightIndices).ArrayNum) {
          uVar11 = ~uVar1 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar12 = UE::Anim::FAttributeBlendData::GetContainerWeight
                           (this_01,(pFVar3->WeightIndices).AllocatorInstance.Data[(int)uVar1]);
        if (param_1->CurrentIndex == 0) {
          *pfVar10 = *pfVar4;
          fVar12 = fVar12 * *pfVar4;
        }
        else {
          fVar12 = fVar12 * *pfVar4 + *pfVar10;
        }
        *pfVar10 = fVar12;
        param_1->CurrentIndex = param_1->CurrentIndex + 1;
        iVar8 = param_1->CurrentIndex;
      } while (iVar8 < (param_1->Collection->DataPtrs).ArrayNum);
    }
  }
  return;
}

// operator() @ 147536f60

void __thiscall
`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::
Blend_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FIntegerAnimationAttribute> *param_1)

{
  uint uVar1;
  FAttributeId *pFVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar3;
  int *piVar4;
  FAttributeBlendData *this_01;
  code *pcVar5;
  ECustomAttributeBlendType EVar6;
  bool bVar7;
  int iVar8;
  UScriptStruct *pUVar9;
  int *piVar10;
  uint uVar11;
  float fVar12;
  
  pFVar2 = param_1->Collection->Identifier;
  EVar6 = UE::Anim::Attributes::GetAttributeBlendType(pFVar2);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
  pUVar9 = FIntegerAnimationAttribute::StaticStruct();
  piVar10 = (int *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                   FindOrAdd(this_00,pUVar9,pFVar2);
  if (EVar6 == Override) {
    if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data.HasContainerWeights()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                           ,200,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->Collection->HighestWeightedIndex;
    if ((((param_1->Collection->DataPtrs).ArrayNum <= iVar8) || (iVar8 < 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Collection.HighestWeightedIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(Collection.HighestWeightedIndex)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                           ,0xc9,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = param_1->Collection;
    uVar1 = pFVar3->HighestWeightedIndex;
    uVar11 = 0;
    if ((int)uVar1 < (pFVar3->DataPtrs).ArrayNum) {
      uVar11 = ~uVar1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *piVar10 = *(int *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar1];
  }
  else {
    iVar8 = param_1->CurrentIndex + 1;
    param_1->CurrentIndex = iVar8;
    if (iVar8 < (param_1->Collection->DataPtrs).ArrayNum) {
      if ((param_1->Collection->DataPtrs).ArrayNum <= iVar8) goto LAB_1475370a3;
      do {
        if (iVar8 < 0) {
LAB_1475370a3:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0xb1,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar1 = param_1->CurrentIndex;
        pFVar3 = param_1->Collection;
        uVar11 = 0;
        if ((int)uVar1 < (pFVar3->DataPtrs).ArrayNum) {
          uVar11 = ~uVar1 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        piVar4 = (int *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar1];
        if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Data.HasContainerWeights()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0xb8,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = param_1->CurrentIndex;
        if (((((param_1->Collection->DataPtrs).ArrayNum <= iVar8) || (iVar8 < 0)) ||
            ((param_1->Collection->WeightIndices).ArrayNum <= iVar8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentIndex < Collection.DataPtrs.Num() && Collection.WeightIndices.IsValidIndex(CurrentIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0xb9,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar1 = param_1->CurrentIndex;
        pFVar3 = param_1->Collection;
        this_01 = param_1->Data;
        uVar11 = 0;
        if ((int)uVar1 < (pFVar3->WeightIndices).ArrayNum) {
          uVar11 = ~uVar1 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar12 = UE::Anim::FAttributeBlendData::GetContainerWeight
                           (this_01,(pFVar3->WeightIndices).AllocatorInstance.Data[(int)uVar1]);
        if (param_1->CurrentIndex == 0) {
          *piVar10 = *piVar4;
          *piVar10 = (int)((float)*piVar4 * fVar12);
        }
        else {
          *piVar10 = *piVar10 + (int)((float)*piVar4 * fVar12);
        }
        param_1->CurrentIndex = param_1->CurrentIndex + 1;
        iVar8 = param_1->CurrentIndex;
      } while (iVar8 < (param_1->Collection->DataPtrs).ArrayNum);
    }
  }
  return;
}

// operator() @ 147537260

void __thiscall
`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::
Blend_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FQuaternionAnimationAttribute> *param_1)

{
  FAttributeId *pFVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar2;
  uchar *puVar3;
  double *pdVar4;
  FAttributeBlendData *this_01;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  float fVar22;
  ECustomAttributeBlendType EVar23;
  bool bVar24;
  int iVar25;
  UScriptStruct *pUVar26;
  undefined1 (*pauVar27) [16];
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar34;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar35;
  double in_XMM1_Qb;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar36;
  double dVar43;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar45 [16];
  uint uVar48;
  undefined1 in_XMM4 [16];
  undefined1 auVar46 [16];
  uint uVar49;
  undefined1 auVar47 [16];
  double dVar50;
  undefined1 auVar52 [16];
  double dVar51;
  double dVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  double dVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  
  pFVar1 = param_1->Collection->Identifier;
  EVar23 = UE::Anim::Attributes::GetAttributeBlendType(pFVar1);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
  pUVar26 = FQuaternionAnimationAttribute::StaticStruct();
  pauVar27 = (undefined1 (*) [16])
             UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                       (this_00,pUVar26,pFVar1);
  if (EVar23 == Override) {
    if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Data.HasContainerWeights()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                            ,200,L""), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar25 = param_1->Collection->HighestWeightedIndex;
    if ((((param_1->Collection->DataPtrs).ArrayNum <= iVar25) || (iVar25 < 0)) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Collection.HighestWeightedIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(Collection.HighestWeightedIndex)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                            ,0xc9,L""), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = param_1->Collection;
    uVar48 = pFVar2->HighestWeightedIndex;
    uVar49 = 0;
    if ((int)uVar48 < (pFVar2->DataPtrs).ArrayNum) {
      uVar49 = ~uVar48 >> 0x1f;
    }
    if ((uVar49 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar3 = (pFVar2->DataPtrs).AllocatorInstance.Data[(int)uVar48];
    uVar20 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)*pauVar27 = *(undefined8 *)puVar3;
    *(undefined8 *)(*pauVar27 + 8) = uVar20;
    uVar20 = *(undefined8 *)(puVar3 + 0x18);
    *(undefined8 *)pauVar27[1] = *(undefined8 *)(puVar3 + 0x10);
    *(undefined8 *)(pauVar27[1] + 8) = uVar20;
    return;
  }
  iVar25 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar25;
  dVar36 = __real_bff0000000000000;
  fVar22 = __real_3f800000;
  dVar21 = __real_3e45798ee0000000;
  dVar9 = __real_3ff0000000000000;
  if (iVar25 < (param_1->Collection->DataPtrs).ArrayNum) {
    uVar61 = SUB84(__real_3ff0000000000000,0);
    uVar15 = (ulonglong)__real_3ff0000000000000 >> 0x20;
    uVar62 = SUB84(__real_bff0000000000000,0);
    uVar31 = (ulonglong)__real_bff0000000000000 >> 0x20;
    if ((param_1->Collection->DataPtrs).ArrayNum <= iVar25) goto LAB_147537434;
    do {
      if (iVar25 < 0) {
LAB_147537434:
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(CurrentIndex)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                            ,0xb1,L"");
        if (bVar24) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar48 = param_1->CurrentIndex;
      pFVar2 = param_1->Collection;
      uVar49 = 0;
      if ((int)uVar48 < (pFVar2->DataPtrs).ArrayNum) {
        uVar49 = ~uVar48 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pdVar4 = (double *)(pFVar2->DataPtrs).AllocatorInstance.Data[(int)uVar48];
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasContainerWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0xb8,L""), bVar24)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar25 = param_1->CurrentIndex;
      if (((((param_1->Collection->DataPtrs).ArrayNum <= iVar25) || (iVar25 < 0)) ||
          ((param_1->Collection->WeightIndices).ArrayNum <= iVar25)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < Collection.DataPtrs.Num() && Collection.WeightIndices.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0xb9,L""), bVar24)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar48 = param_1->CurrentIndex;
      pFVar2 = param_1->Collection;
      this_01 = param_1->Data;
      uVar49 = 0;
      if ((int)uVar48 < (pFVar2->WeightIndices).ArrayNum) {
        uVar49 = ~uVar48 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar32 = UE::Anim::FAttributeBlendData::GetContainerWeight
                         (this_01,(pFVar2->WeightIndices).AllocatorInstance.Data[(int)uVar48]);
      auVar47._4_4_ = extraout_XMM0_Db;
      auVar47._0_4_ = fVar32;
      auVar47._8_4_ = extraout_XMM0_Dc;
      auVar47._12_4_ = extraout_XMM0_Dd;
      if (param_1->CurrentIndex == 0) {
        dVar44 = pdVar4[1];
        *(double *)*pauVar27 = *pdVar4;
        *(double *)(*pauVar27 + 8) = dVar44;
        dVar44 = pdVar4[3];
        *(double *)pauVar27[1] = pdVar4[2];
        *(double *)(pauVar27[1] + 8) = dVar44;
        dVar35 = (double)fVar32;
        dVar44 = pdVar4[2];
        in_XMM1_Qb = dVar35 * pdVar4[3];
        auVar6._8_4_ = SUB84(dVar35 * pdVar4[1],0);
        auVar6._0_8_ = dVar35 * *pdVar4;
        auVar6._12_4_ = (int)((ulonglong)(dVar35 * pdVar4[1]) >> 0x20);
        *pauVar27 = auVar6;
        *(double *)pauVar27[1] = dVar35 * dVar44;
        *(double *)(pauVar27[1] + 8) = in_XMM1_Qb;
      }
      else if (param_1->Data->AdditiveType == AAT_None) {
        dVar44 = (double)fVar32;
        auVar46._8_4_ = SUB84(dVar44,0);
        auVar46._0_8_ = dVar44;
        auVar46._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        in_XMM4._0_8_ = dVar44 * *pdVar4;
        in_XMM4._8_8_ = auVar46._8_8_ * pdVar4[1];
        auVar14._4_8_ = in_XMM1_Qb;
        auVar14._0_4_ = (int)((ulonglong)in_XMM4._0_8_ >> 0x20);
        auVar37._0_8_ = auVar14._0_8_ << 0x20;
        auVar37._8_4_ = SUB84(in_XMM4._8_8_,0);
        auVar37._12_4_ = (int)((ulonglong)in_XMM4._8_8_ >> 0x20);
        uVar33 = uVar62;
        uVar34 = (int)uVar31;
        if (0.0 <= dVar44 * pdVar4[3] * *(double *)(pauVar27[1] + 8) +
                   dVar44 * pdVar4[2] * *(double *)pauVar27[1] +
                   auVar37._8_8_ * *(double *)(*pauVar27 + 8) + in_XMM4._0_8_ * *(double *)*pauVar27
           ) {
          uVar33 = uVar61;
          uVar34 = (int)uVar15;
        }
        dVar35 = (double)CONCAT44(uVar34,uVar33) * dVar44 * pdVar4[3] + *(double *)(pauVar27[1] + 8)
        ;
        in_XMM1_Qb = (double)CONCAT44(uVar34,uVar33) * in_XMM4._8_8_ + *(double *)(*pauVar27 + 8);
        auVar8._8_4_ = SUB84(dVar35,0);
        auVar8._0_8_ = (double)CONCAT44(uVar34,uVar33) * dVar44 * pdVar4[2] + *(double *)pauVar27[1]
        ;
        auVar8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        pauVar27[1] = auVar8;
        *(double *)*pauVar27 =
             (double)CONCAT44(uVar34,uVar33) * in_XMM4._0_8_ + *(double *)*pauVar27;
        *(double *)(*pauVar27 + 8) = in_XMM1_Qb;
      }
      else {
        dVar44 = dVar36;
        if (0.0 <= UE::Math::TQuat<double>::Identity.Y * pdVar4[1] +
                   UE::Math::TQuat<double>::Identity.X * *pdVar4 +
                   UE::Math::TQuat<double>::Identity.W * pdVar4[3] +
                   UE::Math::TQuat<double>::Identity.Z * pdVar4[2]) {
          dVar44 = dVar9;
        }
        dVar35 = (double)fVar32;
        dVar44 = (double)(fVar22 - fVar32) * dVar44;
        auVar52._8_4_ = SUB84(dVar44,0);
        auVar52._0_8_ = dVar44;
        auVar52._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        dVar16 = *(double *)*pauVar27;
        dVar17 = *(double *)(*pauVar27 + 8);
        dVar12 = dVar44 * UE::Math::TQuat<double>::Identity.Z + dVar35 * pdVar4[2];
        dVar13 = dVar44 * UE::Math::TQuat<double>::Identity.W + dVar35 * pdVar4[3];
        auVar38._8_4_ = SUB84(dVar13,0);
        auVar38._0_8_ = dVar12;
        auVar38._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        dVar18 = *(double *)pauVar27[1];
        dVar19 = *(double *)(pauVar27[1] + 8);
        dVar50 = dVar44 * UE::Math::TQuat<double>::Identity.X + dVar35 * *pdVar4;
        dVar55 = auVar52._8_8_ * UE::Math::TQuat<double>::Identity.Y + dVar35 * pdVar4[1];
        dVar35 = dVar12 * dVar12 + dVar50 * dVar50;
        dVar43 = auVar38._8_8_ * dVar13 + dVar55 * dVar55;
        dVar44 = dVar43 + dVar35;
        dVar35 = dVar35 + dVar43;
        auVar53._8_4_ = SUB84(dVar35,0);
        auVar53._0_8_ = dVar44;
        auVar53._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        auVar47 = sqrtpd(auVar47,auVar53);
        uVar28 = -(ulonglong)(dVar21 <= dVar44);
        uVar30 = -(ulonglong)(dVar21 <= dVar35);
        auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar47);
        uVar48 = (uint)(uVar28 >> 0x20);
        uVar49 = (uint)(uVar30 >> 0x20);
        auVar39._0_4_ =
             ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar39._4_4_ =
             ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar39._8_4_ =
             ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar39._12_4_ =
             ~uVar49 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar59._0_8_ = uVar28 & (ulonglong)(auVar53._0_8_ * dVar50);
        uVar29 = uVar30 & (ulonglong)(auVar53._8_8_ * dVar55);
        auVar59._8_4_ = (undefined4)uVar29;
        auVar59._12_4_ = (undefined4)(uVar29 >> 0x20);
        auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
        auVar56._0_4_ =
             ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar56._4_4_ =
             ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar56._8_4_ =
             ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar56._12_4_ =
             ~uVar49 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar40._0_8_ = (ulonglong)(auVar47._0_8_ * dVar12) & uVar28;
        uVar30 = (ulonglong)(auVar47._8_8_ * dVar13) & uVar30;
        auVar40._8_4_ = (undefined4)uVar30;
        auVar40._12_4_ = (undefined4)(uVar30 >> 0x20);
        dVar58 = SUB168(auVar59 | auVar39,0);
        dVar60 = SUB168(auVar59 | auVar39,8);
        dVar51 = SUB168(auVar56 | auVar40,0);
        dVar57 = SUB168(auVar56 | auVar40,8);
        in_XMM4._8_8_ = dVar18;
        in_XMM4._0_8_ = dVar19;
        dVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        in_XMM1_Qb = dVar19 * dVar60 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
        dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar55 = dVar58 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar17 * dVar57 + in_XMM1_Qb +
                 dVar51 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar10._8_4_ = SUB84(dVar55,0);
        auVar10._0_8_ =
             dVar58 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar16 * dVar57 +
             dVar18 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar51 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        auVar10._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
        *pauVar27 = auVar10;
        dVar13 = dVar58 * dVar16 * dVar13 + dVar19 * dVar57 + dVar17 * dVar60 * dVar43 +
                 dVar51 * dVar18 * dVar50;
        auVar11._8_4_ = SUB84(dVar13,0);
        auVar11._0_8_ =
             dVar58 * dVar17 * dVar44 + dVar18 * dVar57 + dVar16 * dVar60 * dVar35 +
             dVar51 * dVar19 * dVar12;
        auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        pauVar27[1] = auVar11;
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar25 = param_1->CurrentIndex;
    } while (iVar25 < (param_1->Collection->DataPtrs).ArrayNum);
  }
  dVar44 = *(double *)*pauVar27;
  dVar35 = *(double *)(*pauVar27 + 8);
  dVar12 = *(double *)pauVar27[1];
  dVar13 = *(double *)(pauVar27[1] + 8);
  dVar36 = dVar12 * dVar12 + dVar44 * dVar44;
  dVar43 = dVar13 * dVar13 + dVar35 * dVar35;
  dVar9 = dVar43 + dVar36;
  dVar36 = dVar36 + dVar43;
  auVar7._8_4_ = SUB84(dVar36,0);
  auVar7._0_8_ = dVar9;
  auVar7._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  auVar47 = sqrtpd(in_XMM4,auVar7);
  uVar29 = -(ulonglong)(dVar21 <= dVar9);
  uVar31 = -(ulonglong)(dVar21 <= dVar36);
  uVar48 = (uint)(uVar29 >> 0x20);
  uVar49 = (uint)(uVar31 >> 0x20);
  auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar47);
  auVar54._0_8_ = uVar29 & (ulonglong)(auVar53._0_8_ * dVar44);
  uVar15 = uVar31 & (ulonglong)(auVar53._8_8_ * dVar35);
  auVar54._8_4_ = (undefined4)uVar15;
  auVar54._12_4_ = (undefined4)(uVar15 >> 0x20);
  auVar41._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar41._4_4_ =
       ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar41._8_4_ = ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar41._12_4_ =
       ~uVar49 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
  auVar45._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar45._4_4_ =
       ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar45._8_4_ = ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar45._12_4_ =
       ~uVar49 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar42._0_8_ = (ulonglong)(auVar47._0_8_ * dVar12) & uVar29;
  uVar31 = (ulonglong)(auVar47._8_8_ * dVar13) & uVar31;
  auVar42._8_4_ = (undefined4)uVar31;
  auVar42._12_4_ = (undefined4)(uVar31 >> 0x20);
  *pauVar27 = auVar54 | auVar41;
  pauVar27[1] = auVar45 | auVar42;
  return;
}

// operator() @ 147537950

void __thiscall
`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::
Blend_Internal<FStringAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FStringAnimationAttribute> *param_1)

{
  int iVar1;
  uint uVar2;
  FAttributeId *pFVar3;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  
  pFVar3 = param_1->Collection->Identifier;
  UE::Anim::Attributes::GetAttributeBlendType(pFVar3);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
  if ((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.HasContainerWeights()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                       ,200,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar1 = param_1->Collection->HighestWeightedIndex;
  if (((param_1->Collection->DataPtrs).ArrayNum <= iVar1) || (iVar1 < 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection.HighestWeightedIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(Collection.HighestWeightedIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                       ,0xc9,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = param_1->Collection;
  uVar2 = pFVar4->HighestWeightedIndex;
  uVar8 = 0;
  if ((int)uVar2 < (pFVar4->DataPtrs).ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar5 = (pFVar4->DataPtrs).AllocatorInstance.Data[(int)uVar2];
  pUVar9 = FStringAnimationAttribute::StaticStruct();
  puVar10 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Add
                      (this_00,pUVar9,pFVar3);
  if (puVar10 != (uchar *)0x0) {
    pUVar9 = FStringAnimationAttribute::StaticStruct();
    UScriptStruct::CopyScriptStruct(pUVar9,puVar10,puVar5,1);
  }
  return;
}

// operator() @ 147537a90

void __thiscall
`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::
Blend_Internal<FTransformAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FTransformAnimationAttribute> *param_1)

{
  FAttributeId *pFVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar2;
  ulong64 *puVar3;
  TTransform<double> *pTVar4;
  FAttributeBlendData *this_01;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  __m128 _Var8;
  undefined1 auVar9 [16];
  __m128 _Var10;
  __m128 _Var11;
  double dVar12;
  __m128 _Var13;
  double dVar14;
  __m128 _Var15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  ECustomAttributeBlendType EVar31;
  bool bVar32;
  int iVar33;
  UScriptStruct *pUVar34;
  __m128 *this_02;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  __m128 in_XMM2;
  __m128 _Var46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar52;
  __m128 _Var49;
  uint uVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  __m128 local_78 [6];
  
  pFVar1 = param_1->Collection->Identifier;
  EVar31 = UE::Anim::Attributes::GetAttributeBlendType(pFVar1);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
  pUVar34 = FTransformAnimationAttribute::StaticStruct();
  this_02 = (__m128 *)
            UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                      (this_00,pUVar34,pFVar1);
  if (EVar31 == Override) {
    if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Data.HasContainerWeights()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                            ,200,L""), bVar32)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar33 = param_1->Collection->HighestWeightedIndex;
    if ((((param_1->Collection->DataPtrs).ArrayNum <= iVar33) || (iVar33 < 0)) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Collection.HighestWeightedIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(Collection.HighestWeightedIndex)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                            ,0xc9,L""), bVar32)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = param_1->Collection;
    uVar52 = pFVar2->HighestWeightedIndex;
    uVar53 = 0;
    if ((int)uVar52 < (pFVar2->DataPtrs).ArrayNum) {
      uVar53 = ~uVar52 >> 0x1f;
    }
    if ((uVar53 == 0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar32)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar3 = (ulong64 *)(pFVar2->DataPtrs).AllocatorInstance.Data[(int)uVar52];
    dVar12 = (double)puVar3[1];
    this_02->m128_u64[0] = *puVar3;
    this_02->m128_u64[1] = (ulong64)dVar12;
    dVar12 = (double)puVar3[3];
    this_02[1].m128_u64[0] = puVar3[2];
    *(double *)((longlong)this_02 + 0x18) = dVar12;
    dVar12 = (double)puVar3[5];
    this_02[2].m128_u64[0] = puVar3[4];
    *(double *)((longlong)this_02 + 0x28) = dVar12;
    dVar12 = (double)puVar3[7];
    this_02[3].m128_u64[0] = puVar3[6];
    *(double *)((longlong)this_02 + 0x38) = dVar12;
    dVar12 = (double)puVar3[9];
    this_02[4].m128_u64[0] = puVar3[8];
    *(double *)((longlong)this_02 + 0x48) = dVar12;
    dVar12 = (double)puVar3[0xb];
    this_02[5].m128_u64[0] = puVar3[10];
    *(double *)((longlong)this_02 + 0x58) = dVar12;
  }
  else {
    iVar33 = param_1->CurrentIndex + 1;
    param_1->CurrentIndex = iVar33;
    fVar30 = __real_3f7fff58;
    if (iVar33 < (param_1->Collection->DataPtrs).ArrayNum) {
      if ((param_1->Collection->DataPtrs).ArrayNum <= iVar33) goto LAB_147537c2c;
      do {
        if (iVar33 < 0) {
LAB_147537c2c:
          bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0xb1,L"");
          if (bVar32) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar52 = param_1->CurrentIndex;
        pFVar2 = param_1->Collection;
        uVar53 = 0;
        if ((int)uVar52 < (pFVar2->DataPtrs).ArrayNum) {
          uVar53 = ~uVar52 >> 0x1f;
        }
        if ((uVar53 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar4 = (TTransform<double> *)(pFVar2->DataPtrs).AllocatorInstance.Data[(int)uVar52];
        if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HasContainerWeights()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0xb8,L""), bVar32)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar33 = param_1->CurrentIndex;
        if (((((param_1->Collection->DataPtrs).ArrayNum <= iVar33) || (iVar33 < 0)) ||
            ((param_1->Collection->WeightIndices).ArrayNum <= iVar33)) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < Collection.DataPtrs.Num() && Collection.WeightIndices.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0xb9,L""), bVar32)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar52 = param_1->CurrentIndex;
        pFVar2 = param_1->Collection;
        this_01 = param_1->Data;
        uVar53 = 0;
        if ((int)uVar52 < (pFVar2->WeightIndices).ArrayNum) {
          uVar53 = ~uVar52 >> 0x1f;
        }
        if ((uVar53 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar40 = UE::Anim::FAttributeBlendData::GetContainerWeight
                           (this_01,(pFVar2->WeightIndices).AllocatorInstance.Data[(int)uVar52]);
        _Var46.m128_f32[1] = fVar40;
        _Var46.m128_f32[0] = fVar40;
        _Var46.m128_f32[2] = fVar40;
        _Var46.m128_f32[3] = fVar40;
        if (param_1->CurrentIndex == 0) {
          dVar12 = (pTVar4->Rotation).XY.m128d_f64[1];
          this_02->m128_u64[0] = (ulong64)(pTVar4->Rotation).XY.m128d_f64[0];
          this_02->m128_u64[1] = (ulong64)dVar12;
          dVar12 = (pTVar4->Rotation).ZW.m128d_f64[1];
          this_02[1].m128_u64[0] = (ulong64)(pTVar4->Rotation).ZW.m128d_f64[0];
          *(double *)((longlong)this_02 + 0x18) = dVar12;
          dVar12 = (pTVar4->Translation).XY.m128d_f64[1];
          this_02[2].m128_u64[0] = (ulong64)(pTVar4->Translation).XY.m128d_f64[0];
          *(double *)((longlong)this_02 + 0x28) = dVar12;
          dVar12 = (pTVar4->Translation).ZW.m128d_f64[1];
          this_02[3].m128_u64[0] = (ulong64)(pTVar4->Translation).ZW.m128d_f64[0];
          *(double *)((longlong)this_02 + 0x38) = dVar12;
          dVar12 = (pTVar4->Scale3D).XY.m128d_f64[1];
          this_02[4].m128_u64[0] = (ulong64)(pTVar4->Scale3D).XY.m128d_f64[0];
          *(double *)((longlong)this_02 + 0x48) = dVar12;
          dVar12 = (pTVar4->Scale3D).ZW.m128d_f64[1];
          this_02[5].m128_u64[0] = (ulong64)(pTVar4->Scale3D).ZW.m128d_f64[0];
          *(double *)((longlong)this_02 + 0x58) = dVar12;
          dVar22 = (pTVar4->Rotation).XY.m128d_f64[1];
          dVar23 = (pTVar4->Rotation).ZW.m128d_f64[0];
          dVar24 = (pTVar4->Translation).ZW.m128d_f64[0];
          dVar14 = (pTVar4->Translation).ZW.m128d_f64[1];
          dVar25 = (pTVar4->Scale3D).XY.m128d_f64[0];
          dVar26 = (pTVar4->Scale3D).XY.m128d_f64[1];
          dVar27 = (pTVar4->Scale3D).ZW.m128d_f64[0];
          dVar17 = (pTVar4->Scale3D).ZW.m128d_f64[1];
          dVar20 = (double)fVar40;
          dVar21 = (double)fVar40;
          dVar18 = (double)fVar40;
          dVar19 = (double)fVar40;
          dVar28 = (pTVar4->Translation).XY.m128d_f64[0];
          dVar29 = (pTVar4->Translation).XY.m128d_f64[1];
          dVar12 = (pTVar4->Rotation).ZW.m128d_f64[1] * dVar19;
          *(double *)this_02 = (pTVar4->Rotation).XY.m128d_f64[0] * dVar20;
          *(double *)(this_02->m128_f32 + 2) = dVar22 * dVar21;
          _Var8.m128_i32[2] = SUB84(dVar12,0);
          _Var8.m128_u64[0] = (ulong64)(dVar23 * dVar18);
          _Var8.m128_i32[3] = (int)((ulonglong)dVar12 >> 0x20);
          this_02[1] = _Var8;
          in_XMM2._0_8_ = dVar28 * dVar20;
          in_XMM2._8_8_ = dVar29 * dVar21;
          dVar14 = dVar14 * dVar19;
          this_02[2] = in_XMM2;
          _Var13.m128_i32[2] = SUB84(dVar14,0);
          _Var13.m128_u64[0] = (ulong64)(dVar24 * dVar18);
          _Var13.m128_i32[3] = (int)((ulonglong)dVar14 >> 0x20);
          this_02[3] = _Var13;
          _Var49._0_8_ = dVar25 * dVar20;
          _Var49._8_8_ = dVar26 * dVar21;
          dVar17 = dVar17 * dVar19;
          this_02[4] = _Var49;
          _Var15.m128_i32[2] = SUB84(dVar17,0);
          _Var15.m128_u64[0] = (ulong64)(dVar27 * dVar18);
          _Var15.m128_i32[3] = (int)((ulonglong)dVar17 >> 0x20);
          this_02[5] = _Var15;
        }
        else {
          local_78[0] = _Var46;
          if (param_1->Data->AdditiveType == AAT_None) {
            dVar21 = (double)fVar40;
            dVar22 = (double)fVar40;
            dVar23 = (double)fVar40;
            dVar24 = (double)fVar40;
            dVar17 = (pTVar4->Rotation).XY.m128d_f64[0] * dVar21;
            dVar18 = (pTVar4->Rotation).XY.m128d_f64[1] * dVar22;
            dVar19 = (pTVar4->Rotation).ZW.m128d_f64[0] * dVar23;
            dVar20 = (pTVar4->Rotation).ZW.m128d_f64[1] * dVar24;
            dVar12 = *(double *)(this_02 + 1) * dVar19 + *(double *)this_02 * dVar17;
            dVar14 = *(double *)((longlong)this_02 + 0x18) * dVar20 +
                     *(double *)(this_02->m128_f32 + 2) * dVar18;
            auVar48._8_4_ = SUB84(dVar14,0);
            auVar48._0_8_ = dVar12;
            auVar48._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
            uVar35 = -(ulonglong)(0.0 <= auVar48._8_8_ + dVar12);
            uVar36 = -(ulonglong)(0.0 <= dVar12 + dVar14);
            uVar52 = (uint)(uVar35 >> 0x20);
            uVar53 = (uint)(uVar36 >> 0x20);
            auVar47._0_4_ = ~(uint)uVar35 & SUB84(0.0 - dVar17,0);
            auVar47._4_4_ = ~uVar52 & (uint)((ulonglong)(0.0 - dVar17) >> 0x20);
            auVar47._8_4_ = ~(uint)uVar36 & SUB84(0.0 - dVar18,0);
            auVar47._12_4_ = ~uVar53 & (uint)((ulonglong)(0.0 - dVar18) >> 0x20);
            auVar44._8_4_ = (int)((ulonglong)dVar18 & uVar36);
            auVar44._0_8_ = (ulonglong)dVar17 & uVar35;
            auVar44._12_4_ = (int)(((ulonglong)dVar18 & uVar36) >> 0x20);
            in_XMM2._0_8_ = SUB168(auVar47 | auVar44,0) + *(double *)this_02;
            in_XMM2._8_8_ = SUB168(auVar47 | auVar44,8) + *(double *)(this_02->m128_f32 + 2);
            auVar41._0_4_ = ~(uint)uVar35 & SUB84(0.0 - dVar19,0);
            auVar41._4_4_ = ~uVar52 & (uint)((ulonglong)(0.0 - dVar19) >> 0x20);
            auVar41._8_4_ = ~(uint)uVar36 & SUB84(0.0 - dVar20,0);
            auVar41._12_4_ = ~uVar53 & (uint)((ulonglong)(0.0 - dVar20) >> 0x20);
            auVar50._0_8_ = (ulonglong)dVar19 & uVar35;
            auVar50._8_4_ = (undefined4)(uVar36 & (ulonglong)dVar20);
            auVar50._12_4_ = (undefined4)((uVar36 & (ulonglong)dVar20) >> 0x20);
            *this_02 = in_XMM2;
            *(double *)(this_02 + 1) = SUB168(auVar41 | auVar50,0) + *(double *)(this_02 + 1);
            *(double *)((longlong)this_02 + 0x18) =
                 SUB168(auVar41 | auVar50,8) + *(double *)((longlong)this_02 + 0x18);
            dVar12 = (pTVar4->Translation).XY.m128d_f64[1];
            dVar14 = (pTVar4->Translation).ZW.m128d_f64[0];
            dVar17 = (pTVar4->Translation).ZW.m128d_f64[1];
            *(double *)(this_02 + 2) =
                 (pTVar4->Translation).XY.m128d_f64[0] * dVar21 + *(double *)(this_02 + 2);
            *(double *)((longlong)this_02 + 0x28) =
                 dVar12 * dVar22 + *(double *)((longlong)this_02 + 0x28);
            dVar12 = dVar17 * dVar24 + *(double *)((longlong)this_02 + 0x38);
            _Var10.m128_i32[2] = SUB84(dVar12,0);
            _Var10.m128_u64[0] = (ulong64)(dVar14 * dVar23 + *(double *)(this_02 + 3));
            _Var10.m128_i32[3] = (int)((ulonglong)dVar12 >> 0x20);
            this_02[3] = _Var10;
            dVar12 = (pTVar4->Scale3D).XY.m128d_f64[1];
            dVar14 = (pTVar4->Scale3D).ZW.m128d_f64[0];
            dVar17 = (pTVar4->Scale3D).ZW.m128d_f64[1];
            *(double *)(this_02 + 4) =
                 (pTVar4->Scale3D).XY.m128d_f64[0] * dVar21 + *(double *)(this_02 + 4);
            *(double *)((longlong)this_02 + 0x48) =
                 dVar12 * dVar22 + *(double *)((longlong)this_02 + 0x48);
            dVar12 = dVar17 * dVar24 + *(double *)((longlong)this_02 + 0x58);
            _Var11.m128_i32[2] = SUB84(dVar12,0);
            _Var11.m128_u64[0] = (ulong64)(dVar14 * dVar23 + *(double *)(this_02 + 5));
            _Var11.m128_i32[3] = (int)((ulonglong)dVar12 >> 0x20);
            this_02[5] = _Var11;
          }
          else if (fVar40 < fVar30) {
            UE::Math::TTransform<double>::BlendFromIdentityAndAccumulate
                      ((TTransform<double> *)this_02,pTVar4,(ScalarRegister *)local_78);
            in_XMM2 = _Var46;
          }
          else {
            UE::Math::TTransform<double>::AccumulateWithAdditiveScale
                      ((TTransform<double> *)this_02,pTVar4,(ScalarRegister *)local_78);
            in_XMM2 = _Var46;
          }
        }
        param_1->CurrentIndex = param_1->CurrentIndex + 1;
        iVar33 = param_1->CurrentIndex;
      } while (iVar33 < (param_1->Collection->DataPtrs).ArrayNum);
    }
    dVar17 = *(double *)this_02;
    dVar18 = *(double *)(this_02->m128_f32 + 2);
    dVar19 = *(double *)(this_02 + 1);
    dVar20 = *(double *)((longlong)this_02 + 0x18);
    dVar12 = dVar19 * dVar19 + dVar17 * dVar17;
    dVar14 = dVar20 * dVar20 + dVar18 * dVar18;
    auVar42._8_4_ = SUB84(dVar14,0);
    auVar42._0_8_ = dVar12;
    auVar42._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    auVar43._0_8_ = auVar42._8_8_ + dVar12;
    auVar43._8_8_ = dVar12 + dVar14;
    auVar48 = sqrtpd((undefined1  [16])in_XMM2,auVar43);
    uVar36 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar43._0_8_);
    uVar38 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar43._8_8_);
    uVar37 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar43._0_8_);
    uVar39 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar43._8_8_);
    auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar48);
    auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar48);
    auVar45._0_8_ = uVar37 & (ulonglong)(auVar44._0_8_ * dVar17);
    uVar35 = uVar39 & (ulonglong)(auVar44._8_8_ * dVar18);
    auVar45._8_4_ = (undefined4)uVar35;
    auVar45._12_4_ = (undefined4)(uVar35 >> 0x20);
    auVar51._0_8_ = uVar36 & (ulonglong)(auVar48._0_8_ * dVar19);
    uVar35 = uVar38 & (ulonglong)(auVar48._8_8_ * dVar20);
    auVar51._8_4_ = (undefined4)uVar35;
    auVar51._12_4_ = (undefined4)(uVar35 >> 0x20);
    auVar16._4_4_ =
         ~(uint)(uVar37 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar16._0_4_ = ~(uint)uVar37 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar16._8_4_ = ~(uint)uVar39 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar16._12_4_ =
         ~(uint)(uVar39 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    uVar52 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    uVar53 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    uVar7 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *this_02 = (__m128)(auVar45 | auVar16);
    auVar9._4_4_ = ~(uint)(uVar36 >> 0x20) & uVar53;
    auVar9._0_4_ = ~(uint)uVar36 & uVar52;
    auVar9._8_4_ = ~(uint)uVar38 & uVar6;
    auVar9._12_4_ = ~(uint)(uVar38 >> 0x20) & uVar7;
    this_02[1] = (__m128)(auVar51 | auVar9);
  }
  return;
}

// operator() @ 147537fe0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::
Blend_Internal<FVectorAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FVectorAnimationAttribute> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  FAttributeId *pFVar6;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar7;
  uchar *puVar8;
  double *pdVar9;
  FAttributeBlendData *this_01;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  ECustomAttributeBlendType EVar13;
  bool bVar14;
  int iVar15;
  UScriptStruct *pUVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  float fVar19;
  double dVar20;
  
  pFVar6 = param_1->Collection->Identifier;
  EVar13 = UE::Anim::Attributes::GetAttributeBlendType(pFVar6);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
  pUVar16 = FVectorAnimationAttribute::StaticStruct();
  pauVar17 = (undefined1 (*) [16])
             UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                       (this_00,pUVar16,pFVar6);
  if (EVar13 == Override) {
    if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Data.HasContainerWeights()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                            ,200,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar15 = param_1->Collection->HighestWeightedIndex;
    if ((((param_1->Collection->DataPtrs).ArrayNum <= iVar15) || (iVar15 < 0)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Collection.HighestWeightedIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(Collection.HighestWeightedIndex)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                            ,0xc9,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar7 = param_1->Collection;
    uVar5 = pFVar7->HighestWeightedIndex;
    uVar18 = 0;
    if ((int)uVar5 < (pFVar7->DataPtrs).ArrayNum) {
      uVar18 = ~uVar5 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    puVar8 = (pFVar7->DataPtrs).AllocatorInstance.Data[(int)uVar5];
    uVar12 = *(undefined8 *)(puVar8 + 8);
    *(undefined8 *)*pauVar17 = *(undefined8 *)puVar8;
    *(undefined8 *)(*pauVar17 + 8) = uVar12;
    *(undefined8 *)pauVar17[1] = *(undefined8 *)(puVar8 + 0x10);
  }
  else {
    iVar15 = param_1->CurrentIndex + 1;
    param_1->CurrentIndex = iVar15;
    if (iVar15 < (param_1->Collection->DataPtrs).ArrayNum) {
      if ((param_1->Collection->DataPtrs).ArrayNum <= iVar15) goto LAB_14753812d;
      do {
        if (iVar15 < 0) {
LAB_14753812d:
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0xb1,L"");
          if (bVar14) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        uVar5 = param_1->CurrentIndex;
        pFVar7 = param_1->Collection;
        uVar18 = 0;
        if ((int)uVar5 < (pFVar7->DataPtrs).ArrayNum) {
          uVar18 = ~uVar5 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pdVar9 = (double *)(pFVar7->DataPtrs).AllocatorInstance.Data[(int)uVar5];
        if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HasContainerWeights()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0xb8,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar15 = param_1->CurrentIndex;
        if (((((param_1->Collection->DataPtrs).ArrayNum <= iVar15) || (iVar15 < 0)) ||
            ((param_1->Collection->WeightIndices).ArrayNum <= iVar15)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < Collection.DataPtrs.Num() && Collection.WeightIndices.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0xb9,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar5 = param_1->CurrentIndex;
        pFVar7 = param_1->Collection;
        this_01 = param_1->Data;
        uVar18 = 0;
        if ((int)uVar5 < (pFVar7->WeightIndices).ArrayNum) {
          uVar18 = ~uVar5 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar19 = UE::Anim::FAttributeBlendData::GetContainerWeight
                           (this_01,(pFVar7->WeightIndices).AllocatorInstance.Data[(int)uVar5]);
        dVar20 = (double)fVar19;
        if (param_1->CurrentIndex == 0) {
          dVar1 = pdVar9[1];
          *(double *)*pauVar17 = *pdVar9;
          *(double *)(*pauVar17 + 8) = dVar1;
          *(double *)pauVar17[1] = pdVar9[2];
          dVar1 = pdVar9[2];
          auVar11._8_4_ = SUB84(pdVar9[1] * dVar20,0);
          auVar11._0_8_ = *pdVar9 * dVar20;
          auVar11._12_4_ = (int)((ulonglong)(pdVar9[1] * dVar20) >> 0x20);
          *pauVar17 = auVar11;
          *(double *)pauVar17[1] = dVar20 * dVar1;
        }
        else {
          dVar1 = pdVar9[2];
          dVar2 = *pdVar9;
          dVar3 = *(double *)pauVar17[1];
          dVar4 = *(double *)*pauVar17;
          *(double *)(*pauVar17 + 8) = dVar20 * pdVar9[1] + *(double *)(*pauVar17 + 8);
          *(double *)pauVar17[1] = dVar20 * dVar1 + dVar3;
          *(double *)*pauVar17 = dVar20 * dVar2 + dVar4;
        }
        param_1->CurrentIndex = param_1->CurrentIndex + 1;
        iVar15 = param_1->CurrentIndex;
      } while (iVar15 < (param_1->Collection->DataPtrs).ArrayNum);
    }
  }
  return;
}

// operator() @ 147538320

void __thiscall
`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::
ConvertToAdditive_Internal<FFloatAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FFloatAnimationAttribute> *param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar4;
  FAttributeId *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FUniqueAttribute *pFVar11;
  UScriptStruct *pUVar12;
  float *pfVar13;
  uint uVar14;
  int *piVar15;
  
  iVar2 = (param_1->AttributesView).ArrayNum;
  iVar9 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar9;
  if (iVar9 < iVar2) {
    do {
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pfVar3 = (float *)pFVar11->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar4 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar5 = pFVar11->Identifier;
      pUVar12 = FFloatAnimationAttribute::StaticStruct();
      uVar10 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar4,pUVar12);
      if (uVar10 != 0xffffffff) {
        uVar14 = 0;
        if ((int)uVar10 < (pTVar4->UniqueTypedBoneIndices).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (pTVar4->UniqueTypedBoneIndices).AllocatorInstance.Data;
        piVar15 = *(int **)(pFVar6 + (longlong)(int)uVar10 * 0x10);
        piVar1 = piVar15 + *(int *)(pFVar6 + (longlong)(int)uVar10 * 0x10 + 8);
        for (; piVar15 != piVar1; piVar15 = piVar15 + 1) {
          if (*piVar15 == pFVar5->Index) {
            uVar14 = 0;
            if ((int)uVar10 < (pTVar4->AttributeIdentifiers).ArrayNum) {
              uVar14 = ~uVar10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            break;
          }
        }
      }
      pTVar4 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar12 = FFloatAnimationAttribute::StaticStruct();
      pfVar13 = (float *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
                         ::FindOrAdd(pTVar4,pUVar12,pFVar5);
      *pfVar13 = *pfVar13 - *pfVar3;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar9 = param_1->CurrentIndex;
    } while (iVar9 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147538520

void __thiscall
`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::
ConvertToAdditive_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FIntegerAnimationAttribute> *param_1)

{
  int iVar1;
  int *piVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FUniqueAttribute *pFVar9;
  UScriptStruct *pUVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  
  iVar1 = (param_1->AttributesView).ArrayNum;
  iVar7 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar7;
  if (iVar7 < iVar1) {
    do {
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      piVar2 = (int *)pFVar9->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar9->Identifier;
      pUVar10 = FIntegerAnimationAttribute::StaticStruct();
      uVar8 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
              FindTypeIndex(pTVar3,pUVar10);
      if (uVar8 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar8 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar13 = ~uVar8 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar14 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data +
                  (longlong)(int)uVar8 * 0x10;
        piVar11 = *(int **)pFVar14;
        piVar12 = piVar11 + *(int *)(pFVar14 + 8);
        for (; piVar11 != piVar12; piVar11 = piVar11 + 1) {
          if (*piVar11 == pFVar4->Index) {
            uVar13 = 0;
            if ((int)uVar8 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar13 = ~uVar8 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            break;
          }
        }
      }
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar10 = FIntegerAnimationAttribute::StaticStruct();
      piVar12 = (int *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                       FindOrAdd(pTVar3,pUVar10,pFVar4);
      *piVar12 = *piVar12 - *piVar2;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar7 = param_1->CurrentIndex;
    } while (iVar7 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147538710

void __thiscall
`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::
ConvertToAdditive_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FQuaternionAnimationAttribute> *param_1)

{
  int *piVar1;
  double *pdVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  FUniqueAttribute *pFVar21;
  UScriptStruct *pUVar22;
  undefined1 (*pauVar23) [16];
  int *piVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  double dVar27;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar28;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  double dVar44;
  double dVar46;
  undefined1 auVar45 [16];
  double dVar47;
  double dVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar51;
  double dVar53;
  undefined1 auVar52 [16];
  double dVar40;
  
  iVar19 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar19;
  dVar17 = __real_3e45798ee0000000;
  if (iVar19 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar19 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x19b,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar21 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pdVar2 = (double *)pFVar21->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar21 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar21->Identifier;
      pUVar22 = FQuaternionAnimationAttribute::StaticStruct();
      uVar20 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar22);
      if (uVar20 != 0xffffffff) {
        uVar43 = 0;
        if ((int)uVar20 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar43 = ~uVar20 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        piVar24 = *(int **)(pFVar5 + (longlong)(int)uVar20 * 0x10);
        piVar1 = piVar24 + *(int *)(pFVar5 + (longlong)(int)uVar20 * 0x10 + 8);
        for (; piVar24 != piVar1; piVar24 = piVar24 + 1) {
          if (*piVar24 == pFVar4->Index) {
            uVar43 = 0;
            if ((int)uVar20 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar43 = ~uVar20 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            break;
          }
        }
      }
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar22 = FQuaternionAnimationAttribute::StaticStruct();
      pauVar23 = (undefined1 (*) [16])
                 UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                 FindOrAdd(pTVar3,pUVar22,pFVar4);
      dVar51 = pdVar2[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar53 = pdVar2[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar38 = *pauVar23;
      dVar47 = auVar38._0_8_;
      dVar15 = *(double *)pauVar23[1];
      dVar16 = *(double *)(pauVar23[1] + 8);
      dVar12 = *pdVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar13 = pdVar2[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar50 = auVar38._8_8_;
      auVar41._8_4_ = SUB84(dVar53,0);
      auVar41._0_8_ = dVar51;
      auVar41._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
      auVar29._8_4_ = auVar38._8_4_;
      auVar29._0_8_ = dVar50;
      auVar29._12_4_ = auVar38._12_4_;
      auVar36._8_4_ = SUB84(dVar13,0);
      auVar36._0_8_ = dVar12;
      auVar36._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar28 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar40 = auVar36._8_8_;
      auVar37._8_8_ = dVar12;
      auVar37._0_8_ = dVar40;
      dVar27 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar44 = dVar47 * dVar51 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar16 * dVar13 +
               auVar29._8_8_ * dVar53 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar15 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar11._8_4_ = SUB84(dVar44,0);
      auVar11._0_8_ =
           dVar47 * auVar41._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
           + dVar16 * dVar12 +
           dVar50 * dVar51 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar15 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auVar11._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      *pauVar23 = auVar11;
      dVar44 = dVar47 * dVar40 * dVar27 + dVar16 * dVar51 + dVar50 * dVar12 * dVar9 +
               dVar15 * auVar41._8_8_ * dVar10;
      dVar46 = dVar47 * dVar12 * dVar35 + dVar16 * dVar53 + dVar50 * dVar13 * dVar28 +
               dVar15 * dVar51 * dVar46;
      *(double *)pauVar23[1] = dVar44;
      *(double *)(pauVar23[1] + 8) = dVar46;
      dVar10 = *(double *)*pauVar23;
      dVar28 = *(double *)(*pauVar23 + 8);
      auVar30._8_4_ = SUB84(dVar46,0);
      auVar30._0_8_ = dVar44;
      auVar30._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      dVar27 = dVar44 * dVar44 + dVar10 * dVar10;
      dVar35 = auVar30._8_8_ * dVar46 + dVar28 * dVar28;
      dVar9 = dVar35 + dVar27;
      dVar27 = dVar27 + dVar35;
      auVar38._8_4_ = SUB84(dVar27,0);
      auVar38._0_8_ = dVar9;
      auVar38._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar38 = sqrtpd(auVar37,auVar38);
      uVar25 = -(ulonglong)(dVar17 <= dVar9);
      uVar26 = -(ulonglong)(dVar17 <= dVar27);
      auVar42._8_8_ = uVar26;
      auVar42._0_8_ = uVar25;
      auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar38);
      uVar20 = (uint)(uVar25 >> 0x20);
      uVar43 = (uint)(uVar26 >> 0x20);
      auVar49._0_8_ = uVar25 & (ulonglong)(auVar48._0_8_ * dVar10);
      uVar14 = uVar26 & (ulonglong)(auVar48._8_8_ * dVar28);
      auVar49._8_4_ = (undefined4)uVar14;
      auVar49._12_4_ = (undefined4)(uVar14 >> 0x20);
      auVar31._0_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar31._4_4_ =
           ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar31._8_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar31._12_4_ =
           ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar49 = auVar49 | auVar31;
      auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
      auVar52._0_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar52._4_4_ =
           ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar52._8_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar52._12_4_ =
           ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar32._0_8_ = (ulonglong)(auVar38._0_8_ * dVar44) & uVar25;
      uVar26 = (ulonglong)(auVar38._8_8_ * dVar46) & uVar26;
      auVar32._8_4_ = (undefined4)uVar26;
      auVar32._12_4_ = (undefined4)(uVar26 >> 0x20);
      auVar52 = auVar52 | auVar32;
      *pauVar23 = auVar49;
      pauVar23[1] = auVar52;
      dVar35 = auVar52._0_8_;
      fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
      dVar46 = auVar52._8_8_;
      dVar9 = auVar49._0_8_;
      dVar27 = auVar49._8_8_;
      dVar28 = dVar35 * dVar35 + dVar9 * dVar9;
      dVar44 = dVar46 * dVar46 + dVar27 * dVar27;
      dVar10 = dVar44 + dVar28;
      dVar28 = dVar28 + dVar44;
      auVar48._8_4_ = SUB84(dVar28,0);
      auVar48._0_8_ = dVar10;
      auVar48._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      auVar38 = sqrtpd(auVar42,auVar48);
      uVar26 = -(ulonglong)(dVar17 <= dVar10);
      uVar25 = -(ulonglong)(dVar17 <= dVar28);
      uVar20 = (uint)(uVar26 >> 0x20);
      uVar43 = (uint)(uVar25 >> 0x20);
      auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar38);
      auVar33._0_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar33._4_4_ =
           ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar33._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar33._12_4_ =
           ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar45._0_8_ = uVar26 & (ulonglong)(auVar48._0_8_ * dVar9);
      uVar14 = uVar25 & (ulonglong)(auVar48._8_8_ * dVar27);
      auVar45._8_4_ = (undefined4)uVar14;
      auVar45._12_4_ = (undefined4)(uVar14 >> 0x20);
      auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
      *pauVar23 = auVar45 | auVar33;
      auVar34._0_8_ = (ulonglong)(auVar38._0_8_ * dVar35) & uVar26;
      uVar14 = (ulonglong)(auVar38._8_8_ * dVar46) & uVar25;
      auVar34._8_4_ = (undefined4)uVar14;
      auVar34._12_4_ = (undefined4)(uVar14 >> 0x20);
      auVar39._0_4_ = ~(uint)uVar26 & SUB84((double)fVar7,0);
      auVar39._4_4_ = ~uVar20 & (uint)((ulonglong)(double)fVar7 >> 0x20);
      auVar39._8_4_ = ~(uint)uVar25 & SUB84((double)fVar8,0);
      auVar39._12_4_ = ~uVar43 & (uint)((ulonglong)(double)fVar8 >> 0x20);
      pauVar23[1] = auVar39 | auVar34;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar19 = param_1->CurrentIndex;
    } while (iVar19 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147538b60

void __thiscall
`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::
ConvertToAdditive_Internal<FStringAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FStringAnimationAttribute> *param_1)

{
  int *piVar1;
  uchar *puVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FUniqueAttribute *pFVar10;
  UScriptStruct *pUVar11;
  uchar *puVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  
  iVar8 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar8;
  if (iVar8 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      puVar2 = pFVar10->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar10->Identifier;
      pUVar11 = FStringAnimationAttribute::StaticStruct();
      uVar9 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
              FindTypeIndex(pTVar3,pUVar11);
      if (uVar9 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar9 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar13 = ~uVar9 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar15 = (longlong)(int)uVar9 * 0x10;
        piVar14 = *(int **)(pFVar5 + lVar15);
        piVar1 = piVar14 + *(int *)(pFVar5 + lVar15 + 8);
        for (; piVar14 != piVar1; piVar14 = piVar14 + 1) {
          if (*piVar14 == pFVar4->Index) {
            uVar13 = 0;
            if ((int)uVar9 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar13 = ~uVar9 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                    IndexOfByKey<UE::Anim::FAttributeId>
                              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                               ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar15),
                               pFVar4);
            goto LAB_147538cb7;
          }
        }
      }
      iVar8 = -1;
LAB_147538cb7:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar11 = FStringAnimationAttribute::StaticStruct();
      puVar12 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar3,pUVar11,pFVar4);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = param_1->Data;
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar10->WeightIndex);
      if (iVar8 == -1) {
        pUVar11 = FStringAnimationAttribute::StaticStruct();
        UScriptStruct::CopyScriptStruct(pUVar11,puVar12,puVar2,1);
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar8 = param_1->CurrentIndex;
    } while (iVar8 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147538e10

void __thiscall
`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::
ConvertToAdditive_Internal<FTransformAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FTransformAnimationAttribute> *param_1)

{
  int *piVar1;
  TTransform<double> *pTVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FUniqueAttribute *pFVar16;
  UScriptStruct *pUVar17;
  int *piVar18;
  TTransform<double> *pTVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  iVar14 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar14;
  if (iVar14 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar14 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x19b,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar2 = (TTransform<double> *)pFVar16->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar16->Identifier;
      pUVar17 = FTransformAnimationAttribute::StaticStruct();
      uVar15 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar17);
      if (uVar15 != 0xffffffff) {
        uVar20 = 0;
        if ((int)uVar15 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar21 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data +
                  (longlong)(int)uVar15 * 0x10;
        piVar18 = *(int **)pFVar21;
        piVar1 = piVar18 + *(int *)(pFVar21 + 8);
        for (; piVar18 != piVar1; piVar18 = piVar18 + 1) {
          if (*piVar18 == pFVar4->Index) {
            uVar20 = 0;
            if ((int)uVar15 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar20 = ~uVar15 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            break;
          }
        }
      }
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar17 = FTransformAnimationAttribute::StaticStruct();
      pTVar19 = (TTransform<double> *)
                UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar3,pUVar17,pFVar4);
      FAnimationRuntime::ConvertTransformToAdditive(pTVar19,pTVar2);
      dVar9 = (pTVar19->Rotation).ZW.m128d_f64[0];
      dVar10 = (pTVar19->Rotation).ZW.m128d_f64[1];
      dVar11 = (pTVar19->Rotation).XY.m128d_f64[0];
      dVar12 = (pTVar19->Rotation).XY.m128d_f64[1];
      auVar30._0_8_ = dVar9 * dVar9 + dVar11 * dVar11;
      auVar30._8_8_ = dVar10 * dVar10 + dVar12 * dVar12;
      auVar26._8_4_ = SUB84(auVar30._8_8_,0);
      auVar26._0_8_ = auVar30._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
      auVar27._0_8_ = auVar26._8_8_ + auVar30._0_8_;
      auVar27._8_8_ = auVar30._0_8_ + auVar30._8_8_;
      auVar31 = sqrtpd(auVar30,auVar27);
      uVar22 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar27._0_8_)
      ;
      uVar24 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar27._8_8_)
      ;
      uVar23 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar27._0_8_)
      ;
      uVar25 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar27._8_8_)
      ;
      auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar31);
      auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar31);
      auVar29._0_8_ = uVar23 & (ulonglong)(auVar28._0_8_ * dVar11);
      uVar8 = uVar25 & (ulonglong)(auVar28._8_8_ * dVar12);
      auVar29._8_4_ = (undefined4)uVar8;
      auVar29._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar32._0_8_ = uVar22 & (ulonglong)(auVar31._0_8_ * dVar9);
      uVar8 = uVar24 & (ulonglong)(auVar31._8_8_ * dVar10);
      auVar32._8_4_ = (undefined4)uVar8;
      auVar32._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar31._4_4_ =
           ~(uint)(uVar23 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar31._0_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar31._8_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar31._12_4_ =
           ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      uVar15 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar20 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar7 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64 = auVar29 | auVar31;
      auVar28._4_4_ = ~(uint)(uVar22 >> 0x20) & uVar20;
      auVar28._0_4_ = ~(uint)uVar22 & uVar15;
      auVar28._8_4_ = ~(uint)uVar24 & uVar6;
      auVar28._12_4_ = ~(uint)(uVar24 >> 0x20) & uVar7;
      *(undefined1 (*) [16])(pTVar19->Rotation).ZW.m128d_f64 = auVar32 | auVar28;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar14 = param_1->CurrentIndex;
    } while (iVar14 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147539090

void __thiscall
`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::
ConvertToAdditive_Internal<FVectorAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FVectorAnimationAttribute> *param_1)

{
  int *piVar1;
  double *pdVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FUniqueAttribute *pFVar13;
  UScriptStruct *pUVar14;
  double *pdVar15;
  uint uVar16;
  int *piVar17;
  
  iVar11 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar11;
  if (iVar11 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x19b,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pdVar2 = (double *)pFVar13->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar13->Identifier;
      pUVar14 = FVectorAnimationAttribute::StaticStruct();
      uVar12 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar14);
      if (uVar12 != 0xffffffff) {
        uVar16 = 0;
        if ((int)uVar12 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        piVar17 = *(int **)(pFVar5 + (longlong)(int)uVar12 * 0x10);
        piVar1 = piVar17 + *(int *)(pFVar5 + (longlong)(int)uVar12 * 0x10 + 8);
        for (; piVar17 != piVar1; piVar17 = piVar17 + 1) {
          if (*piVar17 == pFVar4->Index) {
            uVar16 = 0;
            if ((int)uVar12 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar16 = ~uVar12 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            break;
          }
        }
      }
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar14 = FVectorAnimationAttribute::StaticStruct();
      pdVar15 = (double *)
                UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar3,pUVar14,pFVar4);
      dVar8 = pdVar2[1];
      dVar9 = pdVar2[2];
      *pdVar15 = *pdVar15 - *pdVar2;
      auVar7._8_4_ = SUB84(pdVar15[2] - dVar9,0);
      auVar7._0_8_ = pdVar15[1] - dVar8;
      auVar7._12_4_ = (int)((ulonglong)(pdVar15[2] - dVar9) >> 0x20);
      *(undefined1 (*) [16])(pdVar15 + 1) = auVar7;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar11 = param_1->CurrentIndex;
    } while (iVar11 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 1475392a0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::
Override_Internal<FFloatAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FFloatAnimationAttribute> *param_1)

{
  float *pfVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar2;
  FAttributeBlendData *this_01;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUniqueAttribute *pFVar6;
  UScriptStruct *pUVar7;
  float *pfVar8;
  float fVar9;
  
  iVar5 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar5;
  if (iVar5 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      pfVar1 = (float *)pFVar6->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar2 = pFVar6->Identifier;
      pUVar7 = FFloatAnimationAttribute::StaticStruct();
      pfVar8 = (float *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
                        ::FindOrAdd(this_00,pUVar7,pFVar2);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = param_1->Data;
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      fVar9 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_01,pFVar6->WeightIndex);
      *pfVar8 = fVar9 * *pfVar1;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar5 = param_1->CurrentIndex;
    } while (iVar5 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147539420

void __thiscall
`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::
Override_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FIntegerAnimationAttribute> *param_1)

{
  int *piVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar2;
  FAttributeBlendData *this_01;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUniqueAttribute *pFVar6;
  UScriptStruct *pUVar7;
  int *piVar8;
  float fVar9;
  
  iVar5 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar5;
  if (iVar5 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      piVar1 = (int *)pFVar6->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar2 = pFVar6->Identifier;
      pUVar7 = FIntegerAnimationAttribute::StaticStruct();
      piVar8 = (int *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                      FindOrAdd(this_00,pUVar7,pFVar2);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = param_1->Data;
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      fVar9 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_01,pFVar6->WeightIndex);
      *piVar8 = (int)((float)*piVar1 * fVar9);
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar5 = param_1->CurrentIndex;
    } while (iVar5 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 1475395b0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::
Override_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FQuaternionAnimationAttribute> *param_1)

{
  double *pdVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar2;
  FAttributeBlendData *this_01;
  code *pcVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  FUniqueAttribute *pFVar12;
  UScriptStruct *pUVar13;
  undefined1 (*pauVar14) [16];
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar23;
  double dVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  
  iVar11 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar11;
  dVar9 = __real_3e45798ee0000000;
  if (iVar11 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x19b,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pdVar1 = (double *)pFVar12->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar2 = pFVar12->Identifier;
      pUVar13 = FQuaternionAnimationAttribute::StaticStruct();
      pauVar14 = (undefined1 (*) [16])
                 UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                 FindOrAdd(this_00,pUVar13,pFVar2);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasContainerWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a2,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a3,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = param_1->Data;
      pFVar12 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar17 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_01,pFVar12->WeightIndex);
      dVar18 = (double)fVar17;
      dVar19 = dVar18 * pdVar1[2];
      dVar23 = dVar18 * pdVar1[3];
      auVar26._8_4_ = SUB84(dVar18 * pdVar1[1],0);
      auVar26._0_8_ = dVar18 * *pdVar1;
      auVar26._12_4_ = (int)((ulonglong)(dVar18 * pdVar1[1]) >> 0x20);
      *pauVar14 = auVar26;
      *(double *)pauVar14[1] = dVar19;
      *(double *)(pauVar14[1] + 8) = dVar23;
      dVar7 = *(double *)*pauVar14;
      dVar8 = *(double *)(*pauVar14 + 8);
      dVar20 = dVar19 * dVar19 + dVar7 * dVar7;
      dVar24 = dVar23 * dVar23 + dVar8 * dVar8;
      dVar18 = dVar24 + dVar20;
      dVar20 = dVar20 + dVar24;
      auVar5._8_4_ = SUB84(dVar20,0);
      auVar5._0_8_ = dVar18;
      auVar5._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      in_XMM4 = sqrtpd(in_XMM4,auVar5);
      uVar15 = -(ulonglong)(dVar9 <= dVar18);
      uVar16 = -(ulonglong)(dVar9 <= dVar20);
      uVar28 = (uint)(uVar15 >> 0x20);
      uVar29 = (uint)(uVar16 >> 0x20);
      auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
      fVar17 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar27._0_8_ = uVar15 & (ulonglong)(auVar26._0_8_ * dVar7);
      uVar6 = uVar16 & (ulonglong)(auVar26._8_8_ * dVar8);
      auVar27._8_4_ = (undefined4)uVar6;
      auVar27._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar21._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar21._4_4_ =
           ~uVar28 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar21._8_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar21._12_4_ =
           ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
      *pauVar14 = auVar27 | auVar21;
      auVar22._0_8_ = (ulonglong)(auVar26._0_8_ * dVar19) & uVar15;
      uVar6 = (ulonglong)(auVar26._8_8_ * dVar23) & uVar16;
      auVar22._8_4_ = (undefined4)uVar6;
      auVar22._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar25._0_4_ = ~(uint)uVar15 & SUB84((double)fVar17,0);
      auVar25._4_4_ = ~uVar28 & (uint)((ulonglong)(double)fVar17 >> 0x20);
      auVar25._8_4_ = ~(uint)uVar16 & SUB84((double)fVar4,0);
      auVar25._12_4_ = ~uVar29 & (uint)((ulonglong)(double)fVar4 >> 0x20);
      pauVar14[1] = auVar25 | auVar22;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar11 = param_1->CurrentIndex;
    } while (iVar11 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147539810

void __thiscall
`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::
Override_Internal<FStringAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FStringAnimationAttribute> *param_1)

{
  uchar *puVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUniqueAttribute *pFVar6;
  UScriptStruct *pUVar7;
  uchar *puVar8;
  
  iVar5 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar5;
  if (iVar5 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      puVar1 = pFVar6->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar2 = pFVar6->Identifier;
      pUVar7 = FStringAnimationAttribute::StaticStruct();
      puVar8 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindOrAdd(this_00,pUVar7,pFVar2);
      pUVar7 = FStringAnimationAttribute::StaticStruct();
      UScriptStruct::CopyScriptStruct(pUVar7,puVar8,puVar1,1);
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar5 = param_1->CurrentIndex;
    } while (iVar5 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147539930

void __thiscall
`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::
Override_Internal<FTransformAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FTransformAnimationAttribute> *param_1)

{
  double *pdVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar2;
  FAttributeBlendData *this_01;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  bool bVar26;
  int iVar27;
  FUniqueAttribute *pFVar28;
  UScriptStruct *pUVar29;
  undefined1 (*pauVar30) [16];
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  
  iVar27 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar27;
  if (iVar27 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar27 < 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x19b,L""), bVar26)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar28 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pdVar1 = (double *)pFVar28->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar26)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar28 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar2 = pFVar28->Identifier;
      pUVar29 = FTransformAnimationAttribute::StaticStruct();
      pauVar30 = (undefined1 (*) [16])
                 UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                 FindOrAdd(this_00,pUVar29,pFVar2);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasContainerWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a2,L""), bVar26)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a3,L""), bVar26)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = param_1->Data;
      pFVar28 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar35 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_01,pFVar28->WeightIndex);
      dVar15 = pdVar1[2];
      dVar16 = pdVar1[3];
      dVar17 = pdVar1[8];
      dVar18 = pdVar1[9];
      dVar19 = pdVar1[10];
      dVar20 = pdVar1[0xb];
      dVar21 = pdVar1[4];
      dVar22 = pdVar1[5];
      dVar23 = pdVar1[6];
      dVar24 = pdVar1[7];
      dVar12 = (double)fVar35;
      dVar13 = (double)fVar35;
      uVar48 = (undefined4)((ulonglong)dVar13 >> 0x20);
      dVar9 = (double)fVar35;
      dVar10 = (double)fVar35;
      uVar47 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar36._8_4_ = SUB84(dVar13,0);
      auVar36._0_8_ = dVar12;
      auVar36._12_4_ = uVar48;
      dVar25 = pdVar1[1];
      auVar42._8_4_ = SUB84(dVar10,0);
      auVar42._0_8_ = dVar9;
      auVar42._12_4_ = uVar47;
      *(double *)*pauVar30 = dVar12 * *pdVar1;
      *(double *)(*pauVar30 + 8) = auVar36._8_8_ * dVar25;
      auVar37._8_4_ = SUB84(dVar13,0);
      auVar37._0_8_ = dVar12;
      auVar37._12_4_ = uVar48;
      *(double *)pauVar30[1] = dVar9 * dVar15;
      *(double *)(pauVar30[1] + 8) = auVar42._8_8_ * dVar16;
      auVar43._8_4_ = SUB84(dVar10,0);
      auVar43._0_8_ = dVar9;
      auVar43._12_4_ = uVar47;
      *(double *)pauVar30[2] = dVar12 * dVar21;
      *(double *)(pauVar30[2] + 8) = auVar37._8_8_ * dVar22;
      *(double *)pauVar30[3] = dVar9 * dVar23;
      *(double *)(pauVar30[3] + 8) = auVar43._8_8_ * dVar24;
      auVar11._8_4_ = SUB84(dVar13 * dVar18,0);
      auVar11._0_8_ = dVar12 * dVar17;
      auVar11._12_4_ = (int)((ulonglong)(dVar13 * dVar18) >> 0x20);
      pauVar30[4] = auVar11;
      auVar8._8_4_ = SUB84(dVar10 * dVar20,0);
      auVar8._0_8_ = dVar9 * dVar19;
      auVar8._12_4_ = (int)((ulonglong)(dVar10 * dVar20) >> 0x20);
      pauVar30[5] = auVar8;
      dVar9 = *(double *)*pauVar30;
      dVar10 = *(double *)(*pauVar30 + 8);
      dVar12 = *(double *)pauVar30[1];
      dVar13 = *(double *)(pauVar30[1] + 8);
      auVar44._0_8_ = dVar12 * dVar12 + dVar9 * dVar9;
      auVar44._8_8_ = dVar13 * dVar13 + dVar10 * dVar10;
      auVar38._8_4_ = SUB84(auVar44._8_8_,0);
      auVar38._0_8_ = auVar44._0_8_;
      auVar38._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
      auVar39._0_8_ = auVar38._8_8_ + auVar44._0_8_;
      auVar39._8_8_ = auVar44._0_8_ + auVar44._8_8_;
      auVar45 = sqrtpd(auVar44,auVar39);
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar39._0_8_)
      ;
      uVar33 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar39._8_8_)
      ;
      uVar32 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar39._0_8_)
      ;
      uVar34 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar39._8_8_)
      ;
      auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45);
      auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45);
      auVar41._0_8_ = uVar32 & (ulonglong)(auVar40._0_8_ * dVar9);
      uVar14 = uVar34 & (ulonglong)(auVar40._8_8_ * dVar10);
      auVar41._8_4_ = (undefined4)uVar14;
      auVar41._12_4_ = (undefined4)(uVar14 >> 0x20);
      auVar46._0_8_ = uVar31 & (ulonglong)(auVar45._0_8_ * dVar12);
      uVar14 = uVar33 & (ulonglong)(auVar45._8_8_ * dVar13);
      auVar46._8_4_ = (undefined4)uVar14;
      auVar46._12_4_ = (undefined4)(uVar14 >> 0x20);
      auVar45._4_4_ =
           ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar45._0_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar45._8_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar45._12_4_ =
           ~(uint)(uVar34 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar7 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *pauVar30 = auVar41 | auVar45;
      auVar40._4_4_ = ~(uint)(uVar31 >> 0x20) & uVar5;
      auVar40._0_4_ = ~(uint)uVar31 & uVar4;
      auVar40._8_4_ = ~(uint)uVar33 & uVar6;
      auVar40._12_4_ = ~(uint)(uVar33 >> 0x20) & uVar7;
      pauVar30[1] = auVar46 | auVar40;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar27 = param_1->CurrentIndex;
    } while (iVar27 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 147539bb0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::
Override_Internal<FVectorAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FVectorAnimationAttribute> *param_1)

{
  double *pdVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar2;
  FAttributeBlendData *this_01;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  FUniqueAttribute *pFVar10;
  UScriptStruct *pUVar11;
  double *pdVar12;
  float fVar13;
  
  iVar9 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar9;
  if (iVar9 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pdVar1 = (double *)pFVar10->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar2 = pFVar10->Identifier;
      pUVar11 = FVectorAnimationAttribute::StaticStruct();
      pdVar12 = (double *)
                UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(this_00,pUVar11,pFVar2);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = param_1->Data;
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar13 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_01,pFVar10->WeightIndex);
      dVar6 = pdVar1[1];
      dVar7 = pdVar1[2];
      dVar5 = (double)fVar13;
      *pdVar12 = dVar5 * *pdVar1;
      auVar4._8_4_ = SUB84(dVar5 * dVar7,0);
      auVar4._0_8_ = dVar5 * dVar6;
      auVar4._12_4_ = (int)((ulonglong)(dVar5 * dVar7) >> 0x20);
      *(undefined1 (*) [16])(pdVar12 + 1) = auVar4;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar9 = param_1->CurrentIndex;
    } while (iVar9 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753d580

void __thiscall
`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::
BlendPerBone_Internal<FFloatAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FFloatAnimationAttribute> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar4;
  FAttributeId *pFVar5;
  FScriptContainerElement *pFVar6;
  FAttributeBlendData *this_00;
  float *pfVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  ECustomAttributeBlendType EVar11;
  int iVar12;
  uint uVar13;
  FUniqueAttribute *pFVar14;
  UScriptStruct *pUVar15;
  float *pfVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  
  iVar12 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar12;
  fVar9 = __real_3f800000;
  if (iVar12 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar14 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar4 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar5 = pFVar14->Identifier;
      pUVar15 = FFloatAnimationAttribute::StaticStruct();
      uVar13 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar4,pUVar15);
      if (uVar13 != 0xffffffff) {
        uVar17 = 0;
        if ((int)uVar13 < (pTVar4->UniqueTypedBoneIndices).ArrayNum) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (pTVar4->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar19 = (longlong)(int)uVar13 * 0x10;
        piVar18 = *(int **)(pFVar6 + lVar19);
        piVar1 = piVar18 + *(int *)(pFVar6 + lVar19 + 8);
        for (; piVar18 != piVar1; piVar18 = piVar18 + 1) {
          if (*piVar18 == pFVar5->Index) {
            uVar17 = 0;
            if ((int)uVar13 < (pTVar4->AttributeIdentifiers).ArrayNum) {
              uVar17 = ~uVar13 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar12 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                     IndexOfByKey<UE::Anim::FAttributeId>
                               ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                                ((pTVar4->AttributeIdentifiers).AllocatorInstance.Data + lVar19),
                                pFVar5);
            goto LAB_14753d6a7;
          }
        }
      }
      iVar12 = -1;
LAB_14753d6a7:
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasBoneWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ab,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ac,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = param_1->Data;
      pFVar14 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      iVar2 = pFVar14->Identifier->Index;
      pFVar14 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar20 = UE::Anim::FAttributeBlendData::GetBoneWeight(this_00,pFVar14->WeightIndex,iVar2);
      pTVar4 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar15 = FFloatAnimationAttribute::StaticStruct();
      pfVar16 = (float *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
                         ::FindOrAdd(pTVar4,pUVar15,pFVar5);
      EVar11 = UE::Anim::Attributes::GetAttributeBlendType(pFVar5);
      iVar2 = (param_1->AttributesView).ArrayNum;
      iVar3 = param_1->CurrentIndex;
      if (EVar11 == Override) {
        if (((iVar2 <= iVar3) || (iVar3 < 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar14 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        *pfVar16 = *(float *)pFVar14->DataPtr;
      }
      else {
        if (((iVar2 <= iVar3) || (iVar3 < 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar14 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        pfVar7 = (float *)pFVar14->DataPtr;
        if (iVar12 == -1) {
          fVar21 = (fVar9 - fVar20) * *pfVar16;
          *pfVar16 = fVar21;
          fVar21 = fVar20 * *pfVar7 + fVar21;
        }
        else {
          fVar21 = fVar20 * *pfVar7 + *pfVar16;
        }
        *pfVar16 = fVar21;
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar12 = param_1->CurrentIndex;
    } while (iVar12 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753d8d0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::
BlendPerBone_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FIntegerAnimationAttribute> *param_1)

{
  int iVar1;
  int iVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this_00;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  ECustomAttributeBlendType EVar9;
  int iVar10;
  uint uVar11;
  FUniqueAttribute *pFVar12;
  UScriptStruct *pUVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  longlong lVar17;
  float fVar18;
  
  iVar10 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar10;
  fVar7 = __real_3f800000;
  if (iVar10 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar12->Identifier;
      pUVar13 = FIntegerAnimationAttribute::StaticStruct();
      uVar11 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar13);
      if (uVar11 != 0xffffffff) {
        uVar15 = 0;
        if ((int)uVar11 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar15 = ~uVar11 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar17 = (longlong)(int)uVar11 * 0x10;
        piVar16 = *(int **)(pFVar5 + lVar17);
        piVar14 = piVar16 + *(int *)(pFVar5 + lVar17 + 8);
        for (; piVar16 != piVar14; piVar16 = piVar16 + 1) {
          if (*piVar16 == pFVar4->Index) {
            uVar15 = 0;
            if ((int)uVar11 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar15 = ~uVar11 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar10 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                     IndexOfByKey<UE::Anim::FAttributeId>
                               ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                                ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar17),
                                pFVar4);
            goto LAB_14753d9f7;
          }
        }
      }
      iVar10 = -1;
LAB_14753d9f7:
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasBoneWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1ab,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1ac,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = param_1->Data;
      pFVar12 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      iVar1 = pFVar12->Identifier->Index;
      pFVar12 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar18 = UE::Anim::FAttributeBlendData::GetBoneWeight(this_00,pFVar12->WeightIndex,iVar1);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar13 = FIntegerAnimationAttribute::StaticStruct();
      piVar14 = (int *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                       FindOrAdd(pTVar3,pUVar13,pFVar4);
      EVar9 = UE::Anim::Attributes::GetAttributeBlendType(pFVar4);
      iVar1 = (param_1->AttributesView).ArrayNum;
      iVar2 = param_1->CurrentIndex;
      if (EVar9 == Override) {
        if (((iVar1 <= iVar2) || (iVar2 < 0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0x19b,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar12 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        *piVar14 = *(int *)pFVar12->DataPtr;
      }
      else {
        if (((iVar1 <= iVar2) || (iVar2 < 0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                               ,0x19b,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar12 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        piVar16 = (int *)pFVar12->DataPtr;
        if (iVar10 == -1) {
          iVar10 = (int)((fVar7 - fVar18) * (float)*piVar14);
          *piVar14 = iVar10;
          *piVar14 = (int)((float)*piVar16 * fVar18) + iVar10;
        }
        else {
          *piVar14 = *piVar14 + (int)((float)*piVar16 * fVar18);
        }
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar10 = param_1->CurrentIndex;
    } while (iVar10 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753dc40

void __thiscall
`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::
BlendPerBone_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FQuaternionAnimationAttribute> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar4;
  FAttributeId *pFVar5;
  FScriptContainerElement *pFVar6;
  FAttributeBlendData *this_00;
  uchar *puVar7;
  double *pdVar8;
  code *pcVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  bool bVar26;
  ECustomAttributeBlendType EVar27;
  int iVar28;
  uint uVar29;
  FUniqueAttribute *pFVar30;
  UScriptStruct *pUVar31;
  undefined1 (*pauVar32) [16];
  int *piVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  undefined1 in_XMM1 [16];
  undefined1 auVar42 [16];
  double dVar50;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar41;
  double dVar51;
  undefined1 auVar49 [16];
  double dVar52;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar53;
  double dVar54;
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  undefined1 in_XMM4 [16];
  undefined1 auVar60 [16];
  uint uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  
  iVar28 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar28;
  dVar25 = __real_bff0000000000000;
  fVar24 = __real_3f800000;
  dVar23 = __real_3e45798ee0000000;
  dVar22 = __real_3ff0000000000000;
  if (iVar28 < (param_1->AttributesView).ArrayNum) {
    uVar71 = SUB84(__real_3ff0000000000000,0);
    uVar72 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar73 = SUB84(__real_bff0000000000000,0);
    uVar74 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    do {
      if ((iVar28 < 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar26)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar30 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar4 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar5 = pFVar30->Identifier;
      pUVar31 = FQuaternionAnimationAttribute::StaticStruct();
      uVar29 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar4,pUVar31);
      if (uVar29 != 0xffffffff) {
        uVar61 = 0;
        if ((int)uVar29 < (pTVar4->UniqueTypedBoneIndices).ArrayNum) {
          uVar61 = ~uVar29 >> 0x1f;
        }
        if ((uVar61 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = (pTVar4->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar34 = (longlong)(int)uVar29 * 0x10;
        piVar33 = *(int **)(pFVar6 + lVar34);
        piVar1 = piVar33 + *(int *)(pFVar6 + lVar34 + 8);
        for (; piVar33 != piVar1; piVar33 = piVar33 + 1) {
          if (*piVar33 == pFVar5->Index) {
            uVar61 = 0;
            if ((int)uVar29 < (pTVar4->AttributeIdentifiers).ArrayNum) {
              uVar61 = ~uVar29 >> 0x1f;
            }
            if ((uVar61 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar28 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                     IndexOfByKey<UE::Anim::FAttributeId>
                               ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                                ((pTVar4->AttributeIdentifiers).AllocatorInstance.Data + lVar34),
                                pFVar5);
            goto LAB_14753ddbb;
          }
        }
      }
      iVar28 = -1;
LAB_14753ddbb:
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasBoneWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ab,L""), bVar26)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ac,L""), bVar26)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_00 = param_1->Data;
      pFVar30 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      iVar2 = pFVar30->Identifier->Index;
      pFVar30 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar37 = UE::Anim::FAttributeBlendData::GetBoneWeight(this_00,pFVar30->WeightIndex,iVar2);
      pTVar4 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar31 = FQuaternionAnimationAttribute::StaticStruct();
      pauVar32 = (undefined1 (*) [16])
                 UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                 FindOrAdd(pTVar4,pUVar31,pFVar5);
      EVar27 = UE::Anim::Attributes::GetAttributeBlendType(pFVar5);
      iVar2 = (param_1->AttributesView).ArrayNum;
      iVar3 = param_1->CurrentIndex;
      if (EVar27 == Override) {
        if (((iVar2 <= iVar3) || (iVar3 < 0)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar26)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar30 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        puVar7 = pFVar30->DataPtr;
        uVar21 = *(undefined8 *)(puVar7 + 8);
        *(undefined8 *)*pauVar32 = *(undefined8 *)puVar7;
        *(undefined8 *)(*pauVar32 + 8) = uVar21;
        uVar21 = *(undefined8 *)(puVar7 + 0x18);
        *(undefined8 *)pauVar32[1] = *(undefined8 *)(puVar7 + 0x10);
        *(undefined8 *)(pauVar32[1] + 8) = uVar21;
      }
      else {
        if (((iVar2 <= iVar3) || (iVar3 < 0)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar26)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar30 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        pdVar8 = (double *)pFVar30->DataPtr;
        if (iVar28 == -1) {
          dVar40 = dVar25;
          if (0.0 <= *(double *)(pauVar32[1] + 8) * pdVar8[3] + pdVar8[2] * *(double *)pauVar32[1] +
                     *(double *)(*pauVar32 + 8) * pdVar8[1] + *pdVar8 * *(double *)*pauVar32) {
            dVar40 = dVar22;
          }
          dVar41 = (double)fVar37;
          dVar40 = (double)(fVar24 - fVar37) * dVar40;
          auVar55._8_4_ = SUB84(dVar40,0);
          auVar55._0_8_ = dVar40;
          auVar55._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          dVar52 = dVar40 * *(double *)*pauVar32 + dVar41 * *pdVar8;
          dVar51 = auVar55._8_8_ * *(double *)(*pauVar32 + 8) + dVar41 * pdVar8[1];
          dVar53 = dVar40 * *(double *)pauVar32[1] + dVar41 * pdVar8[2];
          dVar58 = dVar40 * *(double *)(pauVar32[1] + 8) + dVar41 * pdVar8[3];
          auVar42._8_4_ = SUB84(dVar58,0);
          auVar42._0_8_ = dVar53;
          auVar42._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
          dVar41 = dVar53 * dVar53 + dVar52 * dVar52;
          dVar50 = auVar42._8_8_ * dVar58 + dVar51 * dVar51;
          dVar40 = dVar50 + dVar41;
          dVar41 = dVar41 + dVar50;
          auVar12._8_4_ = SUB84(dVar41,0);
          auVar12._0_8_ = dVar40;
          auVar12._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          in_XMM4 = sqrtpd(in_XMM4,auVar12);
          uVar36 = -(ulonglong)(dVar23 <= dVar40);
          uVar35 = -(ulonglong)(dVar23 <= dVar41);
          uVar29 = (uint)(uVar36 >> 0x20);
          uVar61 = (uint)(uVar35 >> 0x20);
          auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
          dVar40 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          dVar41 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          auVar43._0_4_ = ~(uint)uVar36 & SUB84(dVar40,0);
          auVar43._4_4_ = ~uVar29 & (uint)((ulonglong)dVar40 >> 0x20);
          auVar43._8_4_ = ~(uint)uVar35 & SUB84(dVar41,0);
          auVar43._12_4_ = ~uVar61 & (uint)((ulonglong)dVar41 >> 0x20);
          auVar62._0_8_ = uVar36 & (ulonglong)(auVar64._0_8_ * dVar52);
          uVar16 = uVar35 & (ulonglong)(auVar64._8_8_ * dVar51);
          auVar62._8_4_ = (undefined4)uVar16;
          auVar62._12_4_ = (undefined4)(uVar16 >> 0x20);
          auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
          dVar40 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          dVar41 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          auVar56._0_4_ = ~(uint)uVar36 & SUB84(dVar40,0);
          auVar56._4_4_ = ~uVar29 & (uint)((ulonglong)dVar40 >> 0x20);
          auVar56._8_4_ = ~(uint)uVar35 & SUB84(dVar41,0);
          auVar56._12_4_ = ~uVar61 & (uint)((ulonglong)dVar41 >> 0x20);
          auVar44._0_8_ = (ulonglong)(auVar64._0_8_ * dVar53) & uVar36;
          uVar35 = (ulonglong)(auVar64._8_8_ * dVar58) & uVar35;
          auVar44._8_4_ = (undefined4)uVar35;
          auVar44._12_4_ = (undefined4)(uVar35 >> 0x20);
          *pauVar32 = auVar62 | auVar43;
          pauVar32[1] = auVar56 | auVar44;
        }
        else if (param_1->Data->AdditiveType == AAT_None) {
          dVar53 = (double)fVar37;
          auVar60._8_4_ = SUB84(dVar53,0);
          auVar60._0_8_ = dVar53;
          auVar60._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
          dVar40 = pdVar8[2];
          dVar41 = pdVar8[3];
          dVar58 = dVar53 * *pdVar8;
          dVar50 = auVar60._8_8_ * pdVar8[1];
          auVar15._4_8_ = in_XMM1._8_8_;
          auVar15._0_4_ = (int)((ulonglong)dVar58 >> 0x20);
          auVar45._0_8_ = auVar15._0_8_ << 0x20;
          auVar45._8_4_ = SUB84(dVar50,0);
          auVar45._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
          uVar38 = uVar73;
          uVar39 = uVar74;
          if (0.0 <= dVar53 * dVar41 * *(double *)(pauVar32[1] + 8) +
                     dVar53 * dVar40 * *(double *)pauVar32[1] +
                     auVar45._8_8_ * *(double *)(*pauVar32 + 8) + dVar58 * *(double *)*pauVar32) {
            uVar38 = uVar71;
            uVar39 = uVar72;
          }
          in_XMM4._0_8_ = dVar58 * (double)CONCAT44(uVar39,uVar38) + *(double *)*pauVar32;
          in_XMM4._8_8_ = dVar50 * (double)CONCAT44(uVar39,uVar38) + *(double *)(*pauVar32 + 8);
          dVar58 = *(double *)pauVar32[1];
          dVar50 = *(double *)(pauVar32[1] + 8);
          *pauVar32 = in_XMM4;
          *(double *)pauVar32[1] = dVar53 * dVar40 * (double)CONCAT44(uVar39,uVar38) + dVar58;
          *(double *)(pauVar32[1] + 8) = dVar53 * dVar41 * (double)CONCAT44(uVar39,uVar38) + dVar50;
        }
        else {
          auVar64._8_8_ = UE::Math::TQuat<double>::Identity.W;
          auVar64._0_8_ = UE::Math::TQuat<double>::Identity.Z;
          uVar38 = uVar73;
          uVar39 = uVar74;
          if (0.0 <= UE::Math::TQuat<double>::Identity.W * pdVar8[3] +
                     UE::Math::TQuat<double>::Identity.Z * pdVar8[2] +
                     UE::Math::TQuat<double>::Identity.Y * pdVar8[1] +
                     UE::Math::TQuat<double>::Identity.X * *pdVar8) {
            uVar38 = uVar71;
            uVar39 = uVar72;
          }
          dVar17 = *(double *)*pauVar32;
          dVar18 = *(double *)(*pauVar32 + 8);
          dVar40 = (double)fVar37;
          dVar19 = *(double *)pauVar32[1];
          dVar20 = *(double *)(pauVar32[1] + 8);
          auVar63._8_4_ = SUB84(dVar40,0);
          auVar63._0_8_ = dVar40;
          auVar63._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          dVar41 = (double)(fVar24 - fVar37) * (double)CONCAT44(uVar39,uVar38);
          dVar52 = dVar40 * *pdVar8 + dVar41 * UE::Math::TQuat<double>::Identity.X;
          dVar51 = auVar63._8_8_ * pdVar8[1] + dVar41 * UE::Math::TQuat<double>::Identity.Y;
          dVar53 = dVar40 * pdVar8[2] + dVar41 * UE::Math::TQuat<double>::Identity.Z;
          dVar58 = dVar40 * pdVar8[3] + dVar41 * UE::Math::TQuat<double>::Identity.W;
          auVar46._8_4_ = SUB84(dVar58,0);
          auVar46._0_8_ = dVar53;
          auVar46._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
          dVar41 = dVar53 * dVar53 + dVar52 * dVar52;
          dVar50 = auVar46._8_8_ * dVar58 + dVar51 * dVar51;
          dVar40 = dVar50 + dVar41;
          dVar41 = dVar41 + dVar50;
          auVar68._8_4_ = SUB84(dVar41,0);
          auVar68._0_8_ = dVar40;
          auVar68._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          auVar64 = sqrtpd(auVar64,auVar68);
          uVar36 = -(ulonglong)(dVar23 <= dVar40);
          uVar35 = -(ulonglong)(dVar23 <= dVar41);
          auVar68 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar64);
          dVar40 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          dVar41 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          uVar29 = (uint)(uVar36 >> 0x20);
          uVar61 = (uint)(uVar35 >> 0x20);
          auVar47._0_4_ = ~(uint)uVar36 & SUB84(dVar40,0);
          auVar47._4_4_ = ~uVar29 & (uint)((ulonglong)dVar40 >> 0x20);
          auVar47._8_4_ = ~(uint)uVar35 & SUB84(dVar41,0);
          auVar47._12_4_ = ~uVar61 & (uint)((ulonglong)dVar41 >> 0x20);
          auVar69._0_8_ = uVar36 & (ulonglong)(auVar68._0_8_ * dVar52);
          uVar16 = uVar35 & (ulonglong)(auVar68._8_8_ * dVar51);
          auVar69._8_4_ = (undefined4)uVar16;
          auVar69._12_4_ = (undefined4)(uVar16 >> 0x20);
          auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar64);
          dVar40 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          dVar41 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          auVar66._0_4_ = ~(uint)uVar36 & SUB84(dVar40,0);
          auVar66._4_4_ = ~uVar29 & (uint)((ulonglong)dVar40 >> 0x20);
          auVar66._8_4_ = ~(uint)uVar35 & SUB84(dVar41,0);
          auVar66._12_4_ = ~uVar61 & (uint)((ulonglong)dVar41 >> 0x20);
          auVar48._0_8_ = (ulonglong)(auVar64._0_8_ * dVar53) & uVar36;
          uVar35 = (ulonglong)(auVar64._8_8_ * dVar58) & uVar35;
          auVar48._8_4_ = (undefined4)uVar35;
          auVar48._12_4_ = (undefined4)(uVar35 >> 0x20);
          dVar54 = SUB168(auVar69 | auVar47,0);
          dVar70 = SUB168(auVar69 | auVar47,8);
          dVar59 = SUB168(auVar66 | auVar48,0);
          dVar67 = SUB168(auVar66 | auVar48,8);
          in_XMM4._8_8_ = dVar67;
          in_XMM4._0_8_ = dVar67;
          dVar40 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
          dVar41 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          dVar51 = dVar19 * dVar54 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar18 * dVar67 +
                   dVar20 * dVar70 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + dVar17 * dVar59 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar13._8_4_ = SUB84(dVar51,0);
          auVar13._0_8_ =
               dVar20 * dVar54 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar17 * dVar67 +
               dVar19 * dVar70 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar18 * dVar59 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          auVar13._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          *pauVar32 = auVar13;
          dVar58 = dVar17 * dVar54 * dVar58 + dVar20 * dVar67 + dVar18 * dVar70 * dVar50 +
                   dVar19 * dVar59 * dVar52;
          auVar14._8_4_ = SUB84(dVar58,0);
          auVar14._0_8_ =
               dVar18 * dVar54 * dVar40 + dVar19 * dVar67 + dVar17 * dVar70 * dVar41 +
               dVar20 * dVar59 * dVar53;
          auVar14._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
          pauVar32[1] = auVar14;
        }
      }
      dVar53 = *(double *)*pauVar32;
      dVar58 = *(double *)(*pauVar32 + 8);
      dVar50 = *(double *)pauVar32[1];
      dVar52 = *(double *)(pauVar32[1] + 8);
      dVar41 = dVar50 * dVar50 + dVar53 * dVar53;
      dVar51 = dVar52 * dVar52 + dVar58 * dVar58;
      dVar40 = dVar51 + dVar41;
      dVar41 = dVar41 + dVar51;
      auVar11._8_4_ = SUB84(dVar41,0);
      auVar11._0_8_ = dVar40;
      auVar11._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      in_XMM4 = sqrtpd(in_XMM4,auVar11);
      uVar35 = -(ulonglong)(dVar23 <= dVar40);
      uVar36 = -(ulonglong)(dVar23 <= dVar41);
      uVar29 = (uint)(uVar35 >> 0x20);
      uVar61 = (uint)(uVar36 >> 0x20);
      auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
      fVar37 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar65._0_8_ = uVar35 & (ulonglong)(auVar64._0_8_ * dVar53);
      uVar16 = uVar36 & (ulonglong)(auVar64._8_8_ * dVar58);
      auVar65._8_4_ = (undefined4)uVar16;
      auVar65._12_4_ = (undefined4)(uVar16 >> 0x20);
      auVar49._0_4_ = ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar49._4_4_ =
           ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar49._8_4_ = ~(uint)uVar36 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar49._12_4_ =
           ~uVar61 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
      *pauVar32 = auVar65 | auVar49;
      in_XMM1._0_8_ = (ulonglong)(auVar64._0_8_ * dVar50) & uVar35;
      uVar16 = (ulonglong)(auVar64._8_8_ * dVar52) & uVar36;
      in_XMM1._8_4_ = (undefined4)uVar16;
      in_XMM1._12_4_ = (undefined4)(uVar16 >> 0x20);
      auVar57._0_4_ = ~(uint)uVar35 & SUB84((double)fVar37,0);
      auVar57._4_4_ = ~uVar29 & (uint)((ulonglong)(double)fVar37 >> 0x20);
      auVar57._8_4_ = ~(uint)uVar36 & SUB84((double)fVar10,0);
      auVar57._12_4_ = ~uVar61 & (uint)((ulonglong)(double)fVar10 >> 0x20);
      pauVar32[1] = auVar57 | in_XMM1;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar28 = param_1->CurrentIndex;
    } while (iVar28 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753e430

void __thiscall
`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::
BlendPerBone_Internal<FStringAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FStringAnimationAttribute> *param_1)

{
  int *piVar1;
  int iVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *pFVar6;
  uchar *puVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FUniqueAttribute *pFVar13;
  UScriptStruct *pUVar14;
  uchar *puVar15;
  uint uVar16;
  int *piVar17;
  longlong lVar18;
  float fVar19;
  
  iVar11 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar11;
  fVar9 = __real_3727c5ac;
  if (iVar11 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar13->Identifier;
      pUVar14 = FStringAnimationAttribute::StaticStruct();
      uVar12 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar14);
      if (uVar12 != 0xffffffff) {
        uVar16 = 0;
        if ((int)uVar12 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar18 = (longlong)(int)uVar12 * 0x10;
        piVar17 = *(int **)(pFVar5 + lVar18);
        piVar1 = piVar17 + *(int *)(pFVar5 + lVar18 + 8);
        for (; piVar17 != piVar1; piVar17 = piVar17 + 1) {
          if (*piVar17 == pFVar4->Index) {
            uVar16 = 0;
            if ((int)uVar12 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar16 = ~uVar12 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar11 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                     IndexOfByKey<UE::Anim::FAttributeId>
                               ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                                ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar18),
                                pFVar4);
            goto LAB_14753e54c;
          }
        }
      }
      iVar11 = -1;
LAB_14753e54c:
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasBoneWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ab,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ac,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = param_1->Data;
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      iVar2 = pFVar13->Identifier->Index;
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar19 = UE::Anim::FAttributeBlendData::GetBoneWeight(pFVar6,pFVar13->WeightIndex,iVar2);
      if ((fVar9 < fVar19) || (iVar11 == -1)) {
        pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
        pUVar14 = FStringAnimationAttribute::StaticStruct();
        puVar15 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                  FindOrAdd(pTVar3,pUVar14,pFVar4);
        if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
            (param_1->CurrentIndex < 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        puVar7 = pFVar13->DataPtr;
        if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HasBoneWeights()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1b4,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
            (param_1->CurrentIndex < 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1b5,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = param_1->Data;
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        iVar2 = pFVar13->Identifier->Index;
        if (((iVar2 < 0) || ((pFVar6->HighestBoneWeightedIndices).ArrayNum <= iVar2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HighestBoneWeightedIndices.IsValidIndex(AttributesView[CurrentIndex].Identifier->GetIndex())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1b6,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = param_1->Data;
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        uVar12 = pFVar13->Identifier->Index;
        uVar16 = 0;
        if ((int)uVar12 < (pFVar6->HighestBoneWeightedIndices).ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar2 = (pFVar6->HighestBoneWeightedIndices).AllocatorInstance.Data[(int)uVar12];
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        if ((iVar2 == pFVar13->WeightIndex) || (iVar11 == -1)) {
          pUVar14 = FStringAnimationAttribute::StaticStruct();
          UScriptStruct::CopyScriptStruct(pUVar14,puVar15,puVar7,1);
        }
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar11 = param_1->CurrentIndex;
    } while (iVar11 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753e830

void __thiscall
`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::
BlendPerBone_Internal<FTransformAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FTransformAnimationAttribute> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar4;
  FAttributeId *pFVar5;
  FScriptContainerElement *pFVar6;
  FAttributeBlendData *this_00;
  double *pdVar7;
  TTransform<double> *pTVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  bool bVar20;
  ECustomAttributeBlendType EVar21;
  int iVar22;
  uint uVar23;
  FUniqueAttribute *pFVar24;
  UScriptStruct *pUVar25;
  TTransform<double> *this_01;
  int *piVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  double dVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar49;
  __m128 local_88 [6];
  
  iVar22 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar22;
  fVar19 = __real_3f7fff58;
  if (iVar22 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar22 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar20)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar24 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar4 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar5 = pFVar24->Identifier;
      pUVar25 = FTransformAnimationAttribute::StaticStruct();
      uVar23 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar4,pUVar25);
      if (uVar23 != 0xffffffff) {
        uVar49 = 0;
        if ((int)uVar23 < (pTVar4->UniqueTypedBoneIndices).ArrayNum) {
          uVar49 = ~uVar23 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = (pTVar4->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar27 = (longlong)(int)uVar23 * 0x10;
        piVar26 = *(int **)(pFVar6 + lVar27);
        piVar1 = piVar26 + *(int *)(pFVar6 + lVar27 + 8);
        for (; piVar26 != piVar1; piVar26 = piVar26 + 1) {
          if (*piVar26 == pFVar5->Index) {
            uVar49 = 0;
            if ((int)uVar23 < (pTVar4->AttributeIdentifiers).ArrayNum) {
              uVar49 = ~uVar23 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar22 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                     IndexOfByKey<UE::Anim::FAttributeId>
                               ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                                ((pTVar4->AttributeIdentifiers).AllocatorInstance.Data + lVar27),
                                pFVar5);
            goto LAB_14753e968;
          }
        }
      }
      iVar22 = -1;
LAB_14753e968:
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasBoneWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ab,L""), bVar20)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ac,L""), bVar20)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_00 = param_1->Data;
      pFVar24 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      iVar2 = pFVar24->Identifier->Index;
      pFVar24 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar33 = UE::Anim::FAttributeBlendData::GetBoneWeight(this_00,pFVar24->WeightIndex,iVar2);
      pTVar4 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar25 = FTransformAnimationAttribute::StaticStruct();
      this_01 = (TTransform<double> *)
                UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar4,pUVar25,pFVar5);
      EVar21 = UE::Anim::Attributes::GetAttributeBlendType(pFVar5);
      iVar2 = (param_1->AttributesView).ArrayNum;
      iVar3 = param_1->CurrentIndex;
      if (EVar21 == Override) {
        if (((iVar2 <= iVar3) || (iVar3 < 0)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar24 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        pdVar7 = (double *)pFVar24->DataPtr;
        dVar11 = pdVar7[1];
        (this_01->Rotation).XY.m128d_f64[0] = *pdVar7;
        (this_01->Rotation).XY.m128d_f64[1] = dVar11;
        dVar11 = pdVar7[3];
        (this_01->Rotation).ZW.m128d_f64[0] = pdVar7[2];
        (this_01->Rotation).ZW.m128d_f64[1] = dVar11;
        dVar11 = pdVar7[5];
        (this_01->Translation).XY.m128d_f64[0] = pdVar7[4];
        (this_01->Translation).XY.m128d_f64[1] = dVar11;
        dVar11 = pdVar7[7];
        (this_01->Translation).ZW.m128d_f64[0] = pdVar7[6];
        (this_01->Translation).ZW.m128d_f64[1] = dVar11;
        dVar11 = pdVar7[9];
        (this_01->Scale3D).XY.m128d_f64[0] = pdVar7[8];
        (this_01->Scale3D).XY.m128d_f64[1] = dVar11;
        dVar11 = pdVar7[0xb];
        (this_01->Scale3D).ZW.m128d_f64[0] = pdVar7[10];
        (this_01->Scale3D).ZW.m128d_f64[1] = dVar11;
      }
      else {
        if (((iVar2 <= iVar3) || (iVar3 < 0)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar24 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        pTVar8 = (TTransform<double> *)pFVar24->DataPtr;
        if (iVar22 == -1) {
          UE::Math::TTransform<double>::BlendWith(this_01,pTVar8,fVar33);
        }
        else {
          local_88[0]._0_4_ = fVar33;
          local_88[0]._4_4_ = fVar33;
          local_88[0]._8_4_ = fVar33;
          local_88[0]._12_4_ = fVar33;
          if (param_1->Data->AdditiveType == AAT_None) {
            dVar15 = (double)fVar33;
            dVar16 = (double)fVar33;
            dVar17 = (double)fVar33;
            dVar18 = (double)fVar33;
            dVar11 = dVar15 * (pTVar8->Rotation).XY.m128d_f64[0];
            dVar12 = dVar16 * (pTVar8->Rotation).XY.m128d_f64[1];
            dVar13 = (pTVar8->Rotation).ZW.m128d_f64[0] * dVar17;
            dVar14 = (pTVar8->Rotation).ZW.m128d_f64[1] * dVar18;
            auVar44._8_4_ = SUB84(dVar12,0);
            auVar44._0_8_ = dVar11;
            auVar44._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            auVar41._8_4_ = SUB84(dVar14,0);
            auVar41._0_8_ = dVar13;
            auVar41._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
            dVar40 = dVar13 * (this_01->Rotation).ZW.m128d_f64[0] +
                     dVar11 * (this_01->Rotation).XY.m128d_f64[0];
            dVar45 = auVar41._8_8_ * (this_01->Rotation).ZW.m128d_f64[1] +
                     auVar44._8_8_ * (this_01->Rotation).XY.m128d_f64[1];
            auVar34._8_4_ = SUB84(dVar45,0);
            auVar34._0_8_ = dVar40;
            auVar34._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
            uVar28 = -(ulonglong)(0.0 <= auVar34._8_8_ + dVar40);
            uVar29 = -(ulonglong)(0.0 <= dVar40 + dVar45);
            uVar49 = (uint)(uVar29 >> 0x20);
            auVar46._0_4_ = ~(uint)uVar28 & SUB84(0.0 - dVar11,0);
            uVar23 = (uint)(uVar28 >> 0x20);
            auVar46._4_4_ = ~uVar23 & (uint)((ulonglong)(0.0 - dVar11) >> 0x20);
            auVar46._8_4_ = ~(uint)uVar29 & SUB84(0.0 - dVar12,0);
            auVar46._12_4_ = ~uVar49 & (uint)((ulonglong)(0.0 - dVar12) >> 0x20);
            auVar42._0_8_ = (ulonglong)dVar11 & uVar28;
            auVar42._8_4_ = (undefined4)((ulonglong)dVar12 & uVar29);
            auVar42._12_4_ = (undefined4)(((ulonglong)dVar12 & uVar29) >> 0x20);
            dVar11 = (this_01->Rotation).XY.m128d_f64[1];
            auVar35._0_4_ = ~(uint)uVar28 & SUB84(0.0 - dVar13,0);
            auVar35._4_4_ = ~uVar23 & (uint)((ulonglong)(0.0 - dVar13) >> 0x20);
            auVar35._8_4_ = ~(uint)uVar29 & SUB84(0.0 - dVar14,0);
            auVar35._12_4_ = ~uVar49 & (uint)((ulonglong)(0.0 - dVar14) >> 0x20);
            (this_01->Rotation).XY.m128d_f64[0] =
                 SUB168(auVar46 | auVar42,0) + (this_01->Rotation).XY.m128d_f64[0];
            (this_01->Rotation).XY.m128d_f64[1] = SUB168(auVar46 | auVar42,8) + dVar11;
            auVar38._8_4_ = (int)((ulonglong)dVar14 & uVar29);
            auVar38._0_8_ = (ulonglong)dVar13 & uVar28;
            auVar38._12_4_ = (int)(((ulonglong)dVar14 & uVar29) >> 0x20);
            dVar11 = (this_01->Rotation).ZW.m128d_f64[1];
            (this_01->Rotation).ZW.m128d_f64[0] =
                 SUB168(auVar35 | auVar38,0) + (this_01->Rotation).ZW.m128d_f64[0];
            (this_01->Rotation).ZW.m128d_f64[1] = SUB168(auVar35 | auVar38,8) + dVar11;
            dVar12 = (pTVar8->Translation).XY.m128d_f64[1];
            dVar13 = (pTVar8->Translation).ZW.m128d_f64[0];
            dVar14 = (pTVar8->Translation).ZW.m128d_f64[1];
            dVar11 = (this_01->Translation).XY.m128d_f64[1];
            (this_01->Translation).XY.m128d_f64[0] =
                 (pTVar8->Translation).XY.m128d_f64[0] * dVar15 +
                 (this_01->Translation).XY.m128d_f64[0];
            (this_01->Translation).XY.m128d_f64[1] = dVar12 * dVar16 + dVar11;
            dVar11 = (this_01->Translation).ZW.m128d_f64[1];
            (this_01->Translation).ZW.m128d_f64[0] =
                 dVar13 * dVar17 + (this_01->Translation).ZW.m128d_f64[0];
            (this_01->Translation).ZW.m128d_f64[1] = dVar14 * dVar18 + dVar11;
            dVar12 = (pTVar8->Scale3D).XY.m128d_f64[1];
            dVar13 = (pTVar8->Scale3D).ZW.m128d_f64[0];
            dVar14 = (pTVar8->Scale3D).ZW.m128d_f64[1];
            dVar11 = (this_01->Scale3D).XY.m128d_f64[1];
            (this_01->Scale3D).XY.m128d_f64[0] =
                 (pTVar8->Scale3D).XY.m128d_f64[0] * dVar15 + (this_01->Scale3D).XY.m128d_f64[0];
            (this_01->Scale3D).XY.m128d_f64[1] = dVar12 * dVar16 + dVar11;
            dVar11 = (this_01->Scale3D).ZW.m128d_f64[1];
            (this_01->Scale3D).ZW.m128d_f64[0] =
                 dVar13 * dVar17 + (this_01->Scale3D).ZW.m128d_f64[0];
            (this_01->Scale3D).ZW.m128d_f64[1] = dVar14 * dVar18 + dVar11;
          }
          else if (fVar33 < fVar19) {
            UE::Math::TTransform<double>::BlendFromIdentityAndAccumulate
                      (this_01,pTVar8,(ScalarRegister *)local_88);
          }
          else {
            UE::Math::TTransform<double>::AccumulateWithAdditiveScale
                      (this_01,pTVar8,(ScalarRegister *)local_88);
          }
        }
      }
      dVar11 = (this_01->Rotation).XY.m128d_f64[0];
      dVar12 = (this_01->Rotation).XY.m128d_f64[1];
      dVar13 = (this_01->Rotation).ZW.m128d_f64[0];
      dVar14 = (this_01->Rotation).ZW.m128d_f64[1];
      auVar43._0_8_ = dVar13 * dVar13 + dVar11 * dVar11;
      auVar43._8_8_ = dVar14 * dVar14 + dVar12 * dVar12;
      auVar36._8_4_ = SUB84(auVar43._8_8_,0);
      auVar36._0_8_ = auVar43._0_8_;
      auVar36._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
      auVar37._0_8_ = auVar36._8_8_ + auVar43._0_8_;
      auVar37._8_8_ = auVar43._0_8_ + auVar43._8_8_;
      auVar44 = sqrtpd(auVar43,auVar37);
      uVar29 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar37._0_8_)
      ;
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar37._8_8_)
      ;
      uVar30 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar37._0_8_)
      ;
      uVar32 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar37._8_8_)
      ;
      auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar44);
      auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
      auVar39._0_8_ = uVar30 & (ulonglong)(auVar38._0_8_ * dVar11);
      uVar28 = uVar32 & (ulonglong)(auVar38._8_8_ * dVar12);
      auVar39._8_4_ = (undefined4)uVar28;
      auVar39._12_4_ = (undefined4)(uVar28 >> 0x20);
      auVar48._0_8_ = uVar29 & (ulonglong)(auVar44._0_8_ * dVar13);
      uVar28 = uVar31 & (ulonglong)(auVar44._8_8_ * dVar14);
      auVar48._8_4_ = (undefined4)uVar28;
      auVar48._12_4_ = (undefined4)(uVar28 >> 0x20);
      auVar10._4_4_ =
           ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar10._0_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar10._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar10._12_4_ =
           ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar47._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar47._4_4_ =
           ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar47._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar47._12_4_ =
           ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(this_01->Rotation).XY.m128d_f64 = auVar39 | auVar10;
      *(undefined1 (*) [16])(this_01->Rotation).ZW.m128d_f64 = auVar48 | auVar47;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar22 = param_1->CurrentIndex;
    } while (iVar22 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753ed30

void __thiscall
`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::
BlendPerBone_Internal<FVectorAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FVectorAnimationAttribute> *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar6;
  FAttributeId *pFVar7;
  FScriptContainerElement *pFVar8;
  FAttributeBlendData *this_00;
  double *pdVar9;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  ECustomAttributeBlendType EVar13;
  int iVar14;
  uint uVar15;
  FUniqueAttribute *pFVar16;
  UScriptStruct *pUVar17;
  double *pdVar18;
  uint uVar19;
  int *piVar20;
  longlong lVar21;
  float fVar22;
  
  iVar14 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar14;
  if (iVar14 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar14 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar6 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar7 = pFVar16->Identifier;
      pUVar17 = FVectorAnimationAttribute::StaticStruct();
      uVar15 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar6,pUVar17);
      if (uVar15 != 0xffffffff) {
        uVar19 = 0;
        if ((int)uVar15 < (pTVar6->UniqueTypedBoneIndices).ArrayNum) {
          uVar19 = ~uVar15 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (pTVar6->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar21 = (longlong)(int)uVar15 * 0x10;
        piVar20 = *(int **)(pFVar8 + lVar21);
        piVar1 = piVar20 + *(int *)(pFVar8 + lVar21 + 8);
        for (; piVar20 != piVar1; piVar20 = piVar20 + 1) {
          if (*piVar20 == pFVar7->Index) {
            uVar19 = 0;
            if ((int)uVar15 < (pTVar6->AttributeIdentifiers).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar14 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                     IndexOfByKey<UE::Anim::FAttributeId>
                               ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                                ((pTVar6->AttributeIdentifiers).AllocatorInstance.Data + lVar21),
                                pFVar7);
            goto LAB_14753ee47;
          }
        }
      }
      iVar14 = -1;
LAB_14753ee47:
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasBoneWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ab,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ac,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_00 = param_1->Data;
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      iVar4 = pFVar16->Identifier->Index;
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar22 = UE::Anim::FAttributeBlendData::GetBoneWeight(this_00,pFVar16->WeightIndex,iVar4);
      pTVar6 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar17 = FVectorAnimationAttribute::StaticStruct();
      pdVar18 = (double *)
                UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar6,pUVar17,pFVar7);
      EVar13 = UE::Anim::Attributes::GetAttributeBlendType(pFVar7);
      iVar4 = (param_1->AttributesView).ArrayNum;
      iVar5 = param_1->CurrentIndex;
      if (EVar13 == Override) {
        if (((iVar4 <= iVar5) || (iVar5 < 0)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        pdVar9 = (double *)pFVar16->DataPtr;
        dVar11 = pdVar9[1];
        *pdVar18 = *pdVar9;
        pdVar18[1] = dVar11;
        pdVar18[2] = pdVar9[2];
      }
      else {
        if (((iVar4 <= iVar5) || (iVar5 < 0)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        dVar11 = (double)fVar22;
        pdVar9 = (double *)pFVar16->DataPtr;
        if (iVar14 == -1) {
          dVar2 = pdVar9[1];
          dVar3 = pdVar9[2];
          *pdVar18 = (*pdVar9 - *pdVar18) * dVar11 + *pdVar18;
          pdVar18[1] = (dVar2 - pdVar18[1]) * dVar11 + pdVar18[1];
          pdVar18[2] = (dVar3 - pdVar18[2]) * dVar11 + pdVar18[2];
        }
        else {
          dVar2 = pdVar9[2];
          dVar3 = *pdVar9;
          pdVar18[1] = dVar11 * pdVar9[1] + pdVar18[1];
          pdVar18[2] = dVar11 * dVar2 + pdVar18[2];
          *pdVar18 = dVar11 * dVar3 + *pdVar18;
        }
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar14 = param_1->CurrentIndex;
    } while (iVar14 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753f0c0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::
Blend_Internal<FFloatAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FFloatAnimationAttribute> *param_1)

{
  float *pfVar1;
  FAttributeBlendData *this_00;
  FAttributeId *pFVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_01;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  ECustomAttributeBlendType EVar6;
  int iVar7;
  FUniqueAttribute *pFVar8;
  UScriptStruct *pUVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  
  iVar7 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar7;
  fVar4 = __real_3f800000;
  if (iVar7 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      pfVar1 = (float *)pFVar8->DataPtr;
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = param_1->Data;
      pFVar8 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      fVar11 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar8->WeightIndex);
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      pFVar2 = pFVar8->Identifier;
      EVar6 = UE::Anim::Attributes::GetAttributeBlendType(pFVar2);
      this_01 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar9 = FFloatAnimationAttribute::StaticStruct();
      pfVar10 = (float *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
                         ::FindOrAdd(this_01,pUVar9,pFVar2);
      if (EVar6 == Override) {
        *pfVar10 = *pfVar1;
      }
      else {
        fVar12 = (fVar4 - fVar11) * *pfVar10;
        *pfVar10 = fVar12;
        *pfVar10 = fVar11 * *pfVar1 + fVar12;
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar7 = param_1->CurrentIndex;
    } while (iVar7 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753f2a0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::
Blend_Internal<FIntegerAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FIntegerAnimationAttribute> *param_1)

{
  int *piVar1;
  FAttributeBlendData *this_00;
  FAttributeId *pFVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_01;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  ECustomAttributeBlendType EVar6;
  int iVar7;
  FUniqueAttribute *pFVar8;
  UScriptStruct *pUVar9;
  int *piVar10;
  float fVar11;
  
  iVar7 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar7;
  fVar4 = __real_3f800000;
  if (iVar7 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      piVar1 = (int *)pFVar8->DataPtr;
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = param_1->Data;
      pFVar8 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      fVar11 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar8->WeightIndex);
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      pFVar2 = pFVar8->Identifier;
      EVar6 = UE::Anim::Attributes::GetAttributeBlendType(pFVar2);
      this_01 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar9 = FIntegerAnimationAttribute::StaticStruct();
      piVar10 = (int *)UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                       FindOrAdd(this_01,pUVar9,pFVar2);
      if (EVar6 == Override) {
        *piVar10 = *piVar1;
      }
      else {
        iVar7 = (int)((fVar4 - fVar11) * (float)*piVar10);
        *piVar10 = iVar7;
        *piVar10 = (int)((float)*piVar1 * fVar11) + iVar7;
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar7 = param_1->CurrentIndex;
    } while (iVar7 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753f490

void __thiscall
`UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::
Blend_Internal<FQuaternionAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FQuaternionAnimationAttribute> *param_1)

{
  double *pdVar1;
  FAttributeBlendData *this_00;
  FAttributeId *pFVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_01;
  code *pcVar3;
  float fVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  bool bVar13;
  ECustomAttributeBlendType EVar14;
  int iVar15;
  FUniqueAttribute *pFVar16;
  UScriptStruct *pUVar17;
  undefined1 (*pauVar18) [16];
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  double dVar22;
  undefined1 auVar24 [16];
  double dVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar23;
  double dVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  
  iVar15 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar15;
  dVar12 = __real_bff0000000000000;
  fVar11 = __real_3f800000;
  dVar10 = __real_3e45798ee0000000;
  dVar9 = __real_3ff0000000000000;
  if (iVar15 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar15 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x19b,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pdVar1 = (double *)pFVar16->DataPtr;
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasContainerWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a2,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a3,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = param_1->Data;
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar21 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar16->WeightIndex);
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pFVar2 = pFVar16->Identifier;
      EVar14 = UE::Anim::Attributes::GetAttributeBlendType(pFVar2);
      this_01 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar17 = FQuaternionAnimationAttribute::StaticStruct();
      pauVar18 = (undefined1 (*) [16])
                 UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                 FindOrAdd(this_01,pUVar17,pFVar2);
      if (EVar14 == Override) {
        dVar22 = pdVar1[1];
        *(double *)*pauVar18 = *pdVar1;
        *(double *)(*pauVar18 + 8) = dVar22;
        dVar22 = pdVar1[3];
        *(double *)pauVar18[1] = pdVar1[2];
        *(double *)(pauVar18[1] + 8) = dVar22;
      }
      else {
        dVar22 = dVar12;
        if (0.0 <= pdVar1[3] * *(double *)(pauVar18[1] + 8) + pdVar1[2] * *(double *)pauVar18[1] +
                   pdVar1[1] * *(double *)(*pauVar18 + 8) + *(double *)*pauVar18 * *pdVar1) {
          dVar22 = dVar9;
        }
        dVar23 = (double)fVar21;
        dVar22 = (double)(fVar11 - fVar21) * dVar22;
        auVar32._8_4_ = SUB84(dVar22,0);
        auVar32._0_8_ = dVar22;
        auVar32._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        dVar31 = dVar22 * *(double *)*pauVar18 + dVar23 * *pdVar1;
        dVar30 = auVar32._8_8_ * *(double *)(*pauVar18 + 8) + dVar23 * pdVar1[1];
        dVar6 = dVar23 * pdVar1[2] + dVar22 * *(double *)pauVar18[1];
        dVar7 = dVar23 * pdVar1[3] + dVar22 * *(double *)(pauVar18[1] + 8);
        auVar24._8_4_ = SUB84(dVar7,0);
        auVar24._0_8_ = dVar6;
        auVar24._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        dVar23 = dVar6 * dVar6 + dVar31 * dVar31;
        dVar29 = auVar24._8_8_ * dVar7 + dVar30 * dVar30;
        dVar22 = dVar29 + dVar23;
        dVar23 = dVar23 + dVar29;
        auVar36._8_4_ = SUB84(dVar23,0);
        auVar36._0_8_ = dVar22;
        auVar36._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        in_XMM4 = sqrtpd(in_XMM4,auVar36);
        uVar20 = -(ulonglong)(dVar10 <= dVar22);
        uVar19 = -(ulonglong)(dVar10 <= dVar23);
        uVar38 = (uint)(uVar20 >> 0x20);
        uVar39 = (uint)(uVar19 >> 0x20);
        auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
        auVar25._0_4_ =
             ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar25._4_4_ =
             ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar25._8_4_ =
             ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar25._12_4_ =
             ~uVar39 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar35._0_8_ = uVar20 & (ulonglong)(auVar36._0_8_ * dVar31);
        uVar8 = uVar19 & (ulonglong)(auVar36._8_8_ * dVar30);
        auVar35._8_4_ = (undefined4)uVar8;
        auVar35._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
        auVar33._0_4_ =
             ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar33._4_4_ =
             ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar33._8_4_ =
             ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar33._12_4_ =
             ~uVar39 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar26._0_8_ = (ulonglong)(auVar36._0_8_ * dVar6) & uVar20;
        uVar19 = (ulonglong)(auVar36._8_8_ * dVar7) & uVar19;
        auVar26._8_4_ = (undefined4)uVar19;
        auVar26._12_4_ = (undefined4)(uVar19 >> 0x20);
        *pauVar18 = auVar35 | auVar25;
        pauVar18[1] = auVar33 | auVar26;
      }
      dVar6 = *(double *)*pauVar18;
      dVar7 = *(double *)(*pauVar18 + 8);
      dVar29 = *(double *)pauVar18[1];
      dVar31 = *(double *)(pauVar18[1] + 8);
      dVar23 = dVar29 * dVar29 + dVar6 * dVar6;
      dVar30 = dVar31 * dVar31 + dVar7 * dVar7;
      dVar22 = dVar30 + dVar23;
      dVar23 = dVar23 + dVar30;
      auVar5._8_4_ = SUB84(dVar23,0);
      auVar5._0_8_ = dVar22;
      auVar5._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      in_XMM4 = sqrtpd(in_XMM4,auVar5);
      uVar19 = -(ulonglong)(dVar10 <= dVar22);
      uVar20 = -(ulonglong)(dVar10 <= dVar23);
      uVar38 = (uint)(uVar19 >> 0x20);
      uVar39 = (uint)(uVar20 >> 0x20);
      auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
      fVar21 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar37._0_8_ = uVar19 & (ulonglong)(auVar36._0_8_ * dVar6);
      uVar8 = uVar20 & (ulonglong)(auVar36._8_8_ * dVar7);
      auVar37._8_4_ = (undefined4)uVar8;
      auVar37._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar27._0_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar27._4_4_ =
           ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar27._8_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar27._12_4_ =
           ~uVar39 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
      *pauVar18 = auVar37 | auVar27;
      auVar28._0_8_ = (ulonglong)(auVar36._0_8_ * dVar29) & uVar19;
      uVar8 = (ulonglong)(auVar36._8_8_ * dVar31) & uVar20;
      auVar28._8_4_ = (undefined4)uVar8;
      auVar28._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar34._0_4_ = ~(uint)uVar19 & SUB84((double)fVar21,0);
      auVar34._4_4_ = ~uVar38 & (uint)((ulonglong)(double)fVar21 >> 0x20);
      auVar34._8_4_ = ~(uint)uVar20 & SUB84((double)fVar4,0);
      auVar34._12_4_ = ~uVar39 & (uint)((ulonglong)(double)fVar4 >> 0x20);
      pauVar18[1] = auVar34 | auVar28;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar15 = param_1->CurrentIndex;
    } while (iVar15 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753f880

void __thiscall
`UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::
Blend_Internal<FStringAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FStringAnimationAttribute> *param_1)

{
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUniqueAttribute *pFVar6;
  UScriptStruct *pUVar7;
  uchar *puVar8;
  
  iVar5 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar5;
  if (iVar5 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar1 = pFVar6->Identifier;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      puVar2 = pFVar6->DataPtr;
      pUVar7 = FStringAnimationAttribute::StaticStruct();
      puVar8 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Add
                         (this_00,pUVar7,pFVar1);
      if (puVar8 != (uchar *)0x0) {
        pUVar7 = FStringAnimationAttribute::StaticStruct();
        UScriptStruct::CopyScriptStruct(pUVar7,puVar8,puVar2,1);
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar5 = param_1->CurrentIndex;
    } while (iVar5 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753f9a0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::
Blend_Internal<FTransformAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FTransformAnimationAttribute> *param_1)

{
  TTransform<double> *pTVar1;
  FAttributeBlendData *this_00;
  FAttributeId *pFVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_01;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  ECustomAttributeBlendType EVar14;
  int iVar15;
  FUniqueAttribute *pFVar16;
  UScriptStruct *pUVar17;
  TTransform<double> *this_02;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  iVar15 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar15;
  if (iVar15 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar15 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x19b,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar1 = (TTransform<double> *)pFVar16->DataPtr;
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasContainerWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a2,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1a3,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = param_1->Data;
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar22 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar16->WeightIndex);
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pFVar2 = pFVar16->Identifier;
      EVar14 = UE::Anim::Attributes::GetAttributeBlendType(pFVar2);
      this_01 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar17 = FTransformAnimationAttribute::StaticStruct();
      this_02 = (TTransform<double> *)
                UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(this_01,pUVar17,pFVar2);
      if (EVar14 == Override) {
        dVar9 = (pTVar1->Rotation).XY.m128d_f64[1];
        (this_02->Rotation).XY.m128d_f64[0] = (pTVar1->Rotation).XY.m128d_f64[0];
        (this_02->Rotation).XY.m128d_f64[1] = dVar9;
        dVar9 = (pTVar1->Rotation).ZW.m128d_f64[1];
        (this_02->Rotation).ZW.m128d_f64[0] = (pTVar1->Rotation).ZW.m128d_f64[0];
        (this_02->Rotation).ZW.m128d_f64[1] = dVar9;
        dVar9 = (pTVar1->Translation).XY.m128d_f64[1];
        (this_02->Translation).XY.m128d_f64[0] = (pTVar1->Translation).XY.m128d_f64[0];
        (this_02->Translation).XY.m128d_f64[1] = dVar9;
        dVar9 = (pTVar1->Translation).ZW.m128d_f64[1];
        (this_02->Translation).ZW.m128d_f64[0] = (pTVar1->Translation).ZW.m128d_f64[0];
        (this_02->Translation).ZW.m128d_f64[1] = dVar9;
        dVar9 = (pTVar1->Scale3D).XY.m128d_f64[1];
        (this_02->Scale3D).XY.m128d_f64[0] = (pTVar1->Scale3D).XY.m128d_f64[0];
        (this_02->Scale3D).XY.m128d_f64[1] = dVar9;
        dVar9 = (pTVar1->Scale3D).ZW.m128d_f64[1];
        (this_02->Scale3D).ZW.m128d_f64[0] = (pTVar1->Scale3D).ZW.m128d_f64[0];
        (this_02->Scale3D).ZW.m128d_f64[1] = dVar9;
      }
      else {
        UE::Math::TTransform<double>::BlendWith(this_02,pTVar1,fVar22);
      }
      dVar9 = (this_02->Rotation).XY.m128d_f64[0];
      dVar10 = (this_02->Rotation).XY.m128d_f64[1];
      dVar11 = (this_02->Rotation).ZW.m128d_f64[0];
      dVar12 = (this_02->Rotation).ZW.m128d_f64[1];
      auVar27._0_8_ = dVar11 * dVar11 + dVar9 * dVar9;
      auVar27._8_8_ = dVar12 * dVar12 + dVar10 * dVar10;
      auVar23._8_4_ = SUB84(auVar27._8_8_,0);
      auVar23._0_8_ = auVar27._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
      auVar24._0_8_ = auVar23._8_8_ + auVar27._0_8_;
      auVar24._8_8_ = auVar27._0_8_ + auVar27._8_8_;
      auVar28 = sqrtpd(auVar27,auVar24);
      uVar18 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar24._0_8_)
      ;
      uVar20 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar24._8_8_)
      ;
      uVar19 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar24._0_8_)
      ;
      uVar21 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar24._8_8_)
      ;
      auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
      auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
      auVar26._0_8_ = uVar19 & (ulonglong)(auVar25._0_8_ * dVar9);
      uVar8 = uVar21 & (ulonglong)(auVar25._8_8_ * dVar10);
      auVar26._8_4_ = (undefined4)uVar8;
      auVar26._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar29._0_8_ = uVar18 & (ulonglong)(auVar28._0_8_ * dVar11);
      uVar8 = uVar20 & (ulonglong)(auVar28._8_8_ * dVar12);
      auVar29._8_4_ = (undefined4)uVar8;
      auVar29._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar28._4_4_ =
           ~(uint)(uVar19 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar28._0_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar28._8_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar28._12_4_ =
           ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar7 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(this_02->Rotation).XY.m128d_f64 = auVar26 | auVar28;
      auVar25._4_4_ = ~(uint)(uVar18 >> 0x20) & uVar5;
      auVar25._0_4_ = ~(uint)uVar18 & uVar4;
      auVar25._8_4_ = ~(uint)uVar20 & uVar6;
      auVar25._12_4_ = ~(uint)(uVar20 >> 0x20) & uVar7;
      *(undefined1 (*) [16])(this_02->Rotation).ZW.m128d_f64 = auVar29 | auVar25;
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar15 = param_1->CurrentIndex;
    } while (iVar15 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753fc10

void __thiscall
`UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::
Blend_Internal<FVectorAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FVectorAnimationAttribute> *param_1)

{
  double *pdVar1;
  FAttributeBlendData *this_00;
  FAttributeId *pFVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_01;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  bool bVar7;
  ECustomAttributeBlendType EVar8;
  int iVar9;
  FUniqueAttribute *pFVar10;
  UScriptStruct *pUVar11;
  double *pdVar12;
  float fVar13;
  double dVar14;
  
  iVar9 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar9;
  if (iVar9 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar9 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pdVar1 = (double *)pFVar10->DataPtr;
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = param_1->Data;
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar13 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar10->WeightIndex);
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pFVar2 = pFVar10->Identifier;
      EVar8 = UE::Anim::Attributes::GetAttributeBlendType(pFVar2);
      this_01 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar11 = FVectorAnimationAttribute::StaticStruct();
      pdVar12 = (double *)
                UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(this_01,pUVar11,pFVar2);
      if (EVar8 == Override) {
        dVar5 = pdVar1[1];
        *pdVar12 = *pdVar1;
        pdVar12[1] = dVar5;
        pdVar12[2] = pdVar1[2];
      }
      else {
        dVar6 = pdVar1[1];
        dVar5 = pdVar1[2];
        dVar14 = (double)fVar13;
        *pdVar12 = (*pdVar1 - *pdVar12) * dVar14 + *pdVar12;
        dVar5 = (dVar5 - pdVar12[2]) * dVar14 + pdVar12[2];
        auVar4._8_4_ = SUB84(dVar5,0);
        auVar4._0_8_ = (dVar6 - pdVar12[1]) * dVar14 + pdVar12[1];
        auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])(pdVar12 + 1) = auVar4;
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar9 = param_1->CurrentIndex;
    } while (iVar9 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

