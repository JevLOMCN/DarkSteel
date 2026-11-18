// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// FPerlinNoise @ 14d5fccd0

FPerlinNoise * __thiscall
UE::Cameras::FPerlinNoise::FPerlinNoise(FPerlinNoise *this,FPerlinNoiseData *param_1,uchar param_2)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  
  fVar1 = __real_3f800000;
  this->Amplitude = param_1->Amplitude;
  this->Lacunarity = 2.0;
  this->OctaveGain = 0.5;
  bVar3 = 4;
  if (param_2 < 4) {
    bVar3 = param_2;
  }
  bVar2 = 1;
  if (1 < bVar3) {
    bVar2 = bVar3;
  }
  this->NumOctaves = bVar2;
  this->Octaves[0].Frequency = 1.0;
  this->Octaves[0].CurTime = 0.0;
  this->Octaves[0].Prev = 0.0;
  this->Octaves[0].Next = 0.0;
  this->Octaves[1].Frequency = 1.0;
  this->Octaves[1].CurTime = 0.0;
  this->Octaves[1].Prev = 0.0;
  this->Octaves[1].Next = 0.0;
  this->Octaves[2].Frequency = 1.0;
  this->Octaves[2].CurTime = 0.0;
  this->Octaves[2].Prev = 0.0;
  this->Octaves[2].Next = 0.0;
  this->Octaves[3].Frequency = 1.0;
  this->Octaves[3].CurTime = 0.0;
  this->Octaves[3].Prev = 0.0;
  this->Octaves[3].Next = 0.0;
  Initialize(this,fVar1);
  return this;
}

// FPerlinNoise @ 14d5fcd60

FPerlinNoise * __thiscall
UE::Cameras::FPerlinNoise::FPerlinNoise
          (FPerlinNoise *this,float param_1,float param_2,uchar param_3)

{
  byte bVar1;
  byte bVar2;
  
  this->Amplitude = param_1;
  this->Lacunarity = 2.0;
  this->OctaveGain = 0.5;
  bVar2 = 4;
  if (param_3 < 4) {
    bVar2 = param_3;
  }
  bVar1 = 1;
  if (1 < bVar2) {
    bVar1 = bVar2;
  }
  this->NumOctaves = bVar1;
  this->Octaves[0].Frequency = 1.0;
  this->Octaves[0].CurTime = 0.0;
  this->Octaves[0].Prev = 0.0;
  this->Octaves[0].Next = 0.0;
  this->Octaves[1].Frequency = 1.0;
  this->Octaves[1].CurTime = 0.0;
  this->Octaves[1].Prev = 0.0;
  this->Octaves[1].Next = 0.0;
  this->Octaves[2].Frequency = 1.0;
  this->Octaves[2].CurTime = 0.0;
  this->Octaves[2].Prev = 0.0;
  this->Octaves[2].Next = 0.0;
  this->Octaves[3].Frequency = 1.0;
  this->Octaves[3].CurTime = 0.0;
  this->Octaves[3].Prev = 0.0;
  this->Octaves[3].Next = 0.0;
  Initialize(this,param_2);
  return this;
}

// FPerlinNoise @ 14d5fcdf0

FPerlinNoise * __thiscall UE::Cameras::FPerlinNoise::FPerlinNoise(FPerlinNoise *this)

{
  float fVar1;
  
  fVar1 = __real_3f800000;
  this->Amplitude = 1.0;
  this->Lacunarity = 2.0;
  this->OctaveGain = 0.5;
  this->NumOctaves = '\x01';
  this->Octaves[0].Prev = 0.0;
  this->Octaves[0].Next = 0.0;
  this->Octaves[0].Frequency = 1.0;
  this->Octaves[0].CurTime = 0.0;
  this->Octaves[1].Frequency = 1.0;
  this->Octaves[1].CurTime = 0.0;
  this->Octaves[1].Prev = 0.0;
  this->Octaves[1].Next = 0.0;
  this->Octaves[2].Frequency = 1.0;
  this->Octaves[2].CurTime = 0.0;
  this->Octaves[2].Prev = 0.0;
  this->Octaves[2].Next = 0.0;
  this->Octaves[3].Frequency = 1.0;
  this->Octaves[3].CurTime = 0.0;
  this->Octaves[3].Prev = 0.0;
  this->Octaves[3].Next = 0.0;
  Initialize(this,fVar1);
  return this;
}

// GenerateValue @ 14d617aa0

float __thiscall UE::Cameras::FPerlinNoise::GenerateValue(FPerlinNoise *this,float param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar8 = __real_41700000;
  fVar7 = __real_38800100;
  fVar6 = __real_40c00000;
  fVar5 = __real_41200000;
  fVar4 = __real_3f800000;
  iVar11 = 0;
  fVar16 = 0.0;
  fVar17 = this->Amplitude;
  if (this->NumOctaves == '\0') {
    fVar16 = 0.0;
  }
  else {
    pfVar10 = &this->Octaves[0].CurTime;
    do {
      fVar14 = fVar4;
      if (0.0 < ((FSinglePerlinNoise *)(pfVar10 + -1))->Frequency) {
        fVar14 = fVar4 / ((FSinglePerlinNoise *)(pfVar10 + -1))->Frequency;
      }
      fVar15 = (*pfVar10 + param_1) * (fVar4 / fVar14);
      if ((int)(*pfVar10 * (fVar4 / fVar14)) < (int)fVar15) {
        pfVar10[1] = pfVar10[2];
        uVar9 = rand();
        pfVar10[2] = (float)(uVar9 & 0x7fff) * fVar7 - fVar4;
      }
      pfVar1 = pfVar10 + 2;
      auVar13._4_4_ = in_XMM1_Db;
      auVar13._0_4_ = param_1;
      auVar13._8_4_ = in_XMM1_Dc;
      auVar13._12_4_ = in_XMM1_Dd;
      iVar11 = iVar11 + 1;
      auVar12._4_12_ = auVar13._4_12_;
      auVar12._0_4_ = param_1 + *pfVar10;
      *pfVar10 = auVar12._0_4_;
      pfVar2 = pfVar10 + 1;
      auVar13 = roundps(auVar12,ZEXT416((uint)fVar15),3);
      fVar15 = fVar15 - auVar13._0_4_;
      pfVar3 = pfVar10 + 1;
      pfVar10 = pfVar10 + 4;
      fVar14 = ((*pfVar1 - *pfVar2) * fVar15 * fVar15 *
                ((fVar15 * fVar6 - fVar8) * fVar15 + fVar5) * fVar15 + *pfVar3) * fVar17;
      fVar17 = fVar17 * this->OctaveGain;
      fVar16 = fVar16 + fVar14;
    } while (iVar11 < (int)(uint)this->NumOctaves);
  }
  return fVar16;
}

// Initialize @ 14d61fa70

void __thiscall UE::Cameras::FPerlinNoise::Initialize(FPerlinNoise *this,float param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  
  fVar2 = __real_38800100;
  fVar1 = __real_3f800000;
  iVar5 = 0;
  if (this->NumOctaves != '\0') {
    pfVar4 = &this->Octaves[0].Prev;
    do {
      ((FSinglePerlinNoise *)(pfVar4 + -2))->Frequency = param_1;
      uVar3 = rand();
      *pfVar4 = (float)(uVar3 & 0x7fff) * fVar2 - fVar1;
      uVar3 = rand();
      iVar5 = iVar5 + 1;
      pfVar4[1] = (float)(uVar3 & 0x7fff) * fVar2 - fVar1;
      pfVar4 = pfVar4 + 4;
      param_1 = param_1 * this->Lacunarity;
    } while (iVar5 < (int)(uint)this->NumOctaves);
  }
  return;
}

// Serialize @ 14d635820

void __thiscall UE::Cameras::FPerlinNoise::Serialize(FPerlinNoise *this,FArchive *param_1)

{
  FSinglePerlinNoise *pFVar1;
  undefined1 *puVar2;
  float *pfVar3;
  uchar *puVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  
  pfVar7 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->Amplitude = *pfVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar7 = &this->Lacunarity;
  puVar2 = &param_1->field_0x2a;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar7,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar7);
    }
  }
  else {
    *pfVar7 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar7 = &this->OctaveGain;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar7,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar7);
    }
  }
  else {
    *pfVar7 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumOctaves,1);
  }
  else {
    this->NumOctaves = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pfVar7 = &this->Octaves[0].Prev;
  lVar6 = 4;
  do {
    pFVar1 = (FSinglePerlinNoise *)(pfVar7 + -2);
    pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
      }
    }
    else {
      pFVar1->Frequency = *pfVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar3 = pfVar7 + -1;
    pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
      }
    }
    else {
      *pfVar3 = *pfVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar7,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar7);
      }
    }
    else {
      *pfVar7 = *pfVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar3 = pfVar7 + 1;
    pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
      }
    }
    else {
      *pfVar3 = *pfVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar7 = pfVar7 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

// SetFrequency @ 14d635d70

void __thiscall UE::Cameras::FPerlinNoise::SetFrequency(FPerlinNoise *this,float param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = __real_3f800000;
  if ((param_1 != this->Octaves[0].Frequency) && (iVar4 = 0, this->NumOctaves != '\0')) {
    pfVar3 = &this->Octaves[0].CurTime;
    do {
      fVar5 = fVar2;
      if (0.0 < ((FSinglePerlinNoise *)(pfVar3 + -1))->Frequency) {
        fVar5 = fVar2 / ((FSinglePerlinNoise *)(pfVar3 + -1))->Frequency;
      }
      fVar1 = *pfVar3;
      fVar6 = (float)truncf(fVar1 / fVar5);
      fVar6 = fVar1 / fVar5 - fVar6;
      ((FSinglePerlinNoise *)(pfVar3 + -1))->Frequency = param_1;
      if (0.0 < param_1) {
        fVar6 = fVar6 / param_1;
      }
      *pfVar3 = fVar6;
      iVar4 = iVar4 + 1;
      pfVar3 = pfVar3 + 4;
      param_1 = param_1 * this->Lacunarity;
    } while (iVar4 < (int)(uint)this->NumOctaves);
  }
  return;
}

// SetNumOctaves @ 14d635e50

void __thiscall UE::Cameras::FPerlinNoise::SetNumOctaves(FPerlinNoise *this,uchar param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  float fVar10;
  
  fVar3 = __real_38800100;
  fVar2 = __real_3f800000;
  uVar5 = 4;
  if ((ulonglong)param_1 < 4) {
    uVar5 = (ulonglong)param_1;
  }
  uVar9 = 1;
  if (1 < uVar5) {
    uVar9 = uVar5;
  }
  bVar1 = this->NumOctaves;
  uVar5 = (ulonglong)bVar1;
  bVar8 = (byte)uVar9;
  if (bVar1 <= bVar8) {
    if (bVar1 < bVar8) {
      fVar10 = this->Octaves[uVar5 - 1].Frequency * this->Lacunarity;
      if (uVar5 < uVar9) {
        lVar7 = uVar9 - uVar5;
        pfVar6 = &this->Octaves[uVar5].CurTime;
        do {
          ((FSinglePerlinNoise *)(pfVar6 + -1))->Frequency = fVar10;
          *pfVar6 = 0.0;
          uVar4 = rand();
          pfVar6[1] = (float)(uVar4 & 0x7fff) * fVar3 - fVar2;
          uVar4 = rand();
          pfVar6[2] = (float)(uVar4 & 0x7fff) * fVar3 - fVar2;
          pfVar6 = pfVar6 + 4;
          fVar10 = fVar10 * this->Lacunarity;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      this->NumOctaves = bVar8;
    }
    return;
  }
  this->NumOctaves = bVar8;
  return;
}

