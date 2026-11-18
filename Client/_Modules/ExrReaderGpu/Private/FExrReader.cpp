// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ExrReaderGpu
// Functions: 10

// CalculateTileOffsets @ 14ea2b5e0

/* WARNING: Removing unreachable block (ram,0x00014ea2b90c) */

void __cdecl
FExrReader::CalculateTileOffsets
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2,TIntPoint<int> *param_3,TIntPoint<int> *param_4,int param_5,long64 param_6)

{
  TIntPoint<int>_u_0_s_0 *pTVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  TConsoleVariableData<bool> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  void *_Dst;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  uint local_e4;
  TIntPoint<int>_u_0_s_0 local_e0;
  int local_d8;
  int iStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  ulonglong local_a0;
  longlong local_98;
  int *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  TIntPoint<int>_u_0_s_0 local_78;
  int iStack_70;
  int iStack_6c;
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId270,"CalculateTileOffsets",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ExrReaderGpu\\Private\\ExrReaderGpu.cpp"
               ,0x10e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId270);
  }
  fVar6 = __real_3f000000;
  fVar5 = __real_bf000000;
  local_a0 = 0;
  local_b0 = 0;
  if (0 < param_5) {
    local_90 = &param_1->ArrayMax;
    local_98 = 0;
    do {
      uVar11 = local_b0;
      piVar19 = &param_1->ArrayMax;
      iVar16 = 1 << ((byte)local_b0 & 0x1f);
      TVar2 = (param_3->field0_0x0)._s_0;
      iVar13 = (int)((longlong)
                     ((ulonglong)(uint)(TVar2.X >> 0x1f) << 0x20 | (ulonglong)TVar2 & 0xffffffff) /
                    (longlong)iVar16);
      iStack_d4 = TVar2.Y;
      iStack_d4 = iStack_d4 / iVar16;
      _local_d8 = CONCAT44(iStack_d4,iVar13);
      fVar25 = (float)iVar13;
      fVar24 = (float)iStack_d4;
      fVar24 = (fVar24 + fVar24) / (float)(param_4->field0_0x0)._s_0.Y;
      iVar21 = -((int)ROUND(fVar5 - fVar24) >> 1);
      fVar25 = (fVar25 + fVar25) / (float)(param_4->field0_0x0)._s_0.X;
      iVar16 = -((int)ROUND(fVar5 - fVar25) >> 1);
      iVar13 = (int)ROUND(fVar24 - fVar6) >> 1;
      local_c0 = (int)ROUND(fVar25 - fVar6) >> 1;
      uVar20 = iVar16 * iVar21;
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_e4 = uVar20;
      local_ac = iVar13;
      local_a8 = iVar21;
      if (((pFVar3 <= (FScriptContainerElement *)&local_e4) &&
          ((FScriptContainerElement *)&local_e4 < pFVar3 + (longlong)*piVar19 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), piVar19 = local_90, bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar19) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar19);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_e4;
      pTVar7 = CVarForceTileDescBufferExrGpuReader.Ref;
      if ((iVar16 == local_c0) && (iVar21 == iVar13)) {
        bVar8 = IsInParallelGameThread();
        if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
          lVar10 = 0;
        }
        else {
          lVar10 = 1;
        }
        if (pTVar7->ShadowedValue[lVar10] != false) goto LAB_14ea2b838;
      }
      else {
LAB_14ea2b838:
        uVar22 = 0;
        lVar10 = 0;
        local_d0 = 0;
        local_c8 = 0;
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_d0) &&
            ((FScriptContainerElement *)&local_d0 < pFVar3 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar13 + 1;
        local_88 = (param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
        *(undefined8 *)local_88 = 0;
        *(undefined8 *)local_88 = local_d0;
        *(undefined4 *)(local_88 + 8) = (undefined4)local_c8;
        *(undefined4 *)(local_88 + 0xc) = local_c8._4_4_;
        local_c8 = 0;
        local_d0 = 0;
        uVar14 = uVar22;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = (param_2->AllocatorInstance).Data + local_98;
        pFVar3 = pFVar15 + 8;
        iVar13 = *(int *)&pFVar3->field_0x0;
        local_88 = pFVar15;
        local_80 = pFVar3;
        if (iVar13 < (int)uVar20) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,uVar20 - iVar13,(ForAnyElementType *)pFVar15,(int *)pFVar3,
                     (int *)(pFVar15 + 0xc));
        }
        else {
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
          }
          if ((int)uVar20 < iVar13) {
            uVar14 = iVar13 - uVar20;
            if (((int)(uVar14 | uVar20) < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar14 != 0) {
              _Dst = (void *)(*(longlong *)&pFVar15->field_0x0 + (longlong)(int)uVar20 * 0x10);
              iVar13 = (*(int *)&pFVar3->field_0x0 - uVar14) - uVar20;
              if (iVar13 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar14 * 0x10),
                        (longlong)iVar13 << 4);
              }
              *(uint *)&pFVar3->field_0x0 = *(int *)&pFVar3->field_0x0 - uVar14;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,(ForAnyElementType *)pFVar15,*(int *)&pFVar3->field_0x0,
                         (int *)(pFVar15 + 0xc));
            }
          }
        }
        uVar17 = (longlong)iStack_d4 % (longlong)(param_4->field0_0x0)._s_0.Y;
        local_bc = (uint)uVar17;
        uVar17 = uVar17 & 0xffffffff;
        uVar18 = (longlong)local_d8 % (longlong)(param_4->field0_0x0)._s_0.X;
        local_b8 = (uint)uVar18;
        uVar18 = uVar18 & 0xffffffff;
        if (0 < (int)uVar20) {
          local_b4 = (uint)local_a0;
          uVar12 = local_a0 & 0xffffffff;
          do {
            local_e0 = (param_4->field0_0x0)._s_0;
            iVar13 = local_e0.X;
            uVar11 = (uint)uVar12;
            if (iVar16 != local_c0) {
              if ((int)(uVar22 + 1) % iVar16 == 0) {
                iVar13 = (int)uVar18;
              }
              local_e0.X = iVar13;
              uVar11 = local_b4;
            }
            iVar21 = local_e0.Y;
            if (local_a8 != local_ac) {
              if (local_ac * iVar16 <= (int)uVar22) {
                iVar21 = (int)uVar17;
              }
              local_e0.Y = iVar21;
            }
            local_78 = local_e0;
            iStack_70 = (int)local_a0 - uVar11;
            iStack_6c = 0;
            uVar11 = 0;
            if ((int)uVar22 < *(int *)&local_80->field_0x0) {
              uVar11 = ~uVar22 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar18 = (ulonglong)local_b8;
              uVar17 = (ulonglong)local_bc;
            }
            TVar2.Y = iStack_6c;
            TVar2.X = iStack_70;
            pTVar1 = (TIntPoint<int>_u_0_s_0 *)(*(longlong *)&local_88->field_0x0 + lVar10);
            *pTVar1 = local_78;
            pTVar1[1] = TVar2;
            local_a0 = local_a0 + 0x14 + (iVar21 * iVar13) * param_6;
            uVar22 = uVar22 + 1;
            lVar10 = lVar10 + 0x10;
            uVar12 = (ulonglong)local_b4;
            uVar11 = local_b0;
          } while ((int)uVar22 < (int)uVar20);
        }
      }
      local_b0 = uVar11 + 1;
      local_98 = local_98 + 0x10;
    } while ((int)local_b0 < param_5);
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CloseExrFile @ 14ea2bbf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FExrReader::CloseExrFile(FExrReader *this)

{
  int *piVar1;
  
  if ((FILE *)this->FileHandle == (FILE *)0x0) {
    if (1 < (byte)LogExrReaderGpu._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
    }
    return false;
  }
  fclose((FILE *)this->FileHandle);
  DestructItems<TArray<__int64,TSizedDefaultAllocator<32>_>,int>
            ((TArray<__int64,TSizedDefaultAllocator<32>_> *)
             (this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data,
             (this->LineOrTileOffsetsPerLevel).ArrayNum);
  piVar1 = &(this->LineOrTileOffsetsPerLevel).ArrayMax;
  (this->LineOrTileOffsetsPerLevel).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->LineOrTileOffsetsPerLevel).AllocatorInstance,0,piVar1);
  }
  return true;
}

// GenerateTextureData @ 14ea2be30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FExrReader::GenerateTextureData
          (ushort *param_1,int param_2,FString *param_3,int param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  errno_t eVar5;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar6;
  wchar_t *pwVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  FILE *local_f8;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_f0;
  FString *local_e0;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  pwVar7 = L"";
  local_e0 = param_3;
  if (param_1 == (ushort *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ExrReaderGpu\\Private\\ExrReaderGpu.cpp"
                       ,0xe4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((param_3->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  pTVar6 = StringCast<char,128,wchar_t>(&local_d8,pwVar7);
  eVar5 = fopen_s(&local_f8,pTVar6->Ptr,"rb");
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  if ((local_f8 == (FILE *)0x0) || (eVar5 != 0)) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    bVar3 = false;
  }
  else {
    fseek(local_f8,0,2);
    ftell(local_f8);
    rewind(local_f8);
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    ReadMagicNumberAndVersionField((_iobuf *)local_f8);
    ReadHeaderData((_iobuf *)local_f8);
    TArray<__int64,TSizedDefaultAllocator<32>_>::SetNum(&local_f0,param_4,Default);
    ReadLineOrTileOffsets((_iobuf *)local_f8,INCREASING_Y,&local_f0);
    if (local_f0.ArrayNum < 1) {
      local_108 = 0;
      local_100 = (longlong)local_f0.ArrayNum;
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
    fseek(local_f8,*(long *)local_f0.AllocatorInstance.Data,0);
    fread(param_1,(longlong)param_2,1,local_f8);
    fclose(local_f8);
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetByteOffsetForTile @ 14ea2c020

bool __thiscall
FExrReader::GetByteOffsetForTile(FExrReader *this,int param_1,int param_2,long64 *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_2;
  if (param_2 < (this->LineOrTileOffsetsPerLevel).ArrayNum) {
    if ((param_2 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_1 <=
        *(int *)((this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data + lVar8 * 0x10 + 8)) {
      uVar7 = 0;
      if (param_2 < (this->LineOrTileOffsetsPerLevel).ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar1 = (this->LineOrTileOffsetsPerLevel).ArrayNum;
      if (param_1 ==
          *(int *)((this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data + lVar8 * 0x10 + 8)) {
        uVar7 = param_2 + 1;
        if (iVar1 <= (int)uVar7) {
          *param_3 = this->FileLength;
          return true;
        }
        uVar5 = 0;
        if ((int)uVar7 < iVar1) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar6 = (this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data +
                 (longlong)(int)uVar7 * 0x10;
        if ((*(int *)(pFVar6 + 8) < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        *param_3 = **(long64 **)pFVar6;
        return true;
      }
      uVar7 = 0;
      if (param_2 < iVar1) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar6 = (this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data;
      uVar7 = 0;
      if (param_1 < *(int *)(pFVar6 + lVar8 * 0x10 + 8)) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *param_3 = *(long64 *)(*(longlong *)(pFVar6 + lVar8 * 0x10) + (longlong)param_1 * 8);
      return true;
    }
  }
  return false;
}

// OpenExrAndPrepareForPixelReading @ 14ea2c8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FExrReader::OpenExrAndPrepareForPixelReading
          (FExrReader *this,FString *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  errno_t eVar7;
  int iVar8;
  long lVar9;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar10;
  wchar_t *pwVar11;
  uint uVar12;
  TArray<__int64,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar13;
  longlong lVar14;
  undefined1 auStackY_138 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (this->FileHandle == (_iobuf *)0x0) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pTVar10 = StringCast<char,128,wchar_t>(&local_e8,pwVar11);
    eVar7 = fopen_s((FILE **)this,pTVar10->Ptr,"rb");
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((this->FileHandle != (_iobuf *)0x0) && (eVar7 == 0)) {
      ReadMagicNumberAndVersionField(this->FileHandle);
      bVar5 = ReadHeaderData(this->FileHandle);
      if (bVar5) {
        uVar12 = param_2->ArrayNum;
        piVar1 = &(this->LineOrTileOffsetsPerLevel).ArrayNum;
        iVar2 = *piVar1;
        if (iVar2 < (int)uVar12) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar12 - iVar2,
                             &(this->LineOrTileOffsetsPerLevel).AllocatorInstance,piVar1,
                             &(this->LineOrTileOffsetsPerLevel).ArrayMax);
          memset((this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data + (longlong)iVar8 * 0x10,0
                 ,(longlong)(int)(uVar12 - iVar2) << 4);
        }
        else {
          if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
          }
          if ((int)uVar12 < iVar2) {
            uVar13 = iVar2 - uVar12;
            if (((int)(uVar13 | uVar12) < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if (uVar13 != 0) {
              TArray<TArray<__int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(&this->LineOrTileOffsetsPerLevel,uVar12,uVar13);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&(this->LineOrTileOffsetsPerLevel).AllocatorInstance,*piVar1,
                         &(this->LineOrTileOffsetsPerLevel).ArrayMax);
            }
          }
        }
        uVar12 = 0;
        if (0 < (this->LineOrTileOffsetsPerLevel).ArrayNum) {
          lVar14 = 0;
          do {
            uVar13 = 0;
            if ((int)uVar12 < (this->LineOrTileOffsetsPerLevel).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            this_00 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)
                      ((this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data +
                      (longlong)(int)uVar12 * 0x10);
            uVar13 = 0;
            if ((int)uVar12 < param_2->ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            TArray<__int64,TSizedDefaultAllocator<32>_>::SetNum
                      (this_00,*(int *)((param_2->AllocatorInstance).Data + lVar14),Default);
            ReadLineOrTileOffsets(this->FileHandle,INCREASING_Y,this_00);
            uVar12 = uVar12 + 1;
            lVar14 = lVar14 + 4;
          } while ((int)uVar12 < (this->LineOrTileOffsetsPerLevel).ArrayNum);
        }
        fseek((FILE *)this->FileHandle,0,2);
        lVar9 = ftell((FILE *)this->FileHandle);
        this->FileLength = (longlong)lVar9;
        if (((this->LineOrTileOffsetsPerLevel).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data;
        if ((*(int *)(pFVar3 + 8) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        fseek((FILE *)this->FileHandle,**(long **)pFVar3,0);
        pFVar3 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        return true;
      }
    }
  }
  else if (1 < (byte)LogExrReaderGpu._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return false;
}

// ReadExrImageChunk @ 14ea2ccd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FExrReader::ReadExrImageChunk(FExrReader *this,void *param_1,long64 param_2)

{
  size_t sVar1;
  
  if ((FILE *)this->FileHandle == (FILE *)0x0) {
    if (1 < (byte)LogExrReaderGpu._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
      return false;
    }
  }
  else {
    if (param_1 != (void *)0x0) {
      sVar1 = fread(param_1,param_2,1,(FILE *)this->FileHandle);
      if ((sVar1 != 1) && (1 < (byte)LogExrReaderGpu._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
      }
      return sVar1 == 1;
    }
    if (1 < (byte)LogExrReaderGpu._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
    }
  }
  return false;
}

// ReadHeaderData @ 14ea2cd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FExrReader::ReadHeaderData(_iobuf *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStackY_278 [32];
  int local_248 [2];
  ForAnyElementType local_240;
  uint local_238 [4];
  char local_228 [256];
  char local_128 [256];
  ulonglong local_28;
  ulonglong uVar8;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar11 = 0;
  iVar9 = local_248[0];
  do {
    pcVar7 = local_228;
    iVar10 = 0xff;
    do {
      bVar2 = ::`anonymous_namespace'::ReadBytes(param_1,pcVar7,1);
      if ((!bVar2) || (*pcVar7 == '\0')) break;
      pcVar7 = pcVar7 + 1;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    if (local_228[0] == '\0') {
      return true;
    }
    pcVar7 = local_128;
    iVar10 = 0xff;
    do {
      bVar2 = ::`anonymous_namespace'::ReadBytes(param_1,pcVar7,1);
      uVar5 = uVar11;
      if ((!bVar2) || (*pcVar7 == '\0')) break;
      pcVar7 = pcVar7 + 1;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    do {
      if (local_128[uVar5] == '\0') goto LAB_14ea2ce66;
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < 0x100);
    if (1 < (byte)LogExrReaderGpu._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_EXR_fil_152fe4c38,
                 (FLogCategoryBase *)&LogExrReaderGpu);
    }
LAB_14ea2ce66:
    bVar2 = ::`anonymous_namespace'::ReadBytes(param_1,(char *)local_248,4);
    if (bVar2) {
      iVar9 = local_248[0];
    }
    if (iVar9 < 0) {
      if (1 < (byte)LogExrReaderGpu._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
      }
      return false;
    }
    local_240.Data = (FScriptContainerElement *)0x0;
    local_238[0] = 0;
    local_238[1] = 0;
    uVar5 = uVar11;
    uVar8 = uVar11;
    if (0 < iVar9) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar9,&local_240,(int *)local_238,(int *)(local_238 + 1));
      memset(local_240.Data + iVar10,0,(longlong)iVar9);
      uVar5 = (ulonglong)local_238[0];
    }
    while (uVar6 = (uint)uVar8, (int)uVar6 < iVar9) {
      uVar4 = 0;
      if ((int)uVar6 < (int)uVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = ::`anonymous_namespace'::ReadBytes(param_1,(char *)(local_240.Data + (int)uVar6),1);
      if (!bVar2) break;
      uVar5 = (ulonglong)local_238[0];
      uVar8 = (ulonglong)(uVar6 + 1);
    }
    if (local_240.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data);
    }
  } while( true );
}

// ReadLineOrTileOffsets @ 14ea2cfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FExrReader::ReadLineOrTileOffsets
          (_iobuf *param_1,ELineOrder param_2,TArray<__int64,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_2 == INCREASING_Y) {
    iVar6 = param_3->ArrayNum;
    uVar7 = 0;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          local_40 = (longlong)iVar6;
          local_48 = (longlong)(int)uVar7;
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
        pFVar1 = (param_3->AllocatorInstance).Data;
        bVar3 = ::`anonymous_namespace'::ReadBytes(param_1,(char *)&local_38,8);
        if (bVar3) {
          *(undefined8 *)(pFVar1 + lVar8) = local_38;
        }
        iVar6 = param_3->ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < iVar6);
    }
    bVar3 = true;
  }
  else {
    if (1 < (byte)LogExrReaderGpu._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
    }
    bVar3 = false;
  }
  return bVar3;
}

// ReadMagicNumberAndVersionField @ 14ea2d140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FExrReader::ReadMagicNumberAndVersionField(_iobuf *param_1)

{
  uint uVar1;
  bool bVar2;
  uint local_res10 [6];
  
  bVar2 = ::`anonymous_namespace'::ReadBytes(param_1,(char *)local_res10,4);
  uVar1 = local_res10[0];
  if (bVar2) {
    ::`anonymous_namespace'::ReadBytes(param_1,(char *)local_res10,4);
    if (((uVar1 == 0x1312f76) && ((char)local_res10[0] == '\x02')) &&
       ((local_res10[0] & 0xffffe100) == 0)) {
      return true;
    }
    if (1 < (byte)LogExrReaderGpu._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
    }
  }
  return false;
}

// SeekTileWithinFile @ 14ea2d2a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FExrReader::SeekTileWithinFile(FExrReader *this,int param_1,int param_2,long64 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar9 = (uint)~param_2 >> 0x1f;
  uVar5 = 0;
  if (param_2 < (this->LineOrTileOffsetsPerLevel).ArrayNum) {
    uVar5 = uVar9;
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
  lVar7 = (longlong)param_2 * 0x10;
  if (param_1 < *(int *)((this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data + lVar7 + 8)) {
    uVar5 = 0;
    if (param_2 < (this->LineOrTileOffsetsPerLevel).ArrayNum) {
      uVar5 = uVar9;
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
    pFVar8 = (this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data;
    uVar5 = 0;
    if (param_1 < *(int *)(pFVar8 + lVar7 + 8)) {
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
    lVar1 = *(longlong *)(*(longlong *)(pFVar8 + lVar7) + (longlong)param_1 * 8);
    uVar5 = 0;
    if (param_2 < (this->LineOrTileOffsetsPerLevel).ArrayNum) {
      uVar5 = uVar9;
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
    pFVar8 = (this->LineOrTileOffsetsPerLevel).AllocatorInstance.Data + lVar7;
    if (*(int *)(pFVar8 + 8) < 1) {
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
    *param_3 = lVar1 - **(longlong **)pFVar8;
    iVar6 = fseek((FILE *)this->FileHandle,(long)lVar1,0);
    bVar3 = iVar6 == 0;
  }
  else {
    if (1 < (byte)LogExrReaderGpu._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExrReaderGpu);
    }
    bVar3 = false;
  }
  return bVar3;
}

