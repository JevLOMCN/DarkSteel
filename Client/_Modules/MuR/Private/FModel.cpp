// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 27

// FModel @ 14aa92fb0

FModel * __thiscall UE::Mutable::Private::FModel::FModel(FModel *this)

{
  FProgram *this_00;
  
  this_00 = ::operator_new(0x278);
  if (this_00 != (FProgram *)0x0) {
    memset(this_00,0,0x278);
    FProgram::FProgram(this_00);
    this->m_pD = (Private *)this_00;
    return this;
  }
  this->m_pD = (Private *)0x0;
  return this;
}

// ~FModel @ 14aa93c50

void __thiscall UE::Mutable::Private::FModel::~FModel(FModel *this)

{
  FProgram *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId103,"Mutable_ModelDestructor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
               ,0x67);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId103);
  }
  if ((this->m_pD == (Private *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("m_pD",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                         ,0x69,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = &this->m_pD->Program;
  if (this_00 != (FProgram *)0x0) {
    FProgram::~FProgram(this_00);
    ::operator_delete(this_00,0x278);
  }
  this->m_pD = (Private *)0x0;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindState @ 14aac91f0

int __thiscall UE::Mutable::Private::FModel::FindState(FModel *this,FString *param_1)

{
  int iVar1;
  Private *pPVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = 0;
  lVar9 = 0;
  iVar6 = -1;
  while( true ) {
    pPVar2 = this->m_pD;
    if ((pPVar2->Program).States.ArrayNum <= iVar8) {
      return iVar6;
    }
    if ((iVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pFVar3 = (pPVar2->Program).States.AllocatorInstance.Data;
    iVar7 = (param_1->Data).ArrayNum;
    iVar1 = *(int *)(pFVar3 + lVar9 + 8);
    if (iVar1 == iVar7) {
      if (iVar1 < 2) {
        bVar5 = true;
      }
      else {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar3 + lVar9),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar5 = iVar7 == 0;
      }
    }
    else {
      bVar5 = iVar1 + iVar7 == 1;
    }
    iVar7 = iVar8;
    if (!bVar5) {
      iVar7 = iVar6;
    }
    iVar8 = iVar8 + 1;
    lVar9 = lVar9 + 0x48;
    iVar6 = iVar7;
    if (-1 < iVar7) {
      return iVar7;
    }
  }
  pcVar4 = (code *)swi(3);
  iVar6 = (*pcVar4)();
  return iVar6;
}

// GetBoolDefaultValue @ 14aacbf40

bool __thiscall UE::Mutable::Private::FModel::GetBoolDefaultValue(FModel *this,int param_1)

{
  Private *pPVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  if (((param_1 < 0) || ((this->m_pD->Program).Parameters.ArrayNum <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("m_pD->Program.Parameters.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                         ,0x10e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pPVar1 = this->m_pD;
  uVar6 = 0;
  if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar7 * 0x70 + 0x20) != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("m_pD->Program.Parameters[Index].Type == EParameterType::Bool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                         ,0x10f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((-1 < param_1) && (pPVar1 = this->m_pD, param_1 < (pPVar1->Program).Parameters.ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar7 * 0x70 + 0x20) == 1) {
      pPVar1 = this->m_pD;
      uVar6 = 0;
      if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (pPVar1->Program).Parameters.AllocatorInstance.Data;
      if ((pFVar2[lVar7 * 0x70 + 0x40] != (FScriptContainerElement)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      return (bool)pFVar2[lVar7 * 0x70 + 0x30];
    }
  }
  return false;
}

// GetColourDefaultValue @ 14aacc7f0

void __thiscall
UE::Mutable::Private::FModel::GetColourDefaultValue
          (FModel *this,int param_1,TVector4<float> *param_2)

{
  Private *pPVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  if ((param_1 < 0) || ((this->m_pD->Program).Parameters.ArrayNum <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("m_pD->Program.Parameters.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                       ,0x13e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pPVar1 = this->m_pD;
  uVar6 = 0;
  if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar7 * 0x70 + 0x20) != 4) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("m_pD->Program.Parameters[Index].Type == EParameterType::Color",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                       ,0x13f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((-1 < param_1) && (pPVar1 = this->m_pD, param_1 < (pPVar1->Program).Parameters.ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar7 * 0x70 + 0x20) == 4) {
      pPVar1 = this->m_pD;
      uVar6 = 0;
      if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (pPVar1->Program).Parameters.AllocatorInstance.Data;
      if (pFVar2[lVar7 * 0x70 + 0x40] != (FScriptContainerElement)0x3) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar4 = *(undefined8 *)(pFVar2 + lVar7 * 0x70 + 0x38);
      *(undefined8 *)&param_2->field0_0x0 = *(undefined8 *)(pFVar2 + lVar7 * 0x70 + 0x30);
      *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = uVar4;
    }
  }
  return;
}

// GetConstantImageRomId @ 14aaccad0

int __thiscall
UE::Mutable::Private::FModel::GetConstantImageRomId(FModel *this,int param_1,int param_2)

{
  int *piVar1;
  Private *pPVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_18;
  
  pPVar2 = this->m_pD;
  piVar1 = &(pPVar2->Program).ConstantImages.ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Program.ConstantImages.IsValidIndex(ConstantImageIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                         ,0x193,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uVar7 = 0;
  if (param_1 < *piVar1) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pFVar3 = (pPVar2->Program).ConstantImages.AllocatorInstance.Data;
  if (param_2 < (int)(uint)(byte)pFVar3[(longlong)param_1 * 0xc + 8]) {
    local_18 = (int)*(undefined8 *)(pFVar3 + (longlong)param_1 * 0xc);
    uVar8 = local_18 + param_2;
    uVar7 = 0;
    if ((int)uVar8 < (pPVar2->Program).ConstantImageLODIndices.ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    uVar8 = *(uint *)((pPVar2->Program).ConstantImageLODIndices.AllocatorInstance.Data +
                     (longlong)(int)uVar8 * 4);
    uVar7 = uVar8 & 0x7fffffff;
    if (-1 < (int)uVar8) {
      uVar7 = 0xffffffff;
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  return uVar7;
}

// GetFloatDefaultValue @ 14aacd480

float __thiscall UE::Mutable::Private::FModel::GetFloatDefaultValue(FModel *this,int param_1)

{
  Private *pPVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->m_pD->Program).Parameters.ArrayNum <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("m_pD->Program.Parameters.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                         ,0x12e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar7 = (float)(*pcVar3)();
    return fVar7;
  }
  pPVar1 = this->m_pD;
  uVar5 = 0;
  if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar7 = (float)(*pcVar3)();
    return fVar7;
  }
  if ((*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar6 * 0x70 + 0x20) != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("m_pD->Program.Parameters[Index].Type == EParameterType::Float",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar7 = (float)(*pcVar3)();
    return fVar7;
  }
  if ((-1 < param_1) && (pPVar1 = this->m_pD, param_1 < (pPVar1->Program).Parameters.ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar7 = (float)(*pcVar3)();
      return fVar7;
    }
    if (*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar6 * 0x70 + 0x20) == 3) {
      pPVar1 = this->m_pD;
      uVar5 = 0;
      if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar7 = (float)(*pcVar3)();
        return fVar7;
      }
      pFVar2 = (pPVar1->Program).Parameters.AllocatorInstance.Data;
      if ((pFVar2[lVar6 * 0x70 + 0x40] != (FScriptContainerElement)0x2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar7 = (float)(*pcVar3)();
        return fVar7;
      }
      return *(float *)(pFVar2 + lVar6 * 0x70 + 0x30);
    }
  }
  return 0.0;
}

// GetIntDefaultValue @ 14aace690

int __thiscall UE::Mutable::Private::FModel::GetIntDefaultValue(FModel *this,int param_1)

{
  Private *pPVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  if (((param_1 < 0) || ((this->m_pD->Program).Parameters.ArrayNum <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("m_pD->Program.Parameters.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                         ,0x11e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pPVar1 = this->m_pD;
  uVar6 = 0;
  if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if ((*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar7 * 0x70 + 0x20) != 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("m_pD->Program.Parameters[Index].Type == EParameterType::Int",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                         ,0x11f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if ((-1 < param_1) && (pPVar1 = this->m_pD, param_1 < (pPVar1->Program).Parameters.ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    if (*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar7 * 0x70 + 0x20) == 2) {
      pPVar1 = this->m_pD;
      uVar6 = 0;
      if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      pFVar2 = (pPVar1->Program).Parameters.AllocatorInstance.Data;
      if ((pFVar2[lVar7 * 0x70 + 0x40] != (FScriptContainerElement)0x1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      return *(int *)(pFVar2 + lVar7 * 0x70 + 0x30);
    }
  }
  return 0;
}

// GetMatrixDefaultValue @ 14aacf1e0

TMatrix<float> * __thiscall
UE::Mutable::Private::FModel::GetMatrixDefaultValue
          (FModel *this,TMatrix<float> *__return_storage_ptr__,int param_1)

{
  Private *pPVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  TMatrix<float> *pTVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar11 = (longlong)param_1;
  if ((param_1 < 0) || ((this->m_pD->Program).Parameters.ArrayNum <= param_1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("m_pD->Program.Parameters.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                       ,0x150,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TMatrix<float> *)(*pcVar4)();
      return pTVar9;
    }
  }
  pPVar1 = this->m_pD;
  uVar10 = 0;
  if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TMatrix<float> *)(*pcVar4)();
      return pTVar9;
    }
  }
  if (*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar11 * 0x70 + 0x20) != 10) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("m_pD->Program.Parameters[Index].Type == EParameterType::Matrix",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                       ,0x151,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TMatrix<float> *)(*pcVar4)();
      return pTVar9;
    }
  }
  if ((-1 < param_1) && (pPVar1 = this->m_pD, param_1 < (pPVar1->Program).Parameters.ArrayNum)) {
    uVar10 = 0;
    if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TMatrix<float> *)(*pcVar4)();
        return pTVar9;
      }
    }
    if (*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar11 * 0x70 + 0x20) == 10)
    {
      pPVar1 = this->m_pD;
      uVar10 = 0;
      if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
        uVar10 = (uint)~param_1 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TMatrix<float> *)(*pcVar4)();
          return pTVar9;
        }
      }
      pFVar2 = (pPVar1->Program).Parameters.AllocatorInstance.Data;
      if (pFVar2[lVar11 * 0x70 + 0x40] != (FScriptContainerElement)0x8) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TMatrix<float> *)(*pcVar4)();
          return pTVar9;
        }
      }
      if (*(longlong *)(pFVar2 + lVar11 * 0x70 + 0x30) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StoragePtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                           ,0x55,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TMatrix<float> *)(*pcVar4)();
          return pTVar9;
        }
      }
      puVar3 = *(undefined8 **)(pFVar2 + lVar11 * 0x70 + 0x30);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *(undefined8 *)__return_storage_ptr__->M[0] = *puVar3;
      *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar5;
      fVar12 = *(float *)(puVar3 + 4);
      fVar13 = *(float *)((longlong)puVar3 + 0x24);
      fVar14 = *(float *)(puVar3 + 5);
      fVar15 = *(float *)((longlong)puVar3 + 0x2c);
      *(undefined8 *)__return_storage_ptr__->M[1] = uVar6;
      *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar7;
      fVar16 = *(float *)(puVar3 + 6);
      fVar17 = *(float *)((longlong)puVar3 + 0x34);
      fVar18 = *(float *)(puVar3 + 7);
      fVar19 = *(float *)((longlong)puVar3 + 0x3c);
      goto LAB_14aacf429;
    }
  }
  uVar7 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  uVar6 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)__return_storage_ptr__->M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar5;
  fVar15 = UE::Math::TMatrix<float>::Identity.M[2][3];
  fVar14 = UE::Math::TMatrix<float>::Identity.M[2][2];
  fVar13 = UE::Math::TMatrix<float>::Identity.M[2][1];
  fVar12 = UE::Math::TMatrix<float>::Identity.M[2][0];
  *(undefined8 *)__return_storage_ptr__->M[1] = uVar6;
  *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar7;
  fVar16 = UE::Math::TMatrix<float>::Identity.M[3][0];
  fVar17 = UE::Math::TMatrix<float>::Identity.M[3][1];
  fVar18 = UE::Math::TMatrix<float>::Identity.M[3][2];
  fVar19 = UE::Math::TMatrix<float>::Identity.M[3][3];
LAB_14aacf429:
  __return_storage_ptr__->M[2][0] = fVar12;
  __return_storage_ptr__->M[2][1] = fVar13;
  __return_storage_ptr__->M[2][2] = fVar14;
  __return_storage_ptr__->M[2][3] = fVar15;
  __return_storage_ptr__->M[3][0] = fVar16;
  __return_storage_ptr__->M[3][1] = fVar17;
  __return_storage_ptr__->M[3][2] = fVar18;
  __return_storage_ptr__->M[3][3] = fVar19;
  return __return_storage_ptr__;
}

// GetPrivate @ 14aad0e60

Private * __thiscall UE::Mutable::Private::FModel::GetPrivate(FModel *this)

{
  return this->m_pD;
}

// GetProjectorDefaultValue @ 14aad0e70

void __thiscall
UE::Mutable::Private::FModel::GetProjectorDefaultValue
          (FModel *this,int param_1,EProjectorType *param_2,TVector<float> *param_3,
          TVector<float> *param_4,TVector<float> *param_5,TVector<float> *param_6,float *param_7)

{
  Private *pPVar1;
  FScriptContainerElement *pFVar2;
  EProjectorType *pEVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  if ((param_1 < 0) || ((this->m_pD->Program).Parameters.ArrayNum <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("m_pD->Program.Parameters.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                       ,0x161,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pPVar1 = this->m_pD;
  uVar6 = 0;
  if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar7 * 0x70 + 0x20) != 5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("m_pD->Program.Parameters[Index].Type == EParameterType::Projector",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                       ,0x162,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((-1 < param_1) && (pPVar1 = this->m_pD, param_1 < (pPVar1->Program).Parameters.ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data + lVar7 * 0x70 + 0x20) == 5) {
      pPVar1 = this->m_pD;
      uVar6 = 0;
      if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar2 = (pPVar1->Program).Parameters.AllocatorInstance.Data;
      lVar7 = lVar7 * 0x70;
      if (pFVar2[lVar7 + 0x40] != (FScriptContainerElement)0x4) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(longlong *)(pFVar2 + lVar7 + 0x30) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StoragePtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                           ,0x55,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pEVar3 = *(EProjectorType **)(pFVar2 + lVar7 + 0x30);
      if (param_2 != (EProjectorType *)0x0) {
        *param_2 = *pEVar3;
      }
      if (param_3 != (TVector<float> *)0x0) {
        *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)(pEVar3 + 1);
        (param_3->field0_0x0)._s_0.Z = (float)pEVar3[3];
      }
      if (param_4 != (TVector<float> *)0x0) {
        *(undefined8 *)&param_4->field0_0x0 = *(undefined8 *)(pEVar3 + 4);
        (param_4->field0_0x0)._s_0.Z = (float)pEVar3[6];
      }
      if (param_5 != (TVector<float> *)0x0) {
        *(undefined8 *)&param_5->field0_0x0 = *(undefined8 *)(pEVar3 + 7);
        (param_5->field0_0x0)._s_0.Z = (float)pEVar3[9];
      }
      if (param_6 != (TVector<float> *)0x0) {
        *(undefined8 *)&param_6->field0_0x0 = *(undefined8 *)(pEVar3 + 10);
        (param_6->field0_0x0)._s_0.Z = (float)pEVar3[0xc];
      }
      if (param_7 != (float *)0x0) {
        *param_7 = (float)pEVar3[0xd];
      }
    }
  }
  return;
}

// GetRomCount @ 14aad1200

int __thiscall UE::Mutable::Private::FModel::GetRomCount(FModel *this)

{
  return (this->m_pD->Program).Roms.ArrayNum;
}

// GetRomSize @ 14aad1210

uint __thiscall UE::Mutable::Private::FModel::GetRomSize(FModel *this,int param_1)

{
  Private *pPVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  pPVar1 = this->m_pD;
  uVar4 = 0;
  if (param_1 < (pPVar1->Program).Roms.ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return *(uint *)((pPVar1->Program).Roms.AllocatorInstance.Data + (longlong)param_1 * 4) &
         0x3fffffff;
}

// GetStateCount @ 14aad24e0

int __thiscall UE::Mutable::Private::FModel::GetStateCount(FModel *this)

{
  return (this->m_pD->Program).States.ArrayNum;
}

// GetStateName @ 14aad24f0

FString * __thiscall UE::Mutable::Private::FModel::GetStateName(FModel *this,int param_1)

{
  Private *pPVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if (-1 < param_1) {
    pPVar1 = this->m_pD;
    if (param_1 < (pPVar1->Program).States.ArrayNum) {
      if (param_1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
      }
      return (FString *)((pPVar1->Program).States.AllocatorInstance.Data + (longlong)param_1 * 0x48)
      ;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Mutable::Private::FModel::GetStateName'::__l2::
             _dynamic_atexit_destructor_for__None__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::None;
}

// GetStateParameterCount @ 14aad25d0

int __thiscall UE::Mutable::Private::FModel::GetStateParameterCount(FModel *this,int param_1)

{
  Private *pPVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 < 0) {
    return -1;
  }
  pPVar1 = this->m_pD;
  if (param_1 < (pPVar1->Program).States.ArrayNum) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return *(int *)((pPVar1->Program).States.AllocatorInstance.Data +
                   (longlong)param_1 * 0x48 + 0x20);
  }
  return -1;
}

// GetStateParameterIndex @ 14aad2660

int __thiscall
UE::Mutable::Private::FModel::GetStateParameterIndex(FModel *this,int param_1,int param_2)

{
  Private *pPVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (param_1 < 0) {
    return -1;
  }
  pPVar1 = this->m_pD;
  if (param_1 < (pPVar1->Program).States.ArrayNum) {
    if (param_1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    if (-1 < param_2) {
      pFVar2 = (pPVar1->Program).States.AllocatorInstance.Data;
      if (param_2 < *(int *)(pFVar2 + (longlong)param_1 * 0x48 + 0x20)) {
        if (param_2 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
        }
        return *(int *)(*(longlong *)(pFVar2 + (longlong)param_1 * 0x48 + 0x18) +
                       (longlong)param_2 * 4);
      }
    }
  }
  return -1;
}

// HasExternalData @ 14aad6d40

bool __thiscall UE::Mutable::Private::FModel::HasExternalData(FModel *this)

{
  return 0 < (this->m_pD->Program).Roms.ArrayNum;
}

// IsMeshData @ 14aad8aa0

bool __thiscall UE::Mutable::Private::FModel::IsMeshData(FModel *this,int param_1)

{
  Private *pPVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  pPVar1 = this->m_pD;
  uVar5 = 0;
  if (param_1 < (pPVar1->Program).Roms.ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)((byte)((uint)*(undefined4 *)
                              ((pPVar1->Program).Roms.AllocatorInstance.Data + (longlong)param_1 * 4
                              ) >> 0x1e) & 1);
}

// IsParameterMultidimensional @ 14aad8b20

bool __thiscall UE::Mutable::Private::FModel::IsParameterMultidimensional(FModel *this,int param_1)

{
  Private *pPVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((-1 < param_1) && (pPVar1 = this->m_pD, param_1 < (pPVar1->Program).Parameters.ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (pPVar1->Program).Parameters.ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return 0 < *(int *)((pPVar1->Program).Parameters.AllocatorInstance.Data +
                       (longlong)param_1 * 0x70 + 0x58);
  }
  return false;
}

// IsRomHighRes @ 14aad8eb0

bool __thiscall UE::Mutable::Private::FModel::IsRomHighRes(FModel *this,int param_1)

{
  Private *pPVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  pPVar1 = this->m_pD;
  uVar5 = 0;
  if (param_1 < (pPVar1->Program).Roms.ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return SUB41((uint)*(undefined4 *)
                      ((pPVar1->Program).Roms.AllocatorInstance.Data + (longlong)param_1 * 4) >>
               0x1f,0);
}

// NewParameters @ 14aade6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedPtr<UE::Mutable::Private::FParameters,1> * __cdecl
UE::Mutable::Private::FModel::NewParameters
          (TSharedPtr<UE::Mutable::Private::FParameters,1> *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_1,FParameters *param_2,
          TMap<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
          *param_3,TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                   *param_4,
          TMap<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
          *param_5)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement FVar3;
  longlong *plVar4;
  Private *pPVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  TMap<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
  *pTVar11;
  TMap<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
  *pTVar12;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *pTVar13;
  TMap<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
  *pTVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  EParameterType EVar18;
  EParameterType EVar19;
  uint uVar20;
  TReferenceControllerBase<1> *pTVar21;
  TSharedPtr<UE::Mutable::Private::FParameters,1> *pTVar22;
  FParameters *pFVar23;
  Private *pPVar24;
  FModel *pFVar25;
  FString *pFVar26;
  FParameters *pFVar27;
  UTexture *pUVar28;
  longlong lVar29;
  undefined1 *puVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  uint *puVar33;
  ulonglong uVar34;
  uint uVar35;
  FScriptContainerElement *pFVar36;
  FScriptContainerElement *pFVar37;
  float fVar38;
  undefined1 auStackY_288 [32];
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256 [6];
  ulonglong local_250;
  TMap<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
  *local_248;
  int iStack_240;
  uint uStack_23c;
  undefined1 *local_238;
  undefined4 uStack_230;
  int iStack_22c;
  int local_228;
  undefined4 uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  FLLMScope local_218 [2];
  longlong local_210;
  longlong local_208;
  TMap<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
  *local_200;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  FParameters *local_1e0;
  FMemScope local_1d8;
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> *local_1d0;
  TMap<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
  *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  TMap<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  TVector4<float>_u_0 local_138;
  FModel *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  TVector4<float>_u_0 local_118;
  FString local_108;
  FString local_f8;
  FString local_e8 [2];
  undefined4 local_bc;
  undefined4 local_9c;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_200 = param_3;
  local_1e0 = param_2;
  local_1d0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name428,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_218,LLMScope_Name428,false,None,Default,true);
  FMemScope::FMemScope(&local_1d8,&LLMScope_Name428,true);
  pTVar21 = ::operator_new(0x28);
  local_250 = 1;
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    pFVar23 = (FParameters *)&DAT_00000010;
    pTVar21 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar21->SharedReferenceCount = (atomic<int>)0x1;
    pTVar21->WeakReferenceCount = (atomic<int>)0x1;
    pTVar21->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFParameters_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    Private::FParameters::FParameters((FParameters *)(pTVar21 + 1));
    pFVar23 = (FParameters *)(pTVar21 + 1);
    if (pFVar23 == (FParameters *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
        return pTVar22;
      }
      goto LAB_14aade830;
    }
  }
  if (((pFVar23->_padding_ == 0) || (pFVar23->_padding_ == 0)) ||
     (*(int *)(pFVar23->_padding_ + 8) < 1)) {
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar23->_padding_ = (longlong)pFVar23;
    if (pTVar21 != (TReferenceControllerBase<1> *)pFVar23->_padding_) {
      if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar23->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,local_250);
        }
      }
      pFVar23->_padding_ = (longlong)pTVar21;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
LAB_14aade830:
  __return_storage_ptr__->Object = pFVar23;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar21;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  pFVar23 = TSharedPtr<UE::Mutable::Private::FParameters,1>::operator->(__return_storage_ptr__);
  pPVar24 = Private::FParameters::GetPrivate(pFVar23);
  pTVar21 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar25 = param_1->Object;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_128 = (pPVar24->Model).Object;
  pTStack_120 = (pPVar24->Model).SharedReferenceCount.ReferenceController;
  (pPVar24->Model).Object = pFVar25;
  (pPVar24->Model).SharedReferenceCount.ReferenceController = pTVar21;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_120);
  pFVar25 = TSharedPtr<UE::Mutable::Private::FModel_const_,1>::operator->(param_1);
  pPVar5 = pFVar25->m_pD;
  if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
    return pTVar22;
  }
  pPVar24 = Private::FParameters::GetPrivate(__return_storage_ptr__->Object);
  TArray<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&pPVar24->Values,(pPVar5->Program).Parameters.ArrayNum,Default);
  uVar31 = 0;
  if (0 < (pPVar5->Program).Parameters.ArrayNum) {
    local_210 = 0;
    local_208 = 0;
    uVar34 = uVar31;
    do {
      uVar35 = (uint)uVar31;
      uVar17 = 0;
      if ((int)uVar35 < (pPVar5->Program).Parameters.ArrayNum) {
        uVar17 = ~uVar35 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
        return pTVar22;
      }
      pFVar37 = (pPVar5->Program).Parameters.AllocatorInstance.Data + uVar34 + 0x30;
      if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
        return pTVar22;
      }
      pPVar24 = Private::FParameters::GetPrivate(__return_storage_ptr__->Object);
      uVar17 = 0;
      if ((int)uVar35 < (pPVar24->Values).ArrayNum) {
        uVar17 = ~uVar35 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
        return pTVar22;
      }
      pFVar36 = (pPVar24->Values).AllocatorInstance.Data + local_208;
      if (pFVar37 != pFVar36) {
        FVar3 = pFVar37[0x10];
        local_68 = CONCAT31(local_68._1_3_,FVar3);
        if ((9 < (byte)FVar3) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xec,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[(byte)FVar3])(&local_78,pFVar37);
        uVar17 = *(uint *)(pFVar36 + 0x10);
        uVar8 = *(undefined4 *)(pFVar36 + 0x18);
        uVar9 = *(undefined8 *)pFVar36;
        uVar10 = *(undefined8 *)(pFVar36 + 8);
        *(undefined8 *)pFVar36 = local_78;
        *(undefined8 *)(pFVar36 + 8) = uStack_70;
        *(ulonglong *)(pFVar36 + 0x10) = CONCAT44(uStack_64,local_68);
        *(ulonglong *)(pFVar36 + 0x18) = CONCAT44(uStack_5c,uStack_60);
        local_78 = uVar9;
        uStack_70 = uVar10;
        local_68 = uVar17;
        uStack_64 = *(undefined4 *)(pFVar36 + 0x14);
        uStack_60 = uVar8;
        uStack_5c = *(undefined4 *)(pFVar36 + 0x1c);
        if ((9 < (ulonglong)(uVar17 & 0xff)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar17 & 0xff])(&local_78);
      }
      local_210 = local_210 + 1;
      local_208 = local_208 + 0x20;
      uVar31 = (ulonglong)(uVar35 + 1);
      uVar34 = uVar34 + 0x70;
    } while ((int)(uVar35 + 1) < (pPVar5->Program).Parameters.ArrayNum);
  }
  pFVar23 = local_1e0;
  uVar31 = 0;
  if ((local_1e0 != (FParameters *)0x0) &&
     (iVar16 = Private::FParameters::GetCount(local_1e0), uVar10 = _UNK_150689648,
     uVar9 = ___xmm_3f800000000000000000000000000000, uVar34 = uVar31, 0 < iVar16)) {
    do {
      if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
        return pTVar22;
      }
      pPVar24 = Private::FParameters::GetPrivate(__return_storage_ptr__->Object);
      uVar35 = (uint)uVar31;
      pFVar26 = Private::FParameters::GetName(pFVar23,uVar35);
      uVar17 = Private::FParameters::Private::Find(pPVar24,pFVar26);
      if (-1 < (int)uVar17) {
        if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        EVar18 = Private::FParameters::GetType(__return_storage_ptr__->Object,uVar17);
        EVar19 = Private::FParameters::GetType(pFVar23,uVar35);
        if (EVar19 == EVar18) {
          if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
            return pTVar22;
          }
          EVar18 = Private::FParameters::GetType(__return_storage_ptr__->Object,uVar17);
          switch(EVar18) {
          case Bool:
            pFVar27 = TSharedPtr<UE::Mutable::Private::FParameters,1>::operator->
                                (__return_storage_ptr__);
            bVar15 = Private::FParameters::GetBoolValue(pFVar23,uVar35,(FRangeIndex *)0x0);
            Private::FParameters::SetBoolValue(pFVar27,uVar17,bVar15,(FRangeIndex *)0x0);
            break;
          case Int:
            pFVar27 = TSharedPtr<UE::Mutable::Private::FParameters,1>::operator->
                                (__return_storage_ptr__);
            iVar16 = Private::FParameters::GetIntValue(pFVar23,uVar35,(FRangeIndex *)0x0);
            Private::FParameters::SetIntValue(pFVar27,uVar17,iVar16,(FRangeIndex *)0x0);
            break;
          case Float:
            pFVar27 = TSharedPtr<UE::Mutable::Private::FParameters,1>::operator->
                                (__return_storage_ptr__);
            fVar38 = Private::FParameters::GetFloatValue(pFVar23,uVar35,(FRangeIndex *)0x0);
            Private::FParameters::SetFloatValue(pFVar27,uVar17,fVar38,(FRangeIndex *)0x0);
            break;
          case Color:
            local_138._0_8_ = uVar9;
            local_138._8_8_ = uVar10;
            Private::FParameters::GetColourValue
                      (pFVar23,uVar35,(TVector4<float> *)&local_138._s_0,(FRangeIndex *)0x0);
            pFVar27 = TSharedPtr<UE::Mutable::Private::FParameters,1>::operator->
                                (__return_storage_ptr__);
            local_118._0_8_ = local_138._0_8_;
            local_118._8_8_ = local_138._8_8_;
            Private::FParameters::SetColourValue
                      (pFVar27,uVar17,(TVector4<float> *)&local_118._s_0,(FRangeIndex *)0x0);
            break;
          case Projector:
            pFVar27 = TSharedPtr<UE::Mutable::Private::FParameters,1>::operator->
                                (__return_storage_ptr__);
            pPVar24 = Private::FParameters::GetPrivate(pFVar27);
            uVar20 = 0;
            if ((int)uVar17 < (pPVar24->Values).ArrayNum) {
              uVar20 = ~uVar17 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
              return pTVar22;
            }
            pFVar37 = (pPVar24->Values).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x20;
            pPVar24 = Private::FParameters::GetPrivate(pFVar23);
            uVar17 = 0;
            if ((int)uVar35 < (pPVar24->Values).ArrayNum) {
              uVar17 = ~uVar35 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
              return pTVar22;
            }
            pFVar36 = (pPVar24->Values).AllocatorInstance.Data + uVar34;
            if ((pFVar36[0x10].field_0x0 != '\x04') &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index == TypeIndex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                    ,0x97,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
              return pTVar22;
            }
            Core::Private::
            TDestructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
            ::Destruct((ulonglong)(byte)pFVar37[0x10].field_0x0,pFVar37);
            Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>::
            TIndirectObject<UE::Mutable::Private::FProjector>
                      ((TIndirectObject<UE::Mutable::Private::FProjector> *)pFVar37,
                       (TIndirectObject<UE::Mutable::Private::FProjector> *)pFVar36);
            pFVar37[0x10].field_0x0 = 4;
            break;
          case Image:
            pFVar27 = TSharedPtr<UE::Mutable::Private::FParameters,1>::operator->
                                (__return_storage_ptr__);
            pUVar28 = Private::FParameters::GetImageValue(pFVar23,uVar35,(FRangeIndex *)0x0);
            Private::FParameters::SetImageValue(pFVar27,uVar17,pUVar28,(FRangeIndex *)0x0);
            break;
          default:
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                                ,0x1e7,L"");
            if (bVar15) {
              pcVar7 = (code *)swi(3);
              pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
              return pTVar22;
            }
          }
        }
      }
      uVar31 = (ulonglong)(uVar35 + 1);
      iVar16 = Private::FParameters::GetCount(pFVar23);
      uVar34 = uVar34 + 0x20;
    } while ((int)(uVar35 + 1) < iVar16);
  }
  pTVar11 = local_200;
  if (local_200 !=
      (TMap<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
       *)0x0) {
    iVar16 = *(int *)&local_200->field_0x28;
    local_238 = &local_200->field_0x10;
    iStack_240 = 0;
    local_228 = 0;
    uStack_23c = (uint)local_250;
    iStack_22c = iStack_240;
    if (iVar16 != 0) {
      puVar33 = *(uint **)&local_200->field_0x20;
      if (*(uint **)&local_200->field_0x20 == (uint *)0x0) {
        puVar33 = (uint *)local_238;
      }
      uVar17 = *puVar33;
      local_228 = 0;
      iStack_240 = 0;
      while (uVar17 == 0) {
        lVar29 = (longlong)iStack_240;
        local_228 = local_228 + 0x20;
        iStack_240 = iStack_240 + 1;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_240)
        goto LAB_14aadeee2;
        uVar17 = puVar33[lVar29 + 1];
      }
      uStack_23c = -uVar17 & uVar17;
      uVar31 = (ulonglong)uStack_23c * 2 + 1;
      lVar29 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_1f8 = (int)lVar29;
      iStack_22c = local_1f8 + -1 + local_228;
      if (iVar16 < iStack_22c) {
LAB_14aadeee2:
        iStack_22c = iVar16;
      }
    }
    puVar30 = &local_200->field_0x10;
    uVar17 = *(uint *)&local_200->field_0x28;
    uStack_224 = local_bc;
    iStack_220 = *(int *)&local_200->field_0x8 - *(int *)&local_200->field_0x34;
    local_248 = local_200;
    uVar35 = uVar17 & 0xffffffe0;
    TStack_1c0._padding_ = CONCAT44(uStack_23c,iStack_240);
    uStack_230 = 0xffffffff;
    TStack_1c0.CurrentBitIndex = iStack_22c;
    TStack_1c0.UnvisitedBitMask = 0xffffffff;
    local_1c8 = local_200;
    iVar16 = (int)uVar17 >> 5;
    TStack_1c0._28_4_ = local_bc;
    TStack_1c0.BaseBitIndex = local_228;
    uStack_1a0 = CONCAT44(uStack_21c,iStack_220);
    TStack_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_238;
    if (((int)uVar17 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
      return pTVar22;
    }
    pTVar12 = local_200;
    uVar20 = *(uint *)&pTVar11->field_0x28;
    if (uVar17 != uVar20) {
      puVar6 = *(undefined1 **)&pTVar11->field_0x20;
      puVar32 = puVar30;
      if (puVar6 != (undefined1 *)0x0) {
        puVar32 = puVar6;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar16 * 4);
      while (uVar17 == 0) {
        lVar29 = (longlong)iVar16;
        uVar35 = uVar35 + 0x20;
        iVar16 = iVar16 + 1;
        uVar17 = uVar20;
        if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar16)
        goto LAB_14aadf000;
        uVar17 = *(uint *)(puVar32 + lVar29 * 4 + 4);
      }
      uVar31 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar29 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_1f4 = (int)lVar29;
      uVar17 = (uVar35 - 1) + local_1f4;
      if ((int)uVar20 < (int)uVar17) {
        uVar17 = uVar20;
      }
    }
LAB_14aadf000:
    while( true ) {
      pTVar11 = local_1c8;
      if (*(int *)&local_1c8->field_0x8 - *(int *)&local_1c8->field_0x34 != (int)uStack_1a0) {
        local_258 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_258);
      }
      if (((TStack_1c0.CurrentBitIndex == uVar17) &&
          (TStack_1c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar30)) &&
         (pTVar11 == pTVar12)) break;
      pFVar2 = (FName *)(*(longlong *)pTVar11 + (longlong)TStack_1c0.CurrentBitIndex * 0x18);
      if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
        return pTVar22;
      }
      pPVar24 = Private::FParameters::GetPrivate(__return_storage_ptr__->Object);
      pFVar26 = ::FName::ToString(pFVar2,&local_108);
      iVar16 = Private::FParameters::Private::Find(pPVar24,pFVar26);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (iVar16 != -1) {
        if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        EVar18 = Private::FParameters::GetType(__return_storage_ptr__->Object,iVar16);
        if ((EVar18 != Image) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("pRes->GetType(Index) == EParameterType::Image",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                                ,0x1f6,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        Private::FParameters::SetImageValue
                  (__return_storage_ptr__->Object,iVar16,(UTexture *)pFVar2[1],(FRangeIndex *)0x0);
      }
      TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
    }
  }
  if (param_4 !=
      (TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
       *)0x0) {
    iVar16 = *(int *)&param_4->field_0x28;
    local_238 = &param_4->field_0x10;
    local_228 = 0;
    iStack_240 = 0;
    uStack_23c = (uint)local_250;
    iStack_22c = iStack_240;
    if (iVar16 != 0) {
      puVar33 = *(uint **)&param_4->field_0x20;
      if (*(uint **)&param_4->field_0x20 == (uint *)0x0) {
        puVar33 = (uint *)local_238;
      }
      uVar17 = *puVar33;
      iStack_240 = 0;
      while (uVar17 == 0) {
        lVar29 = (longlong)iStack_240;
        local_228 = local_228 + 0x20;
        iStack_240 = iStack_240 + 1;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_240)
        goto LAB_14aadf202;
        uVar17 = puVar33[lVar29 + 1];
      }
      uStack_23c = -uVar17 & uVar17;
      uVar31 = (ulonglong)uStack_23c * 2 + 1;
      lVar29 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_1f0 = (int)lVar29;
      iStack_22c = local_228 + -1 + local_1f0;
      if (iVar16 < iStack_22c) {
LAB_14aadf202:
        iStack_22c = iVar16;
      }
    }
    uVar17 = *(uint *)&param_4->field_0x28;
    uStack_224 = local_9c;
    iStack_220 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
    local_248 = (TMap<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
                 *)param_4;
    uVar35 = uVar17 & 0xffffffe0;
    TStack_190._padding_ = CONCAT44(uStack_23c,iStack_240);
    uStack_230 = 0xffffffff;
    TStack_190.CurrentBitIndex = iStack_22c;
    TStack_190.UnvisitedBitMask = 0xffffffff;
    local_198 = param_4;
    iVar16 = (int)uVar17 >> 5;
    TStack_190._28_4_ = local_9c;
    TStack_190.BaseBitIndex = local_228;
    uStack_170 = CONCAT44(uStack_21c,iStack_220);
    TStack_190.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_238;
    if (((int)uVar17 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
      return pTVar22;
    }
    uVar20 = *(uint *)&param_4->field_0x28;
    if (uVar17 != uVar20) {
      puVar30 = &param_4->field_0x10;
      if (*(undefined1 **)&param_4->field_0x20 != (undefined1 *)0x0) {
        puVar30 = *(undefined1 **)&param_4->field_0x20;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar16 * 4);
      while (uVar17 == 0) {
        lVar29 = (longlong)iVar16;
        uVar35 = uVar35 + 0x20;
        iVar16 = iVar16 + 1;
        uVar17 = uVar20;
        if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar16)
        goto LAB_14aadf320;
        uVar17 = *(uint *)(puVar30 + lVar29 * 4 + 4);
      }
      uVar31 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar29 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_1ec = (int)lVar29;
      uVar17 = (uVar35 - 1) + local_1ec;
      if ((int)uVar20 < (int)uVar17) {
        uVar17 = uVar20;
      }
    }
LAB_14aadf320:
    while( true ) {
      pTVar13 = local_198;
      if (*(int *)&local_198->field_0x8 - *(int *)&local_198->field_0x34 != (int)uStack_170) {
        local_257 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_257);
      }
      if (((TStack_190.CurrentBitIndex == uVar17) &&
          (TStack_190.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_4->field_0x10)) &&
         (pTVar13 == param_4)) break;
      pFVar2 = (FName *)(*(longlong *)pTVar13 + (longlong)TStack_190.CurrentBitIndex * 0x18);
      if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
        return pTVar22;
      }
      pPVar24 = Private::FParameters::GetPrivate(__return_storage_ptr__->Object);
      pFVar26 = ::FName::ToString(pFVar2,&local_f8);
      iVar16 = Private::FParameters::Private::Find(pPVar24,pFVar26);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (iVar16 != -1) {
        if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        EVar18 = Private::FParameters::GetType(__return_storage_ptr__->Object,iVar16);
        if ((EVar18 != Mesh) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("pRes->GetType(Index) == EParameterType::Mesh",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                                ,0x203,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        Private::FParameters::SetMeshValue
                  (__return_storage_ptr__->Object,iVar16,(USkeletalMesh *)pFVar2[1],
                   (FRangeIndex *)0x0);
      }
      TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
    }
  }
  if (param_5 !=
      (TMap<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
       *)0x0) {
    iVar16 = *(int *)&param_5->field_0x28;
    local_238 = &param_5->field_0x10;
    iStack_240 = 0;
    local_228 = 0;
    iStack_22c = 0;
    if (iVar16 != 0) {
      puVar33 = *(uint **)&param_5->field_0x20;
      if (*(uint **)&param_5->field_0x20 == (uint *)0x0) {
        puVar33 = (uint *)local_238;
      }
      uVar17 = *puVar33;
      while (uVar17 == 0) {
        lVar29 = (longlong)iStack_240;
        local_228 = local_228 + 0x20;
        iStack_240 = iStack_240 + 1;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_240)
        goto LAB_14aadf517;
        uVar17 = puVar33[lVar29 + 1];
      }
      local_250 = (ulonglong)(-uVar17 & uVar17);
      uVar31 = local_250 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_1e8 = (int)lVar29;
      iStack_22c = local_1e8 + -1 + local_228;
      if (iVar16 < iStack_22c) {
LAB_14aadf517:
        iStack_22c = iVar16;
      }
    }
    uVar17 = *(uint *)&param_5->field_0x28;
    uVar35 = uVar17 & 0xffffffe0;
    uStack_224 = local_7c;
    iStack_220 = *(int *)&param_5->field_0x8 - *(int *)&param_5->field_0x34;
    uStack_23c = (uint)local_250;
    uStack_230 = 0xffffffff;
    local_248 = (TMap<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
                 *)param_5;
    TStack_160._padding_ = CONCAT44(uStack_23c,iStack_240);
    TStack_160.CurrentBitIndex = iStack_22c;
    TStack_160.UnvisitedBitMask = 0xffffffff;
    local_168 = param_5;
    iVar16 = (int)uVar17 >> 5;
    TStack_160._28_4_ = local_7c;
    TStack_160.BaseBitIndex = local_228;
    uStack_140 = CONCAT44(uStack_21c,iStack_220);
    TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_238;
    if (((int)uVar17 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
      return pTVar22;
    }
    uVar20 = *(uint *)&param_5->field_0x28;
    if (uVar17 != uVar20) {
      puVar30 = &param_5->field_0x10;
      if (*(undefined1 **)&param_5->field_0x20 != (undefined1 *)0x0) {
        puVar30 = *(undefined1 **)&param_5->field_0x20;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar16 * 4);
      while (uVar17 == 0) {
        lVar29 = (longlong)iVar16;
        uVar35 = uVar35 + 0x20;
        iVar16 = iVar16 + 1;
        uVar17 = uVar20;
        if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar16)
        goto LAB_14aadf630;
        uVar17 = *(uint *)(puVar30 + lVar29 * 4 + 4);
      }
      uVar31 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar29 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_1e4 = (int)lVar29;
      uVar17 = local_1e4 + -1 + uVar35;
      if ((int)uVar20 < (int)uVar17) {
        uVar17 = uVar20;
      }
    }
LAB_14aadf630:
    while( true ) {
      pTVar14 = local_168;
      if (*(int *)&local_168->field_0x8 - *(int *)&local_168->field_0x34 != (int)uStack_140) {
        local_256[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_256);
      }
      if (((TStack_160.CurrentBitIndex == uVar17) &&
          (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_5->field_0x10)) &&
         (pTVar14 == param_5)) break;
      pFVar2 = (FName *)(*(longlong *)pTVar14 + (longlong)TStack_160.CurrentBitIndex * 0x18);
      if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
        return pTVar22;
      }
      pPVar24 = Private::FParameters::GetPrivate(__return_storage_ptr__->Object);
      pFVar26 = ::FName::ToString(pFVar2,local_e8);
      iVar16 = Private::FParameters::Private::Find(pPVar24,pFVar26);
      if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
      }
      if (iVar16 != -1) {
        if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        EVar18 = Private::FParameters::GetType(__return_storage_ptr__->Object,iVar16);
        if ((EVar18 != Material) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("pRes->GetType(Index) == EParameterType::Material",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                                ,0x210,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        if ((__return_storage_ptr__->Object == (FParameters *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pTVar22 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar7)();
          return pTVar22;
        }
        Private::FParameters::SetMaterialValue
                  (__return_storage_ptr__->Object,iVar16,(UMaterialInterface *)pFVar2[1],
                   (FRangeIndex *)0x0);
      }
      TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
    }
  }
  FMemScope::~FMemScope(&local_1d8);
  FLLMScope::~FLLMScope(local_218);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1d0->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Serialise @ 14aaf4bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::FModel::Serialise(FModel *param_1,FModelWriter *param_2,bool param_3)

{
  undefined1 *puVar1;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
  *this;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
  *this_00;
  ulonglong uVar2;
  Private *pPVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  Private *pPVar6;
  FModelWriter *pFVar7;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
  *pTVar8;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uchar *puVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 auStackY_308 [32];
  undefined1 local_2d7;
  undefined1 local_2d6 [2];
  FLLMScope local_2d4;
  Private *local_2d0;
  FOutputMemoryStream local_2c8;
  FModelWriter *local_2a8;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
  *local_2a0;
  int iStack_298;
  uint uStack_294;
  undefined1 *local_290;
  undefined4 uStack_288;
  int iStack_284;
  int local_280;
  undefined4 uStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  FModel *local_260;
  FMemScope local_258;
  uint local_250 [2];
  FSharedReferencer<1> FStack_248;
  uint local_240 [2];
  FSharedReferencer<1> FStack_238;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
  *local_230;
  int iStack_228;
  uint uStack_224;
  undefined1 *local_220;
  undefined4 uStack_218;
  int iStack_214;
  int local_210;
  int iStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
  *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
  *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  FOutputStream local_1a0;
  FModelWriter *local_198;
  undefined4 local_174;
  undefined1 local_168 [72];
  void *local_120;
  undefined4 local_118;
  undefined1 local_108 [72];
  void *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [72];
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_2a8 = param_2;
  local_260 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name147,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_2d4,LLMScope_Name147,false,None,Default,true);
  FMemScope::FMemScope(&local_258,&LLMScope_Name147,true);
  pPVar3 = param_1->m_pD;
  local_2d0 = pPVar3;
  FOutputMemoryStream::FOutputMemoryStream(&local_2c8,0x1000000);
  puVar1 = &(pPVar3->Program).ConstantImageLODsStreamed.field_0x10;
  iStack_298 = 0;
  iVar13 = *(int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x28;
  this = &(pPVar3->Program).ConstantImageLODsStreamed;
  local_280 = 0;
  uStack_294 = 1;
  iStack_284 = 0;
  if (iVar13 != 0) {
    puVar19 = *(uint **)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar21 = *puVar19;
    while (uVar21 == 0) {
      lVar15 = (longlong)iStack_298;
      local_280 = local_280 + 0x20;
      iStack_298 = iStack_298 + 1;
      iStack_284 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_298) goto LAB_14aaf4cfd;
      uVar21 = puVar19[lVar15 + 1];
    }
    uStack_294 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uStack_294 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_270 = (int)lVar15;
    iStack_284 = local_280 + -1 + local_270;
    if (iVar13 < iStack_284) {
      iStack_284 = iVar13;
    }
  }
LAB_14aaf4cfd:
  uVar21 = *(uint *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x28;
  uStack_27c = local_174;
  iStack_278 = *(int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x8 -
               *(int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x34;
  uVar18 = uVar21 & 0xffffffe0;
  TStack_1f8._padding_ = CONCAT44(uStack_294,iStack_298);
  uStack_288 = 0xffffffff;
  TStack_1f8.CurrentBitIndex = iStack_284;
  TStack_1f8.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar21 >> 5;
  TStack_1f8._28_4_ = local_174;
  TStack_1f8.BaseBitIndex = local_280;
  uStack_1d8 = CONCAT44(uStack_274,iStack_278);
  local_2a0 = this;
  local_290 = puVar1;
  local_200 = this;
  TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar13 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar7 = local_2a8;
  uVar11 = *(uint *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x28;
  if (uVar21 != uVar11) {
    puVar22 = *(undefined1 **)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar16 * 4);
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar21 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14aaf4e20;
      uVar21 = *(uint *)(puVar22 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_26c = (int)lVar15;
    uVar21 = local_26c + -1 + uVar18;
    if ((int)uVar11 < (int)uVar21) {
      uVar21 = uVar11;
    }
  }
LAB_14aaf4e20:
  while( true ) {
    pTVar8 = local_200;
    iVar13 = 0;
    if (*(int *)(&local_200->field_0x0 + 8) - *(int *)(&local_200->field_0x0 + 0x34) !=
        (int)uStack_1d8) {
      local_2d7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
    }
    pPVar6 = local_2d0;
    if (((TStack_1f8.CurrentBitIndex == uVar21) &&
        (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == this))
    break;
    puVar19 = (uint *)((longlong)TStack_1f8.CurrentBitIndex * 0x20 + *(longlong *)&pTVar8->field_0x0
                      );
    uVar18 = *puVar19;
    uVar11 = 0;
    if ((int)uVar18 < (local_2d0->Program).Roms.ArrayNum) {
      uVar11 = ~uVar18 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (pPVar6->Program).Roms.AllocatorInstance.Data;
    if (((*(uint *)(pFVar4 + (longlong)(int)uVar18 * 4) & 0x40000000) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("RomData.ResourceType == uint32(ERomDataType::Image)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                            ,0x9e,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FOutputMemoryStream::Reset(&local_2c8);
    FOutputArchive::FOutputArchive((FOutputArchive *)local_168,(FOutputStream *)&local_2c8);
    puVar20 = puVar19 + 2;
    FImage::Serialise(*(FImage **)(puVar19 + 2),(FOutputArchive *)local_168);
    uVar11 = *(uint *)(pFVar4 + (longlong)(int)uVar18 * 4);
    uVar12 = FOutputMemoryStream::GetBufferSize(&local_2c8);
    if (((uVar11 & 0x3fffffff) != uVar12) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("RomData.Size == MemStream.GetBufferSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                            ,0xa4,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)((longlong)*pFVar7 + 8))(pFVar7,uVar18,1);
    pcVar5 = *(code **)((longlong)*pFVar7 + 0x10);
    iVar13 = FOutputMemoryStream::GetBufferSize(&local_2c8);
    puVar14 = FOutputMemoryStream::GetBuffer(&local_2c8);
    (*pcVar5)(pFVar7,puVar14,(longlong)iVar13);
    (**(code **)((longlong)*pFVar7 + 0x18))(pFVar7);
    if (param_3) {
      local_250[0] = 0;
      local_250[1] = 0;
      FStack_248.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (puVar20 != local_250) {
        puVar20[0] = 0;
        puVar20[1] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(puVar19 + 4),&FStack_248);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_248.ReferenceController);
    }
    local_118 = 0;
    if (local_120 != (void *)0x0) {
      FMemory::Free(local_120);
    }
    TSparseArray<TSparseSetElement<TTuple<void_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<void_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<void_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_168 + 8));
    TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
  }
  if (param_3) {
    bVar10 = 1 < *(int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x48;
    if (!bVar10) {
      TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
                        *)this);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x8);
    iVar16 = *(int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0xc;
    *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x8 = 0;
    if (iVar16 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,
                 (int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0xc);
    }
    *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x34 = 0;
    iVar16 = *(int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x2c;
    *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x28 = 0;
    if ((iVar16 < 0) || (0x80 < iVar16)) {
      *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(pPVar3->Program).ConstantImageLODsStreamed.field_0x10,0);
    }
    if (bVar10) {
      *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x48 = 1;
      TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
                *)this);
    }
  }
  pPVar3 = local_2d0;
  iStack_228 = 0;
  uStack_224 = 1;
  puVar1 = &(local_2d0->Program).ConstantMeshesStreamed.field_0x10;
  iVar16 = *(int *)&(local_2d0->Program).ConstantMeshesStreamed.field_0x28;
  this_00 = &(local_2d0->Program).ConstantMeshesStreamed;
  iStack_214 = iVar13;
  if (iVar16 != 0) {
    puVar19 = *(uint **)&(local_2d0->Program).ConstantMeshesStreamed.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar21 = *puVar19;
    iVar13 = 0;
    while (uVar21 == 0) {
      lVar15 = (longlong)iStack_228;
      iVar13 = iVar13 + 0x20;
      iStack_228 = iStack_228 + 1;
      iStack_214 = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_228) goto LAB_14aaf513d;
      uVar21 = puVar19[lVar15 + 1];
    }
    uStack_224 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uStack_224 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_268 = (int)lVar15;
    iStack_214 = iVar13 + -1 + local_268;
    if (iVar16 < iStack_214) {
      iStack_214 = iVar16;
    }
  }
LAB_14aaf513d:
  iStack_20c = iStack_284;
  iStack_208 = *(int *)&(local_2d0->Program).ConstantMeshesStreamed.field_0x8 -
               *(int *)&(local_2d0->Program).ConstantMeshesStreamed.field_0x34;
  uVar21 = *(uint *)&(local_2d0->Program).ConstantMeshesStreamed.field_0x28;
  uVar18 = uVar21 & 0xffffffe0;
  uStack_218 = 0xffffffff;
  TStack_1c8._padding_ = CONCAT44(uStack_224,iStack_228);
  TStack_1c8.CurrentBitIndex = iStack_214;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_1c8._28_4_ = iStack_284;
  TStack_1c8.BaseBitIndex = iVar13;
  uStack_1a8 = CONCAT44(uStack_204,iStack_208);
  local_230 = this_00;
  local_220 = puVar1;
  local_210 = iVar13;
  local_1d0 = this_00;
  TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar16 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar7 = local_2a8;
  uVar11 = *(uint *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x28;
  if (uVar21 != uVar11) {
    puVar22 = *(undefined1 **)&(pPVar3->Program).ConstantMeshesStreamed.field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      uVar18 = uVar18 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14aaf5250;
      uVar21 = *(uint *)(puVar22 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_264 = (int)lVar15;
    uVar21 = local_264 + -1 + uVar18;
    if ((int)uVar11 < (int)uVar21) {
      uVar21 = uVar11;
    }
  }
LAB_14aaf5250:
  while( true ) {
    pTVar9 = local_1d0;
    if (*(int *)(&local_1d0->field_0x0 + 8) - *(int *)(&local_1d0->field_0x0 + 0x34) !=
        (int)uStack_1a8) {
      local_2d6[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2d6);
    }
    pPVar6 = local_2d0;
    if (((TStack_1c8.CurrentBitIndex == uVar21) &&
        (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == this_00)
       ) {
      if (param_3) {
        bVar10 = 1 < *(int *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x48;
        if (!bVar10) {
          TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
                            *)this_00);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_00,0,*(int *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x8);
        iVar13 = *(int *)&(pPVar3->Program).ConstantMeshesStreamed.field_0xc;
        *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x8 = 0;
        if (iVar13 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)this_00,0,
                     (int *)&(pPVar3->Program).ConstantMeshesStreamed.field_0xc);
        }
        *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x30 = 0xffffffff;
        *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x34 = 0;
        iVar13 = *(int *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x2c;
        *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x28 = 0;
        if ((iVar13 < 0) || (0x80 < iVar13)) {
          *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(pPVar3->Program).ConstantMeshesStreamed.field_0x10,0);
        }
        if (bVar10) {
          *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x48 = 1;
          TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
                    *)this_00);
        }
      }
      (**(code **)((longlong)*pFVar7 + 8))(pFVar7,0,0);
      local_198 = pFVar7;
      local_1a0 = (FOutputStream)&___7FOutputModelStream_Private_Mutable_UE__6B_;
      FOutputArchive::FOutputArchive((FOutputArchive *)local_a8,&local_1a0);
      FProgram::Serialise(&local_260->m_pD->Program,(FOutputArchive *)local_a8);
      (**(code **)((longlong)*pFVar7 + 0x18))(pFVar7);
      local_58 = 0;
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
      TSparseArray<TSparseSetElement<TTuple<void_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<void_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<void_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_a8 + 8));
      if (local_2c8.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Buffer.AllocatorInstance.Data);
      }
      local_2c8._padding_ = (longlong)&___7FOutputStream_Private_Mutable_UE__6B_;
      FMemScope::~FMemScope(&local_258);
      FLLMScope::~FLLMScope(&local_2d4);
      return;
    }
    puVar19 = (uint *)((longlong)TStack_1c8.CurrentBitIndex * 0x20 + *(longlong *)&pTVar9->field_0x0
                      );
    uVar18 = *puVar19;
    uVar11 = 0;
    if ((int)uVar18 < (local_2d0->Program).Roms.ArrayNum) {
      uVar11 = ~uVar18 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    pFVar4 = (pPVar6->Program).Roms.AllocatorInstance.Data;
    if (((*(uint *)(pFVar4 + (longlong)(int)uVar18 * 4) & 0x40000000) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("RomData.ResourceType == uint32(ERomDataType::Mesh)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                            ,0xbb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FOutputMemoryStream::Reset(&local_2c8);
    FOutputArchive::FOutputArchive((FOutputArchive *)local_108,(FOutputStream *)&local_2c8);
    puVar20 = puVar19 + 2;
    FMesh::Serialise(*(FMesh **)(puVar19 + 2),(FOutputArchive *)local_108);
    uVar11 = *(uint *)(pFVar4 + (longlong)(int)uVar18 * 4);
    uVar12 = FOutputMemoryStream::GetBufferSize(&local_2c8);
    if (((uVar11 & 0x3fffffff) != uVar12) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("RomData.Size == MemStream.GetBufferSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Model.cpp"
                            ,0xc1,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)((longlong)*pFVar7 + 8))(pFVar7,uVar18,1);
    pcVar5 = *(code **)((longlong)*pFVar7 + 0x10);
    FOutputMemoryStream::GetBufferSize(&local_2c8);
    FOutputMemoryStream::GetBuffer(&local_2c8);
    (*pcVar5)(pFVar7);
    (**(code **)((longlong)*pFVar7 + 0x18))(pFVar7);
    if (param_3) {
      local_240[0] = 0;
      local_240[1] = 0;
      FStack_238.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (puVar20 != local_240) {
        puVar20[0] = 0;
        puVar20[1] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(puVar19 + 4),&FStack_238);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_238.ReferenceController);
    }
    local_b8 = 0;
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    TSparseArray<TSparseSetElement<TTuple<void_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<void_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<void_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_108 + 8));
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Serialise @ 14aaf55e0

void __cdecl UE::Mutable::Private::FModel::Serialise(FModel *param_1,FOutputArchive *param_2)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name114,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name114,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name114,true);
  FProgram::Serialise(&param_1->m_pD->Program,param_2);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// StaticUnserialise @ 14aafa8a0

TSharedPtr<UE::Mutable::Private::FModel,1> * __cdecl
UE::Mutable::Private::FModel::StaticUnserialise
          (TSharedPtr<UE::Mutable::Private::FModel,1> *__return_storage_ptr__,FInputArchive *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FProgram *this;
  TSharedPtr<UE::Mutable::Private::FModel,1> *pTVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name254,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name254,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name254,true);
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FModel *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFModel_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    this = ::operator_new(0x278);
    if (this == (FProgram *)0x0) {
      this = (FProgram *)0x0;
    }
    else {
      memset(this,0,0x278);
      FProgram::FProgram(this);
    }
    pTVar3[1]._padding_ = (longlong)this;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::Mutable::Private::FModel,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FModel *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (__return_storage_ptr__->Object == (FModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FModel,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FProgram::Unserialise(&__return_storage_ptr__->Object->m_pD->Program,param_1);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// UnloadExternalData @ 14aafc850

void __thiscall UE::Mutable::Private::FModel::UnloadExternalData(FModel *this)

{
  undefined1 *puVar1;
  int iVar2;
  Private *pPVar3;
  bool bVar4;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
  *this_00;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
  *this_01;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name245,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name245,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name245,true);
  pPVar3 = this->m_pD;
  this_00 = &(pPVar3->Program).ConstantImageLODsStreamed;
  bVar4 = 1 < *(int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x48;
  if (!bVar4) {
    TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x8);
  puVar1 = &(pPVar3->Program).ConstantImageLODsStreamed.field_0xc;
  *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x34 = 0;
  iVar2 = *(int *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x2c;
  *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(pPVar3->Program).ConstantImageLODsStreamed.field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(pPVar3->Program).ConstantImageLODsStreamed.field_0x48 = 1;
    TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  pPVar3 = this->m_pD;
  this_01 = &(pPVar3->Program).ConstantMeshesStreamed;
  bVar4 = 1 < *(int *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x48;
  if (!bVar4) {
    TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x8);
  puVar1 = &(pPVar3->Program).ConstantMeshesStreamed.field_0xc;
  *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x34 = 0;
  iVar2 = *(int *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x2c;
  *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(pPVar3->Program).ConstantMeshesStreamed.field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(pPVar3->Program).ConstantMeshesStreamed.field_0x48 = 1;
    TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// UnloadRoms @ 14aafca60

void __thiscall UE::Mutable::Private::FModel::Private::UnloadRoms(Private *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSharedReferencer<1> FVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_28;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_18;
  
  uVar6 = 0;
  if (0 < (this->Program).Roms.ArrayNum) {
    uVar7 = 1;
    lVar9 = 0;
    do {
      if ((-1 < (int)uVar6) &&
         ((int)uVar6 < *(int *)&(this->Program).LoadedMemTrackedRoms.field_0x28)) {
        if ((*(int *)&(this->Program).LoadedMemTrackedRoms.field_0x28 <= (int)uVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar1 = *(undefined1 **)&(this->Program).LoadedMemTrackedRoms.field_0x20;
        puVar8 = &(this->Program).LoadedMemTrackedRoms.field_0x10;
        if (puVar1 != (undefined1 *)0x0) {
          puVar8 = puVar1;
        }
        uVar4 = uVar6;
        if ((int)uVar6 < 0) {
          uVar4 = uVar6 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)((int)uVar4 >> 5) * 4) & uVar7) != 0) {
          TSparseArray<unsigned_char,FDefaultSparseArrayAllocator>::RemoveAt
                    (&(this->Program).LoadedMemTrackedRoms,uVar6,1);
        }
      }
      uVar4 = 0;
      if ((int)uVar6 < (this->Program).Roms.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)((this->Program).Roms.AllocatorInstance.Data + lVar9) >> 0x1e & 1;
      if (uVar4 == 0) {
        local_18.Object = (FImage *)0x0;
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
        ::RemoveAndCopyValue(&(this->Program).ConstantImageLODsStreamed,uVar6,&local_18);
        FVar5.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
LAB_14aafcbc1:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar5.ReferenceController);
      }
      else {
        if (uVar4 == 1) {
          local_28.Object = (FMesh *)0x0;
          local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
          ::RemoveAndCopyValue(&(this->Program).ConstantMeshesStreamed,uVar6,&local_28);
          FVar5.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
          goto LAB_14aafcbc1;
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                           ,0x1fb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      lVar9 = lVar9 + 4;
    } while ((int)uVar6 < (this->Program).Roms.ArrayNum);
  }
  return;
}

