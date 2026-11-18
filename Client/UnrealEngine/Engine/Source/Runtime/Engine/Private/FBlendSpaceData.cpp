// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147516b40

UScriptStruct * __cdecl FBlendSpaceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBlendSpaceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlendSpaceData,(UObject *)pUVar1,
                         L"BlendSpaceData");
  }
  return Z_Registration_Info_UScriptStruct_FBlendSpaceData.OuterSingleton;
}

// GetSamples1D @ 147560380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBlendSpaceData::GetSamples1D
          (FBlendSpaceData *this,TArray<FWeightedBlendSample,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  int local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  float fStack_3c;
  undefined4 local_38;
  float fStack_34;
  
  if ((param_2->ArrayNum != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDimensionIndices.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                         ,0xb01,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,2,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar7 = (this->Segments).ArrayNum;
  if (iVar7 != 0) {
    if ((iVar7 == 1) &&
       (pFVar3 = (this->Segments).AllocatorInstance.Data, *(int *)pFVar3 == *(int *)(pFVar3 + 4))) {
      local_58 = *(int *)pFVar3;
      pFVar3 = (param_1->AllocatorInstance).Data;
      uStack_54 = 0x3f800000;
      if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           CONCAT44(uStack_54,local_58);
    }
    else {
      if ((param_2->ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = *(uint *)(param_2->AllocatorInstance).Data;
      if ((2 < uVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7ab,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->Segments).ArrayNum;
      fVar12 = (float)(param_3->field0_0x0).XYZ[(int)uVar8];
      uVar8 = *param_4;
      if (((int)uVar8 < 0) || (iVar7 <= (int)uVar8)) {
        uVar8 = iVar7 / 2;
        *param_4 = uVar8;
      }
      iVar7 = (this->Segments).ArrayNum;
      iVar11 = 0;
      if (iVar7 != 0) {
        do {
          uVar9 = 0;
          if ((int)uVar8 < iVar7) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this->Segments).AllocatorInstance.Data;
          lVar10 = (longlong)(int)uVar8;
          fVar2 = *(float *)(pFVar3 + lVar10 * 0x10 + 8);
          if (fVar2 <= fVar12) {
            if (fVar12 <= *(float *)(pFVar3 + lVar10 * 0x10 + 0xc)) {
              local_40 = *(undefined4 *)(pFVar3 + lVar10 * 0x10);
              pFVar4 = (param_1->AllocatorInstance).Data;
              fVar12 = (fVar12 - fVar2) / (*(float *)(pFVar3 + lVar10 * 0x10 + 0xc) - fVar2);
              if (__real_3f800000 <= fVar12) {
                fVar12 = __real_3f800000;
              }
              if (fVar12 <= 0.0) {
                fVar12 = 0.0;
              }
              fStack_3c = __real_3f800000 - fVar12;
              if (((pFVar4 <= (FScriptContainerElement *)&local_40) &&
                  ((FScriptContainerElement *)&local_40 < pFVar4 + (longlong)param_1->ArrayMax * 8))
                 && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar7 = param_1->ArrayNum;
              if (iVar7 == param_1->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar7 + 1;
              *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                   CONCAT44(fStack_3c,local_40);
              local_38 = *(undefined4 *)(pFVar3 + lVar10 * 0x10 + 4);
              pFVar3 = (param_1->AllocatorInstance).Data;
              fStack_34 = fVar12;
              if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
                  ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_1->ArrayMax * 8))
                 && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar7 = param_1->ArrayNum;
              if (iVar7 == param_1->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar7 + 1;
              *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                   CONCAT44(fStack_34,local_38);
              return;
            }
            if ((this->Segments).ArrayNum + -1 <= *param_4) {
              local_48 = *(undefined4 *)(pFVar3 + lVar10 * 0x10 + 4);
              pFVar3 = (param_1->AllocatorInstance).Data;
              uStack_44 = 0x3f800000;
              if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
                  ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)param_1->ArrayMax * 8))
                 && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar7 = param_1->ArrayNum;
              if (iVar7 == param_1->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar7 + 1;
              *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                   CONCAT44(uStack_44,local_48);
              return;
            }
            uVar8 = *param_4 + 1;
          }
          else {
            if (*param_4 < 1) {
              local_50 = *(undefined4 *)(pFVar3 + lVar10 * 0x10);
              pFVar3 = (param_1->AllocatorInstance).Data;
              uStack_4c = 0x3f800000;
              if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
                  ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)param_1->ArrayMax * 8))
                 && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar7 = param_1->ArrayNum;
              if (iVar7 == param_1->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar7 + 1;
              *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                   CONCAT44(uStack_4c,local_50);
              return;
            }
            uVar8 = *param_4 - 1;
          }
          *param_4 = uVar8;
          iVar11 = iVar11 + 1;
          iVar7 = (this->Segments).ArrayNum;
        } while (iVar11 != iVar7);
      }
      if (2 < (byte)LogAnimation._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      }
    }
  }
  return;
}

// GetSamples2D @ 147560940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBlendSpaceData::GetSamples2D
          (FBlendSpaceData *this,TArray<FWeightedBlendSample,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3,int *param_4)

{
  int *piVar1;
  double dVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  TArray<FBlendSpaceTriangle,TSizedDefaultAllocator<32>_> *pTVar18;
  uint uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 uStack_128;
  int local_124;
  undefined4 uStack_120;
  int local_11c;
  undefined4 uStack_118;
  int local_114;
  float fStack_110;
  int local_10c;
  float fStack_108;
  TArray<FBlendSpaceTriangle,TSizedDefaultAllocator<32>_> *local_100;
  undefined4 local_f8;
  float fStack_f4;
  undefined4 local_f0;
  float fStack_ec;
  undefined4 local_e8;
  float fStack_e4;
  undefined4 local_e0;
  float fStack_dc;
  undefined4 local_d8;
  float fStack_d4;
  undefined4 local_d0;
  float fStack_cc;
  undefined4 local_c8;
  float fStack_c4;
  undefined4 local_c0;
  float fStack_bc;
  undefined4 local_b8;
  float fStack_b4;
  TVector2<double>_u_0 local_b0;
  FScriptContainerElement *local_a0;
  TVector<double>_u_0 local_98 [4];
  
  if ((this->Triangles).ArrayNum == 0) {
    return;
  }
  if ((param_2->ArrayNum != 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDimensionIndices.Num() == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace.cpp"
                         ,0xb54,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,3,&param_1->AllocatorInstance,0,piVar1);
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = *(uint *)(param_2->AllocatorInstance).Data;
  if ((param_2->ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = *(uint *)((param_2->AllocatorInstance).Data + 4);
  if ((2 < uVar11) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar2 = (param_3->field0_0x0).XYZ[(int)uVar11];
  if ((2 < uVar19) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_b0._s_0.X = (param_3->field0_0x0).XYZ[(int)uVar19];
  local_100 = &this->Triangles;
  local_b0._s_0.Y = dVar2;
  if ((this->Triangles).ArrayNum == 1) {
    pFVar16 = (local_100->AllocatorInstance).Data;
    local_11c = *(int *)(pFVar16 + 4);
    local_12c = *(int *)pFVar16;
    if (local_12c == local_11c) {
      pFVar16 = (param_1->AllocatorInstance).Data;
      uStack_128 = 0x3f800000;
      if (((pFVar16 <= (FScriptContainerElement *)&local_12c) &&
          ((FScriptContainerElement *)&local_12c < pFVar16 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           CONCAT44(uStack_128,local_12c);
      return;
    }
    if (local_11c == *(int *)(pFVar16 + 8)) {
      dVar22 = *(double *)(pFVar16 + 0x20) - *(double *)(pFVar16 + 0x10);
      dVar21 = *(double *)(pFVar16 + 0x28) - *(double *)(pFVar16 + 0x18);
      pFVar4 = (param_1->AllocatorInstance).Data;
      fVar24 = (float)(((local_b0._s_0.X - *(double *)(pFVar16 + 0x10)) * dVar22 +
                       (dVar2 - *(double *)(pFVar16 + 0x18)) * dVar21) /
                      (dVar21 * dVar21 + dVar22 * dVar22));
      if (fVar24 < 0.0) {
        uStack_120 = 0x3f800000;
        local_124 = local_12c;
        if (((pFVar4 <= (FScriptContainerElement *)&local_124) &&
            ((FScriptContainerElement *)&local_124 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar9 + 1;
        *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             CONCAT44(uStack_120,local_124);
        return;
      }
      if (__real_3f800000 < fVar24) {
        uStack_118 = 0x3f800000;
        if (((pFVar4 <= (FScriptContainerElement *)&local_11c) &&
            ((FScriptContainerElement *)&local_11c < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar9 + 1;
        *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             CONCAT44(uStack_118,local_11c);
        return;
      }
      fStack_110 = __real_3f800000 - fVar24;
      local_114 = local_12c;
      if (((pFVar4 <= (FScriptContainerElement *)&local_114) &&
          ((FScriptContainerElement *)&local_114 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           CONCAT44(fStack_110,local_114);
      local_10c = *(int *)(pFVar16 + 4);
      pFVar16 = (param_1->AllocatorInstance).Data;
      fStack_108 = fVar24;
      if (((pFVar16 <= (FScriptContainerElement *)&local_10c) &&
          ((FScriptContainerElement *)&local_10c < pFVar16 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           CONCAT44(fStack_108,local_10c);
      return;
    }
  }
  if ((*param_4 < 0) || ((this->Triangles).ArrayNum <= *param_4)) {
    *param_4 = (this->Triangles).ArrayNum / 2;
  }
  fVar6 = __real_3f800000;
  fVar24 = __real_38d1b717;
  pTVar18 = &this->Triangles;
  local_130 = 0;
  local_100 = pTVar18;
  if ((this->Triangles).ArrayNum != 0) {
    do {
      uVar19 = *param_4;
      uVar11 = 0;
      if ((int)uVar19 < pTVar18->ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar15 = 0;
      pFVar16 = (pTVar18->AllocatorInstance).Data + (longlong)(int)uVar19 * 0xb8;
      lVar17 = -1;
      lVar14 = 0;
      fVar25 = fVar24;
      iVar9 = -1;
      do {
        fVar20 = (float)((local_b0._s_0.Y - *(double *)(pFVar16 + (lVar14 + 1) * 0x10 + 8)) *
                         *(double *)(pFVar16 + (lVar14 * 10 + 0x10) * 4 + 8) +
                        (local_b0._s_0.X - *(double *)(pFVar16 + (lVar14 + 1) * 0x10)) *
                        *(double *)(pFVar16 + (lVar14 * 10 + 0x10) * 4));
        iVar10 = iVar15;
        lVar7 = lVar14;
        if (fVar20 <= fVar25) {
          iVar10 = iVar9;
          lVar7 = lVar17;
          fVar20 = fVar25;
        }
        fVar25 = fVar20;
        lVar17 = lVar7;
        iVar15 = iVar15 + 1;
        lVar14 = lVar14 + 1;
        iVar9 = iVar10;
      } while (iVar15 != 3);
      if (iVar10 < 0) {
        FMath::GetBaryCentric2D
                  ((TVector<double> *)&local_98[0]._s_0,(TVector2<double> *)&local_b0._s_0,
                   (TVector2<double> *)(pFVar16 + 0x10),(TVector2<double> *)(pFVar16 + 0x20),
                   (TVector2<double> *)(pFVar16 + 0x30));
        local_c8 = *(undefined4 *)pFVar16;
        pFVar4 = (param_1->AllocatorInstance).Data;
        fStack_c4 = (float)(double)local_98[0]._0_8_;
        if (((pFVar4 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar9 + 1;
        *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             CONCAT44(fStack_c4,local_c8);
        local_c0 = *(undefined4 *)(pFVar16 + 4);
        pFVar4 = (param_1->AllocatorInstance).Data;
        fStack_bc = (float)(double)local_98[0]._8_8_;
        if (((pFVar4 <= (FScriptContainerElement *)&local_c0) &&
            ((FScriptContainerElement *)&local_c0 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar9 + 1;
        *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             CONCAT44(fStack_bc,local_c0);
        local_b8 = *(undefined4 *)(pFVar16 + 8);
        pFVar16 = (param_1->AllocatorInstance).Data;
        fStack_b4 = (float)(double)local_98[0]._16_8_;
        if (((pFVar16 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < pFVar16 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar9 + 1;
        *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             CONCAT44(fStack_b4,local_b8);
        return;
      }
      if (*(int *)(pFVar16 + (lVar17 * 10 + 0x14) * 4) < 0) {
        iVar9 = iVar10 + 1;
        local_134 = 0;
        uVar19 = 0xffffffff;
        iVar9 = iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                        (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
        local_138 = *param_4;
        if ((this->Triangles).ArrayNum != 0) {
          do {
            pTVar18 = local_100;
            lVar17 = (longlong)iVar10;
            local_a0 = pFVar16 + (lVar17 * 10 + 0x10) * 4;
            dVar2 = *(double *)(pFVar16 + (lVar17 + 1) * 0x10);
            dVar21 = *(double *)(pFVar16 + (lVar17 + 1) * 0x10 + 8);
            dVar23 = *(double *)(pFVar16 + ((longlong)iVar9 + 1) * 0x10 + 8) - dVar21;
            dVar22 = *(double *)(pFVar16 + ((longlong)iVar9 + 1) * 0x10) - dVar2;
            fVar25 = (float)(((local_b0._s_0.Y - dVar21) * dVar23 +
                             (local_b0._s_0.X - dVar2) * dVar22) /
                            (dVar23 * dVar23 + dVar22 * dVar22));
            if ((0.0 <= fVar25) && (fVar25 <= fVar6)) {
              local_f8 = *(undefined4 *)(pFVar16 + lVar17 * 4);
              fStack_f4 = fVar6 - fVar25;
              pFVar4 = (param_1->AllocatorInstance).Data;
              if ((pFVar4 <= (FScriptContainerElement *)&local_f8) &&
                 (((FScriptContainerElement *)&local_f8 < pFVar4 + (longlong)param_1->ArrayMax * 8
                  && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)))) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar15 = param_1->ArrayNum;
              if (iVar15 == param_1->ArrayMax) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar15 + 1;
              *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar15 * 8) =
                   CONCAT44(fStack_f4,local_f8);
              local_f0 = *(undefined4 *)(pFVar16 + (longlong)iVar9 * 4);
              pFVar16 = (param_1->AllocatorInstance).Data;
              fStack_ec = fVar25;
              if (((pFVar16 <= (FScriptContainerElement *)&local_f0) &&
                  ((FScriptContainerElement *)&local_f0 < pFVar16 + (longlong)param_1->ArrayMax * 8)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar9 = param_1->ArrayNum;
              if (iVar9 == param_1->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar9 + 1;
              *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
                   CONCAT44(fStack_ec,local_f0);
              return;
            }
            if (uVar19 == 0xffffffff) {
              uVar19 = (uint)(fVar6 < fVar25);
              uVar11 = (uint)(fVar6 < fVar25);
            }
            else {
              uVar11 = (uint)(fVar6 < fVar25);
              if (uVar19 != uVar11) {
                pFVar4 = (param_1->AllocatorInstance).Data;
                if (uVar11 == 0) {
                  local_d8 = *(undefined4 *)(pFVar16 + lVar17 * 4);
                  fStack_d4 = fVar6 - fVar25;
                  if (((pFVar4 <= (FScriptContainerElement *)&local_d8) &&
                      ((FScriptContainerElement *)&local_d8 <
                       pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar9 = param_1->ArrayNum;
                  if (iVar9 == param_1->ArrayMax) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  iVar15 = iVar9 + 1;
                  lVar17 = (longlong)iVar9;
                  uVar13 = CONCAT44(fStack_d4,local_d8);
                }
                else {
                  local_d0 = *(undefined4 *)(pFVar16 + (longlong)iVar9 * 4);
                  fStack_cc = fVar25;
                  if (((pFVar4 <= (FScriptContainerElement *)&local_d0) &&
                      ((FScriptContainerElement *)&local_d0 <
                       pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar9 = param_1->ArrayNum;
                  if (iVar9 == param_1->ArrayMax) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  iVar15 = iVar9 + 1;
                  lVar17 = (longlong)iVar9;
                  uVar13 = CONCAT44(fStack_cc,local_d0);
                }
                goto LAB_147561628;
              }
            }
            local_138 = *param_4;
            uVar3 = *(uint *)(local_a0 + (ulonglong)uVar11 * 4 + 0x14);
            *param_4 = uVar3;
            if ((int)uVar3 < 0) {
              if (uVar11 == 0) {
                fStack_e4 = fVar6 - fVar25;
                local_e8 = *(undefined4 *)(pFVar16 + (longlong)iVar10 * 4);
                pFVar16 = (param_1->AllocatorInstance).Data;
                if (((pFVar16 <= (FScriptContainerElement *)&local_e8) &&
                    ((FScriptContainerElement *)&local_e8 <
                     pFVar16 + (longlong)param_1->ArrayMax * 8)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar9 = param_1->ArrayNum;
                if (iVar9 == param_1->ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                iVar15 = iVar9 + 1;
                lVar17 = (longlong)iVar9;
                uVar13 = CONCAT44(fStack_e4,local_e8);
              }
              else {
                local_e0 = *(undefined4 *)(pFVar16 + (longlong)iVar9 * 4);
                pFVar16 = (param_1->AllocatorInstance).Data;
                fStack_dc = fVar25;
                if (((pFVar16 <= (FScriptContainerElement *)&local_e0) &&
                    ((FScriptContainerElement *)&local_e0 <
                     pFVar16 + (longlong)param_1->ArrayMax * 8)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar9 = param_1->ArrayNum;
                if (iVar9 == param_1->ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                iVar15 = iVar9 + 1;
                lVar17 = (longlong)iVar9;
                uVar13 = CONCAT44(fStack_dc,local_e0);
              }
LAB_147561628:
              param_1->ArrayNum = iVar15;
              *(undefined8 *)((param_1->AllocatorInstance).Data + lVar17 * 8) = uVar13;
              *param_4 = local_138;
              return;
            }
            uVar12 = 0;
            if ((int)uVar3 < local_100->ArrayNum) {
              uVar12 = ~uVar3 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = *(int *)(local_a0 + (ulonglong)uVar11 * 4 + 0x1c);
            pFVar16 = (pTVar18->AllocatorInstance).Data + (longlong)(int)uVar3 * 0xb8;
            iVar9 = iVar10 + 1;
            iVar9 = iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                            (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3;
            local_134 = local_134 + 1;
            pTVar18 = local_100;
          } while (local_134 != (this->Triangles).ArrayNum);
        }
      }
      else {
        *param_4 = *(int *)(pFVar16 + (lVar17 * 10 + 0x14) * 4);
      }
      local_130 = local_130 + 1;
    } while (local_130 != (this->Triangles).ArrayNum);
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

// GetSamples @ 147561870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBlendSpaceData::GetSamples
          (FBlendSpaceData *this,TArray<FWeightedBlendSample,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3,int *param_4)

{
  if (param_2->ArrayNum == 1) {
    GetSamples1D(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (param_2->ArrayNum != 2) {
    if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    }
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      return;
    }
    return;
  }
  GetSamples2D(this,param_1,param_2,param_3,param_4);
  return;
}

