// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 5

// GetLastStimulusLocation @ 146fb1f70

TVector<double> * __thiscall
FActorPerceptionInfo::GetLastStimulusLocation
          (FActorPerceptionInfo *this,TVector<double> *__return_storage_ptr__,float *param_1)

{
  double dVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar7 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  fVar17 = __real_7f7fffff;
  uVar11 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar7;
  bVar15 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  fVar19 = fVar17;
  if (0 < (this->LastSensedStimuli).ArrayNum) {
    lVar12 = 0;
    do {
      uVar16 = ~uVar11 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar11 < (this->LastSensedStimuli).ArrayNum) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         fVar17 = __real_7f7fffff, bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar5)();
        return pTVar10;
      }
      pFVar3 = (this->LastSensedStimuli).AllocatorInstance.Data;
      fVar18 = fVar17;
      if (0.0 < *(float *)(pFVar3 + lVar12 + 8)) {
        fVar18 = *(float *)(pFVar3 + lVar12);
      }
      uVar14 = 0;
      if ((int)uVar11 < (this->LastSensedStimuli).ArrayNum) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         fVar17 = __real_7f7fffff, bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar5)();
        return pTVar10;
      }
      uVar14 = *(uint *)((this->LastSensedStimuli).AllocatorInstance.Data + lVar12 + 0x54) >> 1;
      bVar13 = (byte)uVar14 & 1;
      if ((0.0 <= fVar18) &&
         (((fVar18 < fVar19 || ((bVar15 == 0 && ((uVar14 & 1) != 0)))) ||
          ((uVar11 == (this->DominantSense).Index && ((uVar14 & 1) != 0)))))) {
        uVar9 = 0;
        if ((int)uVar11 < (this->LastSensedStimuli).ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , fVar17 = __real_7f7fffff, bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        pFVar4 = (this->LastSensedStimuli).AllocatorInstance.Data;
        pFVar3 = pFVar4 + lVar12 + 0x10;
        dVar6 = *(double *)(pFVar3 + 8);
        dVar1 = *(double *)(pFVar4 + lVar12 + 0x20);
        bVar2 = (this->DominantSense).Index;
        (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
        fVar19 = fVar18;
        bVar15 = bVar13;
        if ((uVar11 == bVar2) && ((uVar14 & 1) != 0)) break;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x58;
    } while ((int)uVar11 < (this->LastSensedStimuli).ArrayNum);
  }
  if (param_1 != (float *)0x0) {
    *param_1 = fVar19;
  }
  return __return_storage_ptr__;
}

// HasAnyCurrentStimulus @ 146fb6970

bool __thiscall FActorPerceptionInfo::HasAnyCurrentStimulus(FActorPerceptionInfo *this)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  pvVar2 = ThreadLocalStoragePointer;
  iVar1 = (this->LastSensedStimuli).ArrayNum;
  pFVar3 = (this->LastSensedStimuli).AllocatorInstance.Data;
  uVar5 = (ulonglong)_tls_index;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x58;
  fVar6 = __real_7f7fffff;
  while( true ) {
    if ((this->LastSensedStimuli).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAIStimulus_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      fVar6 = __real_7f7fffff;
    }
    if (pFVar3 == pFVar4) break;
    if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar5 * 8) + 0x9d4c) <
         `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                             ::__l2::_thread_safe_static_guard_0__), fVar6 = __real_7f7fffff,
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      fVar6 = __real_7f7fffff;
    }
    if ((((*(FAINamedID<struct_FAISenseCounter> *)(pFVar3 + 0x48) !=
           `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
           ::__l2::InvalidIDInstance) && (0.0 < *(float *)(pFVar3 + 8))) &&
        (*(float *)pFVar3 < fVar6)) &&
       ((((uint)*(float *)(pFVar3 + 0x54) >> 1 & 1) != 0 &&
        (((uint)*(float *)(pFVar3 + 0x54) >> 2 & 1) == 0)))) {
      return true;
    }
    pFVar3 = pFVar3 + 0x58;
  }
  return false;
}

// HasAnyKnownStimulus @ 146fb6b50

bool __thiscall FActorPerceptionInfo::HasAnyKnownStimulus(FActorPerceptionInfo *this)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  pvVar2 = ThreadLocalStoragePointer;
  iVar1 = (this->LastSensedStimuli).ArrayNum;
  pFVar3 = (this->LastSensedStimuli).AllocatorInstance.Data;
  uVar5 = (ulonglong)_tls_index;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x58;
  fVar6 = __real_7f7fffff;
  while( true ) {
    if ((this->LastSensedStimuli).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAIStimulus_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      fVar6 = __real_7f7fffff;
    }
    if (pFVar3 == pFVar4) break;
    if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar5 * 8) + 0x9d4c) <
         `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                             ::__l2::_thread_safe_static_guard_0__), fVar6 = __real_7f7fffff,
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      fVar6 = __real_7f7fffff;
    }
    if ((((*(FAINamedID<struct_FAISenseCounter> *)(pFVar3 + 0x48) !=
           `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
           ::__l2::InvalidIDInstance) && (0.0 < *(float *)(pFVar3 + 8))) &&
        (*(float *)pFVar3 < fVar6)) &&
       ((((uint)*(float *)(pFVar3 + 0x54) >> 1 & 1) != 0 ||
        (((uint)*(float *)(pFVar3 + 0x54) >> 2 & 1) == 0)))) {
      return true;
    }
    pFVar3 = pFVar3 + 0x58;
  }
  return false;
}

// HasKnownStimulusOfSense @ 146fb6d10

bool __thiscall
FActorPerceptionInfo::HasKnownStimulusOfSense
          (FActorPerceptionInfo *this,FAINamedID<FAISenseCounter> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = param_1->Index;
  if ((int)(uint)bVar1 < (this->LastSensedStimuli).ArrayNum) {
    if ((this->LastSensedStimuli).ArrayNum <= (int)(uint)bVar1) {
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
    bVar3 = FAIStimulus::IsValid
                      ((FAIStimulus *)
                       ((this->LastSensedStimuli).AllocatorInstance.Data + (ulonglong)bVar1 * 0x58))
    ;
    if (bVar3) {
      bVar1 = param_1->Index;
      if ((this->LastSensedStimuli).ArrayNum <= (int)(uint)bVar1) {
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
      if ((*(uint *)((this->LastSensedStimuli).AllocatorInstance.Data +
                    (ulonglong)bVar1 * 0x58 + 0x54) >> 2 & 1) == 0) {
        return true;
      }
    }
  }
  return false;
}

// Merge @ 146fbc520

void __thiscall
FActorPerceptionInfo::Merge(FActorPerceptionInfo *this,FActorPerceptionInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar7 = 0;
  fVar11 = __real_7f7fffff;
  if (FAINamedID<FAISenseCounter>::Counter != (FAISenseCounter)0x0) {
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar7 < (param_1->LastSensedStimuli).ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         fVar11 = __real_7f7fffff, bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->LastSensedStimuli).AllocatorInstance.Data;
      lVar8 = (longlong)(int)uVar7 * 0x58;
      fVar12 = fVar11;
      if (0.0 < *(float *)(pFVar1 + lVar8 + 8)) {
        fVar12 = *(float *)(pFVar1 + lVar8);
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->LastSensedStimuli).ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         fVar11 = __real_7f7fffff, bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->LastSensedStimuli).AllocatorInstance.Data;
      fVar10 = fVar11;
      if (0.0 < *(float *)(pFVar1 + lVar8 + 8)) {
        fVar10 = *(float *)(pFVar1 + lVar8);
      }
      if (fVar12 < fVar10) {
        uVar6 = 0;
        if ((int)uVar7 < (param_1->LastSensedStimuli).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , fVar11 = __real_7f7fffff, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (param_1->LastSensedStimuli).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar7 < (this->LastSensedStimuli).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , fVar11 = __real_7f7fffff, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->LastSensedStimuli).AllocatorInstance.Data;
        *(undefined4 *)(pFVar2 + lVar8) = *(undefined4 *)(pFVar1 + lVar8);
        *(undefined4 *)(pFVar2 + lVar8 + 4) = *(undefined4 *)(pFVar1 + lVar8 + 4);
        *(undefined4 *)(pFVar2 + lVar8 + 8) = *(undefined4 *)(pFVar1 + lVar8 + 8);
        uVar4 = *(undefined8 *)(pFVar1 + lVar8 + 0x10 + 8);
        *(undefined8 *)(pFVar2 + lVar8 + 0x10) = *(undefined8 *)(pFVar1 + lVar8 + 0x10);
        *(undefined8 *)(pFVar2 + lVar8 + 0x10 + 8) = uVar4;
        *(undefined8 *)(pFVar2 + lVar8 + 0x20) = *(undefined8 *)(pFVar1 + lVar8 + 0x20);
        uVar4 = *(undefined8 *)(pFVar1 + lVar8 + 0x28 + 8);
        *(undefined8 *)(pFVar2 + lVar8 + 0x28) = *(undefined8 *)(pFVar1 + lVar8 + 0x28);
        *(undefined8 *)(pFVar2 + lVar8 + 0x28 + 8) = uVar4;
        *(undefined8 *)(pFVar2 + lVar8 + 0x38) = *(undefined8 *)(pFVar1 + lVar8 + 0x38);
        *(undefined8 *)(pFVar2 + lVar8 + 0x40) = *(undefined8 *)(pFVar1 + lVar8 + 0x40);
        pFVar2[lVar8 + 0x48] = pFVar1[lVar8 + 0x48];
        *(undefined8 *)(pFVar2 + lVar8 + 0x4c) = *(undefined8 *)(pFVar1 + lVar8 + 0x4c);
        uVar6 = (*(uint *)(pFVar2 + lVar8 + 0x54) ^ *(uint *)(pFVar1 + lVar8 + 0x54)) & 1 ^
                *(uint *)(pFVar2 + lVar8 + 0x54);
        *(uint *)(pFVar2 + lVar8 + 0x54) = uVar6;
        uVar6 = (uVar6 ^ *(uint *)(pFVar1 + lVar8 + 0x54)) & 2 ^ uVar6;
        *(uint *)(pFVar2 + lVar8 + 0x54) = uVar6;
        *(uint *)(pFVar2 + lVar8 + 0x54) = (uVar6 ^ *(uint *)(pFVar1 + lVar8 + 0x54)) & 4 ^ uVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (byte)FAINamedID<FAISenseCounter>::Counter);
  }
  return;
}

