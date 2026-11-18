// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 4

// FPerlinAudioRate @ 14b1ce1a0

FPerlinAudioRate * __thiscall
Metasound::FPerlinAudioRate::FPerlinAudioRate
          (FPerlinAudioRate *this,FBuildOperatorParams *param_1,FPinReadRefs *param_2)

{
  longlong lVar1;
  int iVar2;
  FResetParams local_38;
  
  iVar2 = 0;
  this->_padding_ =
       (longlong)
       &___7__TBasePerlinNoiseOperator_VFAudioBuffer_Metasound__VFPerlinAudioRate_2__Metasound__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  this->_padding_ = *(longlong *)&(param_2->X).field_0x8;
  lVar1 = *(longlong *)&(param_2->X).field_0x10;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  this->_padding_ = (longlong)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  this->_padding_ = (longlong)&___7__TDataReference_H_Metasound__6B_;
  this->_padding_ = *(longlong *)&(param_2->Octaves).field_0x8;
  lVar1 = *(longlong *)&(param_2->Octaves).field_0x10;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  this->_padding_ = (longlong)&___7__TDataReadReference_H_Metasound__6B_;
  this->_padding_ = (longlong)&___7__TDataReference_M_Metasound__6B_;
  this->_padding_ = *(longlong *)&(param_2->MinValue).field_0x8;
  lVar1 = *(longlong *)&(param_2->MinValue).field_0x10;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  this->_padding_ = (longlong)&___7__TDataReadReference_M_Metasound__6B_;
  this->_padding_ = (longlong)&___7__TDataReference_M_Metasound__6B_;
  this->_padding_ = *(longlong *)&(param_2->MaxValue).field_0x8;
  lVar1 = *(longlong *)&(param_2->MaxValue).field_0x10;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  this->_padding_ = (longlong)&___7__TDataReadReference_M_Metasound__6B_;
  *(bool *)&this->_padding_ = param_2->bXConnected;
  *(float *)((longlong)&this->_padding_ + 4) = param_2->Offset;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->_padding_,NewObject,
             param_1->OperatorSettings);
  this->_padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->_padding_,NewObject,
             param_1->OperatorSettings);
  this->_padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  local_38.OperatorSettings = param_1->OperatorSettings;
  local_38.Environment = param_1->Environment;
  local_38.GraphRenderCost = param_1->GraphRenderCost;
  TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::Reset
            ((TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate> *)this,
             &local_38);
  this->_padding_ = (longlong)&___7FPerlinAudioRate_Metasound__6B_;
  if (param_2->bXConnected == false) {
    iVar2 = param_1->OperatorSettings->NumFramesPerBlock;
  }
  FAudioBuffer::FAudioBuffer(&this->TimeBuffer,iVar2);
  return this;
}

// Execute @ 14b1de1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FPerlinAudioRate::Execute(FPerlinAudioRate *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  FAudioBuffer *pFVar16;
  float fVar17;
  undefined4 uStack_3c;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28 [2];
  
  pFVar16 = (FAudioBuffer *)this->_padding_;
  if ((char)this->_padding_ == '\0') {
    GenerateTimeArray(this);
    pFVar16 = &this->TimeBuffer;
  }
  puVar4 = (undefined8 *)this->_padding_;
  iVar12 = 8;
  if (*(int *)this->_padding_ < 8) {
    iVar12 = *(int *)this->_padding_;
  }
  iVar13 = 1;
  if (1 < iVar12) {
    iVar13 = iVar12;
  }
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar15 = (float *)*puVar4;
  iVar12 = *(int *)(puVar4 + 1);
  if (iVar12 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  if ((1 < (byte)LogMetaSound._0_1_) && (pFVar16->InitialNum != (pFVar16->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar5 = (pFVar16->Buffer).AllocatorInstance.Data;
  iVar3 = (pFVar16->Buffer).ArrayNum;
  if (iVar3 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_38._12_4_ = local_28[0]._12_4_;
  local_38.ArrayNum = iVar12;
  local_28[0]._12_4_ = uStack_3c;
  local_28[0].ArrayNum = iVar3;
  local_38.DataPtr = pfVar15;
  local_28[0].DataPtr = (float *)pFVar5;
  Audio::PerlinValueNoise1DBuffer(local_28,fVar1,iVar13,&local_38);
  plVar6 = (longlong *)this->_padding_;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar6[2] != (int)plVar6[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar15 = (float *)*plVar6;
  puVar4 = (undefined8 *)this->_padding_;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  fVar10 = __real_bf800000;
  fVar9 = __real_3f000000;
  fVar8 = __real_3f800000;
  iVar12 = *(int *)((longlong)&this->_padding_ + 4);
  pfVar14 = (float *)*puVar4;
  fVar1 = *(float *)this->_padding_;
  fVar2 = *(float *)this->_padding_;
  iVar13 = 0;
  if (0 < iVar12) {
    do {
      fVar17 = *pfVar14;
      iVar13 = iVar13 + 1;
      pfVar14 = pfVar14 + 1;
      fVar17 = (fVar17 - fVar10) * fVar9;
      if (fVar8 <= fVar17) {
        fVar17 = fVar8;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      *pfVar15 = fVar17 * (fVar2 - fVar1) + fVar1;
      pfVar15 = pfVar15 + 1;
      iVar12 = *(int *)((longlong)&this->_padding_ + 4);
    } while (iVar13 < iVar12);
  }
  *(int *)&this->_padding_ = (int)this->_padding_ + iVar12;
  return;
}

// GenerateTimeArray @ 14b1e0b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FPerlinAudioRate::GenerateTimeArray(FPerlinAudioRate *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  float fVar14;
  
  if ((1 < (byte)LogMetaSound._0_1_) &&
     ((this->TimeBuffer).InitialNum != (this->TimeBuffer).Buffer.ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar6 = _UNK_150631e0c;
  iVar5 = _UNK_150631e08;
  iVar4 = __xmm_00000003000000020000000100000000._4_4_;
  iVar3 = (int)__xmm_00000003000000020000000100000000;
  iVar11 = (int)this->_padding_;
  fVar14 = __real_3f800000 / *(float *)&this->_padding_;
  uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
  pFVar12 = (this->TimeBuffer).Buffer.AllocatorInstance.Data;
  iVar1 = uVar7 + iVar11;
  if (iVar11 < iVar1) {
    if (0xf < uVar7) {
      uVar7 = uVar7 & 0x8000000f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
      }
      iVar10 = iVar11;
      iVar2 = iVar11 + 8;
      do {
        iVar8 = iVar2 + -4;
        iVar11 = iVar10 + 0x10;
        iVar9 = iVar2 + 4;
        *(float *)pFVar12 = (float)(iVar10 + iVar3) * fVar14;
        *(float *)(pFVar12 + 4) = (float)(iVar10 + iVar4) * fVar14;
        *(float *)(pFVar12 + 8) = (float)(iVar10 + iVar5) * fVar14;
        *(float *)(pFVar12 + 0xc) = (float)(iVar10 + iVar6) * fVar14;
        *(float *)(pFVar12 + 0x10) = (float)(iVar8 + iVar3) * fVar14;
        *(float *)(pFVar12 + 0x14) = (float)(iVar8 + iVar4) * fVar14;
        *(float *)(pFVar12 + 0x18) = (float)(iVar8 + iVar5) * fVar14;
        *(float *)(pFVar12 + 0x1c) = (float)(iVar8 + iVar6) * fVar14;
        *(float *)(pFVar12 + 0x20) = (float)(iVar2 + iVar3) * fVar14;
        *(float *)(pFVar12 + 0x24) = (float)(iVar2 + iVar4) * fVar14;
        *(float *)(pFVar12 + 0x28) = (float)(iVar2 + iVar5) * fVar14;
        *(float *)(pFVar12 + 0x2c) = (float)(iVar2 + iVar6) * fVar14;
        *(float *)(pFVar12 + 0x30) = (float)(iVar9 + iVar3) * fVar14;
        *(float *)(pFVar12 + 0x34) = (float)(iVar9 + iVar4) * fVar14;
        *(float *)(pFVar12 + 0x38) = (float)(iVar9 + iVar5) * fVar14;
        *(float *)(pFVar12 + 0x3c) = (float)(iVar9 + iVar6) * fVar14;
        pFVar12 = pFVar12 + 0x40;
        iVar10 = iVar11;
        iVar2 = iVar2 + 0x10;
      } while (iVar11 < (int)(iVar1 - uVar7));
      if (iVar1 <= iVar11) {
        return;
      }
    }
    do {
      fVar13 = (float)iVar11;
      iVar11 = iVar11 + 1;
      *(float *)pFVar12 = fVar13 * fVar14;
      pFVar12 = pFVar12 + 4;
    } while (iVar11 < iVar1);
  }
  return;
}

// Reset @ 14b1e9d00

void __thiscall Metasound::FPerlinAudioRate::Reset(FPerlinAudioRate *this,FResetParams *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  if ((float)((uint)(*(float *)((longlong)&this->_padding_ + 4) - __real_bf800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    uVar4 = rand();
    *(float *)((longlong)&this->_padding_ + 4) = (float)(uVar4 & 0x7fff) * __real_38000100;
  }
  fVar5 = (float)param_1->OperatorSettings->SampleRate;
  *(float *)&this->_padding_ = fVar5;
  *(int *)((longlong)&this->_padding_ + 4) = param_1->OperatorSettings->NumFramesPerBlock;
  if (fVar5 <= 0.0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SampleRate > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundPerlinNoiseNode.cpp"
                       ,0x91,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)((longlong)&this->_padding_ + 4) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumFramesPerBlock > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundPerlinNoiseNode.cpp"
                       ,0x92,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((undefined8 *)this->_padding_ + 1);
  if (0 < iVar1) {
    memset(*(void **)this->_padding_,0,(longlong)iVar1 << 2);
  }
  iVar1 = *(int *)((undefined8 *)this->_padding_ + 1);
  if (0 < iVar1) {
    memset(*(void **)this->_padding_,0,(longlong)iVar1 << 2);
  }
  return;
}

