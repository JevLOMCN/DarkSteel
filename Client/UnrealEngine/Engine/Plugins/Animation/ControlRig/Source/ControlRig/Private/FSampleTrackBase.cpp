// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 45

// Equals<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14a213e80

bool __cdecl
FSampleTrackBase::Equals<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + lVar7 * 4) != *(int *)(pFVar1 + lVar7 * 4)) {
        return false;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> @ 14a213fa0

bool __cdecl
FSampleTrackBase::Equals<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
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
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar2 + lVar8 + 4) != *(longlong *)(pFVar1 + lVar8 + 4)) ||
         (pFVar2[lVar8] != pFVar1[lVar8])) {
        return false;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xc;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return true;
}

// ~FSampleTrackBase @ 14a226220

void __thiscall FSampleTrackBase::~FSampleTrackBase(FSampleTrackBase *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FSampleTrackBase__6B_;
  pFVar3 = (this->AtlasStorage).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TimeIndicesStorage).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Names).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014a226282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// GetChildTrackNameSuffix @ 14a25fc20

FString * __thiscall
FSampleTrackBase::GetChildTrackNameSuffix
          (FSampleTrackBase *this,FString *__return_storage_ptr__,int param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Child");
  return __return_storage_ptr__;
}

// GetChildTrackTypes @ 14a25fc50

TArray<FSampleTrackBase::ETrackType,TSizedDefaultAllocator<32>_> * __thiscall
FSampleTrackBase::GetChildTrackTypes
          (FSampleTrackBase *this,
          TArray<FSampleTrackBase::ETrackType,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTrackType @ 14a26c560

ETrackType __thiscall FSampleTrackBase::GetTrackType(FSampleTrackBase *this)

{
  return ETrackType_Unknown;
}

// IsComposed @ 14a274110

bool __thiscall FSampleTrackBase::IsComposed(FSampleTrackBase *this)

{
  return false;
}

// SetChildTracks @ 14a28ff70

void __thiscall
FSampleTrackBase::SetChildTracks
          (FSampleTrackBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// UpdateChildTracks @ 14a2a31c0

void __thiscall FSampleTrackBase::UpdateChildTracks(FSampleTrackBase *this)

{
  return;
}

// ArrayEquals<UE::Math::TQuat<float>_> @ 14a38d5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FSampleTrackBase::ArrayEquals<UE::Math::TQuat<float>_>
          (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  
  uVar10 = _UNK_15061cc7c;
  uVar9 = _UNK_15061cc78;
  uVar8 = _UNK_15061cc74;
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (param_1->ArrayNum == param_2->ArrayNum) {
    uVar15 = 0;
    if (0 < param_1->ArrayNum) {
      lVar16 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        uVar13 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar2 = pFVar2 + lVar16;
        pFVar1 = pFVar3 + lVar16;
        auVar5._4_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)(pFVar1 + 4) - *(float *)(pFVar2 + 4)) &
                                     uVar8));
        auVar5._0_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)pFVar1 - *(float *)pFVar2) & uVar7));
        auVar5._8_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)(pFVar1 + 8) - *(float *)(pFVar2 + 8)) &
                                     uVar9));
        auVar5._12_4_ =
             -(uint)(param_3 <
                    (float)((uint)(*(float *)(pFVar1 + 0xc) - *(float *)(pFVar2 + 0xc)) & uVar10));
        iVar14 = movmskps((int)pFVar3,auVar5);
        if ((iVar14 != 0) &&
           (auVar6._4_4_ = -(uint)(param_3 <
                                  (float)((uint)(*(float *)(pFVar2 + 4) + *(float *)(pFVar1 + 4)) &
                                         uVar8)),
           auVar6._0_4_ = -(uint)(param_3 <
                                 (float)((uint)(*(float *)pFVar2 + *(float *)pFVar1) & uVar7)),
           auVar6._8_4_ = -(uint)(param_3 <
                                 (float)((uint)(*(float *)(pFVar2 + 8) + *(float *)(pFVar1 + 8)) &
                                        uVar9)),
           auVar6._12_4_ =
                -(uint)(param_3 <
                       (float)((uint)(*(float *)(pFVar2 + 0xc) + *(float *)(pFVar1 + 0xc)) & uVar10)
                       ), iVar14 = movmskps(iVar14,auVar6), iVar14 != 0)) goto LAB_14a38d6ec;
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x10;
      } while ((int)uVar15 < param_1->ArrayNum);
    }
    bVar11 = true;
  }
  else {
LAB_14a38d6ec:
    bVar11 = false;
  }
  return bVar11;
}

// ArrayEquals<UE::Math::TTransform<float>_> @ 14a38d720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FSampleTrackBase::ArrayEquals<UE::Math::TTransform<float>_>
          (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  undefined7 extraout_var;
  
  uVar13 = _UNK_15061cc7c;
  uVar12 = _UNK_15061cc78;
  uVar11 = _UNK_15061cc74;
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (param_1->ArrayNum == param_2->ArrayNum) {
    uVar18 = 0;
    if (0 < param_1->ArrayNum) {
      lVar19 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar5 = (code *)swi(3);
            uVar15 = (*pcVar5)();
            return (bool)uVar15;
          }
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar16 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar16 = (uint)CONCAT71(extraout_var,bVar14);
          if (bVar14) {
            pcVar5 = (code *)swi(3);
            uVar15 = (*pcVar5)();
            return (bool)uVar15;
          }
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        pFVar1 = pFVar4 + lVar19 + 0x10;
        pFVar2 = pFVar3 + lVar19 + 0x10;
        auVar6._4_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)(pFVar1 + 4) - *(float *)(pFVar2 + 4)) &
                                     uVar11));
        auVar6._0_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)pFVar1 - *(float *)pFVar2) & uVar10));
        auVar6._8_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)(pFVar1 + 8) - *(float *)(pFVar2 + 8)) &
                                     uVar12));
        auVar6._12_4_ =
             -(uint)(param_3 <
                    (float)((uint)(*(float *)(pFVar1 + 0xc) - *(float *)(pFVar2 + 0xc)) & uVar13));
        iVar17 = movmskps(uVar16,auVar6);
        if (iVar17 != 0) goto LAB_14a38d896;
        pFVar1 = pFVar4 + lVar19;
        pFVar2 = pFVar3 + lVar19;
        auVar7._4_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)(pFVar1 + 4) - *(float *)(pFVar2 + 4)) &
                                     uVar11));
        auVar7._0_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)pFVar1 - *(float *)pFVar2) & uVar10));
        auVar7._8_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)(pFVar1 + 8) - *(float *)(pFVar2 + 8)) &
                                     uVar12));
        auVar7._12_4_ =
             -(uint)(param_3 <
                    (float)((uint)(*(float *)(pFVar1 + 0xc) - *(float *)(pFVar2 + 0xc)) & uVar13));
        iVar17 = movmskps(0,auVar7);
        if ((iVar17 != 0) &&
           (auVar8._4_4_ = -(uint)(param_3 <
                                  (float)((uint)(*(float *)(pFVar1 + 4) + *(float *)(pFVar2 + 4)) &
                                         uVar11)),
           auVar8._0_4_ = -(uint)(param_3 <
                                 (float)((uint)(*(float *)pFVar1 + *(float *)pFVar2) & uVar10)),
           auVar8._8_4_ = -(uint)(param_3 <
                                 (float)((uint)(*(float *)(pFVar1 + 8) + *(float *)(pFVar2 + 8)) &
                                        uVar12)),
           auVar8._12_4_ =
                -(uint)(param_3 <
                       (float)((uint)(*(float *)(pFVar1 + 0xc) + *(float *)(pFVar2 + 0xc)) & uVar13)
                       ), iVar17 = movmskps(iVar17,auVar8), iVar17 != 0)) goto LAB_14a38d896;
        pFVar4 = pFVar4 + lVar19 + 0x20;
        pFVar3 = pFVar3 + lVar19 + 0x20;
        auVar9._4_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)(pFVar4 + 4) - *(float *)(pFVar3 + 4)) &
                                     uVar11));
        auVar9._0_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)pFVar4 - *(float *)pFVar3) & uVar10));
        auVar9._8_4_ = -(uint)(param_3 <
                              (float)((uint)(*(float *)(pFVar4 + 8) - *(float *)(pFVar3 + 8)) &
                                     uVar12));
        auVar9._12_4_ =
             -(uint)(param_3 <
                    (float)((uint)(*(float *)(pFVar4 + 0xc) - *(float *)(pFVar3 + 0xc)) & uVar13));
        iVar17 = movmskps(0,auVar9);
        if (iVar17 != 0) goto LAB_14a38d896;
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 0x30;
      } while ((int)uVar18 < param_1->ArrayNum);
    }
    bVar14 = true;
  }
  else {
LAB_14a38d896:
    bVar14 = false;
  }
  return bVar14;
}

// Equals<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14a396720

bool __cdecl
FSampleTrackBase::Equals<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + lVar7 * 4) != *(int *)(pFVar1 + lVar7 * 4)) {
        return false;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14a396840

bool __cdecl
FSampleTrackBase::Equals<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (param_3 < (float)((uint)(*(float *)((param_1->AllocatorInstance).Data + lVar8 * 4) -
                                  *(float *)(pFVar1 + lVar8 * 4)) & uVar3)) {
        return false;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14a396990

bool __cdecl
FSampleTrackBase::Equals<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar9 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((param_3 < (float)((uint)(*(float *)(pFVar2 + lVar8) - *(float *)(pFVar1 + lVar8)) &
                             uVar4)) ||
          (param_3 < (float)((uint)(*(float *)(pFVar2 + lVar8 + 4) - *(float *)(pFVar1 + lVar8 + 4))
                            & uVar4))) ||
         (param_3 < (float)((uint)(*(float *)(pFVar2 + lVar8 + 8) - *(float *)(pFVar1 + lVar8 + 8))
                           & uVar4))) {
        return false;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0xc;
    } while ((int)uVar9 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> @ 14a396b20

bool __cdecl
FSampleTrackBase::Equals<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = FInstancedStruct::Identical
                        ((FInstancedStruct *)
                         ((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10),
                         (FInstancedStruct *)(pFVar1 + (longlong)(int)uVar6 * 0x10),0);
      if (!bVar3) {
        return false;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14a396c50

bool __cdecl
FSampleTrackBase::Equals<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar9 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((((param_3 <=
             (float)((uint)(*(float *)(pFVar2 + lVar8) - *(float *)(pFVar1 + lVar8)) & uVar4)) ||
           (param_3 <=
            (float)((uint)(*(float *)(pFVar2 + lVar8 + 4) - *(float *)(pFVar1 + lVar8 + 4)) & uVar4)
           )) || (param_3 <=
                  (float)((uint)(*(float *)(pFVar2 + lVar8 + 8) - *(float *)(pFVar1 + lVar8 + 8)) &
                         uVar4))) ||
         (param_3 <=
          (float)((uint)(*(float *)(pFVar2 + lVar8 + 0xc) - *(float *)(pFVar1 + lVar8 + 0xc)) &
                 uVar4))) {
        return false;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar9 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> @ 14a396e00

bool __cdecl
FSampleTrackBase::Equals<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>
          (TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar8 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((*(longlong *)(pFVar2 + lVar7 + 0xc) != *(longlong *)(pFVar1 + lVar7 + 0xc)) ||
          (*(longlong *)(pFVar2 + lVar7 + 4) != *(longlong *)(pFVar1 + lVar7 + 4))) ||
         (pFVar2[lVar7] != pFVar1[lVar7])) {
        return false;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x14;
    } while ((int)uVar8 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14a396f50

bool __cdecl
FSampleTrackBase::Equals<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(longlong *)((param_1->AllocatorInstance).Data + lVar7 * 8) !=
          *(longlong *)(pFVar1 + lVar7 * 8)) {
        return false;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14a397070

bool __cdecl
FSampleTrackBase::Equals<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar9 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      iVar8 = *(int *)(pFVar2 + lVar10 + 8);
      iVar1 = *(int *)(pFVar3 + lVar10 + 8);
      if (iVar1 == iVar8) {
        if (1 < iVar1) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar3 + lVar10),*(wchar_t **)(pFVar2 + lVar10));
          bVar5 = iVar8 == 0;
          goto LAB_14a39717c;
        }
      }
      else {
        bVar5 = iVar1 + iVar8 == 1;
LAB_14a39717c:
        if (!bVar5) {
          return false;
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14a3971d0

bool __cdecl
FSampleTrackBase::Equals<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TArray<bool,TSizedDefaultAllocator<32>_> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((param_1->AllocatorInstance).Data[lVar7] != pFVar1[lVar7]) {
        return false;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return true;
}

// GetSingleValueHash<UE::Math::TTransform<float>_> @ 14a39c400

uint __cdecl
FSampleTrackBase::GetSingleValueHash<UE::Math::TTransform<float>_>(TTransform<float> *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong64 local_18;
  ulong64 uStack_10;
  
  local_18 = (param_1->Translation).m128_u64[0];
  uStack_10 = CONCAT44(uStack_10._4_4_,(param_1->Translation).m128_i32[2]);
  uVar1 = FCrc::MemCrc_DEPRECATED(&local_18,0xc,0);
  local_18 = (param_1->Rotation).m128_u64[0];
  uStack_10 = (param_1->Rotation).m128_u64[1];
  uVar2 = FCrc::MemCrc_DEPRECATED(&local_18,0x10,0);
  local_18 = (param_1->Scale3D).m128_u64[0];
  uStack_10 = CONCAT44(uStack_10._4_4_,(param_1->Scale3D).m128_i32[2]);
  uVar1 = uVar1 * 0x40 + (uVar1 >> 2) + uVar2 + 0x9e3779b9 ^ uVar1;
  uVar2 = FCrc::MemCrc_DEPRECATED(&local_18,0xc,0);
  return uVar2 + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
}

// GetSingleValueHash<FInstancedStruct> @ 14a39c4c0

uint __cdecl FSampleTrackBase::GetSingleValueHash<FInstancedStruct>(FInstancedStruct *param_1)

{
  byte bVar1;
  UScriptStruct *pUVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((param_1->StructMemory == (uchar *)0x0) ||
     (pUVar2 = (param_1->ScriptStruct).field0_0x0.DebugPtr, pUVar2 == (UScriptStruct *)0x0)) {
    uVar3 = 0;
  }
  else {
    iVar4 = (int)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar3 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    lVar8 = (longlong)((int)pUVar2->_padding_ + -1 + iVar4 & -iVar4);
    if (0 < lVar8) {
      lVar7 = 0;
      do {
        bVar1 = param_1->StructMemory[lVar7];
        iVar4 = uVar3 - bVar1;
        uVar6 = 0x9e3779b9 - uVar3 ^ iVar4 * 0x100;
        lVar7 = lVar7 + 1;
        uVar3 = (((uint)bVar1 + (uint)bVar1) - uVar6) - uVar3 ^ uVar6 >> 0xd;
        uVar5 = (iVar4 - uVar3) - uVar6 ^ uVar3 >> 0xc;
        uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 << 0x10;
        uVar3 = (uVar3 - uVar5) - uVar6 ^ uVar6 >> 5;
        uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 3;
        uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 << 10;
        uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar6 >> 0xf;
      } while (lVar7 < lVar8);
      return uVar3;
    }
  }
  return uVar3;
}

// GetValueHash<FInstancedStruct> @ 14a39cae0

uint __cdecl
FSampleTrackBase::GetValueHash<FInstancedStruct>
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  uVar8 = (ulonglong)iVar2;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar10 + uVar8 * 0x10;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar9) {
        return (uint)uVar8;
      }
      if ((*(ulonglong *)(pFVar10 + 8) != 0) && (uVar3 = *(ulonglong *)pFVar10, uVar3 != 0)) break;
      uVar8 = 0;
LAB_14a39cc1b:
      pFVar10 = pFVar10 + 0x10;
    }
    lVar13 = 0;
    uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar8 = (ulonglong)(uVar4 >> 0x10 ^ uVar4);
    lVar12 = (longlong)
             (*(int *)(uVar3 + 0x58) + -1 + (int)*(short *)(uVar3 + 0x5c) &
             -(int)*(short *)(uVar3 + 0x5c));
    if (lVar12 < 1) goto LAB_14a39cc1b;
    do {
      bVar1 = *(byte *)(lVar13 + *(ulonglong *)(pFVar10 + 8));
      iVar6 = (int)uVar8;
      iVar5 = iVar6 - (uint)bVar1;
      uVar11 = 0x9e3779b9U - iVar6 ^ iVar5 * 0x100;
      lVar13 = lVar13 + 1;
      uVar7 = (((uint)bVar1 + (uint)bVar1) - uVar11) - iVar6 ^ uVar11 >> 0xd;
      uVar4 = (iVar5 - uVar7) - uVar11 ^ uVar7 >> 0xc;
      uVar11 = (uVar11 - uVar4) - uVar7 ^ uVar4 << 0x10;
      uVar7 = (uVar7 - uVar4) - uVar11 ^ uVar11 >> 5;
      uVar4 = (uVar4 - uVar7) - uVar11 ^ uVar7 >> 3;
      uVar11 = (uVar11 - uVar4) - uVar7 ^ uVar4 << 10;
      uVar8 = (ulonglong)((uVar7 - uVar11) - uVar4 ^ uVar11 >> 0xf);
    } while (lVar13 < lVar12);
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// FSampleTrackBase @ 14a3b80c0

FSampleTrackBase * __thiscall
FSampleTrackBase::FSampleTrackBase(FSampleTrackBase *this,FName *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  FName FVar2;
  
  pTVar1 = &this->Names;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSampleTrackBase__6B_;
  this->_padding_ = 0;
  FVar2 = *param_1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Names).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar1->AllocatorInstance,1,&(this->Names).ArrayMax);
  *(FName *)(pTVar1->AllocatorInstance).Data = FVar2;
  this->ScriptStruct = (UScriptStruct *)0x0;
  this->Mode = EMode_Invalid;
  (this->TimeIndicesStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeIndicesStorage).ArrayNum = 0;
  (this->TimeIndicesStorage).ArrayMax = 0;
  (this->TimeIndices).DataPtr = (int *)0x0;
  (this->TimeIndices).ArrayNum = 0;
  (this->AtlasStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AtlasStorage).ArrayNum = 0;
  (this->AtlasStorage).ArrayMax = 0;
  (this->Atlas).DataPtr = (int *)0x0;
  (this->Atlas).ArrayNum = 0;
  this->NumTimesInContainer = 0;
  this->Container = (FSampleTrackContainer *)0x0;
  this->TrackIndex = -1;
  this->ReferencedTrackIndex = -1;
  this->ReferencedTimeIndicesRange = (TTuple<int,int>)0xffffffffffffffff;
  this->ReferencedAtlasRange = (TTuple<int,int>)0xffffffffffffffff;
  this->ReferencedValuesRange = (TTuple<int,int>)0xffffffffffffffff;
  return this;
}

// FSampleTrackBase @ 14a3b81b0

FSampleTrackBase * __thiscall FSampleTrackBase::FSampleTrackBase(FSampleTrackBase *this)

{
  this->TrackIndex = -1;
  this->ReferencedTrackIndex = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSampleTrackBase__6B_;
  this->_padding_ = 0;
  (this->Names).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Names).ArrayNum = 0;
  (this->Names).ArrayMax = 0;
  this->ReferencedTimeIndicesRange = (TTuple<int,int>)0xffffffffffffffff;
  this->ReferencedAtlasRange = (TTuple<int,int>)0xffffffffffffffff;
  this->ReferencedValuesRange = (TTuple<int,int>)0xffffffffffffffff;
  this->ScriptStruct = (UScriptStruct *)0x0;
  this->Mode = EMode_Invalid;
  (this->TimeIndicesStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeIndicesStorage).ArrayNum = 0;
  (this->TimeIndicesStorage).ArrayMax = 0;
  (this->TimeIndices).DataPtr = (int *)0x0;
  (this->TimeIndices).ArrayNum = 0;
  (this->AtlasStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AtlasStorage).ArrayNum = 0;
  (this->AtlasStorage).ArrayMax = 0;
  (this->Atlas).DataPtr = (int *)0x0;
  (this->Atlas).ArrayNum = 0;
  this->NumTimesInContainer = 0;
  this->Container = (FSampleTrackContainer *)0x0;
  return this;
}

// AddTimeIndex @ 14a3e5b80

void __thiscall FSampleTrackBase::AddTimeIndex(FSampleTrackBase *this,bool param_1)

{
  int *piVar1;
  int *piVar2;
  EMode EVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  if (this->ReferencedTrackIndex != -1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsReferenced()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                       ,0x1cc,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  piVar2 = &this->NumTimesInContainer;
  if (!param_1) {
    pFVar5 = (this->TimeIndicesStorage).AllocatorInstance.Data;
    if ((pFVar5 <= piVar2) && (piVar2 < pFVar5 + (longlong)(this->TimeIndicesStorage).ArrayMax * 4))
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->TimeIndicesStorage).ArrayNum;
    piVar1 = &(this->TimeIndicesStorage).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->TimeIndicesStorage).AllocatorInstance,piVar1);
    }
    (this->TimeIndicesStorage).ArrayNum = iVar8 + 1;
    *(int *)((this->TimeIndicesStorage).AllocatorInstance.Data + (longlong)iVar8 * 4) = *piVar2;
    UpdateTimeAndAtlasArrayViews(this);
  }
  iVar8 = *piVar2;
  EVar3 = this->Mode;
  *piVar2 = iVar8 + 1;
  if ((EVar3 != EMode_Invalid) &&
     (((EVar3 == EMode_Singleton || (EVar3 == EMode_Sampled)) || (EVar3 == EMode_Complete)))) {
    iVar4 = (this->TimeIndices).ArrayNum;
    if (iVar4 == iVar8 + 1) {
      this->Mode = EMode_Complete;
      return;
    }
    this->Mode = (iVar4 != 1) + EMode_Singleton;
    return;
  }
  this->Mode = EMode_Singleton;
  return;
}

// Empty @ 14a404d00

void __thiscall FSampleTrackBase::Empty(FSampleTrackBase *this)

{
  int *piVar1;
  
  piVar1 = &(this->TimeIndicesStorage).ArrayMax;
  (this->TimeIndicesStorage).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TimeIndicesStorage).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AtlasStorage).ArrayMax;
  (this->AtlasStorage).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AtlasStorage).AllocatorInstance,0,piVar1);
  }
  UpdateTimeAndAtlasArrayViews(this);
  return;
}

// GetChildTracks @ 14a412390

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FSampleTrackBase::GetChildTracks(FSampleTrackBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSampleTrackBase::GetChildTracks'::__l2::
             _dynamic_atexit_destructor_for__EmptyIndices__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyIndices;
}

// GetName @ 14a416780

FName * __thiscall FSampleTrackBase::GetName(FSampleTrackBase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  
  iVar1 = (this->Names).ArrayNum;
  if (iVar1 == 0) {
    return &InvalidName;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FName *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FName *)(this->Names).AllocatorInstance.Data;
}

// GetReferencedTrack @ 14a417500

FSampleTrackBase * __thiscall FSampleTrackBase::GetReferencedTrack(FSampleTrackBase *this)

{
  int iVar1;
  FSampleTrackContainer *pFVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FSampleTrackBase *pFVar7;
  
  if (this->ReferencedTrackIndex == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsReferenced()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                       ,0x17d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSampleTrackBase *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (this->Container == (FSampleTrackContainer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                       ,0x17e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSampleTrackBase *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (this->ReferencedTrackIndex == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedTrackIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                       ,0x17f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSampleTrackBase *)(*pcVar5)();
      return pFVar7;
    }
  }
  iVar1 = this->ReferencedTrackIndex;
  pFVar2 = this->Container;
  if ((pFVar2->Tracks).ArrayNum <= iVar1) {
    return (FSampleTrackBase *)0x0;
  }
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSampleTrackBase *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar3 = (pFVar2->Tracks).AllocatorInstance.Data;
  pFVar7 = *(FSampleTrackBase **)(pFVar3 + (longlong)iVar1 * 0x10);
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar1 * 0x10 + 8);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return pFVar7;
}

// GetReferencedTrack @ 14a417630

FSampleTrackBase * __thiscall FSampleTrackBase::GetReferencedTrack(FSampleTrackBase *this)

{
  int iVar1;
  FSampleTrackContainer *pFVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FSampleTrackBase *pFVar7;
  
  if (this->ReferencedTrackIndex == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsReferenced()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                       ,0x171,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSampleTrackBase *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (this->Container == (FSampleTrackContainer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                       ,0x172,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSampleTrackBase *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (this->ReferencedTrackIndex == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedTrackIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                       ,0x173,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSampleTrackBase *)(*pcVar5)();
      return pFVar7;
    }
  }
  iVar1 = this->ReferencedTrackIndex;
  pFVar2 = this->Container;
  if ((pFVar2->Tracks).ArrayNum <= iVar1) {
    return (FSampleTrackBase *)0x0;
  }
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSampleTrackBase *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar3 = (pFVar2->Tracks).AllocatorInstance.Data;
  pFVar7 = *(FSampleTrackBase **)(pFVar3 + (longlong)iVar1 * 0x10);
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar1 * 0x10 + 8);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return pFVar7;
}

// GetSampleIndexForTimeIndex @ 14a4193d0

bool __thiscall
FSampleTrackBase::GetSampleIndexForTimeIndex
          (FSampleTrackBase *this,int param_1,FSampleTrackIndex *param_2)

{
  EMode EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar6 = this->NumTimesInContainer - 1;
  if (param_1 < (int)uVar6) {
    uVar6 = param_1;
  }
  uVar9 = 0;
  if (0 < (int)uVar6) {
    uVar9 = uVar6;
  }
  puVar8 = (uint *)FSampleTrackIndex::GetSample(param_2,this->TrackIndex);
  EVar1 = this->Mode;
  if (EVar1 == EMode_Singleton) {
    *puVar8 = 0;
    return true;
  }
  if (EVar1 == EMode_Sampled) {
    uVar6 = (this->TimeIndices).ArrayNum - 1;
    if ((int)*puVar8 < (int)uVar6) {
      uVar6 = *puVar8;
    }
    uVar7 = 0;
    if (0 < (int)uVar6) {
      uVar7 = uVar6;
    }
    *puVar8 = uVar7;
    iVar2 = (this->TimeIndices).ArrayNum;
    if (iVar2 != 0) {
      if (((int)uVar7 < 0) || (iVar2 <= (int)uVar7)) {
        *puVar8 = 0;
        uVar7 = 0;
      }
      while ((-1 < (int)(uVar7 - 1) && ((int)(uVar7 - 1) < (this->TimeIndices).ArrayNum))) {
        uVar6 = 0;
        if ((int)uVar7 < (this->TimeIndices).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((this->TimeIndices).DataPtr[(int)uVar7] <= (int)uVar9) break;
        *puVar8 = *puVar8 - 1;
        uVar7 = *puVar8;
      }
      while( true ) {
        uVar6 = *puVar8 + 1;
        if ((int)uVar6 < 0) {
          return true;
        }
        if ((this->TimeIndices).ArrayNum <= (int)uVar6) break;
        uVar7 = 0;
        if ((int)uVar6 < (this->TimeIndices).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((int)uVar9 < (this->TimeIndices).DataPtr[(int)uVar6]) {
          return true;
        }
        *puVar8 = *puVar8 + 1;
      }
      return true;
    }
  }
  else if (EVar1 == EMode_Complete) {
    *puVar8 = uVar9;
    return true;
  }
  return false;
}

// IsIdentical @ 14a428190

bool __thiscall
FSampleTrackBase::IsIdentical(FSampleTrackBase *this,FSampleTrackBase *param_1,float param_2)

{
  EMode EVar1;
  EMode EVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((this->ReferencedTrackIndex == -1) && (param_1->ReferencedTrackIndex == -1)) {
    pcVar3 = *(code **)(param_1->_padding_ + 8);
    cVar4 = (**(code **)(this->_padding_ + 8))();
    cVar5 = (*pcVar3)(param_1);
    if ((cVar4 == cVar5) && (this->ScriptStruct == param_1->ScriptStruct)) {
      EVar1 = param_1->Mode;
      EVar2 = this->Mode;
      if (EVar2 == EVar1) {
        iVar8 = param_1->NumTimesInContainer;
        iVar9 = this->NumTimesInContainer;
        if (iVar9 == iVar8) {
          iVar10 = 0;
          if (EVar2 == EMode_Singleton) {
            iVar9 = 1;
          }
          else if (EVar2 == EMode_Sampled) {
            iVar9 = (this->TimeIndices).ArrayNum;
          }
          else if (EVar2 != EMode_Complete) {
            iVar9 = 0;
          }
          if (EVar1 == EMode_Singleton) {
            iVar8 = 1;
          }
          else if (EVar1 == EMode_Sampled) {
            iVar8 = (param_1->TimeIndices).ArrayNum;
          }
          else if (EVar1 != EMode_Complete) {
            iVar8 = 0;
          }
          if (iVar9 == iVar8) {
            if (EVar2 == EMode_Sampled) {
              iVar8 = (this->TimeIndices).ArrayNum;
              if (iVar8 != (param_1->TimeIndices).ArrayNum) {
                return false;
              }
              iVar9 = 0;
              if (0 < iVar8) {
                do {
                  piVar6 = TArrayView<int,int>::operator[](&param_1->TimeIndices,iVar9);
                  piVar7 = TArrayView<int,int>::operator[](&this->TimeIndices,iVar9);
                  if (*piVar7 != *piVar6) {
                    return false;
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (this->TimeIndices).ArrayNum);
              }
            }
            iVar8 = (this->Atlas).ArrayNum;
            if (iVar8 == (param_1->Atlas).ArrayNum) {
              if (0 < iVar8) {
                do {
                  piVar6 = TArrayView<int,int>::operator[](&param_1->Atlas,iVar10);
                  piVar7 = TArrayView<int,int>::operator[](&this->Atlas,iVar10);
                  if (*piVar7 != *piVar6) {
                    return false;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < (this->Atlas).ArrayNum);
              }
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// LocalizeValues @ 14a42a880

bool __thiscall FSampleTrackBase::LocalizeValues(FSampleTrackBase *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FSampleTrackBase *pFVar6;
  int iVar7;
  int iVar8;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  
  if (this->ReferencedTrackIndex == -1) {
    return false;
  }
  (**(code **)(this->_padding_ + 0x70))();
  this->ReferencedTimeIndicesRange = (TTuple<int,int>)0xffffffffffffffff;
  this->ReferencedAtlasRange = (TTuple<int,int>)0xffffffffffffffff;
  this->ReferencedValuesRange = (TTuple<int,int>)0xffffffffffffffff;
  this->ReferencedTrackIndex = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=<int,int>
            (&this->TimeIndicesStorage,&this->TimeIndices);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=<int,int>(&this->AtlasStorage,&this->Atlas);
  if (this->ReferencedTrackIndex == -1) {
    pFVar1 = (this->TimeIndicesStorage).AllocatorInstance.Data;
    iVar7 = (this->TimeIndicesStorage).ArrayNum;
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->AtlasStorage).AllocatorInstance.Data;
    iVar8 = (this->AtlasStorage).ArrayNum;
    (this->TimeIndices).DataPtr = (int *)pFVar1;
    *(ulonglong *)&(this->TimeIndices).ArrayNum = CONCAT44(uStack_3c,iVar7);
    if ((iVar8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_38 = SUB84(pFVar2,0);
    uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
    local_98 = local_38;
    uStack_94 = uStack_34;
    uStack_8c = uStack_2c;
  }
  else {
    pFVar6 = GetReferencedTrack(this);
    if (pFVar6 == (FSampleTrackBase *)0x0) {
      (this->TimeIndices).DataPtr = (int *)0x0;
      *(ulonglong *)&(this->TimeIndices).ArrayNum = (ulonglong)uStack_9c << 0x20;
      local_98 = 0;
      uStack_94 = 0;
      iVar8 = 0;
    }
    else {
      if (*(int *)&(this->ReferencedTimeIndicesRange).field_0x4 < 1) {
        pFVar1 = (FScriptContainerElement *)0x0;
        iVar7 = 0;
      }
      else {
        if (((*(int *)&this->ReferencedTimeIndicesRange < 0) ||
            ((pFVar6->TimeIndicesStorage).ArrayNum <= *(int *)&this->ReferencedTimeIndicesRange)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReferencedTrack->TimeIndicesStorage.IsValidIndex(ReferencedTimeIndicesRange.Get<0>())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                               ,0x19e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = *(int *)&(this->ReferencedTimeIndicesRange).field_0x4 + -1 +
                *(int *)&this->ReferencedTimeIndicesRange;
        if (((iVar7 < 0) || ((pFVar6->TimeIndicesStorage).ArrayNum <= iVar7)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReferencedTrack->TimeIndicesStorage.IsValidIndex(ReferencedTimeIndicesRange.Get<0>() + ReferencedTimeIndicesRange.Get<1>() - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                               ,0x19f,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar1 = (pFVar6->TimeIndicesStorage).AllocatorInstance.Data +
                 (longlong)*(int *)&this->ReferencedTimeIndicesRange * 4;
        iVar7 = *(int *)&(this->ReferencedTimeIndicesRange).field_0x4;
        uStack_7c = uStack_6c;
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      (this->TimeIndices).DataPtr = (int *)pFVar1;
      (this->TimeIndices).ArrayNum = iVar7;
      *(undefined4 *)&(this->TimeIndices).field_0xc = uStack_7c;
      if (0 < *(int *)&(this->ReferencedAtlasRange).field_0x4) {
        if (((*(int *)&this->ReferencedAtlasRange < 0) ||
            ((pFVar6->AtlasStorage).ArrayNum <= *(int *)&this->ReferencedAtlasRange)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReferencedTrack->AtlasStorage.IsValidIndex(ReferencedAtlasRange.Get<0>())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                               ,0x1ac,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = *(int *)&(this->ReferencedAtlasRange).field_0x4 + -1 +
                *(int *)&this->ReferencedAtlasRange;
        if (((iVar7 < 0) || ((pFVar6->AtlasStorage).ArrayNum <= iVar7)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReferencedTrack->AtlasStorage.IsValidIndex(ReferencedAtlasRange.Get<0>() + ReferencedAtlasRange.Get<1>() - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                               ,0x1ad,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar1 = (pFVar6->AtlasStorage).AllocatorInstance.Data;
        iVar7 = *(int *)&this->ReferencedAtlasRange;
        iVar8 = *(int *)&(this->ReferencedAtlasRange).field_0x4;
        if ((iVar8 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (this->Atlas).DataPtr = (int *)(pFVar1 + (longlong)iVar7 * 4);
        *(ulonglong *)&(this->Atlas).ArrayNum = CONCAT44(uStack_4c,iVar8);
        return true;
      }
      local_68 = 0;
      uStack_64 = 0;
      iVar8 = 0;
      local_98 = local_68;
      uStack_94 = uStack_64;
      uStack_8c = uStack_5c;
    }
  }
  *(undefined4 *)&(this->Atlas).DataPtr = local_98;
  *(undefined4 *)((longlong)&(this->Atlas).DataPtr + 4) = uStack_94;
  (this->Atlas).ArrayNum = iVar8;
  *(undefined4 *)&(this->Atlas).field_0xc = uStack_8c;
  return true;
}

// NumSamples @ 14a42e880

int __thiscall FSampleTrackBase::NumSamples(FSampleTrackBase *this)

{
  EMode EVar1;
  
  EVar1 = this->Mode;
  if (EVar1 == EMode_Singleton) {
    return 1;
  }
  if (EVar1 != EMode_Sampled) {
    if (EVar1 != EMode_Complete) {
      return 0;
    }
    return this->NumTimesInContainer;
  }
  return (this->TimeIndices).ArrayNum;
}

// NumTimes @ 14a42ea10

int __thiscall FSampleTrackBase::NumTimes(FSampleTrackBase *this)

{
  return this->NumTimesInContainer;
}

// RemoveObsoleteTimes @ 14a44c1f0

int __thiscall
FSampleTrackBase::RemoveObsoleteTimes
          (FSampleTrackBase *this,int param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  EMode EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  size_t _Size;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  int local_res10;
  <lambda_1> local_50;
  
  if (((this->Mode != EMode_Invalid) && (this->ReferencedTrackIndex == -1)) &&
     (this->Mode != EMode_Singleton)) {
    local_res10 = param_1;
    if ((this->NumTimesInContainer != param_2->ArrayNum) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumTimesInContainer == InRemoveIndexMap.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                           ,0x1ff,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    if ((this->NumTimesInContainer != param_3->ArrayNum) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumTimesInContainer == InNewIndexMap.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                           ,0x200,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    if (param_1 != 0) {
      EVar1 = this->Mode;
      if (EVar1 != EMode_Invalid) {
        if (EVar1 == EMode_Singleton) {
          return 0;
        }
        if (EVar1 == EMode_Sampled) {
          local_50.InRemoveIndexMap.ArrayNum = param_2->ArrayNum;
          _Size = (size_t)local_50.InRemoveIndexMap.ArrayNum;
          pFVar2 = (param_2->AllocatorInstance).Data;
          local_50.InRemoveIndexMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_50.InRemoveIndexMap.ArrayNum == 0) {
            local_50.InRemoveIndexMap.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_50.InRemoveIndexMap.ArrayNum,0,(ForAnyElementType *)&local_50,
                       local_50.InRemoveIndexMap.ArrayNum,&local_50.InRemoveIndexMap.ArrayMax);
            memcpy(local_50.InRemoveIndexMap.AllocatorInstance.Data,pFVar2,_Size);
          }
          iVar5 = TArray<int,TSizedDefaultAllocator<32>_>::
                  RemoveAll<_FSampleTrackBase::RemoveObsoleteTimes_::__l26::<lambda_1>_>
                            (&this->TimeIndicesStorage,&local_50);
          if (local_50.InRemoveIndexMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.InRemoveIndexMap.AllocatorInstance.Data);
          }
          pFVar9 = (this->TimeIndicesStorage).AllocatorInstance.Data;
          iVar8 = (this->TimeIndicesStorage).ArrayNum;
          pFVar2 = pFVar9 + (longlong)iVar8 * 4;
          do {
            if ((this->TimeIndicesStorage).ArrayNum != iVar8) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if (pFVar9 == pFVar2) {
              iVar8 = this->NumTimesInContainer - local_res10;
              if (iVar8 < 1) {
                iVar8 = 1;
              }
              this->NumTimesInContainer = iVar8;
              UpdateTimeAndAtlasArrayViews(this);
              return iVar5;
            }
            uVar7 = *(uint *)pFVar9;
            uVar6 = 0;
            if ((int)uVar7 < param_3->ArrayNum) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar5 = (*pcVar3)();
              return iVar5;
            }
            uVar6 = *(uint *)pFVar9;
            if (*(uint *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar7 * 4) != uVar6) {
              uVar7 = 0;
              if ((int)uVar6 < param_3->ArrayNum) {
                uVar7 = ~uVar6 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                iVar5 = (*pcVar3)();
                return iVar5;
              }
              *(uint *)pFVar9 =
                   *(uint *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar6 * 4);
            }
            pFVar9 = pFVar9 + 4;
          } while( true );
        }
        if (EVar1 == EMode_Complete) {
          return param_1;
        }
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                         ,0x22b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
  }
  return 0;
}

// Reserve @ 14a44ef90

void __thiscall FSampleTrackBase::Reserve(FSampleTrackBase *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ReferencedTrackIndex != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsReferenced()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                       ,0x109,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (-1 < param_1) {
    if ((this->TimeIndicesStorage).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->TimeIndicesStorage).AllocatorInstance,
                 (this->TimeIndicesStorage).ArrayNum,&(this->TimeIndicesStorage).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 14a44fea0

void __thiscall FSampleTrackBase::Reset(FSampleTrackBase *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  
  this->Mode = EMode_Invalid;
  (this->TimeIndicesStorage).ArrayNum = 0;
  if ((this->TimeIndicesStorage).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TimeIndicesStorage).AllocatorInstance,0,
               &(this->TimeIndicesStorage).ArrayMax);
  }
  piVar1 = &(this->AtlasStorage).ArrayMax;
  (this->AtlasStorage).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AtlasStorage).AllocatorInstance,0,piVar1);
  }
  this->ReferencedTimeIndicesRange = (TTuple<int,int>)0xffffffffffffffff;
  this->ReferencedAtlasRange = (TTuple<int,int>)0xffffffffffffffff;
  this->ReferencedValuesRange = (TTuple<int,int>)0xffffffffffffffff;
  pFVar4 = (this->TimeIndicesStorage).AllocatorInstance.Data;
  iVar2 = (this->TimeIndicesStorage).ArrayNum;
  this->NumTimesInContainer = 0;
  this->ReferencedTrackIndex = -1;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (this->AtlasStorage).AllocatorInstance.Data;
  iVar3 = (this->AtlasStorage).ArrayNum;
  (this->TimeIndices).DataPtr = (int *)pFVar4;
  *(ulonglong *)&(this->TimeIndices).ArrayNum = CONCAT44(uStack_2c,iVar2);
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (this->Atlas).DataPtr = (int *)pFVar5;
  *(ulonglong *)&(this->Atlas).ArrayNum = CONCAT44(uStack_1c,iVar3);
  return;
}

// Serialize @ 14a456940

void __thiscall FSampleTrackBase::Serialize(FSampleTrackBase *this,FArchive *param_1)

{
  int *piVar1;
  EMode *pEVar2;
  int *piVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  bool bVar6;
  UScriptStruct *local_res8;
  
  if ((param_1->field_0x28 & 1) != 0) {
    (**(code **)(this->_padding_ + 0x28))();
  }
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&this->Names);
  pEVar2 = (EMode *)**(undefined8 **)&param_1->field_0x8;
  if ((EMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Mode,1);
  }
  else {
    this->Mode = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  piVar1 = &this->NumTimesInContainer;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->TrackIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->ReferencedTrackIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<<int,int>(param_1,&this->ReferencedTimeIndicesRange);
  operator<<<int,int>(param_1,&this->ReferencedAtlasRange);
  operator<<<int,int>(param_1,&this->ReferencedValuesRange);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar6 = this->ScriptStruct != (UScriptStruct *)0x0;
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    uVar5 = (ulonglong)local_res8 >> 0x20;
    local_res8 = (UScriptStruct *)((ulonglong)local_res8 & 0xffffffff00000000);
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8 = (UScriptStruct *)
                   CONCAT44((int)uVar5,(uint)(this->ScriptStruct != (UScriptStruct *)0x0));
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,4);
    if (1 < (uint)local_res8) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14a456b5b;
    bVar6 = (uint)local_res8 != 0;
  }
  else {
    bVar6 = *(int *)*puVar4 != 0;
    *puVar4 = (ulonglong)piVar1;
    if ((param_1->field_0x28 & 1) == 0) {
LAB_14a456b5b:
      if (bVar6) {
        local_res8 = this->ScriptStruct;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res8);
      }
      goto LAB_14a456b7a;
    }
  }
  if (bVar6) {
    local_res8 = (UScriptStruct *)0x0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res8);
    this->ScriptStruct = local_res8;
  }
  else {
    this->ScriptStruct = (UScriptStruct *)0x0;
  }
LAB_14a456b7a:
  if ((this->Mode == EMode_Sampled) || (this->Mode == EMode_Raw)) {
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              (param_1,&this->TimeIndicesStorage);
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&this->AtlasStorage);
  if ((param_1->field_0x28 & 1) != 0) {
    UpdateTimeAndAtlasArrayViews(this);
    (**(code **)(this->_padding_ + 0x30))(this);
  }
  return;
}

// Shrink @ 14a45bd50

void __thiscall FSampleTrackBase::Shrink(FSampleTrackBase *this)

{
  int *piVar1;
  int iVar2;
  
  if ((this->Mode == EMode_Sampled) || (this->Mode == EMode_Raw)) {
    iVar2 = (this->TimeIndicesStorage).ArrayNum;
    if ((this->TimeIndicesStorage).ArrayMax == iVar2) goto LAB_14a45bdad;
  }
  else {
    (this->TimeIndicesStorage).ArrayNum = 0;
    if ((this->TimeIndicesStorage).ArrayMax == 0) goto LAB_14a45bdad;
    iVar2 = 0;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,&(this->TimeIndicesStorage).AllocatorInstance,iVar2,
             &(this->TimeIndicesStorage).ArrayMax);
LAB_14a45bdad:
  iVar2 = (this->AtlasStorage).ArrayNum;
  piVar1 = &(this->AtlasStorage).ArrayMax;
  if (*piVar1 != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,&(this->AtlasStorage).AllocatorInstance,iVar2,piVar1);
  }
  UpdateTimeAndAtlasArrayViews(this);
  return;
}

// StoresValueForTimeIndex @ 14a45c9a0

bool __thiscall FSampleTrackBase::StoresValueForTimeIndex(FSampleTrackBase *this,int param_1)

{
  int *piVar1;
  EMode EVar2;
  int *piVar3;
  
  EVar2 = this->Mode;
  if (EVar2 == EMode_Singleton) {
    return param_1 == 0;
  }
  if (EVar2 == EMode_Sampled) {
    piVar3 = (this->TimeIndices).DataPtr;
    piVar1 = piVar3 + (this->TimeIndices).ArrayNum;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      if (*piVar3 == param_1) {
        return true;
      }
    }
  }
  else if (EVar2 == EMode_Complete) {
    return true;
  }
  return false;
}

// UpdateArrayViews @ 14a45f0e0

void __thiscall FSampleTrackBase::UpdateArrayViews(FSampleTrackBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSampleTrackBase *pFVar6;
  int iVar7;
  uint uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  
  if (this->ReferencedTrackIndex == -1) {
    pFVar1 = (this->TimeIndicesStorage).AllocatorInstance.Data;
    iVar7 = (this->TimeIndicesStorage).ArrayNum;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->AtlasStorage).AllocatorInstance.Data;
    iVar2 = (this->AtlasStorage).ArrayNum;
    (this->TimeIndices).DataPtr = (int *)pFVar1;
    *(ulonglong *)&(this->TimeIndices).ArrayNum = CONCAT44(uStack_2c,iVar7);
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->Atlas).DataPtr = (int *)pFVar3;
    *(ulonglong *)&(this->Atlas).ArrayNum = CONCAT44(uStack_1c,iVar2);
    return;
  }
  pFVar6 = GetReferencedTrack(this);
  if (pFVar6 == (FSampleTrackBase *)0x0) {
    (this->TimeIndices).DataPtr = (int *)0x0;
    *(ulonglong *)&(this->TimeIndices).ArrayNum = (ulonglong)uStack_8c << 0x20;
    pFVar1 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  else {
    if (*(int *)&(this->ReferencedTimeIndicesRange).field_0x4 < 1) {
      pFVar1 = (FScriptContainerElement *)0x0;
      iVar7 = 0;
    }
    else {
      if (((*(int *)&this->ReferencedTimeIndicesRange < 0) ||
          ((pFVar6->TimeIndicesStorage).ArrayNum <= *(int *)&this->ReferencedTimeIndicesRange)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencedTrack->TimeIndicesStorage.IsValidIndex(ReferencedTimeIndicesRange.Get<0>())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                             ,0x19e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)&this->ReferencedTimeIndicesRange +
              *(int *)&(this->ReferencedTimeIndicesRange).field_0x4 + -1;
      if (((iVar7 < 0) || ((pFVar6->TimeIndicesStorage).ArrayNum <= iVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencedTrack->TimeIndicesStorage.IsValidIndex(ReferencedTimeIndicesRange.Get<0>() + ReferencedTimeIndicesRange.Get<1>() - 1)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                             ,0x19f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (pFVar6->TimeIndicesStorage).AllocatorInstance.Data +
               (longlong)*(int *)&this->ReferencedTimeIndicesRange * 4;
      iVar7 = *(int *)&(this->ReferencedTimeIndicesRange).field_0x4;
      uStack_6c = uStack_5c;
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (this->TimeIndices).DataPtr = (int *)pFVar1;
    (this->TimeIndices).ArrayNum = iVar7;
    *(undefined4 *)&(this->TimeIndices).field_0xc = uStack_6c;
    if (*(int *)&(this->ReferencedAtlasRange).field_0x4 < 1) {
      pFVar1 = (FScriptContainerElement *)0x0;
      iVar7 = 0;
      uStack_7c = uStack_4c;
    }
    else {
      if (((*(int *)&this->ReferencedAtlasRange < 0) ||
          ((pFVar6->AtlasStorage).ArrayNum <= *(int *)&this->ReferencedAtlasRange)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencedTrack->AtlasStorage.IsValidIndex(ReferencedAtlasRange.Get<0>())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                             ,0x1ac,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)&(this->ReferencedAtlasRange).field_0x4 + -1 +
              *(int *)&this->ReferencedAtlasRange;
      if (((iVar7 < 0) || ((pFVar6->AtlasStorage).ArrayNum <= iVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencedTrack->AtlasStorage.IsValidIndex(ReferencedAtlasRange.Get<0>() + ReferencedAtlasRange.Get<1>() - 1)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                             ,0x1ad,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (pFVar6->AtlasStorage).AllocatorInstance.Data +
               (longlong)*(int *)&this->ReferencedAtlasRange * 4;
      iVar7 = *(int *)&(this->ReferencedAtlasRange).field_0x4;
      uStack_7c = uStack_3c;
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  (this->Atlas).DataPtr = (int *)pFVar1;
  (this->Atlas).ArrayNum = iVar7;
  *(undefined4 *)&(this->Atlas).field_0xc = uStack_7c;
  return;
}

// UpdateTimeAndAtlasArrayViews @ 14a464970

void __thiscall FSampleTrackBase::UpdateTimeAndAtlasArrayViews(FSampleTrackBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSampleTrackBase *pFVar6;
  int iVar7;
  uint uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  
  if (this->ReferencedTrackIndex == -1) {
    pFVar1 = (this->TimeIndicesStorage).AllocatorInstance.Data;
    iVar7 = (this->TimeIndicesStorage).ArrayNum;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->AtlasStorage).AllocatorInstance.Data;
    iVar2 = (this->AtlasStorage).ArrayNum;
    (this->TimeIndices).DataPtr = (int *)pFVar1;
    *(ulonglong *)&(this->TimeIndices).ArrayNum = CONCAT44(uStack_2c,iVar7);
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->Atlas).DataPtr = (int *)pFVar3;
    *(ulonglong *)&(this->Atlas).ArrayNum = CONCAT44(uStack_1c,iVar2);
    return;
  }
  pFVar6 = GetReferencedTrack(this);
  if (pFVar6 == (FSampleTrackBase *)0x0) {
    (this->TimeIndices).DataPtr = (int *)0x0;
    *(ulonglong *)&(this->TimeIndices).ArrayNum = (ulonglong)uStack_8c << 0x20;
    pFVar1 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  else {
    if (*(int *)&(this->ReferencedTimeIndicesRange).field_0x4 < 1) {
      pFVar1 = (FScriptContainerElement *)0x0;
      iVar7 = 0;
    }
    else {
      if (((*(int *)&this->ReferencedTimeIndicesRange < 0) ||
          ((pFVar6->TimeIndicesStorage).ArrayNum <= *(int *)&this->ReferencedTimeIndicesRange)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencedTrack->TimeIndicesStorage.IsValidIndex(ReferencedTimeIndicesRange.Get<0>())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                             ,0x19e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)&this->ReferencedTimeIndicesRange +
              *(int *)&(this->ReferencedTimeIndicesRange).field_0x4 + -1;
      if (((iVar7 < 0) || ((pFVar6->TimeIndicesStorage).ArrayNum <= iVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencedTrack->TimeIndicesStorage.IsValidIndex(ReferencedTimeIndicesRange.Get<0>() + ReferencedTimeIndicesRange.Get<1>() - 1)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                             ,0x19f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (pFVar6->TimeIndicesStorage).AllocatorInstance.Data +
               (longlong)*(int *)&this->ReferencedTimeIndicesRange * 4;
      iVar7 = *(int *)&(this->ReferencedTimeIndicesRange).field_0x4;
      uStack_6c = uStack_5c;
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (this->TimeIndices).DataPtr = (int *)pFVar1;
    (this->TimeIndices).ArrayNum = iVar7;
    *(undefined4 *)&(this->TimeIndices).field_0xc = uStack_6c;
    if (*(int *)&(this->ReferencedAtlasRange).field_0x4 < 1) {
      pFVar1 = (FScriptContainerElement *)0x0;
      iVar7 = 0;
      uStack_7c = uStack_4c;
    }
    else {
      if (((*(int *)&this->ReferencedAtlasRange < 0) ||
          ((pFVar6->AtlasStorage).ArrayNum <= *(int *)&this->ReferencedAtlasRange)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencedTrack->AtlasStorage.IsValidIndex(ReferencedAtlasRange.Get<0>())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                             ,0x1ac,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)&(this->ReferencedAtlasRange).field_0x4 + -1 +
              *(int *)&this->ReferencedAtlasRange;
      if (((iVar7 < 0) || ((pFVar6->AtlasStorage).ArrayNum <= iVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencedTrack->AtlasStorage.IsValidIndex(ReferencedAtlasRange.Get<0>() + ReferencedAtlasRange.Get<1>() - 1)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                             ,0x1ad,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (pFVar6->AtlasStorage).AllocatorInstance.Data +
               (longlong)*(int *)&this->ReferencedAtlasRange * 4;
      iVar7 = *(int *)&(this->ReferencedAtlasRange).field_0x4;
      uStack_7c = uStack_3c;
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  (this->Atlas).DataPtr = (int *)pFVar1;
  (this->Atlas).ArrayNum = iVar7;
  *(undefined4 *)&(this->Atlas).field_0xc = uStack_7c;
  return;
}

// UsesAtlas @ 14a4676c0

bool __thiscall FSampleTrackBase::UsesAtlas(FSampleTrackBase *this,int param_1)

{
  return (this->Atlas).ArrayNum != 0;
}

