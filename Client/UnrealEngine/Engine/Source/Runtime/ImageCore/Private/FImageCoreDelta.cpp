// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 2

// AddSplitStridedViewsForDelta @ 1423557c0

void __cdecl
FImageCoreDelta::AddSplitStridedViewsForDelta
          (TArray<FImageViewStrided,TSizedDefaultAllocator<64>_> *param_1,FImageView *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  Type TVar6;
  bool bVar7;
  int iVar8;
  long64 lVar9;
  long64 lVar10;
  longlong lVar11;
  void *pvVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  void *local_118;
  long64 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  void *local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  longlong lStack_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong local_98;
  long64 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 uStack_50;
  void *local_48;
  longlong lStack_40;
  
  local_130 = 0;
  uVar1 = (uint)param_2->_padding_;
  uVar13 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    do {
      if ((((int)local_130 < 0) || ((int)uVar13 <= (int)local_130)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("SliceIndex >= 0 && SliceIndex < NumSlices",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                             ,0x427,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_128 = param_2->_padding_;
      local_118 = param_2->RawData;
      uStack_120._4_1_ = (Type)((ulonglong)param_2->_padding_ >> 0x20);
      TVar6 = uStack_120._4_1_;
      lVar16 = (longlong)(int)((ulonglong)local_128 >> 0x20);
      iVar14 = (int)local_128;
      lVar18 = (longlong)iVar14;
      uStack_120._4_4_ = (undefined4)((ulonglong)param_2->_padding_ >> 0x20);
      uStack_120 = CONCAT44(uStack_120._4_4_,1);
      local_138 = lVar18;
      lVar9 = ERawImageFormat::GetBytesPerPixel(TVar6);
      pvVar12 = (void *)((int)local_130 * lVar9 * lVar18 * lVar16 + (longlong)param_2->RawData);
      if (lVar18 * lVar16 < 0x4841) {
        lStack_a8 = 0;
        local_c0 = local_128;
        uStack_b8 = uStack_120;
        local_b0 = pvVar12;
        lVar9 = ERawImageFormat::GetBytesPerPixel(TVar6);
        pFVar2 = (param_1->AllocatorInstance).Data;
        lStack_a8 = lVar9 * lVar18;
        if (((pFVar2 <= (FScriptContainerElement *)&local_c0) &&
            ((FScriptContainerElement *)&local_c0 < pFVar2 + param_1->ArrayMax * 0x20)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar18 = param_1->ArrayNum;
        if (lVar18 == param_1->ArrayMax) {
          lVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                             (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = lVar18 + 1;
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar2 = pFVar3 + lVar18 * 0x20;
        *(longlong *)pFVar2 = local_c0;
        *(undefined8 *)(pFVar2 + 8) = uStack_b8;
        pFVar3 = pFVar3 + lVar18 * 0x20 + 0x10;
        *(void **)pFVar3 = local_b0;
        *(longlong *)(pFVar3 + 8) = lStack_a8;
      }
      else {
        lVar9 = ERawImageFormat::GetBytesPerPixel(TVar6);
        lVar17 = lVar9 * lVar18;
        if (lVar17 < 0x1001) {
          lVar9 = ImageCoreDeltaComputeNumCutsForRows(&local_140,lVar18,lVar16);
          lVar18 = local_140;
          lVar17 = 0;
          if (0 < lVar9) {
            iVar14 = local_128._4_4_;
            local_88 = local_128;
            uStack_80 = (undefined4)uStack_120;
            uStack_7c = uStack_120._4_4_;
            uVar21 = (undefined4)local_128;
            iVar8 = local_128._4_4_;
            do {
              lVar15 = lVar17 * lVar18;
              lVar11 = lVar16 - lVar15;
              if (lVar18 < lVar16 - lVar15) {
                lVar11 = lVar18;
              }
              local_78 = uVar21;
              iStack_74 = iVar8;
              uStack_70 = uStack_80;
              uStack_6c = uStack_7c;
              local_68 = pvVar12;
              lVar10 = ERawImageFormat::GetBytesPerPixel(TVar6);
              lVar19 = lVar10 * local_138;
              lStack_60 = lVar19;
              if (((lVar15 < 0) || ((longlong)iVar14 < lVar11 + lVar15)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("PortionStartY >= 0 && (PortionStartY + PortionSizeY) <= SizeY"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCoreDelta.h"
                                     ,0x55,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uStack_f8 = CONCAT44(uStack_6c,uStack_70);
              local_100 = CONCAT44((int)lVar11,(int)local_138);
              local_f0 = local_68;
              lStack_e8 = lStack_60;
              ERawImageFormat::GetBytesPerPixel(TVar6);
              pFVar2 = (param_1->AllocatorInstance).Data;
              local_f0 = (void *)((int)lVar15 * lVar19 + (longlong)pvVar12);
              if (((pFVar2 <= (FScriptContainerElement *)&local_100) &&
                  ((FScriptContainerElement *)&local_100 < pFVar2 + param_1->ArrayMax * 0x20)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar11 = param_1->ArrayNum;
              if (lVar11 == param_1->ArrayMax) {
                lVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                                   (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = lVar11 + 1;
              lVar17 = lVar17 + 1;
              pFVar3 = (param_1->AllocatorInstance).Data;
              pFVar2 = pFVar3 + lVar11 * 0x20;
              *(undefined8 *)pFVar2 = local_100;
              *(undefined8 *)(pFVar2 + 8) = uStack_f8;
              pFVar3 = pFVar3 + lVar11 * 0x20 + 0x10;
              *(void **)pFVar3 = local_f0;
              *(longlong *)(pFVar3 + 8) = lStack_e8;
              uVar21 = (undefined4)local_88;
              iVar8 = local_88._4_4_;
            } while (lVar17 < lVar9);
          }
        }
        else {
          lVar11 = lVar17 + 0xfff + (ulonglong)((uint)(lVar17 + 0xfff >> 0x3f) & 0xfff);
          lVar15 = lVar11 >> 0xc;
          lVar15 = ((lVar15 - (lVar11 >> 0x3f) >> 1) + lVar17) / lVar15;
          if (((lVar15 < 1) || (0x1000 < lVar15)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("HorizontalPartBytes > 0 && HorizontalPartBytes <= CutStrideBytes",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCoreDelta.cpp"
                                 ,0x65,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar9 = ERawImageFormat::GetBytesPerPixel(TVar6);
          auVar4._8_8_ = (longlong)(lVar15 + 0x3fU) >> 0x3f;
          auVar4._0_8_ = lVar15 + 0x3fU & 0xffffffffffffffc0;
          local_88 = SUB168(auVar4 / SEXT816(lVar9),0);
          iVar8 = SUB164(auVar4 / SEXT816(lVar9),0);
          iVar8 = (iVar14 + -1 + iVar8) / iVar8;
          lVar17 = (longlong)iVar8;
          if (0 < iVar8) {
            iVar14 = local_128._4_4_;
            lVar11 = 0;
            do {
              local_110 = lVar18;
              if (local_88 < lVar18) {
                local_110 = local_88;
              }
              local_108 = lVar18;
              local_90 = ImageCoreDeltaComputeNumCutsForRows(&local_a0,local_110,lVar16);
              lVar18 = 0;
              if (0 < local_90) {
                local_98 = (longlong)(int)lVar11;
                do {
                  lVar19 = lVar18 * local_a0;
                  local_58 = local_128;
                  uStack_50 = uStack_120;
                  lVar15 = lVar16 - lVar19;
                  if (local_a0 < lVar16 - lVar19) {
                    lVar15 = local_a0;
                  }
                  local_48 = pvVar12;
                  lVar9 = ERawImageFormat::GetBytesPerPixel(TVar6);
                  lVar20 = lVar9 * local_138;
                  lStack_40 = lVar20;
                  if (((lVar11 < 0) || (local_138 < local_110 + lVar11)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("PortionStartX >= 0 && (PortionStartX + PortionSizeX) <= SizeX"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCoreDelta.h"
                                         ,0x54,L""), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if (((lVar19 < 0) || ((longlong)iVar14 < lVar15 + lVar19)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("PortionStartY >= 0 && (PortionStartY + PortionSizeY) <= SizeY"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCoreDelta.h"
                                         ,0x55,L""), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uStack_d8 = uStack_50;
                  local_e0 = CONCAT44((int)lVar15,(int)local_110);
                  local_d0 = local_48;
                  lStack_c8 = lStack_40;
                  lVar9 = ERawImageFormat::GetBytesPerPixel(TVar6);
                  pFVar2 = (param_1->AllocatorInstance).Data;
                  local_d0 = (void *)((longlong)pvVar12 + (int)lVar19 * lVar20 + lVar9 * local_98);
                  if (((pFVar2 <= (FScriptContainerElement *)&local_e0) &&
                      ((FScriptContainerElement *)&local_e0 < pFVar2 + param_1->ArrayMax * 0x20)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  lVar15 = param_1->ArrayNum;
                  if (lVar15 == param_1->ArrayMax) {
                    lVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                                       (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = lVar15 + 1;
                  lVar18 = lVar18 + 1;
                  pFVar3 = (param_1->AllocatorInstance).Data;
                  pFVar2 = pFVar3 + lVar15 * 0x20;
                  *(undefined8 *)pFVar2 = local_e0;
                  *(undefined8 *)(pFVar2 + 8) = uStack_d8;
                  pFVar3 = pFVar3 + lVar15 * 0x20 + 0x10;
                  *(void **)pFVar3 = local_d0;
                  *(longlong *)(pFVar3 + 8) = lStack_c8;
                } while (lVar18 < local_90);
              }
              lVar11 = lVar11 + local_88;
              lVar18 = local_108 - local_88;
              lVar17 = lVar17 + -1;
              local_108 = lVar18;
            } while (lVar17 != 0);
          }
        }
      }
      local_130 = local_130 + 1;
      uVar13 = (ulonglong)(int)param_2->_padding_;
    } while (local_130 < (longlong)uVar13);
  }
  return;
}

// DoTransform @ 14235bc10

void __cdecl FImageCoreDelta::DoTransform(FImageViewStrided *param_1,uchar *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  long64 lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uchar *puVar11;
  uchar *puVar12;
  undefined4 local_38 [4];
  
  if (((int)param_1->_padding_ != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InImage.NumSlices == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCoreDelta.cpp"
                         ,0x171,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((int)param_1->_padding_ < 1) || (*(int *)((longlong)&param_1->_padding_ + 4) < 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InImage.SizeX > 0 && InImage.SizeY > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCoreDelta.cpp"
                         ,0x172,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = (int)param_1->_padding_;
  uVar10 = (ulonglong)iVar1;
  lVar5 = ERawImageFormat::GetBytesPerPixel(*(Type *)((longlong)&param_1->_padding_ + 4));
  if ((param_1->StrideBytes < (longlong)(lVar5 * uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InImage.StrideBytes >= WidthBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCoreDelta.cpp"
                         ,0x177,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = CVarTextureUEDeltaDebugColor.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 4;
  }
  if ((*(int *)((longlong)pTVar3->ShadowedValue + lVar6) == 0) ||
     (*(char *)((longlong)&param_1->_padding_ + 4) != '\x01')) {
    memcpy(param_2,param_1->RawData,lVar5 * uVar10);
    switch(*(undefined1 *)((longlong)&param_1->_padding_ + 4)) {
    case 0:
      ::`anonymous_namespace'::DeltaT<unsigned_char>(param_1,param_2,uVar10,param_3);
      break;
    case 1:
    case 2:
      ::`anonymous_namespace'::DeltaT<unsigned_char>(param_1,param_2,uVar10 * 4,param_3);
      break;
    case 3:
    case 4:
      ::`anonymous_namespace'::DeltaT<unsigned_short>(param_1,param_2,uVar10 * 4,param_3);
      break;
    case 5:
      ::`anonymous_namespace'::DeltaT<unsigned_int>(param_1,param_2,uVar10 * 4,param_3);
      break;
    case 6:
    case 7:
      ::`anonymous_namespace'::DeltaT<unsigned_short>(param_1,param_2,uVar10,param_3);
      break;
    case 8:
      ::`anonymous_namespace'::DeltaT<unsigned_int>(param_1,param_2,uVar10,param_3);
      break;
    default:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCoreDelta.cpp"
                         ,0x1a9,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    FColor::MakeRandomColor();
    lVar6 = 0;
    if (0 < *(int *)((longlong)&param_1->_padding_ + 4)) {
      do {
        lVar7 = 0;
        puVar12 = param_2 + (longlong)(int)lVar6 * param_1->StrideBytes;
        if (0 < (longlong)uVar10) {
          if ((3 < uVar10) && ((local_38 < puVar12 || (puVar12 + (uVar10 - 1) * 4 < local_38)))) {
            uVar8 = iVar1 >> 0x1f & 3;
            lVar9 = uVar10 - ((ulonglong)(iVar1 + uVar8 & 3) - (ulonglong)uVar8);
            do {
              lVar7 = lVar7 + 4;
            } while (lVar7 < lVar9);
            lVar9 = lVar9 + 3;
            puVar11 = puVar12;
            for (lVar9 = ((longlong)((ulonglong)((uint)(lVar9 >> 0x3f) & 3) + lVar9) >> 2 &
                         0xfffffffffffffffU) << 2; lVar9 != 0; lVar9 = lVar9 + -1) {
              *(undefined4 *)puVar11 = local_38[0];
              puVar11 = puVar11 + 4;
            }
            if ((longlong)uVar10 <= lVar7) goto LAB_14235bdd0;
          }
          do {
            *(undefined4 *)(puVar12 + lVar7 * 4) = local_38[0];
            lVar7 = lVar7 + 1;
          } while (lVar7 < (longlong)uVar10);
        }
LAB_14235bdd0:
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((longlong)&param_1->_padding_ + 4));
    }
  }
  return;
}

