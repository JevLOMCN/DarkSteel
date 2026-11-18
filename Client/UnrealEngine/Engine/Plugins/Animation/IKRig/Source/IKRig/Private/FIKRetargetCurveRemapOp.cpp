// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 12

// StaticStruct @ 14def1080

UScriptStruct * __cdecl FIKRetargetCurveRemapOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCurveRemapOp,(UObject *)pUVar1,
                         L"IKRetargetCurveRemapOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton;
}

// Initialize @ 14def10c0

bool __thiscall
FIKRetargetCurveRemapOp::Initialize
          (FIKRetargetCurveRemapOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  return true;
}

// Run @ 14def10d0

void __thiscall
FIKRetargetCurveRemapOp::Run
          (FIKRetargetCurveRemapOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// GetSettings @ 14def10e0

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetCurveRemapOp::GetSettings(FIKRetargetCurveRemapOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// SetSettings @ 14def10f0

void __thiscall
FIKRetargetCurveRemapOp::SetSettings
          (FIKRetargetCurveRemapOp *this,FIKRetargetOpSettingsBase *param_1)

{
  FIKRetargetOpSettingsBase::operator=((FIKRetargetOpSettingsBase *)&this->Settings,param_1);
  (this->Settings).bCopyAllSourceCurves = SUB81(param_1[1]._padding_,0);
  (this->Settings).bRemapCurves = *(bool *)((longlong)&param_1[1]._padding_ + 1);
  TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Settings).CurvesToRemap,
             (TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_> *)&param_1[1].LODThreshold);
  return;
}

// GetSettingsType @ 14def1140

UScriptStruct * __thiscall FIKRetargetCurveRemapOp::GetSettingsType(FIKRetargetCurveRemapOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings,(UObject *)pUVar1
                         ,L"IKRetargetCurveRemapOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOpSettings.OuterSingleton;
}

// GetType @ 14def1180

UScriptStruct * __thiscall FIKRetargetCurveRemapOp::GetType(FIKRetargetCurveRemapOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCurveRemapOp,(UObject *)pUVar1,
                         L"IKRetargetCurveRemapOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton;
}

// IsSingleton @ 14def11c0

bool __thiscall FIKRetargetCurveRemapOp::IsSingleton(FIKRetargetCurveRemapOp *this)

{
  return true;
}

// HasCurveProcessing @ 14def11d0

bool __thiscall FIKRetargetCurveRemapOp::HasCurveProcessing(FIKRetargetCurveRemapOp *this)

{
  return true;
}

// ProcessAnimSequenceCurves @ 14def11f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FIKRetargetCurveRemapOp::ProcessAnimSequenceCurves
          (FIKRetargetCurveRemapOp *this,FCurveData *param_1,
          TArray<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2,FCurveData *param_3,
          TArray<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_4)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulong64 uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  int *piVar19;
  ulonglong uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 local_118;
  undefined1 local_117 [7];
  ForAnyElementType local_110;
  undefined8 local_108;
  ForAnyElementType local_100;
  undefined8 local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  uint local_d0;
  FScriptContainerElement *local_c8;
  uint local_c0;
  uint local_bc;
  FScriptContainerElement *local_b8;
  TArray<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_b0;
  FScriptContainerElement *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FCurveData local_88;
  FScriptContainerElement *local_58;
  
  uVar20 = 0;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  if ((this->Settings).bRemapCurves != false) {
    TArray<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_b0,param_2->ArrayNum,Default);
    uVar7 = uVar20;
    uVar16 = uVar20;
    if (0 < param_2->ArrayNum) {
      do {
        uVar14 = (uint)uVar7;
        uVar10 = 0;
        if ((int)uVar14 < local_b0.ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = (this->Settings).CurvesToRemap.ArrayNum;
        pFVar18 = local_b0.AllocatorInstance.Data + uVar16;
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        if (*(int *)(pFVar18 + 0xc) < (int)uVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar10,(ForAnyElementType *)pFVar18,*(int *)(pFVar18 + 8),
                     (int *)(pFVar18 + 0xc));
        }
        uVar7 = (ulonglong)(uVar14 + 1);
        uVar16 = uVar16 + 0x10;
      } while ((int)(uVar14 + 1) < param_2->ArrayNum);
    }
    uVar10 = (this->Settings).CurvesToRemap.ArrayNum;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (local_f8._4_4_ < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar10,&local_100,(int)local_f8,(int *)((longlong)&local_f8 + 4));
    }
    piVar19 = &(this->Settings).CurvesToRemap.ArrayNum;
    uVar10 = *piVar19;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (local_e8._4_4_ < (int)uVar10) {
      local_98 = piVar19;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar10,&local_f0,(int)local_e8,(int *)((longlong)&local_e8 + 4));
    }
    local_98 = &(this->Settings).CurvesToRemap.ArrayNum;
    uVar10 = *local_98;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (local_d8._4_4_ < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar10,&local_e0,(int)local_d8,(int *)((longlong)&local_d8 + 4));
    }
    uVar10 = *piVar19;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (local_108._4_4_ < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar10,&local_110,(uint)local_108,(int *)((longlong)&local_108 + 4));
    }
    local_bc = (this->Settings).CurvesToRemap.ArrayNum;
    uVar7 = (ulonglong)(int)local_bc;
    pFVar18 = (this->Settings).CurvesToRemap.AllocatorInstance.Data;
    pFVar11 = pFVar18 + uVar7 * 0x10;
    local_d0 = 0;
    local_c8 = (FScriptContainerElement *)0x0;
    local_a0 = pFVar11;
    while( true ) {
      uVar10 = (uint)uVar20;
      local_b8 = pFVar18;
      if ((this->Settings).CurvesToRemap.ArrayNum != (int)uVar7) {
        local_118 = 0;
        `TCheckedPointerIterator<FCurveRemapPair_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_118);
      }
      if (pFVar18 == pFVar11) break;
      pFVar17 = (param_1->Names).AllocatorInstance.Data;
      iVar6 = (param_1->Names).ArrayNum;
      if (pFVar17 != pFVar17 + (longlong)iVar6 * 8) {
        pFVar22 = pFVar17;
        do {
          if (*(longlong *)pFVar22 == *(longlong *)pFVar18) {
            uVar14 = (uint)((longlong)pFVar22 - (longlong)pFVar17 >> 3);
            if (uVar14 != 0xffffffff) {
              uVar15 = ~uVar14 >> 0x1f;
              uVar13 = 0;
              if ((int)uVar14 < iVar6) {
                uVar13 = uVar15;
              }
              local_c0 = uVar15;
              if ((uVar13 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar21 = (longlong)(int)uVar14;
              pFVar18 = (param_1->Names).AllocatorInstance.Data + lVar21 * 8;
              if (((local_100.Data <= pFVar18) &&
                  (pFVar18 < local_100.Data + (longlong)local_f8._4_4_ * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar6 = (int)local_f8;
              if ((int)local_f8 == local_f8._4_4_) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&local_100,(int *)((longlong)&local_f8 + 4));
              }
              local_f8 = CONCAT44(local_f8._4_4_,iVar6 + 1);
              *(undefined8 *)(local_100.Data + (longlong)iVar6 * 8) = *(undefined8 *)pFVar18;
              uVar13 = 0;
              if ((int)uVar14 < (param_1->Flags).ArrayNum) {
                uVar13 = uVar15;
              }
              if ((uVar13 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar18 = (param_1->Flags).AllocatorInstance.Data + lVar21 * 4;
              if (((local_f0.Data <= pFVar18) &&
                  (pFVar18 < local_f0.Data + (longlong)local_e8._4_4_ * 4)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar6 = (int)local_e8;
              if ((int)local_e8 == local_e8._4_4_) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_f0,(int *)((longlong)&local_e8 + 4));
              }
              local_e8 = CONCAT44(local_e8._4_4_,iVar6 + 1);
              *(undefined4 *)(local_f0.Data + (longlong)iVar6 * 4) = *(undefined4 *)pFVar18;
              uVar13 = 0;
              if ((int)uVar14 < (param_1->Colors).ArrayNum) {
                uVar13 = uVar15;
              }
              if ((uVar13 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar18 = (param_1->Colors).AllocatorInstance.Data + lVar21 * 0x10;
              if (((local_e0.Data <= pFVar18) &&
                  (pFVar18 < local_e0.Data + (longlong)local_d8._4_4_ * 0x10)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar6 = (int)local_d8;
              if ((int)local_d8 == local_d8._4_4_) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&local_e0,(int *)((longlong)&local_d8 + 4));
              }
              uVar13 = 0;
              local_d8 = CONCAT44(local_d8._4_4_,iVar6 + 1);
              uVar4 = *(undefined8 *)(pFVar18 + 8);
              *(undefined8 *)(local_e0.Data + (longlong)iVar6 * 0x10) = *(undefined8 *)pFVar18;
              *(undefined8 *)(local_e0.Data + (longlong)iVar6 * 0x10 + 8) = uVar4;
              if (0 < param_2->ArrayNum) {
                lVar23 = 0;
                do {
                  uVar10 = 0;
                  if ((int)uVar13 < local_b0.ArrayNum) {
                    uVar10 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar18 = local_b0.AllocatorInstance.Data + lVar23;
                  uVar10 = 0;
                  if ((int)uVar13 < param_2->ArrayNum) {
                    uVar10 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar11 = (param_2->AllocatorInstance).Data;
                  uVar10 = 0;
                  if ((int)uVar14 < *(int *)(pFVar11 + lVar23 + 8)) {
                    uVar10 = local_c0;
                  }
                  if ((uVar10 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                    /* WARNING: Load size is inaccurate */
                  pFVar11 = (FScriptContainerElement *)
                            (*(longlong *)(pFVar11 + lVar23) + lVar21 * 8);
                  if (((*pFVar18 <= pFVar11) &&
                      (pFVar11 < *pFVar18 + (longlong)*(int *)(pFVar18 + 0xc) * 8)) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  iVar6 = *(int *)(pFVar18 + 8);
                  if (iVar6 == *(int *)(pFVar18 + 0xc)) {
                    iVar6 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x408,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
                  }
                    /* WARNING: Load size is inaccurate */
                  FVar12.Data = *pFVar18;
                  *(int *)(pFVar18 + 8) = iVar6 + 1;
                  lVar8 = (longlong)iVar6;
                  FVar12.Data[lVar8 * 8 + 4] = (FScriptContainerElement)0x0;
                  FVar2 = pFVar11[4];
                  FVar12.Data[lVar8 * 8 + 4] = FVar2;
                  if (FVar2 != (FScriptContainerElement)0x0) {
                    *(undefined4 *)(FVar12.Data + lVar8 * 8) = *(undefined4 *)pFVar11;
                  }
                  uVar13 = uVar13 + 1;
                  lVar23 = lVar23 + 0x10;
                  uVar10 = local_d0;
                } while ((int)uVar13 < param_2->ArrayNum);
              }
              uVar14 = 0;
              if ((int)uVar10 < *local_98) {
                uVar14 = ~uVar10 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar18 = local_c8 +
                        (longlong)((this->Settings).CurvesToRemap.AllocatorInstance.Data + 8);
              if (((local_110.Data <= pFVar18) &&
                  (pFVar18 < local_110.Data + (longlong)local_108._4_4_ * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar6 = (uint)local_108;
              if ((uint)local_108 == local_108._4_4_) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&local_110,(int *)((longlong)&local_108 + 4));
              }
              local_108 = CONCAT44(local_108._4_4_,iVar6 + 1);
              *(longlong *)(local_110.Data + (longlong)iVar6 * 8) = *(longlong *)pFVar18;
              pFVar18 = local_b8;
              pFVar11 = local_a0;
            }
            break;
          }
          pFVar22 = pFVar22 + 8;
        } while (pFVar22 != pFVar17 + (longlong)iVar6 * 8);
      }
      local_c8 = local_c8 + 0x10;
      local_d0 = uVar10 + 1;
      uVar20 = (ulonglong)local_d0;
      uVar7 = (ulonglong)local_bc;
      pFVar18 = pFVar18 + 0x10;
    }
  }
  uVar20 = 0;
  if ((this->Settings).bCopyAllSourceCurves == false) {
    DestructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *)
               (param_4->AllocatorInstance).Data,param_4->ArrayNum);
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax == 0) {
      param_4->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,param_4->ArrayMax,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
      ConstructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int>
                ((param_4->AllocatorInstance).Data,
                 (TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *)0x0,0);
    }
    TArray<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
              (param_4,param_2->ArrayNum,Default);
    uVar10 = 0;
    if (0 < param_2->ArrayNum) {
      uVar7 = uVar20;
      uVar14 = (uint)local_108;
      do {
        uVar13 = 0;
        if ((int)uVar10 < param_4->ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar14 = (uint)local_108;
        }
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        pFVar18 = (param_4->AllocatorInstance).Data + uVar7;
        if (*(int *)(pFVar18 + 0xc) < (int)uVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar14,(ForAnyElementType *)pFVar18,*(int *)&pFVar18[8].field_0x0,
                     (int *)(pFVar18 + 0xc));
          uVar14 = (uint)local_108;
        }
        uVar10 = uVar10 + 1;
        uVar7 = uVar7 + 0x10;
      } while ((int)uVar10 < param_2->ArrayNum);
    }
    local_88.Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Names.ArrayNum = 0;
    local_88.Names.ArrayMax = 0;
    local_88.Flags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Flags.ArrayNum = 0;
    local_88.Flags.ArrayMax = 0;
    local_88.Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Colors.ArrayNum = 0;
    local_88.Colors.ArrayMax = 0;
    FIKRetargetOpBase::FCurveData::operator=(param_3,&local_88);
    if (local_88.Colors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Colors.AllocatorInstance.Data);
    }
    if (local_88.Flags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Flags.AllocatorInstance.Data);
    }
    if (local_88.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Names.AllocatorInstance.Data);
    }
    uVar9 = local_108 & 0xffffffff;
    if ((int)(uint)local_108 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    if ((param_3->Names).ArrayMax < (int)(uint)local_108) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,(uint)local_108,(ForAnyElementType *)param_3,(param_3->Names).ArrayNum,
                 &(param_3->Names).ArrayMax);
      uVar9 = local_108 & 0xffffffff;
    }
    iVar6 = (int)uVar9;
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    if ((param_3->Flags).ArrayMax < iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar6,&(param_3->Flags).AllocatorInstance,(param_3->Flags).ArrayNum,
                 &(param_3->Flags).ArrayMax);
      uVar9 = local_108 & 0xffffffff;
    }
    iVar6 = (int)uVar9;
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    if (iVar6 <= (param_3->Colors).ArrayMax) goto LAB_14def1ca2;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar6,&(param_3->Colors).AllocatorInstance,(param_3->Colors).ArrayNum,
               &(param_3->Colors).ArrayMax);
  }
  else {
    if (param_4 != param_2) {
      DestructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *)
                 (param_4->AllocatorInstance).Data,param_4->ArrayNum);
      pFVar18 = (param_4->AllocatorInstance).Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (param_4->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_4->ArrayNum = param_2->ArrayNum;
      param_4->ArrayMax = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
    }
    FIKRetargetOpBase::FCurveData::operator=(param_3,param_1);
  }
  uVar9 = local_108 & 0xffffffff;
LAB_14def1ca2:
  if ((this->Settings).bRemapCurves != false) {
    piVar19 = (int *)0x0;
    local_d0 = (uint)uVar9;
    uVar7 = (ulonglong)(int)local_d0;
    pFVar18 = (FScriptContainerElement *)0x0;
    local_a0 = (FScriptContainerElement *)0x0;
    local_58 = local_110.Data + uVar7 * 8;
    FVar12.Data = local_110.Data;
    while( true ) {
      pFVar11 = local_58;
      uVar10 = (uint)uVar20;
      local_c8 = FVar12.Data;
      local_b8 = pFVar18;
      local_98 = piVar19;
      if ((int)uVar9 != (int)uVar7) {
        local_117[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_117);
      }
      if (FVar12.Data == pFVar11) break;
      pFVar11 = (param_3->Names).AllocatorInstance.Data;
      if (pFVar11 != pFVar11 + (longlong)(param_3->Names).ArrayNum * 8) {
        pFVar17 = pFVar11;
LAB_14def1d10:
        if (*(longlong *)pFVar17 != *(longlong *)FVar12.Data) goto code_r0x00014def1d19;
        iVar6 = param_4->ArrayNum;
        uVar14 = (uint)((longlong)pFVar17 - (longlong)pFVar11 >> 3);
        if (uVar14 != 0xffffffff) {
          uVar13 = 0;
          if (0 < iVar6) {
            local_bc = ~uVar10 >> 0x1f;
            local_c0 = ~uVar14 >> 0x1f;
            lVar21 = 0;
            do {
              uVar15 = 0;
              if ((int)uVar13 < local_b0.ArrayNum) {
                uVar15 = ~uVar13 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar12.Data = local_b0.AllocatorInstance.Data;
              uVar15 = 0;
              if ((int)uVar10 < *(int *)(local_b0.AllocatorInstance.Data + lVar21 + 8)) {
                uVar15 = local_bc;
              }
              if ((uVar15 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar18 = local_a0 + *(longlong *)(FVar12.Data + lVar21);
              uVar15 = 0;
              if ((int)uVar13 < param_4->ArrayNum) {
                uVar15 = ~uVar13 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar11 = (param_4->AllocatorInstance).Data;
              uVar15 = 0;
              if ((int)uVar14 < *(int *)(pFVar11 + lVar21 + 8)) {
                uVar15 = local_c0;
              }
              if ((uVar15 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar11 = (FScriptContainerElement *)
                        (*(longlong *)(pFVar11 + lVar21) + (longlong)(int)uVar14 * 8);
              if (pFVar18 != pFVar11) {
                if (pFVar18[4] == (FScriptContainerElement)0x0) {
                  if (pFVar11[4] != (FScriptContainerElement)0x0) {
                    pFVar11[4] = (FScriptContainerElement)0x0;
                  }
                }
                else {
                  *(undefined4 *)pFVar11 = *(undefined4 *)pFVar18;
                  pFVar11[4] = (FScriptContainerElement)0x1;
                }
              }
              uVar13 = uVar13 + 1;
              lVar21 = lVar21 + 0x10;
              FVar12.Data = local_c8;
            } while ((int)uVar13 < param_4->ArrayNum);
          }
          lVar21 = *(longlong *)FVar12.Data;
          uVar13 = 0;
          if ((int)uVar14 < (param_3->Names).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(longlong *)((param_3->Names).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) =
               lVar21;
          uVar13 = 0;
          if ((int)uVar10 < (int)local_e8) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar24 = *(undefined4 *)(local_b8 + local_f0.Data);
          uVar13 = 0;
          if ((int)uVar14 < (param_3->Flags).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)((param_3->Flags).AllocatorInstance.Data + (longlong)(int)uVar14 * 4) =
               uVar24;
          uVar13 = 0;
          if ((int)uVar10 < (int)local_d8) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          piVar19 = local_98;
          pFVar18 = (longlong)local_98 + local_e0.Data;
          local_98._0_4_ = *(undefined4 *)pFVar18;
          local_98._4_4_ = *(undefined4 *)(pFVar18 + 4);
          uStack_90 = *(undefined4 *)(pFVar18 + 8);
          uStack_8c = *(undefined4 *)(pFVar18 + 0xc);
          uVar13 = 0;
          if ((int)uVar14 < (param_3->Colors).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          uVar24 = uStack_90;
          uVar25 = uStack_8c;
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar24 = uStack_90, uVar25 = uStack_8c, bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_14def2139;
        }
        goto LAB_14def1d25;
      }
LAB_14def1d22:
      iVar6 = param_4->ArrayNum;
LAB_14def1d25:
      uVar14 = 0;
      if (0 < iVar6) {
        lVar21 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar14 < iVar6) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar18 = (param_4->AllocatorInstance).Data + lVar21;
          uVar13 = 0;
          if ((int)uVar14 < local_b0.ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar12.Data = local_b0.AllocatorInstance.Data;
          uVar13 = 0;
          if ((int)uVar10 < *(int *)(local_b0.AllocatorInstance.Data + lVar21 + 8)) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = local_a0 + *(longlong *)(FVar12.Data + lVar21);
          if (((*(FScriptContainerElement **)&pFVar18->field_0x0 <= pFVar11) &&
              (pFVar11 < *(FScriptContainerElement **)&pFVar18->field_0x0 +
                         (longlong)*(int *)(pFVar18 + 0xc) * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = *(int *)&pFVar18[8].field_0x0;
          if (iVar6 == *(int *)(pFVar18 + 0xc)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
          }
          pFVar17 = *(FScriptContainerElement **)&pFVar18->field_0x0;
          *(int *)&pFVar18[8].field_0x0 = iVar6 + 1;
          lVar23 = (longlong)iVar6;
          pFVar17[lVar23 * 8 + 4] = (FScriptContainerElement)0x0;
          FVar2 = pFVar11[4];
          pFVar17[lVar23 * 8 + 4] = FVar2;
          if (FVar2 != (FScriptContainerElement)0x0) {
            *(undefined4 *)(pFVar17 + lVar23 * 8) = *(undefined4 *)pFVar11;
          }
          uVar14 = uVar14 + 1;
          lVar21 = lVar21 + 0x10;
          iVar6 = param_4->ArrayNum;
          FVar12.Data = local_c8;
          piVar19 = local_98;
          pFVar18 = local_b8;
        } while ((int)uVar14 < iVar6);
      }
      pFVar11 = (param_3->Names).AllocatorInstance.Data;
      if (((pFVar11 <= FVar12.Data) &&
          (FVar12.Data < pFVar11 + (longlong)(param_3->Names).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (param_3->Names).ArrayNum;
      piVar1 = &(param_3->Names).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)param_3,piVar1);
        (param_3->Names).ArrayNum = iVar6;
      }
      (param_3->Names).ArrayNum = iVar6 + 1;
      *(longlong *)((param_3->Names).AllocatorInstance.Data + (longlong)iVar6 * 8) =
           *(longlong *)FVar12.Data;
      uVar14 = 0;
      if ((int)uVar10 < (int)local_e8) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = (param_3->Flags).AllocatorInstance.Data;
      pFVar17 = local_f0.Data + (longlong)pFVar18;
      if (((pFVar11 <= pFVar17) && (pFVar17 < pFVar11 + (longlong)(param_3->Flags).ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (param_3->Flags).ArrayNum;
      piVar1 = &(param_3->Flags).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(param_3->Flags).AllocatorInstance,piVar1);
      }
      (param_3->Flags).ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_3->Flags).AllocatorInstance.Data + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar17;
      uVar14 = 0;
      if ((int)uVar10 < (int)local_d8) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = (param_3->Colors).AllocatorInstance.Data;
      pFVar17 = local_e0.Data + (longlong)piVar19;
      if (((pFVar11 <= pFVar17) && (pFVar17 < pFVar11 + (longlong)(param_3->Colors).ArrayMax * 0x10)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar14 = (param_3->Colors).ArrayNum;
      piVar1 = &(param_3->Colors).ArrayMax;
      if (uVar14 == *piVar1) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&(param_3->Colors).AllocatorInstance,piVar1);
      }
      (param_3->Colors).ArrayNum = uVar14 + 1;
      local_98._0_4_ = *(undefined4 *)pFVar17;
      local_98._4_4_ = *(undefined4 *)(pFVar17 + 4);
      local_b8 = pFVar18;
      uVar24 = *(undefined4 *)(pFVar17 + 8);
      uVar25 = *(undefined4 *)(pFVar17 + 0xc);
LAB_14def2139:
      local_a0 = local_a0 + 8;
      uVar20 = (ulonglong)(uVar10 + 1);
      pFVar18 = local_b8 + 4;
      uVar7 = (ulonglong)local_d0;
      piVar19 = piVar19 + 4;
      FVar12.Data = local_c8 + 8;
      pFVar11 = (param_3->Colors).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10;
      *(undefined4 *)pFVar11 = (undefined4)local_98;
      *(undefined4 *)(pFVar11 + 4) = local_98._4_4_;
      *(undefined4 *)(pFVar11 + 8) = uVar24;
      *(undefined4 *)(pFVar11 + 0xc) = uVar25;
      uVar9 = local_108 & 0xffffffff;
    }
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  DestructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *)local_b0.AllocatorInstance.Data
             ,local_b0.ArrayNum);
  if ((TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *)local_b0.AllocatorInstance.Data !=
      (TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  pFVar18 = (param_1->Colors).AllocatorInstance.Data;
  if (pFVar18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar18);
  }
  pFVar18 = (param_1->Flags).AllocatorInstance.Data;
  if (pFVar18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar18);
  }
  pFVar18 = (param_1->Names).AllocatorInstance.Data;
  if (pFVar18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar18);
  }
  DestructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *)
             (param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar18 = (param_2->AllocatorInstance).Data;
  if (pFVar18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar18);
  }
  return;
code_r0x00014def1d19:
  pFVar17 = pFVar17 + 8;
  if (pFVar17 == pFVar11 + (longlong)(param_3->Names).ArrayNum * 8) goto LAB_14def1d22;
  goto LAB_14def1d10;
}

// AnimGraphPreUpdateMainThread @ 14def2640

void __thiscall
FIKRetargetCurveRemapOp::AnimGraphPreUpdateMainThread
          (FIKRetargetCurveRemapOp *this,USkeletalMeshComponent *param_1,
          USkeletalMeshComponent *param_2)

{
  UAnimInstance *this_00;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar1;
  
  if ((char)this->_padding_ != '\0') {
    *(undefined4 *)&(this->SourceCurves).field_0x8 = 0;
    if (*(int *)&(this->SourceCurves).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&this->SourceCurves,0,
                 (int *)&(this->SourceCurves).field_0xc);
    }
    (this->SourceCurves).field_0x10 = 0;
    this_00 = USkeletalMeshComponent::GetAnimInstance(param_1);
    if (this_00 != (UAnimInstance *)0x0) {
      pTVar1 = UAnimInstance::GetAnimationCurveList(this_00,AttributeCurve);
      UE::Anim::FCurveUtils::BuildUnsorted<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
                 &this->SourceCurves,pTVar1);
    }
  }
  return;
}

// AnimGraphEvaluateAnyThread @ 14def2700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRetargetCurveRemapOp::AnimGraphEvaluateAnyThread
          (FIKRetargetCurveRemapOp *this,FPoseContext *param_1)

{
  FBlendedCurve *this_00;
  undefined1 *puVar1;
  float fVar2;
  void *_Src;
  FName FVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FElementSortPredicate FVar8;
  FIKRetargetCurveRemapOp *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ForElementType<FSetElementId> FVar17;
  int iVar18;
  undefined1 *puVar19;
  float *pfVar20;
  FName *pFVar21;
  FElementSortPredicate FVar22;
  uint uVar23;
  FIKRetargetCurveRemapOp *pFVar24;
  FName *pFVar25;
  float *pfVar26;
  undefined1 auStackY_148 [32];
  FElementSortPredicate local_108;
  undefined1 local_107;
  undefined1 local_106;
  <lambda_1> local_105;
  undefined4 local_104;
  uint local_100;
  FIKRetargetCurveRemapOp *local_f8;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_f0;
  undefined8 local_d8;
  uint local_d0;
  undefined8 local_c8;
  TPairInitializer<FName_const_&,float_const_&> local_c0;
  undefined4 *local_b0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> local_a8
  ;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((char)this->_padding_ != '\0') {
    this_00 = &param_1->Curve;
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    local_f8 = this;
    if (((this->Settings).bCopyAllSourceCurves != false) &&
       (*(char *)((longlong)&this->_padding_ + 4) != '\0')) {
      iVar18 = *(int *)&(this->SourceCurves).field_0x8;
      puVar19 = &(param_1->Curve).field_0xc;
      _Src = *(void **)&this->SourceCurves;
      *(int *)&(param_1->Curve).field_0x8 = iVar18;
      if ((iVar18 == 0) && (*(int *)puVar19 == 0)) {
        *(undefined4 *)puVar19 = 0;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,iVar18,*(int *)puVar19,(ForElementType<UE::Anim::FCurveElement> *)this_00,
                   iVar18,(int *)puVar19);
        if (iVar18 != 0) {
          memcpy(*(void **)&this_00->field_0x0,_Src,(longlong)iVar18 << 4);
        }
      }
      (param_1->Curve).field_0x10 = (this->SourceCurves).field_0x10;
    }
    if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
      iVar18 = (this->Settings).CurvesToRemap.ArrayNum;
      pFVar21 = (FName *)(this->Settings).CurvesToRemap.AllocatorInstance.Data;
      pFVar25 = pFVar21 + (longlong)iVar18 * 2;
      while( true ) {
        puVar19 = &(param_1->Curve).field_0x8;
        if ((this->Settings).CurvesToRemap.ArrayNum != iVar18) {
          local_107 = 0;
          `TCheckedPointerIterator<FCurveRemapPair,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_107);
        }
        if (pFVar21 == pFVar25) break;
        uVar11 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::IndexOf
                           ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                            this_00,*pFVar21);
        if (uVar11 == 0xffffffff) {
LAB_14def28dc:
          local_104 = 0;
          pFVar21 = pFVar21 + 2;
        }
        else {
          uVar23 = 0;
          if ((int)uVar11 < *(int *)&(param_1->Curve).field_0x8) {
            uVar23 = ~uVar11 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar13 = (longlong)(int)uVar11 * 0x10 + *(longlong *)&this_00->field_0x0;
          if (lVar13 == 0) goto LAB_14def28dc;
          local_104 = *(undefined4 *)(lVar13 + 8);
          local_b0 = &local_104;
          local_c0.Value = (float *)pFVar21;
          TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                    (&local_a8,&local_c0,(bool *)&local_c0.Value);
          pFVar21 = pFVar21 + 2;
        }
      }
      if ((this->Settings).bCopyAllSourceCurves == false) {
        iVar18 = *(int *)puVar19;
        pFVar21 = *(FName **)&this_00->field_0x0;
        pFVar25 = pFVar21 + (longlong)iVar18 * 2;
        while( true ) {
          if (*(int *)puVar19 != iVar18) {
            local_106 = 0;
            `TCheckedPointerIterator<UE::Anim::FCurveElement,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_106);
          }
          this = local_f8;
          if (pFVar21 == pFVar25) break;
          FVar3 = *pFVar21;
          uVar11 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
                   IndexOf((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                           this_00,FVar3);
          if (uVar11 == 0xffffffff) {
LAB_14def29a8:
            iVar12 = *(int *)puVar19;
            puVar1 = &(param_1->Curve).field_0xc;
            if (iVar12 == *(int *)puVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                 (0x410,(ForElementType<UE::Anim::FCurveElement> *)this_00,
                                  (int *)puVar1);
            }
            *(int *)puVar19 = iVar12 + 1;
            lVar16 = (longlong)iVar12;
            lVar13 = *(longlong *)&this_00->field_0x0;
            pFVar21 = pFVar21 + 2;
            *(FName *)(lVar13 + lVar16 * 0x10) = FVar3;
            *(undefined4 *)(lVar13 + 8 + lVar16 * 0x10) = 0;
            *(undefined1 *)(lVar13 + 0xc + lVar16 * 0x10) = 0;
            (param_1->Curve).field_0x10 = 0;
          }
          else {
            uVar23 = 0;
            if ((int)uVar11 < *(int *)puVar19) {
              uVar23 = ~uVar11 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar13 = (longlong)(int)uVar11 * 0x10 + *(longlong *)&this_00->field_0x0;
            if (lVar13 == 0) goto LAB_14def29a8;
            *(undefined4 *)(lVar13 + 8) = 0;
            pFVar21 = pFVar21 + 2;
          }
        }
      }
    }
    FVar8 = local_108;
    if ((this->Settings).bRemapCurves != false) {
      local_100 = (this->Settings).CurvesToRemap.ArrayNum;
      uVar14 = (ulonglong)(int)local_100;
      pFVar24 = (FIKRetargetCurveRemapOp *)(this->Settings).CurvesToRemap.AllocatorInstance.Data;
      local_f8 = (FIKRetargetCurveRemapOp *)(&pFVar24->_padding_ + uVar14 * 2);
      local_f0.Elements.AllocatorInstance.Data = (FCurveElement *)0x0;
      local_f0.Elements.ArrayNum = 0;
      local_f0.Elements.ArrayMax = 0;
      local_f0.bSorted = false;
      local_d8 = 0;
      pfVar26 = (float *)0x0;
      FVar22 = local_108;
      if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
        while( true ) {
          pFVar9 = local_f8;
          if ((this->Settings).CurvesToRemap.ArrayNum != (int)uVar14) {
            `TCheckedPointerIterator<FCurveRemapPair,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_105);
          }
          if (pFVar24 == pFVar9) break;
          lVar13 = pFVar24->_padding_;
          uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar13);
          if (local_a8.Elements._8_4_ == local_a8.Elements._52_4_) {
LAB_14def2cd8:
            pFVar24 = (FIKRetargetCurveRemapOp *)&pFVar24->_padding_;
            uVar14 = (ulonglong)local_100;
          }
          else {
            FVar17 = (ForElementType<FSetElementId>)&local_a8.Hash;
            if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar17 = local_a8.Hash.SecondaryData;
            }
            iVar18 = *(int *)((longlong)FVar17 +
                             (ulonglong)
                             (local_a8.HashSize - 1U & (int)((ulonglong)lVar13 >> 0x20) + uVar11) *
                             4);
            if (iVar18 == -1) goto LAB_14def2cd8;
            do {
              lVar16 = local_a8.Elements._0_8_ + (longlong)iVar18 * 0x14;
              if (*(longlong *)(local_a8.Elements._0_8_ + (longlong)iVar18 * 0x14) == lVar13) {
                pfVar20 = (float *)(lVar16 + 8);
                if (lVar16 == 0) {
                  pfVar20 = (float *)0x0;
                }
                if (pfVar20 != (float *)0x0) {
                  iVar18 = (int)pfVar26;
                  if (iVar18 == local_f0.Elements.ArrayMax) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                       (0x410,(ForElementType<UE::Anim::FCurveElement> *)&local_f0,
                                        &local_f0.Elements.ArrayMax);
                  }
                  pfVar26 = (float *)(ulonglong)(iVar18 + 1U);
                  uVar6 = *(undefined4 *)&pFVar24->_padding_;
                  uVar7 = *(undefined4 *)((longlong)&pFVar24->_padding_ + 4);
                  local_f0.Elements.ArrayNum = iVar18 + 1U;
                  local_f0.bSorted = false;
                  local_f0.Elements.AllocatorInstance.Data[iVar18].Value = *pfVar20;
                  local_f0.Elements.AllocatorInstance.Data[iVar18].Name.ComparisonIndex =
                       (FNameEntryId)uVar6;
                  local_f0.Elements.AllocatorInstance.Data[iVar18].Name.Number = uVar7;
                  local_f0.Elements.AllocatorInstance.Data[iVar18].Flags = None;
                }
                goto LAB_14def2cd8;
              }
              iVar18 = *(int *)(lVar16 + 0xc);
            } while (iVar18 != -1);
            pFVar24 = (FIKRetargetCurveRemapOp *)&pFVar24->_padding_;
            uVar14 = (ulonglong)local_100;
          }
        }
      }
      else {
        while( true ) {
          pFVar9 = local_f8;
          if ((this->Settings).CurvesToRemap.ArrayNum != (int)uVar14) {
            local_108 = (FElementSortPredicate)0x0;
            `TCheckedPointerIterator<FCurveRemapPair,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_108);
          }
          if (pFVar24 == pFVar9) break;
          lVar13 = pFVar24->_padding_;
          local_c8 = lVar13;
          if ((this->SourceCurves).field_0x10 == '\0') {
            AlgoImpl::
            IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
                      (*(FCurveElement **)&this->SourceCurves,
                       *(int *)&(this->SourceCurves).field_0x8,(FIdentityFunctor)FVar8,FVar22);
            (this->SourceCurves).field_0x10 = 1;
          }
          local_d0 = *(uint *)&(this->SourceCurves).field_0x8;
          iVar18 = 0;
          iVar12 = 0;
          lVar16 = *(longlong *)&this->SourceCurves;
          local_c8 = CONCAT44(local_c8._4_4_,local_c8._4_4_);
          uVar11 = local_d0;
          if (0 < (int)local_d0) {
            do {
              uVar23 = uVar11 >> 1;
              uVar4 = *(undefined8 *)(lVar16 + (longlong)(int)(uVar23 + iVar18) * 0x10);
              iVar15 = (int)uVar4 - (int)lVar13;
              if (iVar15 == 0) {
                iVar15 = (int)((ulonglong)uVar4 >> 0x20) - local_c8._4_4_;
              }
              iVar12 = iVar18;
              if (iVar15 < 0) {
                iVar12 = uVar23 + iVar18 + (uVar11 & 1);
              }
              uVar11 = uVar23;
              iVar18 = iVar12;
            } while (uVar23 != 0);
            lVar16 = *(longlong *)&this->SourceCurves;
            FVar22 = local_108;
          }
          if (iVar12 < (int)local_d0) {
            uVar4 = *(undefined8 *)((longlong)iVar12 * 0x10 + lVar16);
            iVar18 = (int)lVar13 - (int)uVar4;
            if (iVar18 == 0) {
              iVar18 = local_c8._4_4_ - (int)((ulonglong)uVar4 >> 0x20);
            }
            if ((-1 < iVar18) && (iVar12 != -1)) {
              if ((iVar12 < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar13 = *(longlong *)&this->SourceCurves + (longlong)iVar12 * 0x10;
              if (lVar13 != 0) {
                fVar2 = *(float *)(lVar13 + 8);
                iVar18 = local_f0.Elements.ArrayNum;
                if (local_f0.Elements.ArrayNum == local_f0.Elements.ArrayMax) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                     (0x410,(ForElementType<UE::Anim::FCurveElement> *)&local_f0,
                                      &local_f0.Elements.ArrayMax);
                }
                uVar6 = *(undefined4 *)&pFVar24->_padding_;
                uVar7 = *(undefined4 *)((longlong)&pFVar24->_padding_ + 4);
                local_f0.Elements.ArrayNum = iVar18 + 1;
                local_f0.bSorted = false;
                local_f0.Elements.AllocatorInstance.Data[iVar18].Value = fVar2;
                local_f0.Elements.AllocatorInstance.Data[iVar18].Name.ComparisonIndex =
                     (FNameEntryId)uVar6;
                local_f0.Elements.AllocatorInstance.Data[iVar18].Name.Number = uVar7;
                local_f0.Elements.AllocatorInstance.Data[iVar18].Flags = None;
              }
            }
          }
          pFVar24 = (FIKRetargetCurveRemapOp *)&pFVar24->_padding_;
          uVar14 = (ulonglong)local_100;
        }
      }
      UE::Anim::FNamedValueArrayUtils::
      Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)this_00,
                 &local_f0,local_105);
    }
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
  }
  return;
}

