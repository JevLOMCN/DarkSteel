// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 8

// Calculate @ 14b0c1720

void __cdecl
Metasound::TMathOpSubtract<int,int>::Calculate
          (TMathOpSubtract<int,int> *param_1,TDataReadReference<int> *param_2,
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
                      (&bGEnsureHasExecuted<2159234386464080282>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x19a,"!InAdditionalOperands.IsEmpty()");
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
             **(int **)&param_4->field_0x8 - **(int **)((param_3->AllocatorInstance).Data + lVar1);
        iVar5 = param_3->ArrayNum;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// Calculate @ 14b0c1820

void __cdecl
Metasound::TMathOpSubtract<float,float>::Calculate
          (TMathOpSubtract<float,float> *param_1,TDataReadReference<float> *param_2,
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
                      (&bGEnsureHasExecuted<2159234386464080282>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x19a,"!InAdditionalOperands.IsEmpty()");
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
             **(float **)&param_4->field_0x8 -
             **(float **)((param_3->AllocatorInstance).Data + lVar1);
        iVar5 = param_3->ArrayNum;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// Calculate @ 14b0c1920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
          (TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer> *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3,TDataWriteReference<Metasound::FAudioBuffer> *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  TArrayView<float_const_,int> local_38;
  TArrayView<float,int> local_28;
  
  if (param_3->ArrayNum == 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2159234386464080870>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x3e6,"!InAdditionalOperands.IsEmpty()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar1 = *(int *)(*(undefined8 **)&param_4->field_0x8 + 1);
    if (0 < iVar1) {
      memset((void *)**(undefined8 **)&param_4->field_0x8,0,(longlong)iVar1 << 2);
      return;
    }
  }
  else {
    if ((param_3->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar11 = *(longlong *)((param_3->AllocatorInstance).Data + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar11 + 0x10) != *(int *)(lVar11 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar1 = *(int *)(lVar11 + 8);
    lVar11 = *(longlong *)&param_4->field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar11 + 0x10) != *(int *)(lVar11 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    if (iVar1 == *(int *)(lVar11 + 8)) {
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
      memcpy((void *)*puVar2,_Src,(longlong)iVar1 << 2);
      iVar9 = param_3->ArrayNum;
      uVar10 = 0;
      if (0 < iVar9) {
        lVar11 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar10 < iVar9) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          lVar3 = *(longlong *)((param_3->AllocatorInstance).Data + lVar11 + 8);
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 8))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3
                        ::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          if (iVar1 != *(int *)(lVar3 + 8)) {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<2159234386464080889>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                               ,0x3f9,"NumSamples == Operand.Num()");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar1 = *(int *)(*(undefined8 **)&param_4->field_0x8 + 1);
            if (iVar1 < 1) {
              return;
            }
            memset((void *)**(undefined8 **)&param_4->field_0x8,0,(longlong)iVar1 << 2);
            return;
          }
          uVar8 = 0;
          if ((int)uVar10 < param_3->ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          puVar2 = *(undefined8 **)((param_3->AllocatorInstance).Data + lVar11 + 8);
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          pfVar4 = (float *)*puVar2;
          if ((iVar1 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar2 = *(undefined8 **)&param_4->field_0x8;
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          pfVar5 = (float *)*puVar2;
          if ((iVar1 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_38._12_4_ = uStack_4c;
          local_38.ArrayNum = iVar1;
          local_28._12_4_ = uStack_3c;
          local_28.ArrayNum = iVar1;
          local_38.DataPtr = pfVar4;
          local_28.DataPtr = pfVar5;
          Audio::ArraySubtractInPlace2(&local_28,&local_38);
          iVar9 = param_3->ArrayNum;
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x20;
        } while ((int)uVar10 < iVar9);
      }
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2159234386464080877>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                         ,0x3ed,"NumSamples == OutResult->Num()");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar1 = *(int *)(*(undefined8 **)&param_4->field_0x8 + 1);
      if (0 < iVar1) {
        memset((void *)**(undefined8 **)&param_4->field_0x8,0,(longlong)iVar1 << 2);
      }
    }
  }
  return;
}

// Calculate @ 14b0c1d60

void __cdecl
Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::Calculate
          (TMathOpSubtract<Metasound::FTime,Metasound::FTime> *param_1,
          TDataReadReference<Metasound::FTime> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FTime>,TSizedDefaultAllocator<32>_>
          *param_3,TDataWriteReference<Metasound::FTime> *param_4)

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
                      (&bGEnsureHasExecuted<2159234386464080951>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x437,"!InAdditionalOperands.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar6 = 0;
    **(undefined8 **)&param_4->field_0x8 = **(undefined8 **)&param_2->field_0x8;
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
        **(double **)&param_4->field_0x8 =
             **(double **)&param_4->field_0x8 -
             **(double **)((param_3->AllocatorInstance).Data + lVar1);
        iVar5 = param_3->ArrayNum;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// GetVertexInterface @ 14b0de8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)

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
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
    ::__l2::AdditionalOperandsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__AdditionalOperandsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
    ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_3__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_3__ == -1)) {
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_a8,&MathOpNames::OutMathName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
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
    local_118[0] = 0;
    pTVar4 = TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_50,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                         ::__l2::AdditionalOperandsMetadata,local_118);
    local_118[1] = 0;
    pTVar5 = TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_88,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata,local_118 + 1);
    pFVar6 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<int>,Metasound::TInputDataVertex<int>_>
                       (&local_f0,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
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
    atexit(`Metasound::TMathOpSubtract<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<int,int>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b0dec60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)

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
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
    ::__l2::AdditionalOperandsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__AdditionalOperandsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
    ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_3__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_3__ == -1)) {
    pTVar4 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_a8,&MathOpNames::OutMathName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
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
    local_118 = 0.0;
    pTVar5 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                         ::__l2::AdditionalOperandsMetadata,&local_118);
    local_114 = 0.0;
    pTVar6 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_88,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata,&local_114);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_>
                       (&local_f0,pTVar6,pTVar5);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
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
    atexit(`Metasound::TMathOpSubtract<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<float,float>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b0df030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface
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
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::
           GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                  ::__l2::AdditionalAddendsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                  ::__l2::AdditionalAddendsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
    ::__l2::AdditionalAddendsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::
           GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__AdditionalAddendsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
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
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                         ::__l2::AdditionalAddendsMetadata);
    pTVar5 = TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_80,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata);
    pFVar6 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<Metasound::FAudioBuffer>_>
                       (&local_e8,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
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
    atexit(`Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::
           GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b0df380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOutputDataVertex<Metasound::FTime> *pTVar4;
  TInputDataVertex<Metasound::FTime> *pTVar5;
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
  TInputDataVertex<Metasound::FTime> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface'::__l2
           ::_dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                  ::__l2::AdditionalAddendsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                  ::__l2::AdditionalAddendsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
    ::__l2::AdditionalAddendsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface'::__l2
           ::_dynamic_atexit_destructor_for__AdditionalAddendsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
    ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface'::__l2
           ::_dynamic_atexit_destructor_for__OutputMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_3__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_3__ == -1)) {
    pTVar4 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                       (&local_a8,&MathOpNames::OutMathName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
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
    local_118 = 0.0;
    pTVar5 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_50,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                         ::__l2::AdditionalAddendsMetadata,&local_118);
    local_114 = 0.0;
    pTVar6 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_88,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata,&local_114);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>_>
                       (&local_f0,pTVar6,pTVar5);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
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
    atexit(`Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface'::__l2
           ::_dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface(void)'
          ::__l2::Interface;
}

