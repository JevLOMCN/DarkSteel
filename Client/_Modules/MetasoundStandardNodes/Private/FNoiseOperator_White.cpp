// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 5

// Execute @ 14b18aa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FNoiseOperator_White::Execute(FNoiseOperator_White *this)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  float *pfVar7;
  float fVar8;
  FRandomStream local_res8;
  
  iVar5 = *(int *)this->_padding_;
  if ((int)this->_padding_ != iVar5) {
    if (iVar5 == -1) {
      Audio::FWhiteNoise::FWhiteNoise((FWhiteNoise *)&local_res8);
    }
    else {
      Audio::FWhiteNoise::FWhiteNoise((FWhiteNoise *)&local_res8,iVar5);
    }
    (this->Generator).RandomStream = local_res8;
    *(int *)&this->_padding_ = iVar5;
  }
  plVar1 = (longlong *)this->_padding_;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar7 = (float *)*plVar1;
  lVar2 = this->_padding_;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  fVar3 = __real_3f800000;
  iVar5 = *(int *)(lVar2 + 8);
  if (3 < iVar5) {
    uVar4 = (iVar5 - 4U >> 2) + 1;
    uVar6 = (ulonglong)uVar4;
    iVar5 = iVar5 + uVar4 * -4;
    do {
      uVar4 = (this->Generator).RandomStream.Seed * 0xbb38435 + 0x3619636b;
      (this->Generator).RandomStream.Seed = uVar4;
      fVar8 = (float)(uVar4 >> 9 | 0x3f800000) - fVar3;
      *pfVar7 = (fVar8 + fVar8) - fVar3;
      uVar4 = (this->Generator).RandomStream.Seed * 0xbb38435 + 0x3619636b;
      (this->Generator).RandomStream.Seed = uVar4;
      fVar8 = (float)(uVar4 >> 9 | 0x3f800000) - fVar3;
      pfVar7[1] = (fVar8 + fVar8) - fVar3;
      uVar4 = (this->Generator).RandomStream.Seed * 0xbb38435 + 0x3619636b;
      (this->Generator).RandomStream.Seed = uVar4;
      fVar8 = (float)(uVar4 >> 9 | 0x3f800000) - fVar3;
      pfVar7[2] = (fVar8 + fVar8) - fVar3;
      uVar4 = (this->Generator).RandomStream.Seed * 0xbb38435 + 0x3619636b;
      (this->Generator).RandomStream.Seed = uVar4;
      fVar8 = (float)(uVar4 >> 9 | 0x3f800000) - fVar3;
      pfVar7[3] = (fVar8 + fVar8) - fVar3;
      pfVar7 = pfVar7 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  for (; 0 < iVar5; iVar5 = iVar5 + -1) {
    uVar4 = (this->Generator).RandomStream.Seed * 0xbb38435 + 0x3619636b;
    (this->Generator).RandomStream.Seed = uVar4;
    fVar8 = (float)(uVar4 >> 9 | 0x3f800000) - fVar3;
    *pfVar7 = (fVar8 + fVar8) - fVar3;
    pfVar7 = pfVar7 + 1;
  }
  return;
}

// ExecuteFunction @ 14b18cb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Metasound::FNoiseOperator_White::ExecuteFunction(IOperator *param_1)

{
  IOperator IVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  float *pfVar6;
  float fVar7;
  FRandomStream FStackX_8;
  
  iVar4 = *(int *)param_1[2];
  if (*(int *)(param_1 + 0xd) != iVar4) {
    if (iVar4 == -1) {
      Audio::FWhiteNoise::FWhiteNoise((FWhiteNoise *)&FStackX_8);
    }
    else {
      Audio::FWhiteNoise::FWhiteNoise((FWhiteNoise *)&FStackX_8,iVar4);
    }
    *(FRandomStream *)(param_1 + 0xe) = FStackX_8;
    *(int *)(param_1 + 0xd) = iVar4;
  }
  IVar1 = param_1[10];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar1 + 0x10) != *(int *)((longlong)IVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar6 = *(float **)IVar1;
  IVar1 = param_1[10];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar1 + 0x10) != *(int *)((longlong)IVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  fVar2 = __real_3f800000;
  iVar4 = *(int *)((longlong)IVar1 + 8);
  if (3 < iVar4) {
    uVar3 = (iVar4 - 4U >> 2) + 1;
    uVar5 = (ulonglong)uVar3;
    iVar4 = iVar4 + uVar3 * -4;
    do {
      uVar3 = *(int *)&param_1[0xe].field_0x4 * 0xbb38435 + 0x3619636b;
      *(uint *)&param_1[0xe].field_0x4 = uVar3;
      fVar7 = (float)(uVar3 >> 9 | 0x3f800000) - fVar2;
      *pfVar6 = (fVar7 + fVar7) - fVar2;
      uVar3 = *(int *)&param_1[0xe].field_0x4 * 0xbb38435 + 0x3619636b;
      *(uint *)&param_1[0xe].field_0x4 = uVar3;
      fVar7 = (float)(uVar3 >> 9 | 0x3f800000) - fVar2;
      pfVar6[1] = (fVar7 + fVar7) - fVar2;
      uVar3 = *(int *)&param_1[0xe].field_0x4 * 0xbb38435 + 0x3619636b;
      *(uint *)&param_1[0xe].field_0x4 = uVar3;
      fVar7 = (float)(uVar3 >> 9 | 0x3f800000) - fVar2;
      pfVar6[2] = (fVar7 + fVar7) - fVar2;
      uVar3 = *(int *)&param_1[0xe].field_0x4 * 0xbb38435 + 0x3619636b;
      *(uint *)&param_1[0xe].field_0x4 = uVar3;
      fVar7 = (float)(uVar3 >> 9 | 0x3f800000) - fVar2;
      pfVar6[3] = (fVar7 + fVar7) - fVar2;
      pfVar6 = pfVar6 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  for (; 0 < iVar4; iVar4 = iVar4 + -1) {
    uVar3 = *(int *)&param_1[0xe].field_0x4 * 0xbb38435 + 0x3619636b;
    *(uint *)&param_1[0xe].field_0x4 = uVar3;
    fVar7 = (float)(uVar3 >> 9 | 0x3f800000) - fVar2;
    *pfVar6 = (fVar7 + fVar7) - fVar2;
    pfVar6 = pfVar6 + 1;
  }
  return;
}

// GetExecuteFunction @ 14b191d90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::FNoiseOperator_White::GetExecuteFunction(FNoiseOperator_White *this)

{
  return ExecuteFunction;
}

// GetResetFunction @ 14b1988d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::FNoiseOperator_White::GetResetFunction(FNoiseOperator_White *this)

{
  return ResetFunction;
}

// ResetFunction @ 14b1aa440

void __cdecl
Metasound::FNoiseOperator_White::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  FRandomStream local_res8 [4];
  
  if (*(int *)param_1[2] == -1) {
    Audio::FWhiteNoise::FWhiteNoise((FWhiteNoise *)local_res8);
  }
  else {
    Audio::FWhiteNoise::FWhiteNoise((FWhiteNoise *)local_res8,*(int *)param_1[2]);
  }
  *(FRandomStream *)(param_1 + 0xe) = local_res8[0];
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)param_1[2];
  iVar1 = *(int *)((longlong)param_1[10] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[10],0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

