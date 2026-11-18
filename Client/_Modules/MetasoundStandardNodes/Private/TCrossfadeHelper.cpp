// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 7

// GetCrossfadeOutput @ 14b06d680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TCrossfadeHelper<Metasound::FAudioBuffer,2>::GetCrossfadeOutput
          (TCrossfadeHelper<Metasound::FAudioBuffer,2> *this,int param_1,int param_2,float param_3,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_4,FAudioBuffer *param_5)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  float *pfVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58 [3];
  
  iVar10 = (this->CurrentGains).ArrayNum;
  if (param_1 == 0) {
    if ((iVar10 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(float *)(this->CurrentGains).AllocatorInstance.Data = __real_3f800000 - param_3;
    if (((this->NeedsMixing).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(this->NeedsMixing).AllocatorInstance.Data = (FScriptContainerElement)0x1;
LAB_14b06d757:
    iVar10 = (this->CurrentGains).ArrayNum;
    if (param_2 != 1) {
      if ((iVar10 < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)((this->CurrentGains).AllocatorInstance.Data + 4) = 0;
      if (((this->PrevGains).ArrayNum < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(float *)((this->PrevGains).AllocatorInstance.Data + 4) == 0.0) {
        if (((this->NeedsMixing).ArrayNum < 2) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (this->NeedsMixing).AllocatorInstance.Data[1] = (FScriptContainerElement)0x0;
      }
      goto LAB_14b06da64;
    }
    if ((iVar10 < 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(float *)((this->CurrentGains).AllocatorInstance.Data + 4) = param_3;
  }
  else {
    if (param_2 == 0) {
      if ((iVar10 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(float *)(this->CurrentGains).AllocatorInstance.Data = param_3;
      if (((this->NeedsMixing).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(this->NeedsMixing).AllocatorInstance.Data = (FScriptContainerElement)0x1;
    }
    else {
      if ((iVar10 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(this->CurrentGains).AllocatorInstance.Data = 0;
      if (((this->PrevGains).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(float *)(this->PrevGains).AllocatorInstance.Data == 0.0) {
        if (((this->NeedsMixing).ArrayNum < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(this->NeedsMixing).AllocatorInstance.Data = (FScriptContainerElement)0x0;
      }
    }
    if (param_1 != 1) goto LAB_14b06d757;
    if (((this->CurrentGains).ArrayNum < 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(float *)((this->CurrentGains).AllocatorInstance.Data + 4) = __real_3f800000 - param_3;
  }
  if (((this->NeedsMixing).ArrayNum < 2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (this->NeedsMixing).AllocatorInstance.Data[1] = (FScriptContainerElement)0x1;
LAB_14b06da64:
  iVar10 = (param_5->Buffer).ArrayNum;
  if (0 < iVar10) {
    memset((param_5->Buffer).AllocatorInstance.Data,0,(longlong)iVar10 << 2);
    iVar10 = (param_5->Buffer).ArrayNum;
  }
  if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar10)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar10 = (param_5->Buffer).ArrayNum;
  if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar10)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar2 = (param_5->Buffer).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->NeedsMixing).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar8._4_4_ = uStack_6c;
  uVar8._0_4_ = iVar10;
  if (*(this->NeedsMixing).AllocatorInstance.Data != (FScriptContainerElement)0x0) {
    if ((param_4->ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (param_4->AllocatorInstance).Data;
    iVar10 = this->NumFramesPerBlock;
    puVar4 = *(undefined8 **)(pFVar3 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar5 = (float *)*puVar4;
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((1 < (byte)LogMetaSound._0_1_) &&
       (lVar6 = *(longlong *)(pFVar3 + 8), *(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    if (((this->CurrentGains).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar1 = *(float *)(this->CurrentGains).AllocatorInstance.Data;
    if (((this->PrevGains).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_58[0]._12_4_ = uStack_6c;
    local_58[0].ArrayNum = iVar10;
    local_68.DataPtr = (float *)pFVar2;
    local_68._8_8_ = uVar8;
    local_58[0].DataPtr = pfVar5;
    Audio::ArrayMixIn(local_58,&local_68,*(float *)(this->PrevGains).AllocatorInstance.Data,fVar1);
  }
  if (((this->NeedsMixing).ArrayNum < 2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->NeedsMixing).AllocatorInstance.Data[1] != (FScriptContainerElement)0x0) {
    if ((param_4->ArrayNum < 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (param_4->AllocatorInstance).Data;
    iVar10 = this->NumFramesPerBlock;
    puVar4 = *(undefined8 **)(pFVar3 + 0x28);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar5 = (float *)*puVar4;
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((1 < (byte)LogMetaSound._0_1_) &&
       (lVar6 = *(longlong *)(pFVar3 + 0x28), *(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    if (((this->CurrentGains).ArrayNum < 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar1 = *(float *)((this->CurrentGains).AllocatorInstance.Data + 4);
    if (((this->PrevGains).ArrayNum < 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_58[0]._12_4_ = uStack_6c;
    local_58[0].ArrayNum = iVar10;
    local_68.DataPtr = (float *)pFVar2;
    local_68._8_8_ = uVar8;
    local_58[0].DataPtr = pfVar5;
    Audio::ArrayMixIn(local_58,&local_68,*(float *)((this->PrevGains).AllocatorInstance.Data + 4),
                      fVar1);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->PrevGains,&this->CurrentGains);
  return;
}

// GetCrossfadeOutput @ 14b06ded0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TCrossfadeHelper<Metasound::FAudioBuffer,3>::GetCrossfadeOutput
          (TCrossfadeHelper<Metasound::FAudioBuffer,3> *this,int param_1,int param_2,float param_3,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_4,FAudioBuffer *param_5)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [4];
  
  fVar2 = __real_3f800000;
  pTVar1 = &this->CurrentGains;
  uVar14 = 0;
  uVar19 = 0;
  uVar18 = uVar14;
  uVar16 = uVar14;
  do {
    iVar12 = (this->CurrentGains).ArrayNum;
    uVar15 = (uint)uVar18;
    uVar17 = ~uVar15 >> 0x1f;
    uVar13 = 0;
    if (uVar15 == param_1) {
      uVar11 = uVar19;
      if ((int)uVar15 < iVar12) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = fVar2 - param_3;
      if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_14b06e077:
      (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x1;
    }
    else {
      if (uVar15 == param_2) {
        uVar11 = uVar13;
        if ((int)uVar15 < iVar12) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = param_3;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        goto LAB_14b06e077;
      }
      if ((int)uVar15 < iVar12) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = 0;
      uVar13 = uVar19;
      if ((int)uVar15 < (this->PrevGains).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(float *)((this->PrevGains).AllocatorInstance.Data + uVar16 * 4) == 0.0) {
        uVar13 = uVar19;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x0;
      }
    }
    uVar18 = (ulonglong)(uVar15 + 1);
    uVar16 = uVar16 + 1;
    if (2 < uVar15 + 1) {
      iVar12 = (param_5->Buffer).ArrayNum;
      if (0 < iVar12) {
        memset((param_5->Buffer).AllocatorInstance.Data,0,(longlong)iVar12 << 2);
        iVar12 = (param_5->Buffer).ArrayNum;
      }
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      iVar12 = (param_5->Buffer).ArrayNum;
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      pFVar3 = (param_5->Buffer).AllocatorInstance.Data;
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar9._4_4_ = uStack_7c;
      uVar9._0_4_ = iVar12;
      uVar18 = uVar14;
      uVar16 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar15 = ~uVar13 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar13 < (this->NeedsMixing).ArrayNum) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->NeedsMixing).AllocatorInstance.Data[uVar18] != (FScriptContainerElement)0x0) {
          uVar19 = 0;
          if ((int)uVar13 < param_4->ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          pFVar4 = (param_4->AllocatorInstance).Data;
          iVar12 = this->NumFramesPerBlock;
          puVar5 = *(undefined8 **)(pFVar4 + uVar16 + 8);
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          pfVar6 = (float *)*puVar5;
          if ((iVar12 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((1 < (byte)LogMetaSound._0_1_) &&
             (lVar7 = *(longlong *)(pFVar4 + uVar16 + 8),
             *(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 8))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          uVar19 = 0;
          if ((int)uVar13 < (this->CurrentGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          fVar2 = *(float *)((this->CurrentGains).AllocatorInstance.Data + uVar18 * 4);
          uVar19 = 0;
          if ((int)uVar13 < (this->PrevGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          local_68[0]._12_4_ = uStack_7c;
          local_68[0].ArrayNum = iVar12;
          local_78.DataPtr = (float *)pFVar3;
          local_78._8_8_ = uVar9;
          local_68[0].DataPtr = pfVar6;
          Audio::ArrayMixIn(local_68,&local_78,
                            *(float *)((this->PrevGains).AllocatorInstance.Data + uVar18 * 4),fVar2)
          ;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar18 = uVar18 + 1;
        uVar16 = uVar16 + 0x20;
        if (2 < uVar13 + 1) {
          TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->PrevGains,&this->CurrentGains)
          ;
          return;
        }
      } while( true );
    }
  } while( true );
}

// GetCrossfadeOutput @ 14b06e470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TCrossfadeHelper<Metasound::FAudioBuffer,4>::GetCrossfadeOutput
          (TCrossfadeHelper<Metasound::FAudioBuffer,4> *this,int param_1,int param_2,float param_3,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_4,FAudioBuffer *param_5)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [4];
  
  fVar2 = __real_3f800000;
  pTVar1 = &this->CurrentGains;
  uVar14 = 0;
  uVar19 = 0;
  uVar18 = uVar14;
  uVar16 = uVar14;
  do {
    iVar12 = (this->CurrentGains).ArrayNum;
    uVar15 = (uint)uVar18;
    uVar17 = ~uVar15 >> 0x1f;
    uVar13 = 0;
    if (uVar15 == param_1) {
      uVar11 = uVar19;
      if ((int)uVar15 < iVar12) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = fVar2 - param_3;
      if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_14b06e617:
      (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x1;
    }
    else {
      if (uVar15 == param_2) {
        uVar11 = uVar13;
        if ((int)uVar15 < iVar12) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = param_3;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        goto LAB_14b06e617;
      }
      if ((int)uVar15 < iVar12) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = 0;
      uVar13 = uVar19;
      if ((int)uVar15 < (this->PrevGains).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(float *)((this->PrevGains).AllocatorInstance.Data + uVar16 * 4) == 0.0) {
        uVar13 = uVar19;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x0;
      }
    }
    uVar18 = (ulonglong)(uVar15 + 1);
    uVar16 = uVar16 + 1;
    if (3 < uVar15 + 1) {
      iVar12 = (param_5->Buffer).ArrayNum;
      if (0 < iVar12) {
        memset((param_5->Buffer).AllocatorInstance.Data,0,(longlong)iVar12 << 2);
        iVar12 = (param_5->Buffer).ArrayNum;
      }
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      iVar12 = (param_5->Buffer).ArrayNum;
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      pFVar3 = (param_5->Buffer).AllocatorInstance.Data;
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar9._4_4_ = uStack_7c;
      uVar9._0_4_ = iVar12;
      uVar18 = uVar14;
      uVar16 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar15 = ~uVar13 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar13 < (this->NeedsMixing).ArrayNum) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->NeedsMixing).AllocatorInstance.Data[uVar18] != (FScriptContainerElement)0x0) {
          uVar19 = 0;
          if ((int)uVar13 < param_4->ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          pFVar4 = (param_4->AllocatorInstance).Data;
          iVar12 = this->NumFramesPerBlock;
          puVar5 = *(undefined8 **)(pFVar4 + uVar16 + 8);
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          pfVar6 = (float *)*puVar5;
          if ((iVar12 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((1 < (byte)LogMetaSound._0_1_) &&
             (lVar7 = *(longlong *)(pFVar4 + uVar16 + 8),
             *(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 8))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          uVar19 = 0;
          if ((int)uVar13 < (this->CurrentGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          fVar2 = *(float *)((this->CurrentGains).AllocatorInstance.Data + uVar18 * 4);
          uVar19 = 0;
          if ((int)uVar13 < (this->PrevGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          local_68[0]._12_4_ = uStack_7c;
          local_68[0].ArrayNum = iVar12;
          local_78.DataPtr = (float *)pFVar3;
          local_78._8_8_ = uVar9;
          local_68[0].DataPtr = pfVar6;
          Audio::ArrayMixIn(local_68,&local_78,
                            *(float *)((this->PrevGains).AllocatorInstance.Data + uVar18 * 4),fVar2)
          ;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar18 = uVar18 + 1;
        uVar16 = uVar16 + 0x20;
        if (3 < uVar13 + 1) {
          TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->PrevGains,&this->CurrentGains)
          ;
          return;
        }
      } while( true );
    }
  } while( true );
}

// GetCrossfadeOutput @ 14b06ea10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TCrossfadeHelper<Metasound::FAudioBuffer,5>::GetCrossfadeOutput
          (TCrossfadeHelper<Metasound::FAudioBuffer,5> *this,int param_1,int param_2,float param_3,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_4,FAudioBuffer *param_5)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [4];
  
  fVar2 = __real_3f800000;
  pTVar1 = &this->CurrentGains;
  uVar14 = 0;
  uVar19 = 0;
  uVar18 = uVar14;
  uVar16 = uVar14;
  do {
    iVar12 = (this->CurrentGains).ArrayNum;
    uVar15 = (uint)uVar18;
    uVar17 = ~uVar15 >> 0x1f;
    uVar13 = 0;
    if (uVar15 == param_1) {
      uVar11 = uVar19;
      if ((int)uVar15 < iVar12) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = fVar2 - param_3;
      if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_14b06ebb7:
      (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x1;
    }
    else {
      if (uVar15 == param_2) {
        uVar11 = uVar13;
        if ((int)uVar15 < iVar12) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = param_3;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        goto LAB_14b06ebb7;
      }
      if ((int)uVar15 < iVar12) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = 0;
      uVar13 = uVar19;
      if ((int)uVar15 < (this->PrevGains).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(float *)((this->PrevGains).AllocatorInstance.Data + uVar16 * 4) == 0.0) {
        uVar13 = uVar19;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x0;
      }
    }
    uVar18 = (ulonglong)(uVar15 + 1);
    uVar16 = uVar16 + 1;
    if (4 < uVar15 + 1) {
      iVar12 = (param_5->Buffer).ArrayNum;
      if (0 < iVar12) {
        memset((param_5->Buffer).AllocatorInstance.Data,0,(longlong)iVar12 << 2);
        iVar12 = (param_5->Buffer).ArrayNum;
      }
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      iVar12 = (param_5->Buffer).ArrayNum;
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      pFVar3 = (param_5->Buffer).AllocatorInstance.Data;
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar9._4_4_ = uStack_7c;
      uVar9._0_4_ = iVar12;
      uVar18 = uVar14;
      uVar16 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar15 = ~uVar13 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar13 < (this->NeedsMixing).ArrayNum) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->NeedsMixing).AllocatorInstance.Data[uVar18] != (FScriptContainerElement)0x0) {
          uVar19 = 0;
          if ((int)uVar13 < param_4->ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          pFVar4 = (param_4->AllocatorInstance).Data;
          iVar12 = this->NumFramesPerBlock;
          puVar5 = *(undefined8 **)(pFVar4 + uVar16 + 8);
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          pfVar6 = (float *)*puVar5;
          if ((iVar12 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((1 < (byte)LogMetaSound._0_1_) &&
             (lVar7 = *(longlong *)(pFVar4 + uVar16 + 8),
             *(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 8))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          uVar19 = 0;
          if ((int)uVar13 < (this->CurrentGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          fVar2 = *(float *)((this->CurrentGains).AllocatorInstance.Data + uVar18 * 4);
          uVar19 = 0;
          if ((int)uVar13 < (this->PrevGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          local_68[0]._12_4_ = uStack_7c;
          local_68[0].ArrayNum = iVar12;
          local_78.DataPtr = (float *)pFVar3;
          local_78._8_8_ = uVar9;
          local_68[0].DataPtr = pfVar6;
          Audio::ArrayMixIn(local_68,&local_78,
                            *(float *)((this->PrevGains).AllocatorInstance.Data + uVar18 * 4),fVar2)
          ;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar18 = uVar18 + 1;
        uVar16 = uVar16 + 0x20;
        if (4 < uVar13 + 1) {
          TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->PrevGains,&this->CurrentGains)
          ;
          return;
        }
      } while( true );
    }
  } while( true );
}

// GetCrossfadeOutput @ 14b06efb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TCrossfadeHelper<Metasound::FAudioBuffer,6>::GetCrossfadeOutput
          (TCrossfadeHelper<Metasound::FAudioBuffer,6> *this,int param_1,int param_2,float param_3,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_4,FAudioBuffer *param_5)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [4];
  
  fVar2 = __real_3f800000;
  pTVar1 = &this->CurrentGains;
  uVar14 = 0;
  uVar19 = 0;
  uVar18 = uVar14;
  uVar16 = uVar14;
  do {
    iVar12 = (this->CurrentGains).ArrayNum;
    uVar15 = (uint)uVar18;
    uVar17 = ~uVar15 >> 0x1f;
    uVar13 = 0;
    if (uVar15 == param_1) {
      uVar11 = uVar19;
      if ((int)uVar15 < iVar12) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = fVar2 - param_3;
      if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_14b06f157:
      (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x1;
    }
    else {
      if (uVar15 == param_2) {
        uVar11 = uVar13;
        if ((int)uVar15 < iVar12) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = param_3;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        goto LAB_14b06f157;
      }
      if ((int)uVar15 < iVar12) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = 0;
      uVar13 = uVar19;
      if ((int)uVar15 < (this->PrevGains).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(float *)((this->PrevGains).AllocatorInstance.Data + uVar16 * 4) == 0.0) {
        uVar13 = uVar19;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x0;
      }
    }
    uVar18 = (ulonglong)(uVar15 + 1);
    uVar16 = uVar16 + 1;
    if (5 < uVar15 + 1) {
      iVar12 = (param_5->Buffer).ArrayNum;
      if (0 < iVar12) {
        memset((param_5->Buffer).AllocatorInstance.Data,0,(longlong)iVar12 << 2);
        iVar12 = (param_5->Buffer).ArrayNum;
      }
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      iVar12 = (param_5->Buffer).ArrayNum;
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      pFVar3 = (param_5->Buffer).AllocatorInstance.Data;
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar9._4_4_ = uStack_7c;
      uVar9._0_4_ = iVar12;
      uVar18 = uVar14;
      uVar16 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar15 = ~uVar13 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar13 < (this->NeedsMixing).ArrayNum) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->NeedsMixing).AllocatorInstance.Data[uVar18] != (FScriptContainerElement)0x0) {
          uVar19 = 0;
          if ((int)uVar13 < param_4->ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          pFVar4 = (param_4->AllocatorInstance).Data;
          iVar12 = this->NumFramesPerBlock;
          puVar5 = *(undefined8 **)(pFVar4 + uVar16 + 8);
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          pfVar6 = (float *)*puVar5;
          if ((iVar12 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((1 < (byte)LogMetaSound._0_1_) &&
             (lVar7 = *(longlong *)(pFVar4 + uVar16 + 8),
             *(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 8))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          uVar19 = 0;
          if ((int)uVar13 < (this->CurrentGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          fVar2 = *(float *)((this->CurrentGains).AllocatorInstance.Data + uVar18 * 4);
          uVar19 = 0;
          if ((int)uVar13 < (this->PrevGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          local_68[0]._12_4_ = uStack_7c;
          local_68[0].ArrayNum = iVar12;
          local_78.DataPtr = (float *)pFVar3;
          local_78._8_8_ = uVar9;
          local_68[0].DataPtr = pfVar6;
          Audio::ArrayMixIn(local_68,&local_78,
                            *(float *)((this->PrevGains).AllocatorInstance.Data + uVar18 * 4),fVar2)
          ;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar18 = uVar18 + 1;
        uVar16 = uVar16 + 0x20;
        if (5 < uVar13 + 1) {
          TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->PrevGains,&this->CurrentGains)
          ;
          return;
        }
      } while( true );
    }
  } while( true );
}

// GetCrossfadeOutput @ 14b06f550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TCrossfadeHelper<Metasound::FAudioBuffer,7>::GetCrossfadeOutput
          (TCrossfadeHelper<Metasound::FAudioBuffer,7> *this,int param_1,int param_2,float param_3,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_4,FAudioBuffer *param_5)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [4];
  
  fVar2 = __real_3f800000;
  pTVar1 = &this->CurrentGains;
  uVar14 = 0;
  uVar19 = 0;
  uVar18 = uVar14;
  uVar16 = uVar14;
  do {
    iVar12 = (this->CurrentGains).ArrayNum;
    uVar15 = (uint)uVar18;
    uVar17 = ~uVar15 >> 0x1f;
    uVar13 = 0;
    if (uVar15 == param_1) {
      uVar11 = uVar19;
      if ((int)uVar15 < iVar12) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = fVar2 - param_3;
      if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_14b06f6f7:
      (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x1;
    }
    else {
      if (uVar15 == param_2) {
        uVar11 = uVar13;
        if ((int)uVar15 < iVar12) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = param_3;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        goto LAB_14b06f6f7;
      }
      if ((int)uVar15 < iVar12) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = 0;
      uVar13 = uVar19;
      if ((int)uVar15 < (this->PrevGains).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(float *)((this->PrevGains).AllocatorInstance.Data + uVar16 * 4) == 0.0) {
        uVar13 = uVar19;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x0;
      }
    }
    uVar18 = (ulonglong)(uVar15 + 1);
    uVar16 = uVar16 + 1;
    if (6 < uVar15 + 1) {
      iVar12 = (param_5->Buffer).ArrayNum;
      if (0 < iVar12) {
        memset((param_5->Buffer).AllocatorInstance.Data,0,(longlong)iVar12 << 2);
        iVar12 = (param_5->Buffer).ArrayNum;
      }
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      iVar12 = (param_5->Buffer).ArrayNum;
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      pFVar3 = (param_5->Buffer).AllocatorInstance.Data;
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar9._4_4_ = uStack_7c;
      uVar9._0_4_ = iVar12;
      uVar18 = uVar14;
      uVar16 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar15 = ~uVar13 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar13 < (this->NeedsMixing).ArrayNum) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->NeedsMixing).AllocatorInstance.Data[uVar18] != (FScriptContainerElement)0x0) {
          uVar19 = 0;
          if ((int)uVar13 < param_4->ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          pFVar4 = (param_4->AllocatorInstance).Data;
          iVar12 = this->NumFramesPerBlock;
          puVar5 = *(undefined8 **)(pFVar4 + uVar16 + 8);
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          pfVar6 = (float *)*puVar5;
          if ((iVar12 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((1 < (byte)LogMetaSound._0_1_) &&
             (lVar7 = *(longlong *)(pFVar4 + uVar16 + 8),
             *(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 8))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          uVar19 = 0;
          if ((int)uVar13 < (this->CurrentGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          fVar2 = *(float *)((this->CurrentGains).AllocatorInstance.Data + uVar18 * 4);
          uVar19 = 0;
          if ((int)uVar13 < (this->PrevGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          local_68[0]._12_4_ = uStack_7c;
          local_68[0].ArrayNum = iVar12;
          local_78.DataPtr = (float *)pFVar3;
          local_78._8_8_ = uVar9;
          local_68[0].DataPtr = pfVar6;
          Audio::ArrayMixIn(local_68,&local_78,
                            *(float *)((this->PrevGains).AllocatorInstance.Data + uVar18 * 4),fVar2)
          ;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar18 = uVar18 + 1;
        uVar16 = uVar16 + 0x20;
        if (6 < uVar13 + 1) {
          TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->PrevGains,&this->CurrentGains)
          ;
          return;
        }
      } while( true );
    }
  } while( true );
}

// GetCrossfadeOutput @ 14b06faf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TCrossfadeHelper<Metasound::FAudioBuffer,8>::GetCrossfadeOutput
          (TCrossfadeHelper<Metasound::FAudioBuffer,8> *this,int param_1,int param_2,float param_3,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_4,FAudioBuffer *param_5)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [4];
  
  fVar2 = __real_3f800000;
  pTVar1 = &this->CurrentGains;
  uVar14 = 0;
  uVar19 = 0;
  uVar18 = uVar14;
  uVar16 = uVar14;
  do {
    iVar12 = (this->CurrentGains).ArrayNum;
    uVar15 = (uint)uVar18;
    uVar17 = ~uVar15 >> 0x1f;
    uVar13 = 0;
    if (uVar15 == param_1) {
      uVar11 = uVar19;
      if ((int)uVar15 < iVar12) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = fVar2 - param_3;
      if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_14b06fc97:
      (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x1;
    }
    else {
      if (uVar15 == param_2) {
        uVar11 = uVar13;
        if ((int)uVar15 < iVar12) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(float *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = param_3;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        goto LAB_14b06fc97;
      }
      if ((int)uVar15 < iVar12) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar16 * 4) = 0;
      uVar13 = uVar19;
      if ((int)uVar15 < (this->PrevGains).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(float *)((this->PrevGains).AllocatorInstance.Data + uVar16 * 4) == 0.0) {
        uVar13 = uVar19;
        if ((int)uVar15 < (this->NeedsMixing).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (this->NeedsMixing).AllocatorInstance.Data[uVar16] = (FScriptContainerElement)0x0;
      }
    }
    uVar18 = (ulonglong)(uVar15 + 1);
    uVar16 = uVar16 + 1;
    if (7 < uVar15 + 1) {
      iVar12 = (param_5->Buffer).ArrayNum;
      if (0 < iVar12) {
        memset((param_5->Buffer).AllocatorInstance.Data,0,(longlong)iVar12 << 2);
        iVar12 = (param_5->Buffer).ArrayNum;
      }
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      iVar12 = (param_5->Buffer).ArrayNum;
      if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != iVar12)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      pFVar3 = (param_5->Buffer).AllocatorInstance.Data;
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar9._4_4_ = uStack_7c;
      uVar9._0_4_ = iVar12;
      uVar18 = uVar14;
      uVar16 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar15 = ~uVar13 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar13 < (this->NeedsMixing).ArrayNum) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->NeedsMixing).AllocatorInstance.Data[uVar18] != (FScriptContainerElement)0x0) {
          uVar19 = 0;
          if ((int)uVar13 < param_4->ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          pFVar4 = (param_4->AllocatorInstance).Data;
          iVar12 = this->NumFramesPerBlock;
          puVar5 = *(undefined8 **)(pFVar4 + uVar16 + 8);
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          pfVar6 = (float *)*puVar5;
          if ((iVar12 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((1 < (byte)LogMetaSound._0_1_) &&
             (lVar7 = *(longlong *)(pFVar4 + uVar16 + 8),
             *(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 8))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          uVar19 = 0;
          if ((int)uVar13 < (this->CurrentGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          fVar2 = *(float *)((this->CurrentGains).AllocatorInstance.Data + uVar18 * 4);
          uVar19 = 0;
          if ((int)uVar13 < (this->PrevGains).ArrayNum) {
            uVar19 = uVar15;
          }
          if ((uVar19 == 0) &&
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
          local_68[0]._12_4_ = uStack_7c;
          local_68[0].ArrayNum = iVar12;
          local_78.DataPtr = (float *)pFVar3;
          local_78._8_8_ = uVar9;
          local_68[0].DataPtr = pfVar6;
          Audio::ArrayMixIn(local_68,&local_78,
                            *(float *)((this->PrevGains).AllocatorInstance.Data + uVar18 * 4),fVar2)
          ;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar18 = uVar18 + 1;
        uVar16 = uVar16 + 0x20;
        if (7 < uVar13 + 1) {
          TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->PrevGains,&this->CurrentGains)
          ;
          return;
        }
      } while( true );
    }
  } while( true );
}

