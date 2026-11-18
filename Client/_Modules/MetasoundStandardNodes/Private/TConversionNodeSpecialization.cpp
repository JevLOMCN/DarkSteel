// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// GetConvertedValue @ 14b06d4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::MetasoundConversionNodePrivate::
TConversionNodeSpecialization<float,Metasound::FAudioBuffer>::GetConvertedValue
          (float param_1,FAudioBuffer *param_2)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  
  if ((1 < (byte)LogMetaSound._0_1_) && (param_2->InitialNum != (param_2->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = (param_2->Buffer).ArrayNum;
  lVar2 = (longlong)iVar1;
  if ((1 < (byte)LogMetaSound._0_1_) && (param_2->InitialNum != iVar1)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (0 < iVar1) {
    pFVar3 = (param_2->Buffer).AllocatorInstance.Data;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(float *)pFVar3 = param_1;
      pFVar3 = pFVar3 + 4;
    }
  }
  return;
}

// GetConvertedValue @ 14b06d550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::MetasoundConversionNodePrivate::
TConversionNodeSpecialization<Metasound::FAudioBuffer,float>::GetConvertedValue
          (FAudioBuffer *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  lVar6 = 0;
  *param_2 = 0.0;
  fVar8 = 0.0;
  if ((1 < (byte)LogMetaSound._0_1_) && (param_1->InitialNum != (param_1->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    fVar8 = *param_2;
  }
  iVar2 = (param_1->Buffer).ArrayNum;
  lVar7 = (longlong)iVar2;
  if ((1 < (byte)LogMetaSound._0_1_) && (param_1->InitialNum != iVar2)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    fVar8 = *param_2;
  }
  pFVar3 = (param_1->Buffer).AllocatorInstance.Data;
  if (3 < lVar7) {
    pFVar4 = pFVar3 + 8;
    lVar5 = (lVar7 - 4U >> 2) + 1;
    lVar6 = lVar5 * 4;
    do {
      fVar1 = *(float *)(pFVar4 + -8);
      *param_2 = fVar8 + fVar1;
      fVar8 = fVar8 + fVar1 + *(float *)(pFVar4 + -4);
      *param_2 = fVar8;
      fVar8 = fVar8 + *(float *)pFVar4;
      *param_2 = fVar8;
      fVar8 = fVar8 + *(float *)(pFVar4 + 4);
      pFVar4 = pFVar4 + 0x10;
      *param_2 = fVar8;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  for (; lVar6 < lVar7; lVar6 = lVar6 + 1) {
    fVar8 = fVar8 + *(float *)(pFVar3 + lVar6 * 4);
    *param_2 = fVar8;
  }
  *param_2 = fVar8 / (float)iVar2;
  return;
}

