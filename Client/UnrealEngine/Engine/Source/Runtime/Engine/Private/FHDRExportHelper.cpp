// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// WriteHDRBits<FColor> @ 147cc1870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FHDRExportHelper::WriteHDRBits<FColor>(FHDRExportHelper *this,FArchive *param_1,FColor *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  float fVar5;
  FHDRExportHelper *this_00;
  FHDRExportHelper *pFVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStackY_118 [32];
  FScriptContainerElement local_c8;
  FScriptContainerElement local_c7;
  FScriptContainerElement local_c6;
  FScriptContainerElement local_c5 [5];
  undefined8 local_c0;
  int local_b8;
  ulonglong local_b0;
  FLinearColor_u_0 local_a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_98;
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar2 = (this->Size).field0_0x0._s_0.X;
  piVar9 = &local_98.ArrayMax;
  uVar3 = (this->Size).field0_0x0._s_0.Y;
  lVar13 = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_c0 = this;
  do {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (*piVar9 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar2,(ForAnyElementType *)(piVar9 + -3),piVar9[-1],piVar9);
    }
    this_00 = local_c0;
    fVar5 = __real_3b808081;
    lVar13 = lVar13 + 1;
    piVar9 = piVar9 + 4;
  } while (lVar13 < 4);
  lVar13 = 4;
  if (0 < (int)uVar3) {
    local_b8 = (int)uVar2 >> 8;
    local_b0 = (ulonglong)uVar3;
    do {
      pFVar6 = local_c0;
      local_c0 = (FHDRExportHelper *)CONCAT62((uint6)(byte)local_b8,0x202);
      uVar7 = local_c0;
      local_c0._4_4_ = SUB84(pFVar6,4);
      local_c0._0_4_ = CONCAT13((char)uVar2,(int3)uVar7);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_c0);
      uVar7 = local_98._8_8_;
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if ((longlong)uVar7 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
      }
      bVar15 = (longlong)local_80 < 0;
      local_80 = local_80 & 0xffffffff00000000;
      if (bVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&local_88,0,(int *)((longlong)&local_80 + 4));
      }
      bVar15 = (longlong)local_70 < 0;
      local_70 = local_70 & 0xffffffff00000000;
      if (bVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&local_78,0,(int *)((longlong)&local_70 + 4));
      }
      bVar15 = (longlong)local_60 < 0;
      local_60 = local_60 & 0xffffffff00000000;
      if (bVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&local_68,0,(int *)((longlong)&local_60 + 4));
      }
      uVar10 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        do {
          local_a8._s_0.R = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.R];
          local_a8._s_0.G = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.G];
          local_a8._s_0.B = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.B];
          local_a8._s_0.A = (float)(param_2->field0_0x0)._s_0.A * fVar5;
          FLinearColor::ToRGBE((FLinearColor *)&local_a8._s_0);
          if (((local_98.AllocatorInstance.Data <= &local_c6) &&
              (&local_c6 < local_98.AllocatorInstance.Data + local_98.ArrayMax)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = local_98.ArrayNum;
          if (local_98.ArrayNum == local_98.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_98.AllocatorInstance,&local_98.ArrayMax);
          }
          local_98.ArrayNum = iVar8 + 1;
          local_98.AllocatorInstance.Data[iVar8] = local_c6;
          if (((local_88.Data <= &local_c7) && (&local_c7 < local_88.Data + local_80._4_4_)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (int)local_80;
          if ((int)local_80 == local_80._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_88,(int *)((longlong)&local_80 + 4));
          }
          local_80 = CONCAT44(local_80._4_4_,iVar8 + 1);
          local_88.Data[iVar8] = local_c7;
          if (((local_78.Data <= &local_c8) && (&local_c8 < local_78.Data + local_70._4_4_)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (int)local_70;
          if ((int)local_70 == local_70._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_78,(int *)((longlong)&local_70 + 4));
          }
          local_70 = CONCAT44(local_70._4_4_,iVar8 + 1);
          local_78.Data[iVar8] = local_c8;
          if (((local_68.Data <= local_c5) && (local_c5 < local_68.Data + local_60._4_4_)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (int)local_60;
          if ((int)local_60 == local_60._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_68,(int *)((longlong)&local_60 + 4));
          }
          param_2 = param_2 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar8 + 1);
          local_68.Data[iVar8] = local_c5[0];
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      pTVar11 = &local_98;
      lVar14 = 4;
      do {
        WriteScanLine(this_00,param_1,pTVar11);
        pTVar11 = pTVar11 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      local_b0 = local_b0 - 1;
    } while (local_b0 != 0);
    local_b0 = 0;
  }
  puVar12 = local_58;
  do {
    puVar1 = puVar12 + -2;
    puVar12 = puVar12 + -2;
    lVar13 = lVar13 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar13 != 0);
  return;
}

// WriteHDRBits<FFloat16Color> @ 147cc1d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FHDRExportHelper::WriteHDRBits<FFloat16Color>
          (FHDRExportHelper *this,FArchive *param_1,FFloat16Color *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  FHDRExportHelper *this_00;
  FHDRExportHelper *pFVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStackY_108 [32];
  FScriptContainerElement local_b8;
  FScriptContainerElement local_b7;
  FScriptContainerElement local_b6;
  FScriptContainerElement local_b5 [5];
  undefined8 local_b0;
  int local_a8;
  ulonglong local_a0;
  FLinearColor local_98;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_88;
  ForAnyElementType local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar2 = (this->Size).field0_0x0._s_0.X;
  piVar8 = &local_88.ArrayMax;
  uVar3 = (this->Size).field0_0x0._s_0.Y;
  lVar12 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_b0 = this;
  do {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (*piVar8 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar2,(ForAnyElementType *)(piVar8 + -3),piVar8[-1],piVar8);
    }
    this_00 = local_b0;
    lVar12 = lVar12 + 1;
    piVar8 = piVar8 + 4;
  } while (lVar12 < 4);
  lVar12 = 4;
  if (0 < (int)uVar3) {
    local_a8 = (int)uVar2 >> 8;
    local_a0 = (ulonglong)uVar3;
    do {
      pFVar5 = local_b0;
      local_b0 = (FHDRExportHelper *)CONCAT62((uint6)(byte)local_a8,0x202);
      uVar6 = local_b0;
      local_b0._4_4_ = SUB84(pFVar5,4);
      local_b0._0_4_ = CONCAT13((char)uVar2,(int3)uVar6);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_b0);
      uVar6 = local_88._8_8_;
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if ((longlong)uVar6 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&local_88.AllocatorInstance,0,&local_88.ArrayMax);
      }
      bVar14 = (longlong)local_70 < 0;
      local_70 = local_70 & 0xffffffff00000000;
      if (bVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&local_78,0,(int *)((longlong)&local_70 + 4));
      }
      bVar14 = (longlong)local_60 < 0;
      local_60 = local_60 & 0xffffffff00000000;
      if (bVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&local_68,0,(int *)((longlong)&local_60 + 4));
      }
      bVar14 = (longlong)local_50 < 0;
      local_50 = local_50 & 0xffffffff00000000;
      if (bVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&local_58,0,(int *)((longlong)&local_50 + 4));
      }
      uVar9 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        do {
          FLinearColor::FLinearColor(&local_98,param_2);
          FLinearColor::ToRGBE(&local_98);
          if (((local_88.AllocatorInstance.Data <= &local_b6) &&
              (&local_b6 < local_88.AllocatorInstance.Data + local_88.ArrayMax)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = local_88.ArrayNum;
          if (local_88.ArrayNum == local_88.ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_88.AllocatorInstance,&local_88.ArrayMax);
          }
          local_88.ArrayNum = iVar7 + 1;
          local_88.AllocatorInstance.Data[iVar7] = local_b6;
          if (((local_78.Data <= &local_b7) && (&local_b7 < local_78.Data + local_70._4_4_)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_70;
          if ((int)local_70 == local_70._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_78,(int *)((longlong)&local_70 + 4));
          }
          local_70 = CONCAT44(local_70._4_4_,iVar7 + 1);
          local_78.Data[iVar7] = local_b7;
          if (((local_68.Data <= &local_b8) && (&local_b8 < local_68.Data + local_60._4_4_)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_60;
          if ((int)local_60 == local_60._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_68,(int *)((longlong)&local_60 + 4));
          }
          local_60 = CONCAT44(local_60._4_4_,iVar7 + 1);
          local_68.Data[iVar7] = local_b8;
          if (((local_58.Data <= local_b5) && (local_b5 < local_58.Data + local_50._4_4_)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_50;
          if ((int)local_50 == local_50._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_58,(int *)((longlong)&local_50 + 4));
          }
          param_2 = param_2 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar7 + 1);
          local_58.Data[iVar7] = local_b5[0];
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      pTVar10 = &local_88;
      lVar13 = 4;
      do {
        WriteScanLine(this_00,param_1,pTVar10);
        pTVar10 = pTVar10 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      local_a0 = local_a0 - 1;
    } while (local_a0 != 0);
  }
  puVar11 = local_48;
  do {
    puVar1 = puVar11 + -2;
    puVar11 = puVar11 + -2;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  return;
}

// WriteHDRImage @ 147d399c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FHDRExportHelper::WriteHDRImage
          (FHDRExportHelper *this,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,
          FArchive *param_2)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  int iVar4;
  undefined1 auStack_448 [32];
  char local_428 [255];
  undefined1 local_329;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_448;
  TCString<char>::SprintfImpl(local_428,"#?RADIANCE\nFORMAT=32-bit_rle_rgbe\n\n-Y %d +X %d\n");
  local_329 = 0;
  sVar3 = strlen(local_428);
  iVar4 = 0x100;
  if ((int)sVar3 < 0x100) {
    iVar4 = (int)sVar3;
  }
  (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_428,(longlong)iVar4);
  if (this->Format == PF_FloatRGBA) {
    WriteHDRBits<FFloat16Color>(this,param_2,(FFloat16Color *)(param_1->AllocatorInstance).Data);
  }
  else {
    if (this->Format != PF_B8G8R8A8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Format == PF_B8G8R8A8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                         ,0x4d4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    WriteHDRBits<FColor>(this,param_2,(FColor *)(param_1->AllocatorInstance).Data);
  }
  return;
}

// WriteScanLine @ 147d39ab0

void __thiscall
FHDRExportHelper::WriteScanLine
          (FHDRExportHelper *this,FArchive *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement local_48;
  FScriptContainerElement local_47;
  FScriptContainerElement local_46;
  FScriptContainerElement local_45 [5];
  ForAnyElementType local_40;
  int local_38;
  int aiStack_34 [3];
  
  pFVar15 = (param_2->AllocatorInstance).Data;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  aiStack_34[0] = 0;
  pFVar2 = pFVar15 + param_2->ArrayNum;
  uVar5 = param_2->ArrayNum * 2;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar5,&local_40,0,aiStack_34);
  }
  do {
    if (pFVar2 <= pFVar15) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_40.Data,(longlong)local_38);
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
      return;
    }
    iVar13 = 0;
    uVar10 = 0;
    uVar14 = 0;
    do {
      uVar12 = uVar10;
      iVar8 = (int)uVar12;
      if (0x7f < iVar8) {
LAB_147d39e41:
        local_46 = SUB81(uVar12,0);
        if (((local_40.Data <= &local_46) && (&local_46 < local_40.Data + aiStack_34[0])) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_38 == aiStack_34[0]) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_40,aiStack_34);
        }
        lVar7 = (longlong)local_38;
        local_38 = local_38 + 1;
        local_40.Data[lVar7] = local_46;
        pFVar11 = pFVar15;
        if (0 < iVar8) {
          do {
            local_45[0] = *pFVar11;
            if (((local_40.Data <= local_45) && (local_45 < local_40.Data + aiStack_34[0])) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (local_38 == aiStack_34[0]) {
              local_38 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x101,&local_40,aiStack_34);
            }
            iVar13 = local_38 + 1;
            local_40.Data[local_38] = local_45[0];
            uVar12 = uVar12 - 1;
            pFVar11 = pFVar11 + 1;
            local_38 = iVar13;
          } while (uVar12 != 0);
        }
        goto LAB_147d39f9e;
      }
      if (pFVar2 <= pFVar15 + iVar8) {
        if (iVar13 < 5) goto LAB_147d39e41;
        break;
      }
      iVar13 = 0;
      uVar10 = uVar12;
      do {
        iVar9 = (int)uVar10;
        if (((0x7f < iVar9) || (pFVar2 <= pFVar15 + iVar9)) || (pFVar15[iVar8] != pFVar15[iVar9]))
        break;
        uVar10 = (ulonglong)(iVar9 + 1);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x7f);
      iVar8 = (int)uVar10;
      uVar14 = uVar12;
    } while (iVar13 < 5);
    iVar9 = (int)uVar14;
    if (0 < iVar9) {
      local_48 = SUB81(uVar14,0);
      if (((local_40.Data <= &local_48) && (&local_48 < local_40.Data + aiStack_34[0])) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_38 == aiStack_34[0]) {
        local_38 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,&local_40,aiStack_34);
        local_40.Data[local_38] = local_48;
      }
      else {
        local_40.Data[local_38] = local_48;
      }
      local_38 = local_38 + 1;
      pFVar11 = pFVar15;
      do {
        if (((local_40.Data <= pFVar11) && (pFVar11 < local_40.Data + aiStack_34[0])) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_38 == aiStack_34[0]) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_40,aiStack_34);
        }
        iVar1 = local_38 + 1;
        FVar3 = *pFVar11;
        pFVar11 = pFVar11 + 1;
        local_40.Data[local_38] = FVar3;
        uVar14 = uVar14 - 1;
        local_38 = iVar1;
      } while (uVar14 != 0);
    }
    local_47 = (FScriptContainerElement)((char)iVar13 + -0x80);
    if (((local_40.Data <= &local_47) && (&local_47 < local_40.Data + aiStack_34[0])) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_38 == aiStack_34[0]) {
      local_38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_40,aiStack_34);
    }
    iVar13 = local_38 + 1;
    pFVar11 = pFVar15 + iVar9;
    local_40.Data[local_38] = local_47;
    local_38 = iVar13;
    if (((local_40.Data <= pFVar11) && (pFVar11 < local_40.Data + aiStack_34[0])) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_38 == aiStack_34[0]) {
      local_38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_40,aiStack_34);
    }
    local_40.Data[local_38] = *pFVar11;
    local_38 = local_38 + 1;
LAB_147d39f9e:
    pFVar15 = pFVar15 + iVar8;
  } while( true );
}

