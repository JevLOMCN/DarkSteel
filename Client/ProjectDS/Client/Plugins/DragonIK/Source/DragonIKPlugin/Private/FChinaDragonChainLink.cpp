// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 4

// StaticStruct @ 14d29b6c0

UScriptStruct * __cdecl FChinaDragonChainLink::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChinaDragonChainLink.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FChinaDragonChainLink.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChinaDragonChainLink,(UObject *)pUVar1,
                         L"ChinaDragonChainLink");
  }
  return Z_Registration_Info_UScriptStruct_FChinaDragonChainLink.OuterSingleton;
}

// FChinaDragonChainLink @ 14d29dd60

FChinaDragonChainLink * __thiscall
FChinaDragonChainLink::FChinaDragonChainLink(FChinaDragonChainLink *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  *&(this->Position).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Position).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Position).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Position).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Position).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Position).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Scale3D.ZW.m128d_f64 = auVar14;
  (this->DefaultDirToParent).field0_0x0._s_0.X = -1.0;
  this->Length = 0.0;
  this->BoneIndex = -1;
  this->TransformIndex = -1;
  (this->DefaultDirToParent).field0_0x0._s_0.Y = 0.0;
  (this->DefaultDirToParent).field0_0x0._s_0.Z = 0.0;
  (this->ChildZeroLengthTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildZeroLengthTransformIndices).ArrayNum = 0;
  (this->ChildZeroLengthTransformIndices).ArrayMax = 0;
  return this;
}

// FChinaDragonChainLink @ 14d2b84e0

FChinaDragonChainLink * __thiscall
FChinaDragonChainLink::FChinaDragonChainLink
          (FChinaDragonChainLink *this,TTransform<double> *param_1,double param_2,
          FCompactPoseBoneIndex *param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  
  dVar16 = (param_1->Rotation).XY.m128d_f64[1];
  (this->Position).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->Position).Rotation.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->Position).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->Position).Rotation.ZW.m128d_f64[1] = dVar16;
  dVar16 = (param_1->Translation).XY.m128d_f64[1];
  (this->Position).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->Position).Translation.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->Translation).ZW.m128d_f64[1];
  (this->Position).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->Position).Translation.ZW.m128d_f64[1] = dVar16;
  dVar16 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->Position).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->Position).Scale3D.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->Position).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->Position).Scale3D.ZW.m128d_f64[1] = dVar16;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->OriginalPosition).Scale3D.ZW.m128d_f64 = auVar9;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Rotation.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar3,0);
  auVar11._0_8_ = (double)fVar2;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Rotation.ZW.m128d_f64 = auVar11;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Translation.XY.m128d_f64 = auVar12;
  auVar13._8_4_ = SUB84((double)fVar3,0);
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Translation.ZW.m128d_f64 = auVar13;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Scale3D.XY.m128d_f64 = auVar14;
  auVar15._8_4_ = SUB84((double)fVar3,0);
  auVar15._0_8_ = (double)fVar2;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InterpolatedPosition).Scale3D.ZW.m128d_f64 = auVar15;
  this->Length = param_2;
  this->BoneIndex = (int)*param_3;
  iVar1 = *param_4;
  (this->DefaultDirToParent).field0_0x0._s_0.X = -1.0;
  (this->DefaultDirToParent).field0_0x0._s_0.Y = 0.0;
  (this->DefaultDirToParent).field0_0x0._s_0.Z = 0.0;
  (this->ChildZeroLengthTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildZeroLengthTransformIndices).ArrayNum = 0;
  (this->ChildZeroLengthTransformIndices).ArrayMax = 0;
  this->TransformIndex = iVar1;
  return this;
}

// operator= @ 14d2b8c80

FChinaDragonChainLink * __thiscall
FChinaDragonChainLink::operator=(FChinaDragonChainLink *this,FChinaDragonChainLink *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  
  dVar4 = (param_1->Position).Rotation.XY.m128d_f64[1];
  pTVar1 = &param_1->ChildZeroLengthTransformIndices;
  pTVar2 = &this->ChildZeroLengthTransformIndices;
  (this->Position).Rotation.XY.m128d_f64[0] = (param_1->Position).Rotation.XY.m128d_f64[0];
  (this->Position).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Position).Rotation.ZW.m128d_f64[1];
  (this->Position).Rotation.ZW.m128d_f64[0] = (param_1->Position).Rotation.ZW.m128d_f64[0];
  (this->Position).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Position).Translation.XY.m128d_f64[1];
  (this->Position).Translation.XY.m128d_f64[0] = (param_1->Position).Translation.XY.m128d_f64[0];
  (this->Position).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Position).Translation.ZW.m128d_f64[1];
  (this->Position).Translation.ZW.m128d_f64[0] = (param_1->Position).Translation.ZW.m128d_f64[0];
  (this->Position).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Position).Scale3D.XY.m128d_f64[1];
  (this->Position).Scale3D.XY.m128d_f64[0] = (param_1->Position).Scale3D.XY.m128d_f64[0];
  (this->Position).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Position).Scale3D.ZW.m128d_f64[1];
  (this->Position).Scale3D.ZW.m128d_f64[0] = (param_1->Position).Scale3D.ZW.m128d_f64[0];
  (this->Position).Scale3D.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->OriginalPosition).Rotation.XY.m128d_f64[1];
  (this->OriginalPosition).Rotation.XY.m128d_f64[0] =
       (param_1->OriginalPosition).Rotation.XY.m128d_f64[0];
  (this->OriginalPosition).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->OriginalPosition).Rotation.ZW.m128d_f64[1];
  (this->OriginalPosition).Rotation.ZW.m128d_f64[0] =
       (param_1->OriginalPosition).Rotation.ZW.m128d_f64[0];
  (this->OriginalPosition).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->OriginalPosition).Translation.XY.m128d_f64[1];
  (this->OriginalPosition).Translation.XY.m128d_f64[0] =
       (param_1->OriginalPosition).Translation.XY.m128d_f64[0];
  (this->OriginalPosition).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->OriginalPosition).Translation.ZW.m128d_f64[1];
  (this->OriginalPosition).Translation.ZW.m128d_f64[0] =
       (param_1->OriginalPosition).Translation.ZW.m128d_f64[0];
  (this->OriginalPosition).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->OriginalPosition).Scale3D.XY.m128d_f64[1];
  (this->OriginalPosition).Scale3D.XY.m128d_f64[0] =
       (param_1->OriginalPosition).Scale3D.XY.m128d_f64[0];
  (this->OriginalPosition).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->OriginalPosition).Scale3D.ZW.m128d_f64[1];
  (this->OriginalPosition).Scale3D.ZW.m128d_f64[0] =
       (param_1->OriginalPosition).Scale3D.ZW.m128d_f64[0];
  (this->OriginalPosition).Scale3D.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InterpolatedPosition).Rotation.XY.m128d_f64[1];
  (this->InterpolatedPosition).Rotation.XY.m128d_f64[0] =
       (param_1->InterpolatedPosition).Rotation.XY.m128d_f64[0];
  (this->InterpolatedPosition).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InterpolatedPosition).Rotation.ZW.m128d_f64[1];
  (this->InterpolatedPosition).Rotation.ZW.m128d_f64[0] =
       (param_1->InterpolatedPosition).Rotation.ZW.m128d_f64[0];
  (this->InterpolatedPosition).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InterpolatedPosition).Translation.XY.m128d_f64[1];
  (this->InterpolatedPosition).Translation.XY.m128d_f64[0] =
       (param_1->InterpolatedPosition).Translation.XY.m128d_f64[0];
  (this->InterpolatedPosition).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InterpolatedPosition).Translation.ZW.m128d_f64[1];
  (this->InterpolatedPosition).Translation.ZW.m128d_f64[0] =
       (param_1->InterpolatedPosition).Translation.ZW.m128d_f64[0];
  (this->InterpolatedPosition).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InterpolatedPosition).Scale3D.XY.m128d_f64[1];
  (this->InterpolatedPosition).Scale3D.XY.m128d_f64[0] =
       (param_1->InterpolatedPosition).Scale3D.XY.m128d_f64[0];
  (this->InterpolatedPosition).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InterpolatedPosition).Scale3D.ZW.m128d_f64[1];
  (this->InterpolatedPosition).Scale3D.ZW.m128d_f64[0] =
       (param_1->InterpolatedPosition).Scale3D.ZW.m128d_f64[0];
  (this->InterpolatedPosition).Scale3D.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->SavedRotation).Yaw;
  (this->SavedRotation).Pitch = (param_1->SavedRotation).Pitch;
  (this->SavedRotation).Yaw = dVar4;
  (this->SavedRotation).Roll = (param_1->SavedRotation).Roll;
  this->Length = param_1->Length;
  this->BoneIndex = param_1->BoneIndex;
  this->TransformIndex = param_1->TransformIndex;
  dVar4 = (param_1->DefaultDirToParent).field0_0x0._s_0.Y;
  (this->DefaultDirToParent).field0_0x0._s_0.X = (param_1->DefaultDirToParent).field0_0x0._s_0.X;
  (this->DefaultDirToParent).field0_0x0._s_0.Y = dVar4;
  (this->DefaultDirToParent).field0_0x0._s_0.Z = (param_1->DefaultDirToParent).field0_0x0._s_0.Z;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ChildZeroLengthTransformIndices).ArrayNum =
         (param_1->ChildZeroLengthTransformIndices).ArrayNum;
    (this->ChildZeroLengthTransformIndices).ArrayMax =
         (param_1->ChildZeroLengthTransformIndices).ArrayMax;
    (param_1->ChildZeroLengthTransformIndices).ArrayNum = 0;
    (param_1->ChildZeroLengthTransformIndices).ArrayMax = 0;
  }
  return this;
}

