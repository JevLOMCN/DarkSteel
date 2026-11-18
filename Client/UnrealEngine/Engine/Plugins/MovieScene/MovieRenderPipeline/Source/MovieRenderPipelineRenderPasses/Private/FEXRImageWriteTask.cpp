// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 16

// CompressRaw<1> @ 14ddbcac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FEXRImageWriteTask::CompressRaw<1>
          (FEXRImageWriteTask *this,Header *param_1,FrameBuffer *param_2,FImagePixelData *param_3)

{
  byte bVar1;
  ushort uVar2;
  EImagePixelType EVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  long64 lVar8;
  ChannelList *this_00;
  Channel *pCVar9;
  size_t sVar10;
  Box<Imath_3_1::Vec2<int>_> *pBVar11;
  Slice *pSVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  int iVar21;
  void *pvVar22;
  undefined1 auStackY_2c8 [32];
  FImagePixelData *local_260;
  void *local_258;
  longlong local_250;
  FString *local_248;
  Header *local_240;
  FString local_238;
  __uint64 local_228;
  ulonglong local_220;
  FrameBuffer *local_218;
  ulonglong local_210;
  ulonglong local_208;
  TIntPoint<int>_u_0_s_0 local_200;
  Channel local_1f8;
  Slice local_1e8;
  FScriptContainerElement local_1a8 [128];
  ForAnyElementType local_128;
  FScriptContainerElement *local_120;
  int local_118;
  FScriptContainerElement local_108 [128];
  ForAnyElementType local_88;
  FScriptContainerElement *local_80;
  int local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  iVar21 = 0;
  local_258 = (void *)0x0;
  local_250 = 0;
  local_260 = param_3;
  local_240 = param_1;
  local_218 = param_2;
  (**(code **)(param_3->_padding_ + 8))(param_3,&local_258,&local_250);
  pvVar22 = local_258;
  if ((local_258 == (void *)0x0) ||
     (local_250 !=
      (ulonglong)(param_3->BitDepth >> 3) * (ulonglong)param_3->NumChannels *
      (longlong)(param_3->Size).field0_0x0._s_0.Y * (longlong)(param_3->Size).field0_0x0._s_0.X)) {
    if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:___int64___cdecl_FEXRImageWriteTask::CompressRaw<1>(Imf_3_3::Header&___ptr64,Imf_3_3::FrameBuffer&___ptr64,FImagePixelData*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
    }
    return 0;
  }
  uVar13 = ((uint)((ulonglong)local_260 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_260 >> 4)) *
           -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar13 = uVar13 >> 0x10 ^ uVar13;
  if (*(int *)&(this->LayerNames).field_0x8 != *(int *)&(this->LayerNames).field_0x34) {
    puVar16 = *(undefined1 **)&(this->LayerNames).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->LayerNames).field_0x38;
    }
    iVar6 = *(int *)(puVar16 + (ulonglong)(*(int *)&(this->LayerNames).field_0x48 - 1U & uVar13) * 4
                    );
    if (iVar6 != -1) {
      do {
        plVar14 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->LayerNames);
        if ((FImagePixelData *)*plVar14 == local_260) {
          if (plVar14 != (longlong *)0x0) {
            pFVar7 = (FString *)(plVar14 + 1);
            goto LAB_14ddbcc07;
          }
          break;
        }
        iVar6 = (int)plVar14[3];
      } while (iVar6 != -1);
    }
  }
  pFVar7 = TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
           ::EmplaceByHash<FImagePixelData_*_const_&>
                     ((TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                       *)&this->LayerNames,uVar13,&local_260);
LAB_14ddbcc07:
  bVar1 = local_260->NumChannels;
  EVar3 = local_260->Type;
  local_248 = pFVar7;
  if (EVar3 != Color) {
    if (EVar3 == Float16) {
      uVar13 = 2;
      goto LAB_14ddbcc5a;
    }
    if (EVar3 == Float32) {
      uVar13 = 4;
      goto LAB_14ddbcc5a;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineEXROutput.cpp"
                       ,0x1e0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      lVar8 = (*pcVar4)();
      return lVar8;
    }
  }
  uVar13 = 1;
LAB_14ddbcc5a:
  local_200 = (local_260->Size).field0_0x0._s_0;
  local_208 = (ulonglong)local_200 >> 0x20;
  if (bVar1 != 0) {
    local_228 = (__uint64)(int)(uVar13 * local_200.X * (uint)bVar1);
    local_220 = (ulonglong)(uVar13 * bVar1);
    local_210 = (ulonglong)uVar13;
    do {
      GetChannelName(&local_238,pFVar7,iVar21,local_260->PixelLayout);
      this_00 = Imf_3_3::Header::channels(param_1);
      pCVar9 = (Channel *)Imf_3_3::Channel::Channel(&local_1f8,HALF,1,1,false);
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_238.Data.ArrayNum != 0) {
        FVar18.Data = local_238.Data.AllocatorInstance.Data;
      }
      local_128.Data = (FScriptContainerElement *)0x0;
      if (FVar18.Data == (FScriptContainerElement *)0x0) {
        local_120 = (FScriptContainerElement *)0x0;
        local_118 = 0;
      }
      else {
        sVar10 = wcslen((wchar_t *)FVar18.Data);
        local_118 = (int)sVar10;
        uVar13 = local_118 + 1;
        FVar19.Data = (FScriptContainerElement *)0x0;
        if (0x80 < uVar13) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_128,0,uVar13,1);
          FVar19.Data = local_128.Data;
        }
        pFVar17 = local_1a8;
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          pFVar17 = FVar19.Data;
        }
        bVar5 = false;
        lVar15 = 0;
        lVar20 = (longlong)(int)uVar13;
        local_120 = pFVar17;
        if (0 < (int)uVar13) {
          do {
            uVar2 = *(ushort *)(FVar18.Data + lVar15 * 2);
            pFVar17[lVar15] = SUB21(uVar2,0);
            bVar5 = (bool)(bVar5 | 0x7f < uVar2);
            lVar15 = lVar15 + 1;
          } while (lVar15 < lVar20);
          if (bVar5) {
            lVar15 = 0;
            do {
              if (0x7f < *(ushort *)(FVar18.Data + lVar15 * 2)) {
                pFVar17[lVar15] = (FScriptContainerElement)0x3f;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < lVar20);
          }
        }
        if ((pFVar17 + lVar20 == (FScriptContainerElement *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          lVar8 = (*pcVar4)();
          return lVar8;
        }
      }
      Imf_3_3::ChannelList::insert(this_00,(char *)local_120,pCVar9);
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      pBVar11 = Imf_3_3::Header::dataWindow(local_240);
      pSVar12 = Imf_3_3::Slice::Make
                          (&local_1e8,HALF,pvVar22,pBVar11,local_220,local_228,1,1,0.0,false,false);
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_238.Data.ArrayNum != 0) {
        FVar18.Data = local_238.Data.AllocatorInstance.Data;
      }
      local_88.Data = (FScriptContainerElement *)0x0;
      if (FVar18.Data == (FScriptContainerElement *)0x0) {
        local_80 = (FScriptContainerElement *)0x0;
        local_78 = 0;
      }
      else {
        sVar10 = wcslen((wchar_t *)FVar18.Data);
        local_78 = (int)sVar10;
        uVar13 = local_78 + 1;
        FVar19.Data = (FScriptContainerElement *)0x0;
        if (0x80 < uVar13) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,uVar13,1)
          ;
          FVar19.Data = local_88.Data;
        }
        pFVar17 = local_108;
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          pFVar17 = FVar19.Data;
        }
        bVar5 = false;
        lVar15 = 0;
        lVar20 = (longlong)(int)uVar13;
        local_80 = pFVar17;
        if (0 < (int)uVar13) {
          do {
            uVar2 = *(ushort *)(FVar18.Data + lVar15 * 2);
            pFVar17[lVar15] = SUB21(uVar2,0);
            bVar5 = (bool)(bVar5 | 0x7f < uVar2);
            lVar15 = lVar15 + 1;
          } while (lVar15 < lVar20);
          if (bVar5) {
            lVar15 = 0;
            do {
              if (0x7f < *(ushort *)(FVar18.Data + lVar15 * 2)) {
                pFVar17[lVar15] = (FScriptContainerElement)0x3f;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < lVar20);
          }
        }
        if ((pFVar17 + lVar20 == (FScriptContainerElement *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          lVar8 = (*pcVar4)();
          return lVar8;
        }
      }
      Imf_3_3::FrameBuffer::insert(local_218,(char *)local_80,pSVar12);
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      iVar21 = iVar21 + 1;
      pvVar22 = (void *)((longlong)pvVar22 + local_210);
      param_1 = local_240;
      pFVar7 = local_248;
    } while (iVar21 < (int)(uint)bVar1);
  }
  return (longlong)(int)local_208 * (longlong)local_200.X * (longlong)(int)(uint)bVar1 * 2;
}

// CompressRaw<2> @ 14ddbd040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FEXRImageWriteTask::CompressRaw<2>
          (FEXRImageWriteTask *this,Header *param_1,FrameBuffer *param_2,FImagePixelData *param_3)

{
  byte bVar1;
  ushort uVar2;
  EImagePixelType EVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  long64 lVar8;
  ChannelList *this_00;
  Channel *pCVar9;
  size_t sVar10;
  Box<Imath_3_1::Vec2<int>_> *pBVar11;
  Slice *pSVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  int iVar21;
  void *pvVar22;
  undefined1 auStackY_2c8 [32];
  FImagePixelData *local_260;
  void *local_258;
  longlong local_250;
  FString *local_248;
  Header *local_240;
  FString local_238;
  __uint64 local_228;
  ulonglong local_220;
  FrameBuffer *local_218;
  ulonglong local_210;
  ulonglong local_208;
  TIntPoint<int>_u_0_s_0 local_200;
  Channel local_1f8;
  Slice local_1e8;
  FScriptContainerElement local_1a8 [128];
  ForAnyElementType local_128;
  FScriptContainerElement *local_120;
  int local_118;
  FScriptContainerElement local_108 [128];
  ForAnyElementType local_88;
  FScriptContainerElement *local_80;
  int local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  iVar21 = 0;
  local_258 = (void *)0x0;
  local_250 = 0;
  local_260 = param_3;
  local_240 = param_1;
  local_218 = param_2;
  (**(code **)(param_3->_padding_ + 8))(param_3,&local_258,&local_250);
  pvVar22 = local_258;
  if ((local_258 == (void *)0x0) ||
     (local_250 !=
      (ulonglong)(param_3->BitDepth >> 3) * (ulonglong)param_3->NumChannels *
      (longlong)(param_3->Size).field0_0x0._s_0.Y * (longlong)(param_3->Size).field0_0x0._s_0.X)) {
    if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:___int64___cdecl_FEXRImageWriteTask::CompressRaw<2>(Imf_3_3::Header&___ptr64,Imf_3_3::FrameBuffer&___ptr64,FImagePixelData*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
    }
    return 0;
  }
  uVar13 = ((uint)((ulonglong)local_260 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_260 >> 4)) *
           -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar13 = uVar13 >> 0x10 ^ uVar13;
  if (*(int *)&(this->LayerNames).field_0x8 != *(int *)&(this->LayerNames).field_0x34) {
    puVar16 = *(undefined1 **)&(this->LayerNames).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->LayerNames).field_0x38;
    }
    iVar6 = *(int *)(puVar16 + (ulonglong)(*(int *)&(this->LayerNames).field_0x48 - 1U & uVar13) * 4
                    );
    if (iVar6 != -1) {
      do {
        plVar14 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->LayerNames);
        if ((FImagePixelData *)*plVar14 == local_260) {
          if (plVar14 != (longlong *)0x0) {
            pFVar7 = (FString *)(plVar14 + 1);
            goto LAB_14ddbd187;
          }
          break;
        }
        iVar6 = (int)plVar14[3];
      } while (iVar6 != -1);
    }
  }
  pFVar7 = TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
           ::EmplaceByHash<FImagePixelData_*_const_&>
                     ((TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                       *)&this->LayerNames,uVar13,&local_260);
LAB_14ddbd187:
  bVar1 = local_260->NumChannels;
  EVar3 = local_260->Type;
  local_248 = pFVar7;
  if (EVar3 != Color) {
    if (EVar3 == Float16) {
      uVar13 = 2;
      goto LAB_14ddbd1da;
    }
    if (EVar3 == Float32) {
      uVar13 = 4;
      goto LAB_14ddbd1da;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineEXROutput.cpp"
                       ,0x1e0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      lVar8 = (*pcVar4)();
      return lVar8;
    }
  }
  uVar13 = 1;
LAB_14ddbd1da:
  local_200 = (local_260->Size).field0_0x0._s_0;
  local_208 = (ulonglong)local_200 >> 0x20;
  if (bVar1 != 0) {
    local_228 = (__uint64)(int)(uVar13 * local_200.X * (uint)bVar1);
    local_220 = (ulonglong)(uVar13 * bVar1);
    local_210 = (ulonglong)uVar13;
    do {
      GetChannelName(&local_238,pFVar7,iVar21,local_260->PixelLayout);
      this_00 = Imf_3_3::Header::channels(param_1);
      pCVar9 = (Channel *)Imf_3_3::Channel::Channel(&local_1f8,FLOAT,1,1,false);
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_238.Data.ArrayNum != 0) {
        FVar18.Data = local_238.Data.AllocatorInstance.Data;
      }
      local_128.Data = (FScriptContainerElement *)0x0;
      if (FVar18.Data == (FScriptContainerElement *)0x0) {
        local_120 = (FScriptContainerElement *)0x0;
        local_118 = 0;
      }
      else {
        sVar10 = wcslen((wchar_t *)FVar18.Data);
        local_118 = (int)sVar10;
        uVar13 = local_118 + 1;
        FVar19.Data = (FScriptContainerElement *)0x0;
        if (0x80 < uVar13) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_128,0,uVar13,1);
          FVar19.Data = local_128.Data;
        }
        pFVar17 = local_1a8;
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          pFVar17 = FVar19.Data;
        }
        bVar5 = false;
        lVar15 = 0;
        lVar20 = (longlong)(int)uVar13;
        local_120 = pFVar17;
        if (0 < (int)uVar13) {
          do {
            uVar2 = *(ushort *)(FVar18.Data + lVar15 * 2);
            pFVar17[lVar15] = SUB21(uVar2,0);
            bVar5 = (bool)(bVar5 | 0x7f < uVar2);
            lVar15 = lVar15 + 1;
          } while (lVar15 < lVar20);
          if (bVar5) {
            lVar15 = 0;
            do {
              if (0x7f < *(ushort *)(FVar18.Data + lVar15 * 2)) {
                pFVar17[lVar15] = (FScriptContainerElement)0x3f;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < lVar20);
          }
        }
        if ((pFVar17 + lVar20 == (FScriptContainerElement *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          lVar8 = (*pcVar4)();
          return lVar8;
        }
      }
      Imf_3_3::ChannelList::insert(this_00,(char *)local_120,pCVar9);
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      pBVar11 = Imf_3_3::Header::dataWindow(local_240);
      pSVar12 = Imf_3_3::Slice::Make
                          (&local_1e8,FLOAT,pvVar22,pBVar11,local_220,local_228,1,1,0.0,false,false)
      ;
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_238.Data.ArrayNum != 0) {
        FVar18.Data = local_238.Data.AllocatorInstance.Data;
      }
      local_88.Data = (FScriptContainerElement *)0x0;
      if (FVar18.Data == (FScriptContainerElement *)0x0) {
        local_80 = (FScriptContainerElement *)0x0;
        local_78 = 0;
      }
      else {
        sVar10 = wcslen((wchar_t *)FVar18.Data);
        local_78 = (int)sVar10;
        uVar13 = local_78 + 1;
        FVar19.Data = (FScriptContainerElement *)0x0;
        if (0x80 < uVar13) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,uVar13,1)
          ;
          FVar19.Data = local_88.Data;
        }
        pFVar17 = local_108;
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          pFVar17 = FVar19.Data;
        }
        bVar5 = false;
        lVar15 = 0;
        lVar20 = (longlong)(int)uVar13;
        local_80 = pFVar17;
        if (0 < (int)uVar13) {
          do {
            uVar2 = *(ushort *)(FVar18.Data + lVar15 * 2);
            pFVar17[lVar15] = SUB21(uVar2,0);
            bVar5 = (bool)(bVar5 | 0x7f < uVar2);
            lVar15 = lVar15 + 1;
          } while (lVar15 < lVar20);
          if (bVar5) {
            lVar15 = 0;
            do {
              if (0x7f < *(ushort *)(FVar18.Data + lVar15 * 2)) {
                pFVar17[lVar15] = (FScriptContainerElement)0x3f;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < lVar20);
          }
        }
        if ((pFVar17 + lVar20 == (FScriptContainerElement *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          lVar8 = (*pcVar4)();
          return lVar8;
        }
      }
      Imf_3_3::FrameBuffer::insert(local_218,(char *)local_80,pSVar12);
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      iVar21 = iVar21 + 1;
      pvVar22 = (void *)((longlong)pvVar22 + local_210);
      param_1 = local_240;
      pFVar7 = local_248;
    } while (iVar21 < (int)(uint)bVar1);
  }
  return (longlong)(int)local_208 * (longlong)local_200.X * (longlong)(int)(uint)bVar1 * 4;
}

// FEXRImageWriteTask @ 14ddc4fe0

FEXRImageWriteTask * __thiscall FEXRImageWriteTask::FEXRImageWriteTask(FEXRImageWriteTask *this)

{
  *(undefined ***)this = &___7FEXRImageWriteTask__6B_;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  this->bOverwriteFile = true;
  this->Compression = PIZ;
  (this->CompressionByLayer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressionByLayer).ArrayNum = 0;
  (this->CompressionByLayer).ArrayMax = 0;
  this->CompressionLevel = 0x2d;
  *(undefined8 *)&this->OnCompleted = 0;
  *(undefined8 *)&(this->OnCompleted).field_0x28 = 0;
  *(undefined8 *)&this->FileMetadata = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  (this->Layers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Layers).ArrayNum = 0;
  (this->Layers).ArrayMax = 0;
  (this->PixelPreprocessors).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PixelPreprocessors).Pairs.ArrayNum = 0;
  (this->PixelPreprocessors).Pairs.ArrayMax = 0;
  *(undefined8 *)&this->LayerNames = 0;
  *(undefined8 *)&(this->LayerNames).field_0x8 = 0;
  *(undefined8 *)&(this->LayerNames).field_0x20 = 0;
  *(undefined4 *)&(this->LayerNames).field_0x28 = 0;
  *(undefined4 *)&(this->LayerNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->LayerNames).field_0x34 = 0;
  *(undefined4 *)&(this->LayerNames).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LayerNames).field_0x40 = 0;
  *(undefined4 *)&(this->LayerNames).field_0x48 = 0;
  *(undefined8 *)&this->OverscanPercentage = 0;
  *(undefined8 *)((longlong)&(this->CropRectangle).field0_0x0._s_0.Min.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->CropRectangle).field0_0x0 + 0xc) = 0;
  (this->ColorSpaceChromaticities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorSpaceChromaticities).ArrayNum = 0;
  (this->ColorSpaceChromaticities).ArrayMax = 0;
  this->bMultipart = true;
  this->bPadToDataWindowSize = true;
  return this;
}

// ~<lambda_1> @ 14ddc8d40

void __thiscall `FEXRImageWriteTask::OnAbandoned'::__l5::<lambda_1>::~<lambda_1>(void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x28);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ~<lambda_1> @ 14ddc8d70

void __thiscall `FEXRImageWriteTask::RunTask'::__l5::<lambda_1>::~<lambda_1>(void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ~FEXRImageWriteTask @ 14ddcabb0

void __thiscall FEXRImageWriteTask::~FEXRImageWriteTask(FEXRImageWriteTask *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  pFVar1 = (this->ColorSpaceChromaticities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->LayerNames).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LayerNames).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FImagePixelData_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FImagePixelData_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FImagePixelData_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LayerNames);
  DestructItems<TTuple<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>_>
              *)(this->PixelPreprocessors).Pairs.AllocatorInstance.Data,
             (this->PixelPreprocessors).Pairs.ArrayNum);
  pFVar1 = (this->PixelPreprocessors).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,int>
            ((TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)
             (this->Layers).AllocatorInstance.Data,(this->Layers).ArrayNum);
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FileMetadata).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileMetadata);
  if (*(longlong *)&this->OnCompleted != 0) {
    plVar3 = *(longlong **)&(this->OnCompleted).field_0x28;
    plVar4 = (longlong *)&(this->OnCompleted).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar1 = (this->CompressionByLayer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7IImageWriteTaskBase__6B_;
  return;
}

// operator() @ 14ddccba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Header * __thiscall
`FEXRImageWriteTask::GenerateFilePartsForResolution'::__l2::<lambda_1>::operator()
          (void *this,Header *__return_storage_ptr__,Box<Imath_3_1::Vec2<int>_> *param_1,
          Box<Imath_3_1::Vec2<int>_> *param_2,Compression param_3)

{
  char *_Str;
  longlong lVar1;
  FName FVar2;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar3;
  size_t sVar4;
  FModuleManager *this_00;
  IModuleInterface *pIVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  ulong64 uVar8;
  undefined1 auStackY_158 [32];
  Vec2<float> local_114;
  Header *local_108;
  _Bxty local_100;
  undefined8 local_f0;
  ulonglong uStack_e8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_114.x = 0.0;
  local_114.y = 0.0;
  local_108 = __return_storage_ptr__;
  Imf_3_3::Header::Header
            (__return_storage_ptr__,param_1,param_2,__real_3f800000,&local_114,__real_3f800000,
             INCREASING_Y,param_3);
  if (*(char *)(*(longlong *)this + 0x160) != '\0') {
    if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
    }
    pTVar3 = StringCast<char,128,wchar_t>(&local_d8,pwVar7);
    _Str = pTVar3->Ptr;
    local_100._Ptr = (char *)0x0;
    local_100._8_8_ = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    sVar4 = strlen(_Str);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_100,_Str,
               sVar4);
    Imf_3_3::Header::setName
              (__return_storage_ptr__,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_100);
    if (0xf < uStack_e8) {
      uVar8 = uStack_e8 + 1;
      uVar6 = local_100._Ptr;
      if (0xfff < uVar8) {
        uVar8 = uStack_e8 + 0x28;
        uVar6 = *(undefined8 *)(local_100._Ptr + -8);
        if ((char *)0x1f < local_100._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar8);
    }
    local_f0 = ___xmm_000000000000000f0000000000000000;
    uStack_e8 = _UNK_15076add8;
    local_100._Ptr = local_100._Ptr & 0xffffffffffffff00;
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    local_f0 = ___xmm_000000000000000f000000000000000d;
    uStack_e8 = _UNK_152d2c3e8;
    local_100._Ptr = (char *)s_scanlineimage._0_8_;
    local_100._Buf[0xc] = s_scanlineimage[0xc];
    local_100._Buf[8] = s_scanlineimage[8];
    local_100._Buf[9] = s_scanlineimage[9];
    local_100._Buf[10] = s_scanlineimage[10];
    local_100._Buf[0xb] = s_scanlineimage[0xb];
    local_100._13_3_ = 0;
    Imf_3_3::Header::setType
              (__return_storage_ptr__,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_100);
    if (0xf < uStack_e8) {
      uVar8 = uStack_e8 + 1;
      uVar6 = local_100._Ptr;
      if (0xfff < uVar8) {
        uVar8 = uStack_e8 + 0x28;
        uVar6 = *(undefined8 *)(local_100._Ptr + -8);
        if ((char *)0x1f < local_100._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar8);
    }
  }
  lVar1 = *(longlong *)this;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&RTTIExtensionModuleName,"UEOpenExrRTTI");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = RTTIExtensionModuleName;
  this_00 = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModule(this_00,FVar2,None);
  if (pIVar5 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,lVar1 + 0x78,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// AddFileMetadata @ 14ddd3dd0

void __thiscall FEXRImageWriteTask::AddFileMetadata(FEXRImageWriteTask *this,Header *param_1)

{
  FName FVar1;
  FModuleManager *this_00;
  IModuleInterface *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&RTTIExtensionModuleName,"UEOpenExrRTTI");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar1 = RTTIExtensionModuleName;
  this_00 = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModule(this_00,FVar1,None);
  if (pIVar2 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&this->FileMetadata,param_1);
  }
  return;
}

// EnsureWritableFile @ 14dddb910

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FEXRImageWriteTask::EnsureWritableFile(FEXRImageWriteTask *this)

{
  char cVar1;
  IFileManager *pIVar2;
  longlong lVar3;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FString local_18;
  
  FPaths::GetPath(&local_18,&this->Filename);
  pIVar2 = IFileManager::Get();
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,FVar5.Data);
  if (cVar1 == '\0') {
    pIVar2 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar5.Data = local_18.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2,FVar5.Data,0);
  }
  pIVar2 = IFileManager::Get();
  if ((this->Filename).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
  }
  lVar3 = (**(code **)((longlong)*pIVar2 + 0x110))(pIVar2,pwVar6);
  if (lVar3 == -1) {
LAB_14dddba11:
    bVar7 = true;
  }
  else {
    if (this->bOverwriteFile != false) {
      this_00 = FPlatformFileManager::Get();
      pIVar4 = FPlatformFileManager::GetPlatformFile(this_00);
      if ((this->Filename).Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
      }
      cVar1 = (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,pwVar6);
      if (cVar1 != '\0') goto LAB_14dddba11;
    }
    if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    bVar7 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// GenerateFilePartsForResolution @ 14dddd520

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEXRImageWriteTask::GenerateFilePartsForResolution
          (FEXRImageWriteTask *this,TIntPoint<int> *param_1,
          TArray<FImagePixelData_*,TSizedDefaultAllocator<32>_> *param_2,
          EEXRCompressionFormat param_3,FString *param_4,FEXRPart *param_5,
          TArray<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,TSizedDefaultAllocator<32>_>
          *param_6)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  uchar uVar3;
  int iVar4;
  EImagePixelType EVar5;
  FScriptContainerElement *pFVar6;
  undefined1 *puVar7;
  code *pcVar8;
  FEXRPart *this_00;
  TArray<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  FImagePixelData *pFVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  Header *pHVar15;
  FString *pFVar16;
  long64 lVar17;
  uint uVar18;
  TIntPoint<int>_u_0_s_0 TVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  TIntPoint<int> *pTVar23;
  undefined1 *puVar24;
  int iVar25;
  longlong lVar26;
  undefined8 uVar27;
  TIntPoint<int>_u_0 TVar28;
  int iVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  float fVar32;
  undefined1 local_res8 [8];
  TIntPoint<int> *local_res10;
  TArray<FImagePixelData_*,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20;
  FImagePixelData *local_228;
  undefined1 local_220 [40];
  int local_1f8;
  int local_1f4;
  FString local_1f0;
  uint local_1e0;
  Vec2<float> local_1dc;
  Vec2<float> local_1d4;
  Vec2<float> local_1cc;
  Vec2<float> local_1c4;
  longlong local_1b8;
  longlong local_1b0;
  FString *local_1a8;
  Box<Imath_3_1::Vec2<int>_> local_1a0;
  Box<Imath_3_1::Vec2<int>_> local_190;
  undefined1 local_180 [8];
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TStack_178;
  TIntRect<int>_u_0 local_170;
  undefined1 local_160 [8];
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TStack_158;
  TIntRect<int>_u_0 local_150;
  undefined1 local_140 [8];
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TStack_138;
  TIntRect<int>_u_0 local_130;
  undefined1 local_120 [24];
  FImagePixelData *local_108;
  FImagePixelData *local_100;
  FScriptContainerElement *local_f8;
  FString *local_f0;
  FStringFormatArg *local_e8;
  FString local_e0;
  FEXRImageWriteTask *local_d0;
  FString *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  FStringFormatArg local_b0;
  Header local_90;
  Chromaticities local_78;
  
  pTVar9 = param_6;
  this_00 = param_5;
  local_c8 = param_4;
  local_res20 = 0;
  if (this->bPadToDataWindowSize == false) {
    iVar13 = (param_1->field0_0x0)._s_0.Y;
  }
  else {
    iVar13 = this->Height;
  }
  param_5->Scanlines = iVar13;
  pTVar23 = (TIntPoint<int> *)&this->CropRectangle;
  iVar13 = *(int *)((longlong)&(this->CropRectangle).field0_0x0 + 8);
  iVar25 = iVar13 - *(int *)&((TIntRect<int> *)pTVar23)->field0_0x0;
  if ((((iVar25 == 0) &&
       (*(int *)((longlong)&(this->CropRectangle).field0_0x0 + 0xc) ==
        *(int *)((longlong)&(this->CropRectangle).field0_0x0 + 4))) ||
      (*(int *)&((TIntRect<int> *)pTVar23)->field0_0x0 < 0)) ||
     ((iVar4 = *(int *)((longlong)&(this->CropRectangle).field0_0x0 + 4), iVar4 < 0 ||
      (iVar29 = this->Width, iVar29 < iVar13)))) {
LAB_14dddd5f8:
    iVar30 = this->Height;
    iVar29 = this->Width;
    uVar27._0_4_ = this->Width;
    uVar27._4_4_ = this->Height;
    pTVar23 = &UE::Math::TIntPoint<int>::ZeroValue;
  }
  else {
    iVar13 = *(int *)((longlong)&(this->CropRectangle).field0_0x0 + 0xc);
    iVar30 = this->Height;
    if (iVar30 < iVar13) goto LAB_14dddd5f8;
    uVar27 = CONCAT44(iVar13 - iVar4,iVar25);
  }
  if (this->bPadToDataWindowSize == false) {
    iVar29 = iVar29 - (param_1->field0_0x0)._s_0.X;
    iVar30 = iVar30 - (param_1->field0_0x0)._s_0.Y;
    local_120._8_4_ = iVar30;
    local_120._4_4_ = iVar29;
    local_1a0.min.y = iVar30 / 2;
    TVar28._s_0.Y = local_1a0.min.y;
    TVar28._s_0.X = iVar29 / 2;
    TVar19 = (param_1->field0_0x0)._s_0;
  }
  else {
    local_1a0.min.y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_;
    TVar19.Y = iVar30;
    TVar19.X = iVar29;
    TVar28 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  }
  local_1a0.min.x = TVar28._s_0.X - (int)*(undefined8 *)&((TIntRect<int> *)pTVar23)->field0_0x0;
  local_1a0.min.y =
       local_1a0.min.y -
       (int)((ulonglong)*(undefined8 *)&((TIntRect<int> *)pTVar23)->field0_0x0 >> 0x20);
  local_1a0.max.x = local_1a0.min.x + -1 + TVar19.X;
  local_1a0.max.y = local_1a0.min.y + -1 + TVar19.Y;
  local_190.min.x = 0;
  local_190.min.y = 0;
  local_190.max.x = (int)uVar27 + -1;
  local_190.max.y = (int)((ulonglong)uVar27 >> 0x20) + -1;
  local_res10 = param_1;
  local_res18 = param_2;
  local_d0 = this;
  if ((param_3 == DWAA) || (param_3 == DWAB)) {
    FStringFormatArg::FStringFormatArg(&local_b0,this->CompressionLevel);
    ::FString::FString(&local_e0,"dwaCompressionLevel");
    local_f0 = &local_e0;
    local_e8 = &local_b0;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&this->FileMetadata,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_120,
               (bool *)&local_f0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_b0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.StringValue.Data.AllocatorInstance.Data);
    }
  }
  pHVar15 = `FEXRImageWriteTask::GenerateFilePartsForResolution'::__l2::<lambda_1>::operator()
                      (&local_d0,&local_90,&local_190,&local_1a0,(uint)param_3);
  Imf_3_3::Header::operator=(&this_00->Header,pHVar15);
  Imf_3_3::Header::~Header(&local_90);
  iVar13 = (this->ColorSpaceChromaticities).ArrayNum;
  if (0 < iVar13) {
    if (iVar13 != 4) {
      param_4._0_1_ = 0;
      bVar11 = `FEXRImageWriteTask::GenerateFilePartsForResolution'::__l9::<lambda_2>::operator()
                         (&param_4);
      if (!bVar11) goto LAB_14dddda7f;
    }
    pTVar1 = &this->ColorSpaceChromaticities;
    if (((this->ColorSpaceChromaticities).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    fVar32 = (float)*(double *)((pTVar1->AllocatorInstance).Data + 8);
    if (((this->ColorSpaceChromaticities).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    local_1c4.x = (float)*(double *)(pTVar1->AllocatorInstance).Data;
    local_1c4.y = fVar32;
    if (((this->ColorSpaceChromaticities).ArrayNum < 2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    fVar32 = (float)*(double *)((pTVar1->AllocatorInstance).Data + 0x18);
    if (((this->ColorSpaceChromaticities).ArrayNum < 2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    local_1cc.x = (float)*(double *)((pTVar1->AllocatorInstance).Data + 0x10);
    local_1cc.y = fVar32;
    if (((this->ColorSpaceChromaticities).ArrayNum < 3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    fVar32 = (float)*(double *)((pTVar1->AllocatorInstance).Data + 0x28);
    if (((this->ColorSpaceChromaticities).ArrayNum < 3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    local_1d4.x = (float)*(double *)((pTVar1->AllocatorInstance).Data + 0x20);
    local_1d4.y = fVar32;
    if (((this->ColorSpaceChromaticities).ArrayNum < 4) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    dVar2 = *(double *)((pTVar1->AllocatorInstance).Data + 0x38);
    if (((this->ColorSpaceChromaticities).ArrayNum < 4) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    local_1dc.x = (float)*(double *)((pTVar1->AllocatorInstance).Data + 0x30);
    local_1dc.y = (float)dVar2;
    Imf_3_3::Chromaticities::Chromaticities(&local_78,&local_1c4,&local_1cc,&local_1d4,&local_1dc);
    Imf_3_3::addChromaticities(&this_00->Header,&local_78);
  }
LAB_14dddda7f:
  pFVar31 = (local_res18->AllocatorInstance).Data;
  local_1e0 = local_res18->ArrayNum;
  uVar20 = (ulonglong)(int)local_1e0;
  local_f8 = pFVar31 + uVar20 * 8;
  do {
    while( true ) {
      pFVar6 = local_f8;
      if (local_res18->ArrayNum != (int)uVar20) {
        param_5._0_1_ = 0;
        `TCheckedPointerIterator<FImagePixelData_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_5);
      }
      if (pFVar31 == pFVar6) {
        return (bool)local_res20;
      }
      local_228 = *(FImagePixelData **)pFVar31;
      uVar3 = local_228->BitDepth;
      if (((uVar3 != '\b') && ((uVar3 - 0x10 & 0xef) != 0)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawBitDepth == 8 || RawBitDepth == 16 || RawBitDepth == 32",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineEXROutput.cpp"
                              ,0xd2,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      if ((this->bPadToDataWindowSize != false) ||
         ((TVar19 = (local_228->Size).field0_0x0._s_0, TVar19.X == (local_res10->field0_0x0)._s_0.X
          && (TVar19.Y == (local_res10->field0_0x0)._s_0.Y)))) break;
      local_res8[0] = 0;
      bVar11 = `FEXRImageWriteTask::GenerateFilePartsForResolution'::__l23::<lambda_3>::operator()
                         (local_res8);
      if (bVar11) break;
LAB_14ddde446:
      pFVar31 = pFVar31 + 8;
      uVar20 = (ulonglong)local_1e0;
    }
    pFVar10 = local_228;
    local_1b8 = 0;
    local_1b0 = 0;
    (**(code **)(local_228->_padding_ + 8))(local_228,&local_1b8,&local_1b0);
    if ((local_1b8 == 0) ||
       (local_1b0 !=
        (ulonglong)(pFVar10->BitDepth >> 3) * (ulonglong)pFVar10->NumChannels *
        (longlong)(pFVar10->Size).field0_0x0._s_0.Y * (longlong)(pFVar10->Size).field0_0x0._s_0.X))
    {
      if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
      }
      return false;
    }
    local_res20 = 1;
    TVar19 = (local_228->Size).field0_0x0._s_0;
    iVar13 = this->Width;
    if ((TVar19.X < iVar13) || (TVar19.Y < this->Height)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if ((this->bPadToDataWindowSize != false) && (bVar11)) {
      local_220._16_4_ = (TVar19.X - iVar13) / 2;
      local_220._20_4_ = (TVar19.Y - this->Height) / 2;
      local_220._12_4_ = local_220._20_4_;
      local_220._8_4_ = local_220._16_4_;
      local_220._24_4_ = iVar13 + local_220._16_4_;
      local_220._28_4_ = local_220._20_4_ + this->Height;
      EVar5 = local_228->Type;
      local_120._12_8_ = TVar19;
      if (EVar5 == Color) {
        local_140 = (undefined1  [8])0x0;
        TStack_138.Ptr = (FImagePixelData *)0x0;
        local_130._4_4_ = local_220._20_4_;
        local_130._0_4_ = local_220._16_4_;
        local_130._12_4_ = local_220._28_4_;
        local_130._8_4_ = local_220._24_4_;
        TAsyncCropImage<FColor>::operator()((TAsyncCropImage<FColor> *)local_140,local_228);
        pFVar6 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)(local_140 + 8)) &&
            ((FScriptContainerElement *)(local_140 + 8) < pFVar6 + (longlong)pTVar9->ArrayMax * 8))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar13 = pTVar9->ArrayNum;
        if (iVar13 == pTVar9->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        pTVar9->ArrayNum = iVar13 + 1;
        *(FImagePixelData **)((pTVar9->AllocatorInstance).Data + (longlong)iVar13 * 8) =
             TStack_138.Ptr;
        TStack_138.Ptr = (FImagePixelData *)0x0;
      }
      else if (EVar5 == Float16) {
        local_160 = (undefined1  [8])0x0;
        TStack_158.Ptr = (FImagePixelData *)0x0;
        local_150._4_4_ = local_220._20_4_;
        local_150._0_4_ = local_220._16_4_;
        local_150._12_4_ = local_220._28_4_;
        local_150._8_4_ = local_220._24_4_;
        TAsyncCropImage<FFloat16Color>::operator()
                  ((TAsyncCropImage<FFloat16Color> *)local_160,local_228);
        pFVar6 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)(local_160 + 8)) &&
            ((FScriptContainerElement *)(local_160 + 8) < pFVar6 + (longlong)pTVar9->ArrayMax * 8))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar13 = pTVar9->ArrayNum;
        if (iVar13 == pTVar9->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        pTVar9->ArrayNum = iVar13 + 1;
        *(FImagePixelData **)((pTVar9->AllocatorInstance).Data + (longlong)iVar13 * 8) =
             TStack_158.Ptr;
        TStack_158.Ptr = (FImagePixelData *)0x0;
      }
      else if (EVar5 == Float32) {
        local_180 = (undefined1  [8])0x0;
        TStack_178.Ptr = (FImagePixelData *)0x0;
        local_170._4_4_ = local_220._20_4_;
        local_170._0_4_ = local_220._16_4_;
        local_170._12_4_ = local_220._28_4_;
        local_170._8_4_ = local_220._24_4_;
        TAsyncCropImage<FLinearColor>::operator()
                  ((TAsyncCropImage<FLinearColor> *)local_180,local_228);
        pFVar6 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)(local_180 + 8)) &&
            ((FScriptContainerElement *)(local_180 + 8) < pFVar6 + (longlong)pTVar9->ArrayMax * 8))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar13 = pTVar9->ArrayNum;
        if (iVar13 == pTVar9->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        pTVar9->ArrayNum = iVar13 + 1;
        *(FImagePixelData **)((pTVar9->AllocatorInstance).Data + (longlong)iVar13 * 8) =
             TStack_178.Ptr;
        TStack_178.Ptr = (FImagePixelData *)0x0;
      }
      uVar18 = ((uint)((ulonglong)local_228 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_228 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      if (*(int *)&(this->LayerNames).field_0x8 != *(int *)&(this->LayerNames).field_0x34) {
        puVar7 = *(undefined1 **)&(this->LayerNames).field_0x40;
        puVar24 = &(this->LayerNames).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar24 = puVar7;
        }
        iVar13 = *(int *)(puVar24 +
                         (ulonglong)(*(int *)&(this->LayerNames).field_0x48 - 1U & uVar18) * 4);
        if (iVar13 != -1) {
          do {
            plVar21 = (longlong *)((longlong)iVar13 * 0x20 + *(longlong *)&this->LayerNames);
            if ((FImagePixelData *)*plVar21 == local_228) {
              if (plVar21 != (longlong *)0x0) {
                pFVar16 = (FString *)(plVar21 + 1);
                goto LAB_14ddddf3b;
              }
              break;
            }
            iVar13 = (int)plVar21[3];
          } while (iVar13 != -1);
        }
      }
      pFVar16 = TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                ::EmplaceByHash<FImagePixelData_*_const_&>
                          ((TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                            *)&this->LayerNames,uVar18,&local_228);
LAB_14ddddf3b:
      local_1a8 = (FString *)(local_220 + 0x20);
      local_220._32_8_ = (TReferenceControllerBase<1> *)0x0;
      local_1f8 = (pFVar16->Data).ArrayNum;
      lVar26 = (longlong)local_1f8;
      pFVar6 = (pFVar16->Data).AllocatorInstance.Data;
      if (local_1f8 == 0) {
        local_1f4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1f8,0,(ForAnyElementType *)(local_220 + 0x20),local_1f8,&local_1f4);
        memcpy((void *)local_220._32_8_,pFVar6,lVar26 * 2);
      }
      uVar14 = 0;
      uVar18 = local_1f8 - 1;
      if (local_1f8 == 0) {
        uVar18 = uVar14;
      }
      if (0 < (int)uVar18) {
        uVar22 = pTVar9->ArrayNum - 1;
        uVar18 = uVar14;
        if ((int)uVar22 < pTVar9->ArrayNum) {
          uVar18 = ~uVar22 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        local_108 = *(FImagePixelData **)
                     ((pTVar9->AllocatorInstance).Data + (longlong)pTVar9->ArrayNum * 8 + -8);
        TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
        ::Emplace<FImagePixelData_*,FString_const_&>
                  ((TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                    *)&this->LayerNames,&local_108,(FString *)(local_220 + 0x20));
      }
      uVar18 = pTVar9->ArrayNum - 1;
      if ((int)uVar18 < pTVar9->ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      local_228 = *(FImagePixelData **)
                   ((pTVar9->AllocatorInstance).Data + (longlong)pTVar9->ArrayNum * 8 + -8);
      if ((TReferenceControllerBase<1> *)local_220._32_8_ != (TReferenceControllerBase<1> *)0x0) {
        FMemory::Free((void *)local_220._32_8_);
      }
    }
    if (uVar3 == '\b') {
      local_c0 = 0;
      uStack_b8 = 0;
      UE::MoviePipeline::QuantizeImagePixelDataToBitDepth
                ((FImagePixelData *)local_220,(int)local_228,
                 (TSharedPtr<IImagePixelDataPayload,1> *)&DAT_00000010,SUB81(&local_c0,0));
      pFVar6 = (pTVar9->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)local_220) &&
          ((FScriptContainerElement *)local_220 < pFVar6 + (longlong)pTVar9->ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      iVar13 = pTVar9->ArrayNum;
      if (iVar13 == pTVar9->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      pTVar9->ArrayNum = iVar13 + 1;
      *(undefined8 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_220._0_8_;
      local_220._0_8_ = (undefined8 *)0x0;
      uVar18 = ((uint)((ulonglong)local_228 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_228 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      if (*(int *)&(this->LayerNames).field_0x8 != *(int *)&(this->LayerNames).field_0x34) {
        puVar7 = *(undefined1 **)&(this->LayerNames).field_0x40;
        puVar24 = &(this->LayerNames).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar24 = puVar7;
        }
        iVar13 = *(int *)(puVar24 +
                         (ulonglong)(*(int *)&(this->LayerNames).field_0x48 - 1U & uVar18) * 4);
        if (iVar13 != -1) {
          do {
            plVar21 = (longlong *)((longlong)iVar13 * 0x20 + *(longlong *)&this->LayerNames);
            if ((FImagePixelData *)*plVar21 == local_228) {
              if (plVar21 != (longlong *)0x0) {
                pFVar16 = (FString *)(plVar21 + 1);
                goto LAB_14ddde2cb;
              }
              break;
            }
            iVar13 = (int)plVar21[3];
          } while (iVar13 != -1);
        }
      }
      pFVar16 = TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                ::EmplaceByHash<FImagePixelData_*_const_&>
                          ((TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                            *)&this->LayerNames,uVar18,&local_228);
LAB_14ddde2cb:
      local_1a8 = &local_1f0;
      local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
      lVar26 = (longlong)local_1f0.Data.ArrayNum;
      pFVar6 = (pFVar16->Data).AllocatorInstance.Data;
      if (local_1f0.Data.ArrayNum == 0) {
        local_1f0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1f0.Data.ArrayNum,0,(ForAnyElementType *)&local_1f0,
                   local_1f0.Data.ArrayNum,&local_1f0.Data.ArrayMax);
        memcpy(local_1f0.Data.AllocatorInstance.Data,pFVar6,lVar26 * 2);
      }
      uVar14 = 0;
      uVar18 = local_1f0.Data.ArrayNum - 1;
      if (local_1f0.Data.ArrayNum == 0) {
        uVar18 = uVar14;
      }
      if (0 < (int)uVar18) {
        uVar22 = pTVar9->ArrayNum - 1;
        uVar18 = uVar14;
        if ((int)uVar22 < pTVar9->ArrayNum) {
          uVar18 = ~uVar22 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        local_100 = *(FImagePixelData **)
                     ((pTVar9->AllocatorInstance).Data + (longlong)pTVar9->ArrayNum * 8 + -8);
        TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
        ::Emplace<FImagePixelData_*,FString_const_&>
                  ((TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                    *)&this->LayerNames,&local_100,&local_1f0);
      }
      uVar18 = pTVar9->ArrayNum - 1;
      if ((int)uVar18 < pTVar9->ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      lVar17 = CompressRaw<1>(this,&this_00->Header,&this_00->FrameBuffer,
                              *(FImagePixelData **)
                               ((pTVar9->AllocatorInstance).Data +
                               (longlong)pTVar9->ArrayNum * 8 + -8));
      this_00->BytesWritten = lVar17;
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if ((undefined8 *)local_220._0_8_ != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)local_220._0_8_)(local_220._0_8_,1);
      }
      goto LAB_14ddde446;
    }
    if (uVar3 == '\x10') {
      lVar17 = CompressRaw<1>(this,&this_00->Header,&this_00->FrameBuffer,local_228);
      this_00->BytesWritten = lVar17;
      pFVar31 = pFVar31 + 8;
      uVar20 = (ulonglong)local_1e0;
    }
    else {
      if (uVar3 != ' ') {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineEXROutput.cpp"
                            ,0x124,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        goto LAB_14ddde446;
      }
      lVar17 = CompressRaw<2>(this,&this_00->Header,&this_00->FrameBuffer,local_228);
      this_00->BytesWritten = lVar17;
      pFVar31 = pFVar31 + 8;
      uVar20 = (ulonglong)local_1e0;
    }
  } while( true );
}

// OnAbandoned @ 14dde8ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FEXRImageWriteTask::OnAbandoned(FEXRImageWriteTask *this)

{
  longlong *plVar1;
  undefined1 auStack_a8 [48];
  code *local_78 [5];
  undefined8 *local_50;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_48 = *(longlong *)&this->OnCompleted;
  if (local_48 != 0) {
    local_20 = *(longlong **)&(this->OnCompleted).field_0x28;
    *(undefined8 *)&(this->OnCompleted).field_0x28 = 0;
    local_38 = *(longlong *)&(this->OnCompleted).field_0x10;
    uStack_30 = *(undefined8 *)&(this->OnCompleted).field_0x18;
    local_28 = *(undefined8 *)&(this->OnCompleted).field_0x20;
    *(undefined8 *)&this->OnCompleted = 0;
    local_78[0] = (code *)0x0;
    local_50 = (undefined8 *)0x0;
    local_50 = FMemory::Malloc(0x40,0x10);
    *local_50 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FEXRImageWriteTask::OnAbandoned'::`5'::<lambda_1>,1,1>::
                 _vftable_;
    plVar1 = local_50 + 2;
    *plVar1 = local_48;
    local_50[7] = local_20;
    local_20 = (longlong *)0x0;
    local_50[4] = local_38;
    local_50[5] = uStack_30;
    local_50[6] = local_28;
    if (*plVar1 != 0) {
      local_48 = 0;
    }
    if (plVar1 != (longlong *)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FEXRImageWriteTask::OnAbandoned'::__l5::<lambda_1>,void>::
                    Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_78);
    if (local_48 != 0) {
      plVar1 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar1 = local_20;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}

// PreProcess @ 14ddf2f70

void __thiscall FEXRImageWriteTask::PreProcess(FEXRImageWriteTask *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  if (((this->PixelPreprocessors).Pairs.ArrayNum != 0) && (uVar7 = 0, 0 < (this->Layers).ArrayNum))
  {
    lVar11 = 0;
    do {
      uVar3 = (this->PixelPreprocessors).Pairs.ArrayNum;
      iVar9 = 0;
      iVar8 = 0;
      pFVar12 = (this->PixelPreprocessors).Pairs.AllocatorInstance.Data;
      if (0 < (int)uVar3) {
        do {
          uVar10 = uVar3 >> 1;
          iVar8 = iVar9;
          if (*(int *)(pFVar12 + (longlong)(int)(uVar10 + iVar9) * 0x18) < (int)uVar7) {
            iVar8 = uVar10 + iVar9 + (uVar3 & 1);
          }
          uVar3 = uVar10;
          iVar9 = iVar8;
        } while (uVar10 != 0);
      }
      if (((iVar8 < (this->PixelPreprocessors).Pairs.ArrayNum) &&
          (*(int *)(pFVar12 + (longlong)iVar8 * 0x18) <= (int)uVar7)) && (iVar8 != -1)) {
        if ((iVar8 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar12 = (this->PixelPreprocessors).Pairs.AllocatorInstance.Data +
                  (longlong)iVar8 * 0x18 + 8;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          iVar9 = *(int *)(pFVar12 + 8);
          puVar6 = *(undefined8 **)pFVar12;
          puVar13 = puVar6 + (longlong)iVar9 * 6;
          while( true ) {
            if (*(int *)(pFVar12 + 8) != iVar9) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<TUniqueFunction<void___cdecl(FImagePixelData_*)>_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (puVar6 == puVar13) break;
            uVar3 = 0;
            if ((int)uVar7 < (this->Layers).ArrayNum) {
              uVar3 = ~uVar7 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_res10 = *(undefined8 *)((this->Layers).AllocatorInstance.Data + lVar11);
            UE::Core::Private::Function::CheckCallable((void *)*puVar6);
            plVar5 = (longlong *)puVar6[5];
            pcVar1 = (code *)*puVar6;
            if (plVar5 == (longlong *)0x0) {
              plVar5 = puVar6 + 2;
            }
            uVar4 = (**(code **)(*plVar5 + 8))();
            (*pcVar1)(uVar4,&local_res10);
            puVar6 = puVar6 + 6;
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar7 < (this->Layers).ArrayNum);
  }
  return;
}

// RunTask @ 14ddfc2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FEXRImageWriteTask::RunTask(FEXRImageWriteTask *this)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [48];
  code *local_88 [5];
  undefined8 *local_60;
  undefined1 local_58;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar1 = WriteToDisk(this);
  local_48 = *(longlong *)&this->OnCompleted;
  if (local_48 != 0) {
    local_20 = *(longlong **)&(this->OnCompleted).field_0x28;
    *(undefined8 *)&(this->OnCompleted).field_0x28 = 0;
    local_38 = *(longlong *)&(this->OnCompleted).field_0x10;
    uStack_30 = *(undefined8 *)&(this->OnCompleted).field_0x18;
    local_28 = *(undefined8 *)&(this->OnCompleted).field_0x20;
    *(undefined8 *)&this->OnCompleted = 0;
    local_88[0] = (code *)0x0;
    local_60 = (undefined8 *)0x0;
    local_58 = bVar1;
    local_60 = FMemory::Malloc(0x50,0x10);
    *local_60 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FEXRImageWriteTask::RunTask'::`5'::<lambda_1>,1,1>::
                 _vftable_;
    *(undefined1 *)(local_60 + 2) = local_58;
    local_60[4] = local_48;
    local_60[9] = local_20;
    local_20 = (longlong *)0x0;
    local_60[6] = local_38;
    local_60[7] = uStack_30;
    local_60[8] = local_28;
    if (local_60[4] != 0) {
      local_48 = 0;
    }
    if (local_60 + 2 != (undefined8 *)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FEXRImageWriteTask::RunTask'::__l5::<lambda_1>,void>::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_88);
    if (local_48 != 0) {
      plVar2 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar2 = local_20;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return bVar1;
}

// WriteToDisk @ 14de03460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FEXRImageWriteTask::WriteToDisk(FEXRImageWriteTask *this)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  FImagePixelData *pFVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  float fVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  FString *pFVar15;
  IFileManager *pIVar16;
  longlong lVar17;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar18;
  FString *pFVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  undefined1 *puVar22;
  wchar_t *pwVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  ulong64 uVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined8 unaff_R15;
  FEXRPart *pFVar31;
  undefined1 auStackY_2a8 [32];
  ForAnyElementType local_250;
  uint local_248;
  uint local_244;
  undefined1 local_240;
  undefined1 local_23f;
  undefined1 local_23e [2];
  uint local_23c;
  ForAnyElementType local_238;
  undefined8 local_230;
  TArray<FImagePixelData_*,TSizedDefaultAllocator<32>_> local_228;
  TArray<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,TSizedDefaultAllocator<32>_>
  local_218;
  undefined8 local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  TArray<FImagePixelData_*,TSizedDefaultAllocator<32>_> local_1d0;
  FString local_1c0;
  Vec2<float> local_1b0;
  Vec2<float> local_1a8;
  TIntPoint<int>_u_0 local_1a0;
  OutputPart local_198;
  FString *local_190;
  undefined1 local_180 [24];
  _Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_> local_168 [2]
  ;
  TIntPoint<int>_u_0 local_148;
  OutputFile local_140;
  Header local_130;
  undefined1 local_118 [24];
  _Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_> local_100 [2]
  ;
  FString local_e0;
  MultiPartOutputFile local_d0;
  FString local_c0;
  FString local_b0;
  OStream local_98;
  undefined8 local_70;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pFVar19 = &this->Filename;
  bVar10 = ::FString::EndsWith(pFVar19,L".exr",4,IgnoreCase);
  if (!bVar10) {
    pFVar15 = FPaths::GetBaseFilename(&local_c0,pFVar19,false);
    ::FString::ConcatFC(&local_200,pFVar15,L".exr");
    if (pFVar19 != &local_200) {
      pFVar2 = (pFVar19->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar19->Data).AllocatorInstance.Data = local_200.Data.AllocatorInstance.Data;
      local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Filename).Data.ArrayNum = local_200.Data.ArrayNum;
      (this->Filename).Data.ArrayMax = local_200.Data.ArrayMax;
      local_200.Data.ArrayNum = 0;
      local_200.Data.ArrayMax = 0;
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = false;
  bVar10 = false;
  FPaths::GetPath(&local_1e0,pFVar19);
  pIVar16 = IFileManager::Get();
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_1e0.Data.ArrayNum != 0) {
    FVar21.Data = local_1e0.Data.AllocatorInstance.Data;
  }
  cVar11 = (**(code **)((longlong)*pIVar16 + 0x58))(pIVar16,FVar21.Data);
  if (cVar11 == '\0') {
    pIVar16 = IFileManager::Get();
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_1e0.Data.ArrayNum != 0) {
      FVar21.Data = local_1e0.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar16 + 0x60))(pIVar16,FVar21.Data,0);
  }
  pIVar16 = IFileManager::Get();
  if ((this->Filename).Data.ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  lVar17 = (**(code **)((longlong)*pIVar16 + 0x110))(pIVar16,pwVar23);
  if (lVar17 != -1) {
    if (this->bOverwriteFile != false) {
      this_00 = FPlatformFileManager::Get();
      pIVar18 = FPlatformFileManager::GetPlatformFile(this_00);
      if ((this->Filename).Data.ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
      }
      cVar11 = (**(code **)((longlong)*pIVar18 + 0x88))(pIVar18,pwVar23);
      if (cVar11 != '\0') {
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        goto LAB_14de03632;
      }
    }
    if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    goto LAB_14de0437b;
  }
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
LAB_14de03632:
  local_23c = (uint)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
  PreProcess(this);
  Imf_3_3::OStream::OStream(&local_98,"");
  fVar8 = __real_3f800000;
  local_98._padding_ = (longlong)&___7FExrMemStreamOut__6B_;
  uVar29 = 0;
  local_70 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248 = 0;
  local_244 = 0;
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 0;
  if (this->bMultipart == false) {
    local_1a8.x = 0.0;
    local_1a8.y = 0.0;
    Imf_3_3::Header::Header
              ((Header *)local_118,0x40,0x40,__real_3f800000,&local_1a8,__real_3f800000,INCREASING_Y
               ,ZIP_COMPRESSION);
    local_100[0]._Myhead = (_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *)0x0;
    local_100[0]._Mysize = 0;
    local_100[0]._Myhead = ::operator_new(0x158);
    (local_100[0]._Myhead)->_Left = local_100[0]._Myhead;
    (local_100[0]._Myhead)->_Parent = local_100[0]._Myhead;
    (local_100[0]._Myhead)->_Right = local_100[0]._Myhead;
    (local_100[0]._Myhead)->_Color = '\x01';
    (local_100[0]._Myhead)->_Isnil = '\x01';
    local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ArrayNum = 0;
    local_228.ArrayMax = 0;
    pFVar24 = (this->Layers).AllocatorInstance.Data;
    iVar14 = (this->Layers).ArrayNum;
    pFVar2 = pFVar24 + (longlong)iVar14 * 8;
    while( true ) {
      uVar20 = (uint)uVar29;
      if ((this->Layers).ArrayNum != iVar14) {
        local_240 = 0;
        `TCheckedPointerIterator<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_240);
        uVar20 = local_228.ArrayNum;
      }
      if (pFVar24 == pFVar2) break;
      local_208 = *(undefined8 *)pFVar24;
      if (((local_228.AllocatorInstance.Data <= (FScriptContainerElement *)&local_208) &&
          ((FScriptContainerElement *)&local_208 <
           local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), uVar20 = local_228.ArrayNum, bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      if (uVar20 == local_228.ArrayMax) {
        uVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_228.AllocatorInstance,&local_228.ArrayMax);
      }
      local_228.ArrayNum = uVar20 + 1;
      *(undefined8 *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar20 * 8) = local_208;
      pFVar24 = pFVar24 + 8;
      uVar29 = (ulonglong)(uint)local_228.ArrayNum;
    }
    ::FString::FString(&local_e0,L"FinalImage");
    local_1a0._s_0.X = this->Width;
    local_1a0._s_0.Y = this->Height;
    bVar10 = GenerateFilePartsForResolution
                       (this,(TIntPoint<int> *)&local_1a0._s_0,&local_228,this->Compression,
                        &local_e0,(FEXRPart *)local_118,&local_218);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    local_23c = (uint)bVar10;
    if (((local_250.Data <= (FEXRPart *)local_118) &&
        ((FScriptContainerElement *)local_118 < local_250.Data + (longlong)(int)local_244 * 0x38))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    if (local_248 == local_244) {
      local_248 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&local_250,(int *)&local_244);
    }
    lVar17 = (longlong)(int)local_248;
    local_248 = local_248 + 1;
    FEXRPart::FEXRPart((FEXRPart *)(local_250.Data + lVar17 * 0x38),(FEXRPart *)local_118);
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_>::
    _Erase_head<std::allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>_>
              (local_100,
               (allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_> *
               )local_100);
    Imf_3_3::Header::~Header((Header *)local_118);
LAB_14de03e50:
    uVar29 = (ulonglong)local_248;
    uVar20 = local_23c;
  }
  else {
    uVar26 = uVar29;
    uVar20 = local_23c;
    if (0 < (this->Layers).ArrayNum) {
      do {
        local_1b0.x = 0.0;
        local_1b0.y = 0.0;
        Imf_3_3::Header::Header
                  ((Header *)local_180,0x40,0x40,fVar8,&local_1b0,fVar8,INCREASING_Y,ZIP_COMPRESSION
                  );
        local_168[0]._Myhead =
             (_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *)0x0;
        local_168[0]._Mysize = 0;
        local_168[0]._Myhead = ::operator_new(0x158);
        (local_168[0]._Myhead)->_Left = local_168[0]._Myhead;
        (local_168[0]._Myhead)->_Parent = local_168[0]._Myhead;
        (local_168[0]._Myhead)->_Right = local_168[0]._Myhead;
        (local_168[0]._Myhead)->_Color = '\x01';
        (local_168[0]._Myhead)->_Isnil = '\x01';
        uVar30 = (uint)uVar26;
        uVar20 = 0;
        if ((int)uVar30 < (this->Layers).ArrayNum) {
          uVar20 = ~uVar30 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar2 = (this->Layers).AllocatorInstance.Data;
        pFVar3 = *(FImagePixelData **)(pFVar2 + uVar29 * 8);
        uVar20 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
                 -0x7a143595;
        uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
        if (*(int *)&(this->LayerNames).field_0x8 != *(int *)&(this->LayerNames).field_0x34) {
          puVar4 = *(undefined1 **)&(this->LayerNames).field_0x40;
          puVar22 = &(this->LayerNames).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar22 = puVar4;
          }
          iVar14 = *(int *)(puVar22 +
                           (ulonglong)
                           (*(int *)&(this->LayerNames).field_0x48 - 1U & (uVar20 >> 0x10 ^ uVar20))
                           * 4);
          if (iVar14 != -1) {
            lVar17 = *(longlong *)&this->LayerNames;
            do {
              if (*(FImagePixelData **)((longlong)iVar14 * 0x20 + lVar17) == pFVar3) {
                pFVar19 = TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                          ::FindChecked((TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                                         *)&this->LayerNames,pFVar3);
                local_190 = &local_1f0;
                local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar14 = (pFVar19->Data).ArrayNum;
                pFVar24 = (pFVar19->Data).AllocatorInstance.Data;
                local_1f0.Data.ArrayNum = iVar14;
                if (iVar14 == 0) {
                  local_1f0.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar14,0,(ForAnyElementType *)&local_1f0,iVar14,
                             &local_1f0.Data.ArrayMax);
                  memcpy(local_1f0.Data.AllocatorInstance.Data,pFVar24,(longlong)iVar14 * 2);
                }
                pFVar19 = &local_1f0;
                bVar7 = true;
                goto LAB_14de03822;
              }
              iVar14 = *(int *)((longlong)iVar14 * 0x20 + 0x18 + lVar17);
            } while (iVar14 != -1);
          }
        }
        pFVar19 = ::FString::FString(&local_b0,L"FinalImage");
        bVar10 = true;
LAB_14de03822:
        local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c0.Data.AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
        (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c0.Data.ArrayNum = (pFVar19->Data).ArrayNum;
        local_1c0.Data.ArrayMax = (pFVar19->Data).ArrayMax;
        (pFVar19->Data).ArrayNum = 0;
        (pFVar19->Data).ArrayMax = 0;
        if ((bVar10) &&
           (bVar10 = false, local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if ((bVar7) &&
           (bVar7 = false, local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        iVar14 = (this->CompressionByLayer).ArrayNum;
        if (iVar14 == (this->Layers).ArrayNum) {
          uVar20 = 0;
          if ((int)uVar30 < iVar14) {
            uVar20 = ~uVar30 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          FVar1 = (this->CompressionByLayer).AllocatorInstance.Data[uVar29];
        }
        else {
          FVar1 = (FScriptContainerElement)this->Compression;
        }
        uVar5 = *(undefined8 *)(pFVar2 + uVar29 * 8);
        local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,1,0,&local_1d0.AllocatorInstance,1,&local_1d0.ArrayMax);
        *(undefined8 *)local_1d0.AllocatorInstance.Data = uVar5;
        local_148 = *(TIntPoint<int>_u_0 *)(*(longlong *)(pFVar2 + uVar29 * 8) + 8);
        bVar12 = GenerateFilePartsForResolution
                           (this,(TIntPoint<int> *)&local_148._s_0,&local_1d0,
                            (EEXRCompressionFormat)FVar1,&local_1c0,(FEXRPart *)local_180,&local_218
                           );
        if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.AllocatorInstance.Data);
        }
        if (!bVar12) {
          if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
            TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
            ::FindChecked((TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                           *)&this->LayerNames,*(FImagePixelData **)(pFVar2 + uVar29 * 8));
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
          }
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
          std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_>
          ::
          _Erase_head<std::allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>_>
                    (local_168,
                     (allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>
                      *)local_168);
          Imf_3_3::Header::~Header((Header *)local_180);
          uVar29 = (ulonglong)local_248;
          uVar20 = 0;
          goto LAB_14de03e59;
        }
        if (((local_250.Data <= (FEXRPart *)local_180) &&
            ((FScriptContainerElement *)local_180 < local_250.Data + (longlong)(int)local_244 * 0x38
            )) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        if (local_248 == local_244) {
          local_248 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x838,&local_250,(int *)&local_244);
        }
        lVar17 = (longlong)(int)local_248;
        local_248 = local_248 + 1;
        FEXRPart::FEXRPart((FEXRPart *)(local_250.Data + lVar17 * 0x38),(FEXRPart *)local_180);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_>::
        _Erase_head<std::allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>_>
                  (local_168,
                   (allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>
                    *)local_168);
        Imf_3_3::Header::~Header((Header *)local_180);
        uVar29 = uVar29 + 1;
        uVar26 = (ulonglong)(uVar30 + 1);
      } while ((int)(uVar30 + 1) < (this->Layers).ArrayNum);
      goto LAB_14de03e50;
    }
  }
LAB_14de03e59:
  iVar25 = 0;
  iVar14 = (int)uVar29;
  pFVar31 = (FEXRPart *)(local_250.Data + (longlong)iVar14 * 0x38);
  FVar21.Data = local_250.Data;
  while( true ) {
    if ((int)uVar29 != iVar14) {
      local_23f = 0;
      `TCheckedPointerIterator<FEXRImageWriteTask::FEXRPart_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_23f);
      uVar29 = (ulonglong)local_248;
    }
    uVar28 = (ulong64)iVar25;
    if ((FEXRPart *)FVar21.Data == pFVar31) break;
    iVar25 = iVar25 + (int)((FEXRPart *)FVar21.Data)->BytesWritten;
    FVar21.Data = FVar21.Data + 0x38;
  }
  if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar28);
  }
  if (local_68.ArrayMax < (longlong)uVar28) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,uVar28,&local_68.AllocatorInstance,local_68.ArrayNum,&local_68.ArrayMax);
    uVar29 = (ulonglong)local_248;
  }
  iVar14 = (int)uVar29;
  if (iVar14 == 0) {
    if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    DestructItems<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,int>
              ((TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)
               local_218.AllocatorInstance.Data,local_218.ArrayNum);
    if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.AllocatorInstance.Data);
    }
    DestructItems<FEXRImageWriteTask::FEXRPart,int>((FEXRPart *)local_250.Data,local_248);
    if ((FEXRPart *)local_250.Data != (FEXRPart *)0x0) {
      FMemory::Free(local_250.Data);
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    Imf_3_3::OStream::~OStream(&local_98);
    return false;
  }
  if (this->bMultipart == false) {
    if ((1 < iVar14) && (2 < (byte)LogMovieRenderPipelineIO._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    iVar14 = Imf_3_3::globalThreadCount();
    if (((int)local_248 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    Imf_3_3::OutputFile::OutputFile(&local_140,&local_98,(Header *)local_250.Data,iVar14);
    if (((int)local_248 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    Imf_3_3::OutputFile::setFrameBuffer(&local_140,(FrameBuffer *)(local_250.Data + 0x18));
    if (((int)local_248 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    Imf_3_3::OutputFile::writePixels(&local_140,*(int *)(local_250.Data + 0x28));
    Imf_3_3::OutputFile::~OutputFile(&local_140);
  }
  else {
    uVar26 = 0;
    local_238.Data = (FScriptContainerElement *)0x0;
    local_230 = 0;
    pFVar31 = (FEXRPart *)(local_250.Data + (longlong)iVar14 * 0x38);
    FVar21.Data = local_250.Data;
    while( true ) {
      if ((int)uVar29 != iVar14) {
        local_23e[0] = 0;
        `TCheckedPointerIterator<FEXRImageWriteTask::FEXRPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_23e);
      }
      FVar9.Data = local_238.Data;
      if ((FEXRPart *)FVar21.Data == pFVar31) break;
      Imf_3_3::Header::Header(&local_130,(Header *)FVar21.Data);
      if (((local_238.Data <= &local_130) &&
          (&local_130 < (Header *)(local_238.Data + (longlong)local_230._4_4_ * 0x18))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar25 = (int)local_230;
      if ((int)local_230 == local_230._4_4_) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_238,(int *)((longlong)&local_230 + 4));
      }
      local_230 = CONCAT44(local_230._4_4_,iVar25 + 1);
      Imf_3_3::Header::Header((Header *)(local_238.Data + (longlong)iVar25 * 0x18),&local_130);
      Imf_3_3::Header::~Header(&local_130);
      FVar21.Data = FVar21.Data + 0x38;
      uVar29 = (ulonglong)local_248;
    }
    iVar14 = (int)local_230;
    iVar25 = Imf_3_3::globalThreadCount();
    Imf_3_3::MultiPartOutputFile::MultiPartOutputFile
              (&local_d0,&local_98,(Header *)FVar9.Data,iVar14,false,iVar25);
    uVar29 = uVar26;
    if (0 < (int)local_248) {
      do {
        uVar27 = (uint)uVar29;
        uVar30 = 0;
        if ((int)uVar27 < (int)local_248) {
          uVar30 = ~uVar27 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        FVar21.Data = local_250.Data;
        Imf_3_3::OutputPart::OutputPart(&local_198,&local_d0,uVar27);
        Imf_3_3::OutputPart::setFrameBuffer(&local_198,(FrameBuffer *)(FVar21.Data + uVar26 + 0x18))
        ;
        Imf_3_3::OutputPart::writePixels(&local_198,*(int *)(FVar21.Data + uVar26 + 0x28));
        uVar26 = uVar26 + 0x38;
        uVar29 = (ulonglong)(uVar27 + 1);
      } while ((int)(uVar27 + 1) < (int)local_248);
    }
    Imf_3_3::MultiPartOutputFile::~MultiPartOutputFile(&local_d0);
    DestructItems<Imf_3_3::Header,int>((Header *)local_238.Data,(int)local_230);
    if ((Header *)local_238.Data != (Header *)0x0) {
      FMemory::Free(local_238.Data);
    }
  }
  bVar10 = false;
  if ((char)uVar20 != '\0') {
    pIVar16 = IFileManager::Get();
    if ((this->Filename).Data.ArrayNum == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
    }
    bVar10 = FFileHelper::SaveArrayToFile(&local_68,pwVar23,pIVar16,0);
  }
  DestructItems<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,int>
            ((TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)
             local_218.AllocatorInstance.Data,local_218.ArrayNum);
  if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.AllocatorInstance.Data);
  }
  DestructItems<FEXRImageWriteTask::FEXRPart,int>((FEXRPart *)local_250.Data,local_248);
  if ((FEXRPart *)local_250.Data != (FEXRPart *)0x0) {
    FMemory::Free(local_250.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  Imf_3_3::OStream::~OStream(&local_98);
  if (bVar10 != false) {
    return bVar10;
  }
LAB_14de0437b:
  if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
  }
  return false;
}

// operator() @ 15058faa0

bool __thiscall
`FEXRImageWriteTask::GenerateFilePartsForResolution'::__l9::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5152801706735567042>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5152801706735567042>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058fba0

bool __thiscall
`FEXRImageWriteTask::GenerateFilePartsForResolution'::__l23::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5152801706735567060>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5152801706735567060>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

