// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// Calculate @ 14b0c0a90

void __cdecl
Metasound::TMathOpMultiply<int,int>::Calculate
          (TMathOpMultiply<int,int> *param_1,TDataReadReference<int> *param_2,
          TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *param_3,
          TDataWriteReference<int> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_3->ArrayNum == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2159234386464080346>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x1da,"!InAdditionalOperands.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar6 = 0;
    **(undefined4 **)&param_4->field_0x8 = **(undefined4 **)&param_2->field_0x8;
    iVar5 = param_3->ArrayNum;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = uVar6 + 1;
        lVar1 = lVar7 + 8;
        lVar7 = lVar7 + 0x20;
        **(int **)&param_4->field_0x8 =
             **(int **)&param_4->field_0x8 * **(int **)((param_3->AllocatorInstance).Data + lVar1);
        iVar5 = param_3->ArrayNum;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// Calculate @ 14b0c0b90

void __cdecl
Metasound::TMathOpMultiply<float,float>::Calculate
          (TMathOpMultiply<float,float> *param_1,TDataReadReference<float> *param_2,
          TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3,
          TDataWriteReference<float> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_3->ArrayNum == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2159234386464080346>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x1da,"!InAdditionalOperands.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar6 = 0;
    **(undefined4 **)&param_4->field_0x8 = **(undefined4 **)&param_2->field_0x8;
    iVar5 = param_3->ArrayNum;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = uVar6 + 1;
        lVar1 = lVar7 + 8;
        lVar7 = lVar7 + 0x20;
        **(float **)&param_4->field_0x8 =
             **(float **)((param_3->AllocatorInstance).Data + lVar1) *
             **(float **)&param_4->field_0x8;
        iVar5 = param_3->ArrayNum;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// Calculate @ 14b0c0c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::Calculate
          (TMathOpMultiply<Metasound::FAudioBuffer,float> *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3,
          TDataWriteReference<Metasound::FAudioBuffer> *param_4)

{
  longlong lVar1;
  float fVar2;
  undefined8 *puVar3;
  void *_Src;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78 [6];
  
  fVar7 = __real_fa7fffff;
  fVar6 = __real_7a7fffff;
  if (param_1->bInit == false) {
    param_1->bInit = true;
    uVar11 = 0;
    param_1->LastGain = 1.0;
    iVar10 = param_3->ArrayNum;
    if (0 < iVar10) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < iVar10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = uVar11 + 1;
        lVar1 = lVar12 + 8;
        lVar12 = lVar12 + 0x20;
        fVar14 = **(float **)((param_3->AllocatorInstance).Data + lVar1);
        if (fVar6 <= fVar14) {
          fVar14 = fVar6;
        }
        if (fVar14 <= fVar7) {
          fVar14 = fVar7;
        }
        param_1->LastGain = fVar14 * param_1->LastGain;
        iVar10 = param_3->ArrayNum;
      } while ((int)uVar11 < iVar10);
    }
  }
  lVar12 = *(longlong *)&param_2->field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar12 + 0x10) != *(int *)(lVar12 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar10 = *(int *)(lVar12 + 8);
  puVar3 = *(undefined8 **)&param_2->field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  _Src = (void *)*puVar3;
  puVar3 = *(undefined8 **)&param_4->field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  memcpy((void *)*puVar3,_Src,(longlong)iVar10 << 2);
  iVar10 = param_3->ArrayNum;
  uVar11 = 0;
  fVar14 = __real_3f800000;
  if (0 < iVar10) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar2 = param_1->LastGain;
      puVar3 = *(undefined8 **)&param_4->field_0x8;
      fVar13 = **(float **)((param_3->AllocatorInstance).Data + lVar12 + 8);
      if (fVar6 <= fVar13) {
        fVar13 = fVar6;
      }
      if (fVar13 <= fVar7) {
        fVar13 = fVar7;
      }
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)
                   &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      pfVar4 = (float *)*puVar3;
      iVar10 = *(int *)(puVar3 + 1);
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_78[0]._12_4_ = uStack_7c;
      local_78[0].ArrayNum = iVar10;
      local_78[0].DataPtr = pfVar4;
      Audio::ArrayFade(local_78,fVar2,fVar13);
      iVar10 = param_3->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x20;
      fVar14 = fVar14 * fVar13;
    } while ((int)uVar11 < iVar10);
  }
  param_1->LastGain = fVar14;
  return;
}

// Calculate @ 14b0c0f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
          (TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer> *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3,TDataWriteReference<Metasound::FAudioBuffer> *param_4)

{
  FAudioBuffer *this;
  void *_Src;
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  atomic<unsigned_char> *paVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28;
  
  if (param_3->ArrayNum == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2159234386464081005>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x46d,"!InAdditionalOperands.IsEmpty()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar12 = *(int *)(*(undefined8 **)&param_4->field_0x8 + 1);
    if (iVar12 < 1) {
      return;
    }
    memset((void *)**(undefined8 **)&param_4->field_0x8,0,(longlong)iVar12 << 2);
    return;
  }
  lVar13 = *(longlong *)&param_2->field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar13 + 0x10) != *(int *)(lVar13 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar12 = *(int *)(lVar13 + 8);
  lVar13 = *(longlong *)&param_4->field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar13 + 0x10) != *(int *)(lVar13 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (iVar12 == *(int *)(lVar13 + 8)) {
    if (param_3->ArrayNum < 1) {
      puVar2 = *(undefined8 **)&param_2->field_0x8;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      _Src = (void *)*puVar2;
      puVar2 = *(undefined8 **)&param_4->field_0x8;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      memcpy((void *)*puVar2,_Src,(longlong)iVar12 << 2);
    }
    else {
      this = *(FAudioBuffer **)((param_3->AllocatorInstance).Data + 8);
      if ((1 < (byte)LogMetaSound._0_1_) && (this->InitialNum != (this->Buffer).ArrayNum)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      if (iVar12 != (this->Buffer).ArrayNum) {
        pcVar6 = "NumSamples == Operand.Num()";
        iVar12 = 0x47e;
        paVar10 = &bGEnsureHasExecuted<2159234386464081022>;
        goto LAB_14b0c10ce;
      }
      pfVar7 = FAudioBuffer::GetData(*(FAudioBuffer **)&param_2->field_0x8);
      if ((iVar12 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pfVar8 = FAudioBuffer::GetData(this);
      if ((iVar12 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_68.DataPtr = FAudioBuffer::GetData(*(FAudioBuffer **)&param_4->field_0x8);
      if ((iVar12 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_68._12_4_ = uStack_8c;
      local_68.ArrayNum = iVar12;
      local_58._12_4_ = uStack_7c;
      local_58.ArrayNum = iVar12;
      local_48._12_4_ = uStack_6c;
      local_48.ArrayNum = iVar12;
      local_58.DataPtr = pfVar8;
      local_48.DataPtr = pfVar7;
      Audio::ArrayMultiply(&local_48,&local_58,&local_68);
    }
    iVar9 = param_3->ArrayNum;
    uVar11 = 1;
    if (1 < iVar9) {
      lVar13 = 0x20;
      do {
        uVar5 = 0;
        if ((int)uVar11 < iVar9) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar1 = *(longlong *)((param_3->AllocatorInstance).Data + lVar13 + 8);
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                      LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        if (iVar12 != *(int *)(lVar1 + 8)) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2159234386464081043>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                             ,0x493,"NumSamples == Operand.Num()");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar12 = *(int *)(*(undefined8 **)&param_4->field_0x8 + 1);
          if (iVar12 < 1) {
            return;
          }
          memset((void *)**(undefined8 **)&param_4->field_0x8,0,(longlong)iVar12 << 2);
          return;
        }
        uVar5 = 0;
        if ((int)uVar11 < param_3->ArrayNum) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar2 = *(undefined8 **)((param_3->AllocatorInstance).Data + lVar13 + 8);
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        pfVar7 = (float *)*puVar2;
        if ((iVar12 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar2 = *(undefined8 **)&param_4->field_0x8;
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        pfVar8 = (float *)*puVar2;
        if ((iVar12 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_38._12_4_ = uStack_6c;
        local_38.ArrayNum = iVar12;
        local_28._12_4_ = uStack_7c;
        local_28.ArrayNum = iVar12;
        local_38.DataPtr = pfVar8;
        local_28.DataPtr = pfVar7;
        Audio::ArrayMultiplyInPlace(&local_28,&local_38);
        iVar9 = param_3->ArrayNum;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0x20;
      } while ((int)uVar11 < iVar9);
    }
  }
  else {
    pcVar6 = "NumSamples == OutResult->Num()";
    iVar12 = 0x474;
    paVar10 = &bGEnsureHasExecuted<2159234386464081012>;
LAB_14b0c10ce:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar10,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,iVar12,pcVar6);
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar12 = *(int *)(*(undefined8 **)&param_4->field_0x8 + 1);
    if (0 < iVar12) {
      memset((void *)**(undefined8 **)&param_4->field_0x8,0,(longlong)iVar12 << 2);
    }
  }
  return;
}

// Calculate @ 14b0c1500

void __cdecl
Metasound::TMathOpMultiply<Metasound::FTime,float>::Calculate
          (TMathOpMultiply<Metasound::FTime,float> *param_1,
          TDataReadReference<Metasound::FTime> *param_2,
          TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3,
          TDataWriteReference<Metasound::FTime> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  **(undefined8 **)&param_4->field_0x8 = **(undefined8 **)&param_2->field_0x8;
  iVar5 = param_3->ArrayNum;
  if (iVar5 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2159234386464081182>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x51e,"!InAdditionalOperands.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar6 = 0;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = uVar6 + 1;
        lVar1 = lVar7 + 8;
        lVar7 = lVar7 + 0x20;
        **(double **)&param_4->field_0x8 =
             (double)**(float **)((param_3->AllocatorInstance).Data + lVar1) *
             **(double **)&param_4->field_0x8;
        iVar5 = param_3->ArrayNum;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// GetVertexInterface @ 14b0dd2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  TInputDataVertex<int> *pTVar4;
  TInputDataVertex<int> *pTVar5;
  FInputVertexInterface *pFVar6;
  FVertexInterface *pFVar7;
  int *piVar8;
  undefined1 auStackY_148 [32];
  int local_118 [2];
  FOutputVertexInterface local_110;
  FInputVertexInterface local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<int> local_a8;
  TInputDataVertex<int> local_88;
  TInputDataVertex<int> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
    ::__l2::AdditionalOperandsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__AdditionalOperandsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
    ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_3__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_3__ == -1)) {
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_a8,&MathOpNames::OutMathName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                         ::__l2::OutputMetadata);
    FOutputVertexInterface::FOutputVertexInterface(&local_110);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_d0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_110,
               &local_110.SubInterfaces);
    if ((local_d0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
                 &(local_d0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_d0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_d0);
    local_118[0] = 1;
    pTVar4 = TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_50,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                         ::__l2::AdditionalOperandsMetadata,local_118);
    local_118[1] = 1;
    pTVar5 = TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_88,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata,local_118 + 1);
    pFVar6 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<int>,Metasound::TInputDataVertex<int>_>
                       (&local_f0,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                ::__l2::Interface,pFVar6,&local_110);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data,
               local_f0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f0._padding_,(int)local_f0._padding_);
    if ((FInputDataVertex *)local_f0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f0._padding_);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data,
               local_110.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_110.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_110._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_110._padding_);
    }
    atexit(`Metasound::TMathOpMultiply<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<int,int>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b0dd6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOutputDataVertex<float> *pTVar4;
  TInputDataVertex<float> *pTVar5;
  TInputDataVertex<float> *pTVar6;
  FInputVertexInterface *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_148 [32];
  float local_118;
  float local_114;
  FOutputVertexInterface local_110;
  FInputVertexInterface local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<float> local_a8;
  TInputDataVertex<float> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
    ::__l2::AdditionalOperandsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__AdditionalOperandsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
    ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_3__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_3__ == -1)) {
    pTVar4 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_a8,&MathOpNames::OutMathName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                         ::__l2::OutputMetadata);
    FOutputVertexInterface::FOutputVertexInterface(&local_110);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_d0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_110,
               &local_110.SubInterfaces);
    if ((local_d0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
                 &(local_d0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_d0,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_d0);
    local_118 = 1.0;
    pTVar5 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                         ::__l2::AdditionalOperandsMetadata,&local_118);
    local_114 = 1.0;
    pTVar6 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_88,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata,&local_114);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_>
                       (&local_f0,pTVar6,pTVar5);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                ::__l2::Interface,pFVar7,&local_110);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data,
               local_f0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f0._padding_,(int)local_f0._padding_);
    if ((FInputDataVertex *)local_f0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f0._padding_);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar2)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar2)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data,
               local_110.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_110.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_110._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_110._padding_);
    }
    atexit(`Metasound::TMathOpMultiply<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<float,float>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b0dda80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  TInputDataVertex<float> *pTVar5;
  TInputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  FInputVertexInterface *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_148 [32];
  float local_118 [2];
  FOutputVertexInterface local_110;
  FInputVertexInterface local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::FAudioBuffer> local_a8;
  TInputDataVertex<Metasound::FAudioBuffer> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
    ::__l2::AdditionalOperandsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__AdditionalOperandsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_a8,&MathOpNames::OutAudioName,&FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_110);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_d0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_110,
               &local_110.SubInterfaces);
    if ((local_d0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
                 &(local_d0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_d0,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_d0);
    local_118[0] = 1.0;
    pTVar5 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                         ::__l2::AdditionalOperandsMetadata,local_118);
    pTVar6 = TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_88,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>_>
                       (&local_f0,pTVar6,pTVar5);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                ::__l2::Interface,pFVar7,&local_110);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data,
               local_f0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f0._padding_,(int)local_f0._padding_);
    if ((FInputDataVertex *)local_f0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f0._padding_);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar2)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar2)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data,
               local_110.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_110.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_110._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_110._padding_);
    }
    atexit(`Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b0dddd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface
          (void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TInputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  TInputDataVertex<Metasound::FAudioBuffer> *pTVar5;
  FInputVertexInterface *pFVar6;
  FVertexInterface *pFVar7;
  int *piVar8;
  undefined1 auStackY_138 [32];
  FOutputVertexInterface local_108;
  FInputVertexInterface local_e8;
  FOutputVertexInterfaceDeclarationBuilder local_c8;
  TOutputDataVertex<Metasound::FAudioBuffer> local_a0;
  TInputDataVertex<Metasound::FAudioBuffer> local_80;
  TInputDataVertex<Metasound::FAudioBuffer> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_138;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::
           GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                  ::__l2::AdditionalAddendsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                  ::__l2::AdditionalAddendsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
    ::__l2::AdditionalAddendsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::
           GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__AdditionalAddendsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_a0,&MathOpNames::OutAudioName,&FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_108);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c8,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_108,
               &local_108.SubInterfaces);
    if ((local_c8.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c8.Vertices)->AllocatorInstance,(local_c8.Vertices)->ArrayNum,
                 &(local_c8.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c8,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c8);
    pTVar4 = TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_48,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                         ::__l2::AdditionalAddendsMetadata);
    pTVar5 = TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_80,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata);
    pFVar6 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<Metasound::FAudioBuffer>_>
                       (&local_e8,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                ::__l2::Interface,pFVar6,&local_108);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data,
               local_e8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_e8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_e8._padding_,(int)local_e8._padding_);
    if ((FInputDataVertex *)local_e8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data,
               local_108.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_108.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_108._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_108._padding_);
    }
    atexit(`Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::
           GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b0de120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOutputDataVertex<Metasound::FTime> *pTVar4;
  TInputDataVertex<float> *pTVar5;
  TInputDataVertex<Metasound::FTime> *pTVar6;
  FInputVertexInterface *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_148 [32];
  float local_118;
  float local_114;
  FOutputVertexInterface local_110;
  FInputVertexInterface local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::FTime> local_a8;
  TInputDataVertex<Metasound::FTime> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
    ::__l2::AdditionalOperandsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__AdditionalOperandsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
    ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_3__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_3__ == -1)) {
    pTVar4 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                       (&local_a8,&MathOpNames::OutMathName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::OutputMetadata);
    FOutputVertexInterface::FOutputVertexInterface(&local_110);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_d0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_110,
               &local_110.SubInterfaces);
    if ((local_d0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
                 &(local_d0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_d0,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_d0);
    local_118 = 1.0;
    pTVar5 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::AdditionalOperandsMetadata,&local_118);
    local_114 = 1.0;
    pTVar6 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_88,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata,&local_114);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>_>
                       (&local_f0,pTVar6,pTVar5);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                ::__l2::Interface,pFVar7,&local_110);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data,
               local_f0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f0._padding_,(int)local_f0._padding_);
    if ((FInputDataVertex *)local_f0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f0._padding_);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar2)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar2)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data,
               local_110.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_110.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_110._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_110._padding_);
    }
    atexit(`Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface(void)'
          ::__l2::Interface;
}

