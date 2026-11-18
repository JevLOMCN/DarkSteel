// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// FPerlinNoiseLocationShakeCameraNodeEvaluator @ 14d655c20

FPerlinNoiseLocationShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::
FPerlinNoiseLocationShakeCameraNodeEvaluator(FPerlinNoiseLocationShakeCameraNodeEvaluator *this)

{
  int *piVar1;
  TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPerlinNoiseLocationShakeCameraNodeEvaluator_Cameras_UE__6B_;
  (this->AmplitudeMultiplier).DefaultValuePtr = (float *)0x0;
  (this->FrequencyMultiplier).DefaultValuePtr = (float *)0x0;
  (this->Octaves).DefaultValuePtr = (int *)0x0;
  *(undefined4 *)&this->_padding_ = 7;
  (this->AmplitudeMultiplier).VariableID.Value = 0xffffffff;
  (this->FrequencyMultiplier).VariableID.Value = 0xffffffff;
  (this->Octaves).VariableID.Value = 0xffffffff;
  FPerlinNoise::FPerlinNoise(&this->GeneratorX);
  FPerlinNoise::FPerlinNoise(&this->GeneratorY);
  FPerlinNoise::FPerlinNoise(&this->GeneratorZ);
  pTVar2 = &(this->NoiseValues).Entries;
  (this->NoiseValues).CurrentMinValue = 0.0;
  (this->NoiseValues).CurrentMaxValue = 0.0;
  piVar1 = &(this->NoiseValues).Entries.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->NoiseValues).Entries.ArrayNum = 0;
  *piVar1 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,0x14,&pTVar2->AllocatorInstance,0,piVar1);
  return this;
}

// GetTypeID @ 14d661c90

FCameraObjectTypeID * __thiscall
UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::GetTypeID
          (FPerlinNoiseLocationShakeCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d663050

bool __thiscall
UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::IsKindOf
          (FPerlinNoiseLocationShakeCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                FShakeCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d665020

void __thiscall
UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::OnBuildDebugBlocks
          (FPerlinNoiseLocationShakeCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FPerlinNoiseLocationShakeDebugBlock *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x40,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (pFVar1->NoiseValues).CurrentMinValue = 0.0;
  (pFVar1->NoiseValues).CurrentMaxValue = 0.0;
  (pFVar1->NoiseValues).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->NoiseValues).Entries.ArrayNum = 0;
  (pFVar1->NoiseValues).Entries.ArrayMax = 0;
  pFVar1 = FPerlinNoiseLocationShakeDebugBlock::FPerlinNoiseLocationShakeDebugBlock(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)pFVar1);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,(FCameraDebugBlock *)pFVar1);
  TCameraDebugGraph<3>::operator=(&pFVar1->NoiseValues,&this->NoiseValues);
  return;
}

// OnInitialize @ 14d6684f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::OnInitialize
          (FPerlinNoiseLocationShakeCameraNodeEvaluator *this,
          FCameraNodeEvaluatorInitializeParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uchar uVar4;
  undefined3 uVar5;
  float fVar6;
  bool bVar7;
  UClass *pUVar8;
  int *piVar9;
  float *pfVar10;
  FPerlinNoise *pFVar11;
  FCameraVariableTable *pFVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  FPerlinNoise local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,NeedsSerialize);
  if (this->_padding_ != 0) {
    pUVar8 = UPerlinNoiseLocationShakeCameraNode::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar7) {
      lVar13 = this->_padding_;
      goto LAB_14d668555;
    }
  }
  lVar13 = 0;
LAB_14d668555:
  pFVar12 = &param_2->VariableTable;
  (this->AmplitudeMultiplier).DefaultValuePtr = (float *)(lVar13 + 0x38);
  (this->AmplitudeMultiplier).VariableID.Value = *(uint *)(lVar13 + 0x3c);
  (this->FrequencyMultiplier).DefaultValuePtr = (float *)(lVar13 + 0x48);
  (this->FrequencyMultiplier).VariableID.Value = *(uint *)(lVar13 + 0x4c);
  (this->Octaves).DefaultValuePtr = (int *)(lVar13 + 0x58);
  (this->Octaves).VariableID.Value = *(uint *)(lVar13 + 0x5c);
  piVar9 = TCameraParameterReader<int>::Get(&this->Octaves,pFVar12);
  iVar3 = *piVar9;
  pfVar10 = TCameraParameterReader<float>::Get(&this->FrequencyMultiplier,pFVar12);
  fVar1 = *(float *)(lVar13 + 0x6c);
  fVar2 = *pfVar10;
  pfVar10 = TCameraParameterReader<float>::Get(&this->AmplitudeMultiplier,pFVar12);
  pFVar11 = FPerlinNoise::FPerlinNoise
                      (&local_98,*(float *)(lVar13 + 0x68) * *pfVar10,fVar1 * fVar2,(uchar)iVar3);
  fVar1 = pFVar11->Lacunarity;
  fVar2 = pFVar11->OctaveGain;
  uVar4 = pFVar11->NumOctaves;
  uVar5 = *(undefined3 *)&pFVar11->field_0xd;
  (this->GeneratorX).Amplitude = pFVar11->Amplitude;
  (this->GeneratorX).Lacunarity = fVar1;
  (this->GeneratorX).OctaveGain = fVar2;
  (this->GeneratorX).NumOctaves = uVar4;
  *(undefined3 *)&(this->GeneratorX).field_0xd = uVar5;
  fVar1 = pFVar11->Octaves[0].CurTime;
  fVar2 = pFVar11->Octaves[0].Prev;
  fVar6 = pFVar11->Octaves[0].Next;
  (this->GeneratorX).Octaves[0].Frequency = pFVar11->Octaves[0].Frequency;
  (this->GeneratorX).Octaves[0].CurTime = fVar1;
  (this->GeneratorX).Octaves[0].Prev = fVar2;
  (this->GeneratorX).Octaves[0].Next = fVar6;
  fVar1 = pFVar11->Octaves[1].CurTime;
  fVar2 = pFVar11->Octaves[1].Prev;
  fVar6 = pFVar11->Octaves[1].Next;
  (this->GeneratorX).Octaves[1].Frequency = pFVar11->Octaves[1].Frequency;
  (this->GeneratorX).Octaves[1].CurTime = fVar1;
  (this->GeneratorX).Octaves[1].Prev = fVar2;
  (this->GeneratorX).Octaves[1].Next = fVar6;
  fVar1 = pFVar11->Octaves[2].CurTime;
  fVar2 = pFVar11->Octaves[2].Prev;
  fVar6 = pFVar11->Octaves[2].Next;
  (this->GeneratorX).Octaves[2].Frequency = pFVar11->Octaves[2].Frequency;
  (this->GeneratorX).Octaves[2].CurTime = fVar1;
  (this->GeneratorX).Octaves[2].Prev = fVar2;
  (this->GeneratorX).Octaves[2].Next = fVar6;
  fVar1 = pFVar11->Octaves[3].CurTime;
  fVar2 = pFVar11->Octaves[3].Prev;
  fVar6 = pFVar11->Octaves[3].Next;
  (this->GeneratorX).Octaves[3].Frequency = pFVar11->Octaves[3].Frequency;
  (this->GeneratorX).Octaves[3].CurTime = fVar1;
  (this->GeneratorX).Octaves[3].Prev = fVar2;
  (this->GeneratorX).Octaves[3].Next = fVar6;
  piVar9 = TCameraParameterReader<int>::Get(&this->Octaves,pFVar12);
  iVar3 = *piVar9;
  pfVar10 = TCameraParameterReader<float>::Get(&this->FrequencyMultiplier,pFVar12);
  fVar1 = *pfVar10;
  fVar2 = *(float *)(lVar13 + 0x74);
  pfVar10 = TCameraParameterReader<float>::Get(&this->AmplitudeMultiplier,pFVar12);
  pFVar11 = FPerlinNoise::FPerlinNoise
                      (&local_98,*(float *)(lVar13 + 0x70) * *pfVar10,fVar1 * fVar2,(uchar)iVar3);
  fVar1 = pFVar11->Lacunarity;
  fVar2 = pFVar11->OctaveGain;
  uVar4 = pFVar11->NumOctaves;
  uVar5 = *(undefined3 *)&pFVar11->field_0xd;
  (this->GeneratorY).Amplitude = pFVar11->Amplitude;
  (this->GeneratorY).Lacunarity = fVar1;
  (this->GeneratorY).OctaveGain = fVar2;
  (this->GeneratorY).NumOctaves = uVar4;
  *(undefined3 *)&(this->GeneratorY).field_0xd = uVar5;
  fVar1 = pFVar11->Octaves[0].CurTime;
  fVar2 = pFVar11->Octaves[0].Prev;
  fVar6 = pFVar11->Octaves[0].Next;
  (this->GeneratorY).Octaves[0].Frequency = pFVar11->Octaves[0].Frequency;
  (this->GeneratorY).Octaves[0].CurTime = fVar1;
  (this->GeneratorY).Octaves[0].Prev = fVar2;
  (this->GeneratorY).Octaves[0].Next = fVar6;
  fVar1 = pFVar11->Octaves[1].CurTime;
  fVar2 = pFVar11->Octaves[1].Prev;
  fVar6 = pFVar11->Octaves[1].Next;
  (this->GeneratorY).Octaves[1].Frequency = pFVar11->Octaves[1].Frequency;
  (this->GeneratorY).Octaves[1].CurTime = fVar1;
  (this->GeneratorY).Octaves[1].Prev = fVar2;
  (this->GeneratorY).Octaves[1].Next = fVar6;
  fVar1 = pFVar11->Octaves[2].CurTime;
  fVar2 = pFVar11->Octaves[2].Prev;
  fVar6 = pFVar11->Octaves[2].Next;
  (this->GeneratorY).Octaves[2].Frequency = pFVar11->Octaves[2].Frequency;
  (this->GeneratorY).Octaves[2].CurTime = fVar1;
  (this->GeneratorY).Octaves[2].Prev = fVar2;
  (this->GeneratorY).Octaves[2].Next = fVar6;
  fVar1 = pFVar11->Octaves[3].CurTime;
  fVar2 = pFVar11->Octaves[3].Prev;
  fVar6 = pFVar11->Octaves[3].Next;
  (this->GeneratorY).Octaves[3].Frequency = pFVar11->Octaves[3].Frequency;
  (this->GeneratorY).Octaves[3].CurTime = fVar1;
  (this->GeneratorY).Octaves[3].Prev = fVar2;
  (this->GeneratorY).Octaves[3].Next = fVar6;
  piVar9 = TCameraParameterReader<int>::Get(&this->Octaves,pFVar12);
  iVar3 = *piVar9;
  pfVar10 = TCameraParameterReader<float>::Get(&this->FrequencyMultiplier,pFVar12);
  fVar1 = *pfVar10;
  fVar2 = *(float *)(lVar13 + 0x74);
  pfVar10 = TCameraParameterReader<float>::Get(&this->AmplitudeMultiplier,pFVar12);
  pFVar11 = FPerlinNoise::FPerlinNoise
                      (&local_98,*(float *)(lVar13 + 0x70) * *pfVar10,fVar1 * fVar2,(uchar)iVar3);
  fVar1 = pFVar11->Lacunarity;
  fVar2 = pFVar11->OctaveGain;
  uVar4 = pFVar11->NumOctaves;
  uVar5 = *(undefined3 *)&pFVar11->field_0xd;
  (this->GeneratorY).Amplitude = pFVar11->Amplitude;
  (this->GeneratorY).Lacunarity = fVar1;
  (this->GeneratorY).OctaveGain = fVar2;
  (this->GeneratorY).NumOctaves = uVar4;
  *(undefined3 *)&(this->GeneratorY).field_0xd = uVar5;
  fVar1 = pFVar11->Octaves[0].CurTime;
  fVar2 = pFVar11->Octaves[0].Prev;
  fVar6 = pFVar11->Octaves[0].Next;
  (this->GeneratorY).Octaves[0].Frequency = pFVar11->Octaves[0].Frequency;
  (this->GeneratorY).Octaves[0].CurTime = fVar1;
  (this->GeneratorY).Octaves[0].Prev = fVar2;
  (this->GeneratorY).Octaves[0].Next = fVar6;
  fVar1 = pFVar11->Octaves[1].CurTime;
  fVar2 = pFVar11->Octaves[1].Prev;
  fVar6 = pFVar11->Octaves[1].Next;
  (this->GeneratorY).Octaves[1].Frequency = pFVar11->Octaves[1].Frequency;
  (this->GeneratorY).Octaves[1].CurTime = fVar1;
  (this->GeneratorY).Octaves[1].Prev = fVar2;
  (this->GeneratorY).Octaves[1].Next = fVar6;
  fVar1 = pFVar11->Octaves[2].CurTime;
  fVar2 = pFVar11->Octaves[2].Prev;
  fVar6 = pFVar11->Octaves[2].Next;
  (this->GeneratorY).Octaves[2].Frequency = pFVar11->Octaves[2].Frequency;
  (this->GeneratorY).Octaves[2].CurTime = fVar1;
  (this->GeneratorY).Octaves[2].Prev = fVar2;
  (this->GeneratorY).Octaves[2].Next = fVar6;
  fVar1 = pFVar11->Octaves[3].CurTime;
  fVar2 = pFVar11->Octaves[3].Prev;
  fVar6 = pFVar11->Octaves[3].Next;
  (this->GeneratorY).Octaves[3].Frequency = pFVar11->Octaves[3].Frequency;
  (this->GeneratorY).Octaves[3].CurTime = fVar1;
  (this->GeneratorY).Octaves[3].Prev = fVar2;
  (this->GeneratorY).Octaves[3].Next = fVar6;
  return;
}

// OnRun @ 14d66d650

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::OnRun
          (FPerlinNoiseLocationShakeCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  float *pfVar3;
  int *piVar4;
  longlong lVar5;
  FCameraVariableTable *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (this->_padding_ != 0) {
    pUVar2 = UPerlinNoiseLocationShakeCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar5 = this->_padding_;
      goto LAB_14d66d69d;
    }
  }
  lVar5 = 0;
LAB_14d66d69d:
  pFVar6 = &param_2->VariableTable;
  pfVar3 = TCameraParameterReader<float>::Get(&this->AmplitudeMultiplier,pFVar6);
  (this->GeneratorX).Amplitude = *(float *)(lVar5 + 0x68) * *pfVar3;
  pfVar3 = TCameraParameterReader<float>::Get(&this->FrequencyMultiplier,pFVar6);
  FPerlinNoise::SetFrequency(&this->GeneratorX,*(float *)(lVar5 + 0x6c) * *pfVar3);
  piVar4 = TCameraParameterReader<int>::Get(&this->Octaves,pFVar6);
  FPerlinNoise::SetNumOctaves(&this->GeneratorX,(uchar)*piVar4);
  pfVar3 = TCameraParameterReader<float>::Get(&this->AmplitudeMultiplier,pFVar6);
  (this->GeneratorY).Amplitude = *(float *)(lVar5 + 0x70) * *pfVar3;
  pfVar3 = TCameraParameterReader<float>::Get(&this->FrequencyMultiplier,pFVar6);
  FPerlinNoise::SetFrequency(&this->GeneratorY,*(float *)(lVar5 + 0x74) * *pfVar3);
  piVar4 = TCameraParameterReader<int>::Get(&this->Octaves,pFVar6);
  FPerlinNoise::SetNumOctaves(&this->GeneratorY,(uchar)*piVar4);
  pfVar3 = TCameraParameterReader<float>::Get(&this->AmplitudeMultiplier,pFVar6);
  (this->GeneratorZ).Amplitude = *(float *)(lVar5 + 0x78) * *pfVar3;
  pfVar3 = TCameraParameterReader<float>::Get(&this->FrequencyMultiplier,pFVar6);
  FPerlinNoise::SetFrequency(&this->GeneratorZ,*(float *)(lVar5 + 0x7c) * *pfVar3);
  piVar4 = TCameraParameterReader<int>::Get(&this->Octaves,pFVar6);
  FPerlinNoise::SetNumOctaves(&this->GeneratorZ,(uchar)*piVar4);
  fVar7 = FPerlinNoise::GenerateValue(&this->GeneratorX,param_1->DeltaTime);
  fVar8 = FPerlinNoise::GenerateValue(&this->GeneratorY,param_1->DeltaTime);
  fVar9 = FPerlinNoise::GenerateValue(&this->GeneratorZ,param_1->DeltaTime);
  (this->NoiseValue).field0_0x0._s_0.X = (double)fVar7;
  (this->NoiseValue).field0_0x0._s_0.Y = (double)fVar8;
  (this->NoiseValue).field0_0x0._s_0.Z = (double)fVar9;
  TCameraDebugGraph<3>::Add<float,float,float>
            (&this->NoiseValues,param_1->DeltaTime,fVar7,fVar8,fVar9);
  return;
}

// OnSerialize @ 14d66e8f0

void __thiscall
UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::OnSerialize
          (FPerlinNoiseLocationShakeCameraNodeEvaluator *this,
          FCameraNodeEvaluatorSerializeParams *param_1,FArchive *param_2)

{
  FPerlinNoise::Serialize(&this->GeneratorX,param_2);
  FPerlinNoise::Serialize(&this->GeneratorY,param_2);
  FPerlinNoise::Serialize(&this->GeneratorZ,param_2);
  return;
}

// OnShakeResult @ 14d66edf0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::OnShakeResult
          (FPerlinNoiseLocationShakeCameraNodeEvaluator *this,FCameraNodeShakeParams *param_1,
          FCameraNodeShakeResult *param_2)

{
  (param_2->ShakeDelta).Location.field0_0x0._s_0.X =
       (param_2->ShakeDelta).Location.field0_0x0._s_0.X + (this->NoiseValue).field0_0x0._s_0.X;
  (param_2->ShakeDelta).Location.field0_0x0._s_0.Y =
       (this->NoiseValue).field0_0x0._s_0.Y + (param_2->ShakeDelta).Location.field0_0x0._s_0.Y;
  (param_2->ShakeDelta).Location.field0_0x0._s_0.Z =
       (this->NoiseValue).field0_0x0._s_0.Z + (param_2->ShakeDelta).Location.field0_0x0._s_0.Z;
  param_2->ShakeTimeLeft = -1.0;
  return;
}

