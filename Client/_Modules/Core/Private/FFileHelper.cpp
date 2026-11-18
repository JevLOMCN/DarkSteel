// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 23

// operator() @ 1418c2e70

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
`FFileHelper::LoadFileToString'::__l5::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  undefined8 uVar1;
  bool bVar2;
  IFileHandle *pIVar3;
  long64 lVar4;
  FArchiveFileReaderGeneric local_f8;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pIVar3 = (IFileHandle *)
           (**(code **)(**(longlong **)this + 0xe8))
                     (*(longlong **)this,*(undefined8 *)((longlong)this + 8),0);
  if (pIVar3 == (IFileHandle *)0x0) {
    if ((*(byte *)((longlong)this + 0x14) & 1) != 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    if (((*(byte *)((longlong)this + 0x14) & 2) == 0) && (2 < (byte)LogStreaming._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
  }
  else {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x50))(pIVar3);
    FArchiveFileReaderGeneric::FArchiveFileReaderGeneric
              (&local_f8,pIVar3,*(wchar_t **)((longlong)this + 8),lVar4,0x400,0);
    uVar1 = *(undefined8 *)((longlong)this + 0x18);
    bVar2 = FFileHelper::LoadFileToString
                      (__return_storage_ptr__,(FArchive *)&local_f8,
                       *(EHashOptions *)((longlong)this + 0x10));
    *(bool *)uVar1 = bVar2;
    FArchiveFileReaderGeneric::~FArchiveFileReaderGeneric(&local_f8);
  }
  return __return_storage_ptr__;
}

// BufferToString @ 1418c95a0

void __cdecl FFileHelper::BufferToString(FString *param_1,uchar *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  undefined2 local_res8 [4];
  short local_res18 [4];
  short local_res20 [4];
  undefined2 local_48 [8];
  
  uVar8 = 0;
  piVar11 = &(param_1->Data).ArrayMax;
  piVar1 = &(param_1->Data).ArrayNum;
  *piVar1 = 0;
  if (*piVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)param_1,0,piVar11);
  }
  bVar5 = false;
  if ((param_3 < 2) || ((param_3 & 1U) != 0)) {
LAB_1418c981a:
    if ((2 < param_3) && (((*param_2 == 0xef && (param_2[1] == 0xbb)) && (param_2[2] == 0xbf)))) {
      param_2 = param_2 + 3;
      param_3 = param_3 + -3;
    }
    uVar7 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_2,param_3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7 + 1,(ForAnyElementType *)param_1,piVar1,piVar11);
    UE::Core::Private::Convert
              ((wchar_t *)(param_1->Data).AllocatorInstance.Data,*piVar1,param_2,param_3);
    uVar8 = 0;
    if ((int)uVar7 < *piVar1) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 2) = 0;
  }
  else {
    if ((*param_2 == 0xff) && (param_2[1] == 0xfe)) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(uint)param_3 >> 1,(ForAnyElementType *)param_1,piVar1,piVar11);
      iVar2 = ((uint)param_3 >> 1) - 1;
      if (0 < iVar2) {
        pbVar10 = param_2;
        do {
          pbVar9 = pbVar10 + 2;
          local_res18[0] = (ushort)pbVar10[3] * 0x100 + (ushort)*pbVar9;
          FGenericPlatformString::Memcpy(local_res8,local_res18,2);
          uVar4 = local_res8[0];
          uVar7 = 0;
          if ((int)uVar8 < *piVar1) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          uVar8 = uVar8 + 1;
          *(undefined2 *)
           (pbVar9 + (longlong)((param_1->Data).AllocatorInstance.Data + (-2 - (longlong)param_2)))
               = uVar4;
          pbVar10 = pbVar9;
        } while ((int)uVar8 < iVar2);
        bVar5 = true;
        goto LAB_1418c98ca;
      }
    }
    else {
      if ((*param_2 != 0xfe) || (param_2[1] != 0xff)) goto LAB_1418c981a;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(uint)param_3 >> 1,(ForAnyElementType *)param_1,piVar1,piVar11);
      iVar2 = ((uint)param_3 >> 1) - 1;
      if (0 < iVar2) {
        pbVar10 = param_2 + 3;
        do {
          local_res20[0] = (ushort)pbVar10[-1] * 0x100 + (ushort)*pbVar10;
          FGenericPlatformString::Memcpy(local_48,local_res20,2);
          uVar4 = local_48[0];
          uVar7 = 0;
          if ((int)uVar8 < *piVar1) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          uVar8 = uVar8 + 1;
          *(undefined2 *)
           (pbVar10 + (longlong)((param_1->Data).AllocatorInstance.Data + (-3 - (longlong)param_2)))
               = uVar4;
          pbVar10 = pbVar10 + 2;
        } while ((int)uVar8 < iVar2);
      }
    }
    bVar5 = true;
  }
LAB_1418c98ca:
  piVar11 = &(param_1->Data).ArrayMax;
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    *piVar1 = 0;
    if (*piVar11 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,(ForAnyElementType *)param_1,0,piVar11);
      return;
    }
  }
  else {
    uVar8 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar8 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((param_1->Data).AllocatorInstance.Data + (longlong)*piVar1 * 2 + -2) = 0;
    if (bVar5) {
      StringConv::InlineCombineSurrogates(param_1);
    }
  }
  return;
}

// CreateBitmap @ 1418d31f0

/* WARNING: Enum "EChannelMask": Some values do not have unique names */

bool __cdecl
FFileHelper::CreateBitmap
          (wchar_t *param_1,int param_2,int param_3,FColor *param_4,TIntRect<int> *param_5,
          IFileManager *param_6,FString *param_7,bool param_8,EChannelMask param_9)

{
  bool bVar1;
  EColorChannel EVar2;
  
  EVar2 = All;
  if (param_9 != A) {
    if (param_9 == B) {
      EVar2 = B;
    }
    else if (param_9 == G) {
      EVar2 = G;
    }
    else if (param_9 == R) {
      EVar2 = R;
    }
    else if (param_9 == A) {
      EVar2 = A;
    }
  }
  bVar1 = CreateBitmap(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,EVar2);
  return bVar1;
}

// CreateBitmap @ 1418d3250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FFileHelper::CreateBitmap
          (wchar_t *param_1,int param_2,int param_3,FColor *param_4,TIntRect<int> *param_5,
          IFileManager *param_6,FString *param_7,bool param_8,EColorChannel param_9)

{
  FColor *pFVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uchar *puVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_148 [32];
  uchar local_128 [4];
  int local_124;
  int local_120;
  FString local_118;
  uint local_108;
  uint local_104;
  FString local_100;
  FColor *local_f0;
  TIntRect<int>_u_0 local_e8;
  FString local_d8;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined2 local_bc;
  short local_ba;
  uint local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_e8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  if ((param_5 == (TIntRect<int> *)0x0) ||
     ((*(int *)((longlong)&param_5->field0_0x0 + 0xc) - *(int *)((longlong)&param_5->field0_0x0 + 4)
      ) * (*(int *)((longlong)&param_5->field0_0x0 + 8) - *(int *)&param_5->field0_0x0) == 0)) {
    param_5 = (TIntRect<int> *)&local_e8;
  }
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_120 = param_2;
  local_f0 = param_4;
  local_e8._8_4_ = param_2;
  local_e8._12_4_ = param_3;
  ::FString::FString(&local_d8,param_1);
  pFVar5 = FPaths::GetExtension(&local_100,&local_d8,false);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"bmp");
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  pvVar2 = (void *)CONCAT26(local_d8.Data.AllocatorInstance.Data._6_2_,
                            CONCAT42(local_d8.Data.AllocatorInstance.Data._2_4_,
                                     local_d8.Data.AllocatorInstance.Data._0_2_));
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  if (iVar4 == 0) {
    ::FString::operator=(&local_118,param_1);
LAB_1418d33c5:
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar8.Data = local_118.Data.AllocatorInstance.Data;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*param_6 + 0x20))(param_6,FVar8.Data,0);
    if (plVar6 != (longlong *)0x0) {
      iVar13 = (((TIntPoint<int> *)((longlong)param_5 + 8))->field0_0x0)._s_0.X -
               (((TIntRect<int>_u_0_s_0 *)param_5)->Min).field0_0x0._s_0.X;
      iVar14 = (((TIntRect<int>_u_0_s_0 *)param_5)->Max).field0_0x0._s_0.Y -
               (((TIntRect<int>_u_0_s_0 *)param_5)->Min).field0_0x0._s_0.Y;
      local_104 = (param_8 + 3) * iVar13;
      local_108 = local_104 + 3 & 0xfffffffc;
      iVar4 = 0x28;
      if (param_8) {
        iVar4 = 0x6c;
      }
      local_d8.Data.AllocatorInstance.Data._0_2_ = 0x4d42;
      iVar9 = iVar14 * local_108;
      local_d8.Data.AllocatorInstance.Data._2_4_ = iVar4 + 0xe + iVar9;
      local_d8.Data.AllocatorInstance.Data._6_2_ = 0;
      local_d8.Data.ArrayNum._0_2_ = 0;
      local_d8.Data._10_4_ = iVar4 + 0xe;
      (**(code **)(*plVar6 + 0x188))(plVar6,&local_d8,0xe);
      local_bc = 1;
      local_ba = (short)(param_8 + 3) << 3;
      local_b8 = -(uint)param_8 & 3;
      local_b0 = 0;
      local_a8 = 0;
      local_c8 = iVar4;
      local_c4 = iVar13;
      local_c0 = iVar14;
      local_b4 = iVar9;
      (**(code **)(*plVar6 + 0x188))(plVar6,&local_c8,0x28);
      if (param_8) {
        local_98 = 0xff0000;
        local_94 = 0xff00;
        local_90 = 0xff;
        local_8c = 0xff000000;
        local_88 = 0x57696e20;
        local_60 = 0;
        local_58 = 0;
        (**(code **)(*plVar6 + 0x188))(plVar6,&local_98,0x44);
      }
      local_124 = (((TIntRect<int>_u_0_s_0 *)param_5)->Max).field0_0x0._s_0.Y + -1;
      if ((((TIntRect<int>_u_0_s_0 *)param_5)->Min).field0_0x0._s_0.Y <= local_124) {
        iVar4 = local_120 * local_124;
        do {
          iVar13 = (((TIntRect<int>_u_0_s_0 *)param_5)->Min).field0_0x0._s_0.X;
          uVar11 = (ulonglong)iVar13;
          if (iVar13 < (((TIntPoint<int> *)((longlong)param_5 + 8))->field0_0x0)._s_0.X) {
            puVar12 = &local_f0[(longlong)iVar4 + uVar11].field0_0x0._s_0.G;
            do {
              if (param_9 == All) {
                pFVar1 = local_f0 + (iVar4 + (int)uVar11);
                (**(code **)(*plVar6 + 0x188))(plVar6,pFVar1,1);
                (**(code **)(*plVar6 + 0x188))
                          (plVar6,(undefined1 *)((longlong)&pFVar1->field0_0x0 + 1),1);
                (**(code **)(*plVar6 + 0x188))
                          (plVar6,(undefined1 *)((longlong)&pFVar1->field0_0x0 + 2),1);
                if (param_8) {
                  (**(code **)(*plVar6 + 0x188))
                            (plVar6,(undefined1 *)((longlong)&pFVar1->field0_0x0 + 3),1);
                }
              }
              else {
                local_128[1] = 0xff;
                local_128[0] = '\0';
                if (param_9 == R) {
                  local_128[0] = puVar12[1];
                }
                else if (param_9 == G) {
                  local_128[0] = *puVar12;
                }
                else if (param_9 == B) {
                  local_128[0] = ((FColor_u_0_s_0 *)(puVar12 + -1))->B;
                }
                else if (param_9 == A) {
                  local_128[0] = puVar12[2];
                }
                (**(code **)(*plVar6 + 0x188))(plVar6,local_128,1);
                (**(code **)(*plVar6 + 0x188))(plVar6,local_128,1);
                (**(code **)(*plVar6 + 0x188))(plVar6,local_128,1);
                if (param_8) {
                  (**(code **)(*plVar6 + 0x188))(plVar6,local_128 + 1,1);
                }
              }
              uVar10 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
              puVar12 = puVar12 + 4;
            } while ((int)uVar10 < (((TIntPoint<int> *)((longlong)param_5 + 8))->field0_0x0)._s_0.X)
            ;
          }
          if (local_104 < local_108) {
            uVar11 = (ulonglong)(local_108 - local_104);
            do {
              local_128[1] = 0;
              (**(code **)(*plVar6 + 0x188))(plVar6,local_128 + 1,1);
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          iVar4 = iVar4 - local_120;
          local_124 = local_124 + -1;
        } while ((((TIntRect<int>_u_0_s_0 *)param_5)->Min).field0_0x0._s_0.Y <= local_124);
      }
      (**(code **)*plVar6)(plVar6,1);
      ::FString::FString(&local_100,L"UE_PROFILER!BUGIT:");
      SendDataToPCViaUnrealConsole(&local_100,&local_118);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
      goto LAB_1418d3724;
    }
  }
  else {
    ::FString::FString(&local_100,L"bmp");
    ::FString::FString(&local_d8,param_1);
    bVar3 = GenerateNextBitmapFilename(&local_d8,&local_100,&local_118,param_6);
    pvVar2 = (void *)CONCAT26(local_d8.Data.AllocatorInstance.Data._6_2_,
                              CONCAT42(local_d8.Data.AllocatorInstance.Data._2_4_,
                                       local_d8.Data.AllocatorInstance.Data._0_2_));
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      if (param_7 != (FString *)0x0) {
        iVar4 = local_118.Data.ArrayNum + -1;
        if (local_118.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        ::FString::AssignRange(param_7,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar4);
      }
      goto LAB_1418d33c5;
    }
  }
  bVar3 = false;
LAB_1418d3724:
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GenerateDateTimeBasedBitmapFilename @ 1418dbbe0

void __cdecl
FFileHelper::GenerateDateTimeBasedBitmapFilename(FString *param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  FDateTime local_78;
  FString local_70;
  FString local_60;
  FString local_50 [2];
  
  ::FString::FString(&local_70,"");
  if (param_3 != &local_70) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    (param_3->Data).ArrayNum = local_70.Data.ArrayNum;
    (param_3->Data).ArrayMax = local_70.Data.ArrayMax;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  FWindowsPlatformTime::SystemTime
            (&local_80,&local_84,&local_7c,&local_88,local_res20,local_res18,local_res10,local_res8)
  ;
  FDateTime::FDateTime
            (&local_78,local_80,local_84,local_88,local_res20[0],local_res18[0],local_res10[0],
             local_res8[0]);
  FDateTime::ToString(&local_78,local_50,L"%Y.%m.%d-%H.%M.%S");
  ::FString::PrintfImpl(&local_60,L"%s_%s.%s");
  if (param_3 != &local_60) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    (param_3->Data).ArrayNum = local_60.Data.ArrayNum;
    (param_3->Data).ArrayMax = local_60.Data.ArrayMax;
    local_60.Data.ArrayNum = 0;
    local_60.Data.ArrayMax = 0;
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
  }
  return;
}

// GenerateNextBitmapFilename @ 1418dbd80

bool __cdecl
FFileHelper::GenerateNextBitmapFilename
          (FString *param_1,FString *param_2,FString *param_3,IFileManager *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  ForAnyElementType FVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  bool bVar8;
  FString local_48;
  FString local_38;
  
  ::FString::FString(&local_48,"");
  iVar5 = 0;
  if (param_3 != &local_48) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (param_3->Data).ArrayNum = local_48.Data.ArrayNum;
    (param_3->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  bVar8 = false;
  ::FString::PrintfImpl(&local_38,L"%s%05i.%s");
  FVar6.Data = local_38.Data.AllocatorInstance.Data;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*param_4 + 0x50))(param_4,FVar4.Data);
  if (cVar3 != '\0') {
    iVar5 = LastScreenShotIndex + 1;
  }
  do {
    if (99999 < iVar5) {
LAB_1418dbf36:
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      return bVar8;
    }
    ::FString::PrintfImpl(&local_38,L"%s%05i.%s");
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = local_38.Data.ArrayNum;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
    if (iVar2 != 0) {
      FVar4.Data = FVar6.Data;
    }
    cVar3 = (**(code **)((longlong)*param_4 + 0x50))(param_4,FVar4.Data);
    if (cVar3 == '\0') {
      iVar7 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar7 = 0;
      }
      LastScreenShotIndex = iVar5;
      ::FString::AssignRange(param_3,(wchar_t *)FVar6.Data,iVar7);
      bVar8 = true;
      goto LAB_1418dbf36;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

// IsFilenameValidForSaving @ 1418e2d10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl FFileHelper::IsFilenameValidForSaving(FString *param_1,FText *param_2)

{
  int iVar1;
  int iVar2;
  FName *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FCulture *pFVar9;
  ForAnyElementType FVar10;
  wchar_t **ppwVar11;
  bool bVar12;
  bool bVar13;
  FName local_res18 [2];
  FString local_b8;
  TSharedPtr<FCulture,1> local_a8;
  TSharedPtr<FCulture,1> local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  bVar12 = false;
  FPaths::GetBaseFilename(&local_b8,param_1,true);
  iVar2 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (iVar2 < 1) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"FileHelper",L"Error_FilenameIsTooShort",
                        L"Please provide a filename for the asset.");
    FText::operator=(param_2,pFVar4);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  else {
    iVar1 = FWindowsPlatformMisc::GetMaxPathLength();
    if (iVar1 < iVar2) {
      pFVar4 = FText::FromString(&local_68,&local_b8);
      local_98.Object = (FCulture *)0x0;
      local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      iVar2 = FWindowsPlatformMisc::GetMaxPathLength();
      pFVar5 = FText::AsNumber(&local_58,iVar2,(FNumberFormattingOptions *)0x0,&local_98);
      local_a8.Object = (FCulture *)0x0;
      local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      iVar2 = local_b8.Data.ArrayNum + -1;
      if (local_b8.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      pFVar7 = FText::AsNumber(&local_48,iVar2,(FNumberFormattingOptions *)0x0,&local_a8);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"UnrealEd",L"Error_FilenameIsTooLongForCooking",
                          L"Filename is too long ({0} characters); this may interfere with cooking for consoles. Unreal filenames should be no longer than {1} characters. Filename value: {2}"
                         );
      pFVar6 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
      pFVar4 = FText::Format<FText,FText,FText>(&local_78,pFVar6,pFVar7,pFVar5,pFVar4);
      FText::operator=(param_2,pFVar4);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
    else {
      bVar12 = true;
      ppwVar11 = InvalidFilenames;
      do {
        ::FString::FString((FString *)&local_a8,*ppwVar11);
        iVar2 = local_b8.Data.ArrayNum;
        if (iVar2 == (int)local_a8.SharedReferenceCount.ReferenceController) {
          if (iVar2 < 2) {
            bVar13 = true;
          }
          else {
            iVar1 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_b8.Data.AllocatorInstance.Data,
                               (wchar_t *)local_a8.Object);
            iVar2 = local_b8.Data.ArrayNum;
            bVar13 = iVar1 == 0;
          }
        }
        else {
          bVar13 = (int)local_a8.SharedReferenceCount.ReferenceController + iVar2 == 1;
        }
        if (local_a8.Object != (FCulture *)0x0) {
          FMemory::Free(local_a8.Object);
          iVar2 = local_b8.Data.ArrayNum;
        }
        if (bVar13) {
          pFVar4 = FText::AsLocalizable_Advanced_LocText
                             ((FText *)&local_98,L"UnrealEd",L"Error_InvalidFilename",
                              L"A file/folder may not match any of the following : \nCON, PRN, AUX, CLOCK$, NUL, NONE, \nCOM1, COM2, COM3, COM4, COM5, COM6, COM7, COM8, COM9, \nLPT1, LPT2, LPT3, LPT4, LPT5, LPT6, LPT7, LPT8, or LPT9."
                             );
          FText::operator=(param_2,pFVar4);
          pFVar9 = local_98.Object;
          goto LAB_1418e2f82;
        }
        ppwVar11 = ppwVar11 + 1;
      } while (ppwVar11 != FDateTime::ShortDayNames);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (iVar2 != 0) {
        FVar10.Data = local_b8.Data.AllocatorInstance.Data;
      }
      pFVar3 = ::FName::FName(local_res18,(wchar_t *)FVar10.Data);
      if (*pFVar3 == (FName)0x0) {
        pFVar4 = FText::FromString(&local_88,&local_b8);
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_a8,L"UnrealEd",L"Error_NoneFilename",
                            L"Filename \'{0}\' resolves to \'None\' and cannot be used");
        pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_78,pFVar5,Default);
        pFVar4 = FText::Format<FText>((FText *)&local_98,pFVar6,pFVar4);
        FText::operator=(param_2,pFVar4);
        pFVar9 = local_a8.Object;
        if (local_98.Object != (FCulture *)0x0) {
          (**(code **)((((local_98.Object)->Implementation).Ptr)->ICULocale).language)();
          pFVar9 = local_a8.Object;
        }
LAB_1418e2f82:
        if (pFVar9 != (FCulture *)0x0) {
          (**(code **)(((pFVar9->Implementation).Ptr)->ICULocale).language)();
        }
        bVar12 = false;
      }
      else {
        iVar2 = ::FString::Find(&local_b8,L".",1,CaseSensitive,FromEnd,-1);
        if ((iVar2 != -1) ||
           (iVar2 = ::FString::Find(&local_b8,L":",1,CaseSensitive,FromEnd,-1), iVar2 != -1)) {
          bVar12 = false;
          pFVar4 = FText::FromString(&local_88,&local_b8);
          pFVar5 = FText::AsLocalizable_Advanced_LocText
                             ((FText *)&local_a8,L"UnrealEd",L"Error_FilenameDisallowed",
                              L"Filename \'{0}\' is disallowed.");
          pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_78,pFVar5,Default);
          pFVar4 = FText::Format<FText>((FText *)&local_98,pFVar6,pFVar4);
          FText::operator=(param_2,pFVar4);
          if (local_98.Object != (FCulture *)0x0) {
            (**(code **)((((local_98.Object)->Implementation).Ptr)->ICULocale).language)();
          }
          if (local_a8.Object != (FCulture *)0x0) {
            (**(code **)((((local_a8.Object)->Implementation).Ptr)->ICULocale).language)();
          }
        }
      }
    }
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return bVar12;
}

// LoadANSITextFileToStrings @ 1418e4990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FFileHelper::LoadANSITextFileToStrings
          (wchar_t *param_1,IFileManager *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  size_t sVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStackY_208 [32];
  FScriptContainerElement local_1b8 [8];
  ForAnyElementType local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  FString local_198;
  FString local_188;
  FScriptContainerElement *local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  ::FString::FString(&local_198,param_1);
  local_1a0 = local_198.Data.ArrayNum;
  FVar10.Data = local_198.Data.AllocatorInstance.Data;
  bVar14 = local_198.Data.ArrayNum != 0;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (bVar14) {
    FVar9.Data = FVar10.Data;
  }
  local_178 = FVar10.Data;
  NotifyLoadingStateChanged(true,(wchar_t *)FVar9.Data);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (param_2 == (IFileManager *)0x0) {
    param_2 = IFileManager::Get();
  }
  plVar6 = (longlong *)(**(code **)((longlong)*param_2 + 0x18))(param_2,param_1,0);
  if (plVar6 == (longlong *)0x0) {
    if (2 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    bVar14 = false;
  }
  else {
    iVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a4 = 0;
    uVar13 = iVar5 + 1;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    local_1a8 = 0;
    if (uVar13 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar13,&local_1b0,0,&local_1a4);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,&local_1b0,&local_1a8,&local_1a4);
    (**(code **)(*plVar6 + 0x188))(plVar6,local_1b0.Data,(longlong)iVar5);
    local_1b8[0] = (FScriptContainerElement)0x0;
    if (((local_1b0.Data <= local_1b8) && (local_1b8 < local_1b0.Data + local_1a4)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
    if (local_1a8 == local_1a4) {
      local_1a8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&local_1b0,&local_1a4);
    }
    local_1b0.Data[local_1a8] = local_1b8[0];
    local_1a8 = local_1a8 + 1;
    (**(code **)*plVar6)(plVar6);
    bVar14 = false;
    FVar10.Data = local_1b0.Data;
    do {
      FVar1 = *FVar10.Data;
      pFVar11 = FVar10.Data;
      while (((FVar1 != (FScriptContainerElement)0x0 && (FVar1 != (FScriptContainerElement)0xd)) &&
             (FVar1 != (FScriptContainerElement)0xa))) {
        pFVar12 = pFVar11 + 1;
        pFVar11 = pFVar11 + 1;
        FVar1 = *pFVar12;
      }
      if (*pFVar11 == (FScriptContainerElement)0x0) {
        bVar14 = true;
      }
      else if ((*pFVar11 == (FScriptContainerElement)0xd) &&
              (pFVar11[1] == (FScriptContainerElement)0xa)) {
        *(undefined2 *)pFVar11 = 0;
        pFVar11 = pFVar11 + 2;
      }
      else {
        *pFVar11 = (FScriptContainerElement)0x0;
        pFVar11 = pFVar11 + 1;
      }
      local_68.Data = (FScriptContainerElement *)0x0;
      if (FVar10.Data == (FScriptContainerElement *)0x0) {
        local_60 = (FScriptContainerElement *)0x0;
        local_58 = 0;
      }
      else {
        sVar7 = strlen((char *)FVar10.Data);
        local_58 = (int)sVar7;
        uVar13 = local_58 + 1;
        FVar9.Data = (FScriptContainerElement *)0x0;
        if (0x80 < uVar13) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar13,2)
          ;
          FVar9.Data = local_68.Data;
        }
        local_60 = local_168;
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          local_60 = FVar9.Data;
        }
        pwVar8 = FGenericPlatformString::Convert<char,wchar_t>
                           ((wchar_t *)local_60,uVar13,(char *)FVar10.Data,uVar13);
        if ((pwVar8 == (wchar_t *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar3 = (*pcVar2)();
          return (bool)uVar3;
        }
      }
      ::FString::FString(&local_188,(wchar_t *)local_60);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      pFVar12 = (param_3->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_188) &&
          ((FScriptContainerElement *)&local_188 < pFVar12 + (longlong)param_3->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      FVar10.Data = local_188.Data.AllocatorInstance.Data;
      pFVar12 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      param_3->ArrayNum = iVar5 + 1;
      *(FScriptContainerElement **)&pFVar12->field_0x0 = (FScriptContainerElement *)0x0;
      iVar5 = local_188.Data.ArrayNum;
      *(int *)&pFVar12[8].field_0x0 = iVar5;
      if (iVar5 == 0) {
        *(int *)(pFVar12 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,(ForAnyElementType *)pFVar12,iVar5,(int *)(pFVar12 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar12->field_0x0,FVar10.Data,(longlong)iVar5 * 2);
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      FVar10.Data = pFVar11;
    } while (!bVar14);
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    bVar14 = true;
    FVar10.Data = local_178;
  }
  pFVar11 = (FScriptContainerElement *)L"";
  if (local_1a0 != 0) {
    pFVar11 = FVar10.Data;
  }
  NotifyLoadingStateChanged(false,(wchar_t *)pFVar11);
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return bVar14;
}

// LoadFileInBlocks @ 1418e5c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FFileHelper::LoadFileInBlocks
          (TStringView<wchar_t> *param_1,
          TFunctionRef<void___cdecl(TMemoryView<void_const_>)> *param_2,long64 param_3,
          long64 param_4,uint param_5,long64 param_6)

{
  code *pcVar1;
  bool bVar2;
  IFileManager *pIVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  int iVar11;
  longlong lVar12;
  ulong64 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  ulong64 uStack_280;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  pIVar3 = IFileManager::Get();
  local_278.CurPos = local_258;
  local_288 = param_1->DataPtr;
  uStack_280 = *(ulong64 *)&param_1->Size;
  iVar11 = (int)*(undefined8 *)&param_1->Size;
  uVar9 = (ulong64)iVar11;
  local_278.Base = local_258;
  local_278.End = (wchar_t *)local_58;
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x18);
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  uVar14 = *(undefined4 *)&param_1->DataPtr;
  uVar15 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  if (local_58 < local_258 + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_278,uVar9);
    uVar14 = (undefined4)local_288;
    uVar15 = local_288._4_4_;
  }
  if (iVar11 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy
                       (local_278.CurPos,(void *)CONCAT44(uVar15,uVar14),uVar9 * 2);
    local_278.CurPos = (wchar_t *)((longlong)pvVar4 + uVar9 * 2);
  }
  if (local_278.End < local_278.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_278,1);
  }
  *local_278.CurPos = L'\0';
  plVar5 = (longlong *)(*pcVar1)(pIVar3,local_278.Base,param_5);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  if (plVar5 == (longlong *)0x0) {
LAB_1418e5e47:
    bVar2 = false;
  }
  else {
    lVar6 = (**(code **)(*plVar5 + 0x30))(plVar5);
    lVar7 = lVar6;
    if (param_3 < lVar6) {
      lVar7 = param_3;
    }
    lVar12 = 0;
    if (0 < lVar7) {
      lVar12 = lVar7;
    }
    uVar9 = lVar6 - lVar12;
    if ((-1 < param_4) && (param_4 < (longlong)uVar9)) {
      uVar9 = param_4;
    }
    if (0 < (longlong)uVar9) {
      if (0 < lVar12) {
        (**(code **)(*plVar5 + 0x1b8))(plVar5,lVar12);
      }
      if (param_6 < 1) {
        param_6 = 0x100000;
      }
      uVar13 = uVar9;
      if (param_6 < (longlong)uVar9) {
        uVar13 = param_6;
      }
      pwVar8 = operator_new__(uVar13);
      do {
        uVar10 = uVar13;
        if ((longlong)uVar9 < (longlong)uVar13) {
          uVar10 = uVar9;
        }
        (**(code **)(*plVar5 + 0x188))(plVar5,pwVar8,uVar10);
        uVar9 = uVar9 - uVar10;
        local_288 = pwVar8;
        uStack_280 = uVar10;
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_288);
      } while (0 < (longlong)uVar9);
      if ((*(byte *)((longlong)plVar5 + 0x29) & 2) != 0) {
        operator_delete__(pwVar8);
        (**(code **)*plVar5)(plVar5,1);
        goto LAB_1418e5e47;
      }
      operator_delete__(pwVar8);
    }
    (**(code **)*plVar5)(plVar5,1);
    bVar2 = true;
  }
  return bVar2;
}

// LoadFileToArray @ 1418e5e90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FFileHelper::LoadFileToArray
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,uint param_3)

{
  int *piVar1;
  ForAnyElementType FVar2;
  int iVar3;
  undefined1 uVar4;
  IFileManager *pIVar5;
  longlong *plVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  bool bVar10;
  FString local_38;
  
  ::FString::FString(&local_38,param_2);
  iVar3 = local_38.Data.ArrayNum;
  FVar2.Data = local_38.Data.AllocatorInstance.Data;
  bVar10 = local_38.Data.ArrayNum != 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (bVar10) {
    FVar8.Data = FVar2.Data;
  }
  NotifyLoadingStateChanged(true,(wchar_t *)FVar8.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pIVar5 = IFileManager::Get();
  plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,param_2,param_3);
  if (plVar6 == (longlong *)0x0) {
    if (((param_3 & 2) == 0) && (2 < (byte)LogStreaming._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      uVar4 = 0;
      goto LAB_1418e601b;
    }
  }
  else {
    lVar7 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if (lVar7 + 2 < 0x80000000) {
      uVar9 = (int)lVar7 + 2;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      piVar1 = &param_1->ArrayNum;
      *piVar1 = 0;
      if (param_1->ArrayMax < (int)uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar9,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)lVar7,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
      (**(code **)(*plVar6 + 0x188))(plVar6,(param_1->AllocatorInstance).Data,(longlong)*piVar1);
      uVar4 = (**(code **)(*plVar6 + 0x210))(plVar6);
      (**(code **)*plVar6)(plVar6,1);
      goto LAB_1418e601b;
    }
    if (((param_3 & 2) == 0) && (1 < (byte)LogStreaming._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
  }
  uVar4 = 0;
LAB_1418e601b:
  FVar8.Data = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    FVar8.Data = FVar2.Data;
  }
  NotifyLoadingStateChanged(false,(wchar_t *)FVar8.Data);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return (bool)uVar4;
}

// LoadFileToArray @ 1418e6070

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FFileHelper::LoadFileToArray
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,wchar_t *param_2,uint param_3)

{
  ulong64 uVar1;
  long64 *plVar2;
  ForAnyElementType FVar3;
  int iVar4;
  undefined1 uVar5;
  IFileManager *pIVar6;
  longlong *plVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  FString local_38;
  
  ::FString::FString(&local_38,param_2);
  iVar4 = local_38.Data.ArrayNum;
  FVar3.Data = local_38.Data.AllocatorInstance.Data;
  bVar10 = local_38.Data.ArrayNum != 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (bVar10) {
    FVar9.Data = FVar3.Data;
  }
  NotifyLoadingStateChanged(true,(wchar_t *)FVar9.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pIVar6 = IFileManager::Get();
  plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,param_2,param_3);
  if (plVar7 == (longlong *)0x0) {
    if (((param_3 & 2) == 0) && (2 < (byte)LogStreaming._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    uVar5 = 0;
  }
  else {
    lVar8 = (**(code **)(*plVar7 + 0x30))();
    uVar1 = lVar8 + 2;
    if ((longlong)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar1);
    }
    plVar2 = &param_1->ArrayNum;
    *plVar2 = 0;
    if (param_1->ArrayMax < (longlong)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar1,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,lVar8,&param_1->AllocatorInstance,plVar2,&param_1->ArrayMax);
    (**(code **)(*plVar7 + 0x188))(plVar7,(param_1->AllocatorInstance).Data,*plVar2);
    uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
    (**(code **)*plVar7)(plVar7,1);
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (iVar4 != 0) {
    FVar9.Data = FVar3.Data;
  }
  NotifyLoadingStateChanged(false,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return (bool)uVar5;
}

// LoadFileToString @ 1418e6210

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FFileHelper::LoadFileToString(FString *param_1,FArchive *param_2,EHashOptions param_3)

{
  ForAnyElementType FVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  longlong lVar6;
  uchar *puVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  bool bVar10;
  bool bVar11;
  uchar *local_128 [2];
  FString local_118;
  FBufferReaderWithSHA local_108;
  
  bVar10 = false;
  bVar11 = false;
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)param_2 + 0x18))(param_2,local_128);
  if (*(int *)(puVar4 + 1) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)*puVar4;
  }
  ::FString::FString(&local_118,pwVar9);
  iVar2 = local_118.Data.ArrayNum;
  FVar1.Data = local_118.Data.AllocatorInstance.Data;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar8.Data = FVar1.Data;
  }
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  NotifyLoadingStateChanged(true,(wchar_t *)FVar8.Data);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_128[0] != (uchar *)0x0) {
    FMemory::Free(local_128[0]);
  }
  uVar5 = (**(code **)(*(longlong *)param_2 + 0x30))(param_2);
  if (uVar5 == 0) {
    ::FString::Empty(param_1);
    bVar11 = true;
    goto LAB_1418e6477;
  }
  lVar6 = (**(code **)(*(longlong *)param_2 + 0x28))();
  if (lVar6 == 0) {
    puVar7 = FMemory::Malloc(uVar5,0);
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar7,uVar5);
    bVar11 = (bool)(~((byte)param_2->field_0x29 >> 1) & 1);
    BufferToString(param_1,puVar7,(int)uVar5);
    if ((param_3 & EnableVerify) == None) {
LAB_1418e63ae:
      bVar3 = false;
    }
    else {
      if ((param_3 & ErrorMissingHash) == None) {
        puVar4 = (undefined8 *)(**(code **)(*(longlong *)param_2 + 0x18))(param_2);
        if (*(int *)(puVar4 + 1) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)*puVar4;
        }
        bVar10 = true;
        bVar3 = FSHA1::GetFileSHAHash(pwVar9,(uchar *)0x0,true);
        if (!bVar3) goto LAB_1418e63ae;
      }
      bVar3 = true;
    }
    if ((bVar10 != false) && (local_128[0] != (uchar *)0x0)) {
      FMemory::Free(local_128[0]);
    }
    bVar10 = bVar11;
    if (bVar3) {
      puVar4 = (undefined8 *)(**(code **)(*(longlong *)param_2 + 0x18))(param_2,local_128);
      if (*(int *)(puVar4 + 1) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)*puVar4;
      }
      FArchiveState::FArchiveState((FArchiveState *)&local_108);
      local_108._padding_ = 0;
      local_108._padding_ = (longlong)&___7FBufferReaderBase__6B_;
      local_108._padding_._0_1_ = 1;
      local_108._padding_ = (longlong)puVar7;
      local_108._padding_ = uVar5;
      FArchiveState::SetIsLoading((FArchiveState *)&local_108,true);
      (**(code **)(local_108._padding_ + 0x108))(&local_108,0);
      local_108._padding_ = (longlong)&___7FBufferReaderWithSHA__6B_;
      ::FString::FString(&local_108.SourcePathname,pwVar9);
      local_108.bIsUnfoundHashAnError = true;
      if (local_128[0] != (uchar *)0x0) {
        FMemory::Free(local_128[0]);
      }
      FBufferReaderWithSHA::~FBufferReaderWithSHA(&local_108);
      goto LAB_1418e6477;
    }
  }
  else {
    if ((byte)LogStreaming._0_1_ < 3) goto LAB_1418e6477;
    (**(code **)(*(longlong *)param_2 + 0x18))(param_2,local_128);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    puVar7 = local_128[0];
    if (local_128[0] == (uchar *)0x0) goto LAB_1418e6477;
  }
  bVar11 = bVar10;
  FMemory::Free(puVar7);
LAB_1418e6477:
  FVar8.Data = (FScriptContainerElement *)L"";
  if (iVar2 != 0) {
    FVar8.Data = FVar1.Data;
  }
  NotifyLoadingStateChanged(false,(wchar_t *)FVar8.Data);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  return bVar11;
}

// LoadFileToString @ 1418e64c0

bool __cdecl
FFileHelper::LoadFileToString
          (FString *param_1,IPlatformFile *param_2,wchar_t *param_3,EHashOptions param_4,
          uint param_5)

{
  FScriptContainerElement *pFVar1;
  undefined1 local_res10 [24];
  FString local_38;
  IPlatformFile *local_28;
  wchar_t *local_20;
  EHashOptions local_18;
  uint local_14;
  undefined1 *local_10;
  
  local_res10[0] = 0;
  if (param_2 == (IPlatformFile *)0x0) {
    return false;
  }
  local_14 = param_5;
  local_10 = local_res10;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  `FFileHelper::LoadFileToString'::__l5::<lambda_1>::operator()(&local_28,&local_38);
  if (param_1 != &local_38) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return (bool)local_res10[0];
}

// LoadFileToString @ 1418e6570

bool __cdecl
FFileHelper::LoadFileToString(FString *param_1,wchar_t *param_2,EHashOptions param_3,uint param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  IFileManager *pIVar3;
  FArchive *pFVar4;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar2 = false;
  pIVar3 = IFileManager::Get();
  pFVar4 = (FArchive *)(**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,param_2,param_4);
  if (pFVar4 != (FArchive *)0x0) {
    bVar2 = LoadFileToString(&local_28,pFVar4,param_3);
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
  }
  if (param_1 != &local_28) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_28.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// LoadFileToStringArray @ 1418e6660

bool __cdecl
FFileHelper::LoadFileToStringArray
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2)

{
  bool bVar1;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FFileHelper::LoadFileToStringArray'::__l2::<lambda_1>,bool,FString_const_&>
             ::Call;
  bVar1 = LoadFileToStringArrayWithPredicate
                    (param_1,param_2,(TFunctionRef<bool___cdecl(FString_const_&)> *)&local_18);
  return bVar1;
}

// LoadFileToStringArray @ 1418e6690

bool __cdecl
FFileHelper::LoadFileToStringArray
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          EHashOptions param_3)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FFileHelper::LoadFileToStringArray'::__l2::<lambda_1>,bool,FString_const_&>
             ::Call;
  bVar1 = LoadFileToStringArrayWithPredicate
                    (param_1,param_2,(TFunctionRef<bool___cdecl(FString_const_&)> *)&local_18);
  return bVar1;
}

// LoadFileToStringArrayWithPredicate @ 1418e66c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FFileHelper::LoadFileToStringArrayWithPredicate
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          TFunctionRef<bool___cdecl(FString_const_&)> *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  wchar_t wVar6;
  int iVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  FString local_78;
  FString local_68;
  FString local_58;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_48;
  
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  local_48.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  bVar3 = LoadFileToArray(&local_48,param_2,2);
  if (!bVar3) {
LAB_1418e6bdc:
    if (local_48.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_48.AllocatorInstance.Data);
    return false;
  }
  FVar9.Data = local_48.AllocatorInstance.Data;
  uVar13 = local_48.ArrayNum;
  if ((1 < local_48.ArrayNum) && ((local_48.ArrayNum & 1U) == 0)) {
    if (*local_48.AllocatorInstance.Data == (FScriptContainerElement)0xff) {
      if ((local_48.ArrayNum < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (local_48.AllocatorInstance.Data[1] != (FScriptContainerElement)0xfe) goto LAB_1418e67c3;
LAB_1418e6855:
      if (0x7fffffff < local_48.ArrayNum) {
        if (1 < (byte)LogStreaming._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        }
        if (local_48.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_48.AllocatorInstance.Data);
        return false;
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      BufferToString(&local_58,(uchar *)local_48.AllocatorInstance.Data,(int)local_48.ArrayNum);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
      wVar6 = *(wchar_t *)FVar8.Data;
      while (wVar6 != L'\0') {
        wVar6 = *(wchar_t *)FVar8.Data;
        pFVar12 = FVar8.Data;
        do {
          if ((wVar6 == L'\r') || (wVar6 == L'\n')) break;
          wVar6 = *(wchar_t *)(pFVar12 + 2);
          pFVar12 = pFVar12 + 2;
        } while (wVar6 != L'\0');
        ::FString::ConstructFromPtrSize
                  (&local_68,(wchar_t *)FVar8.Data,
                   (int)((longlong)pFVar12 - (longlong)FVar8.Data >> 1));
        cVar5 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_68);
        if (cVar5 != '\0') {
          pFVar11 = (param_1->AllocatorInstance).Data;
          if (((pFVar11 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < pFVar11 + (longlong)param_1->ArrayMax * 0x10))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          iVar7 = param_1->ArrayNum;
          if (iVar7 == param_1->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar7 + 1;
          pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          *(undefined8 *)pFVar11 = 0;
          *(FScriptContainerElement **)pFVar11 = local_68.Data.AllocatorInstance.Data;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar11 + 8) = local_68.Data.ArrayNum;
          *(int *)(pFVar11 + 0xc) = local_68.Data.ArrayMax;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
        }
        wVar6 = *(wchar_t *)pFVar12;
        if (wVar6 == L'\r') {
          wVar6 = *(wchar_t *)(pFVar12 + 2);
          pFVar12 = pFVar12 + 2;
        }
        FVar8.Data = pFVar12 + 2;
        if (wVar6 != L'\n') {
          FVar8.Data = pFVar12;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        wVar6 = *(wchar_t *)FVar8.Data;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      goto joined_r0x0001418e6b89;
    }
LAB_1418e67c3:
    if ((local_48.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    FVar9.Data = local_48.AllocatorInstance.Data;
    uVar13 = local_48.ArrayNum;
    if (*local_48.AllocatorInstance.Data == (FScriptContainerElement)0xfe) {
      if ((local_48.ArrayNum < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      FVar9.Data = local_48.AllocatorInstance.Data;
      uVar13 = local_48.ArrayNum;
      if (local_48.AllocatorInstance.Data[1] == (FScriptContainerElement)0xff) goto LAB_1418e6855;
    }
  }
  while (pFVar12 = FVar9.Data, 0 < (longlong)uVar13) {
    do {
      if ((*pFVar12 == (FScriptContainerElement)0xd) || (*pFVar12 == (FScriptContainerElement)0xa))
      break;
      pFVar12 = pFVar12 + 1;
      uVar13 = uVar13 - 1;
    } while (0 < (longlong)uVar13);
    if (0x7fffffff < (longlong)pFVar12 - (longlong)FVar9.Data) {
      if (1 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      goto LAB_1418e6bdc;
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    BufferToString(&local_78,(uchar *)FVar9.Data,(int)pFVar12 - (int)FVar9.Data);
    cVar5 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_78);
    if (cVar5 != '\0') {
      pFVar11 = (param_1->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < pFVar11 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar11 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
    }
    FVar10 = *pFVar12;
    if (FVar10 == (FScriptContainerElement)0xd) {
      FVar10 = pFVar12[1];
      pFVar12 = pFVar12 + 1;
      uVar13 = uVar13 - 1;
    }
    FVar9.Data = pFVar12 + 1;
    uVar2 = uVar13 - 1;
    if (FVar10 != (FScriptContainerElement)0xa) {
      FVar9.Data = pFVar12;
      uVar2 = uVar13;
    }
    uVar13 = uVar2;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
joined_r0x0001418e6b89:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// LoadFileToStringArrayWithPredicate @ 1418e6c00

bool __cdecl
FFileHelper::LoadFileToStringArrayWithPredicate
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          TFunctionRef<bool___cdecl(FString_const_&)> *param_3,EHashOptions param_4)

{
  bool bVar1;
  TFunctionRef<bool___cdecl(FString_const_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  bVar1 = LoadFileToStringArrayWithPredicate(param_1,param_2,&local_18);
  return bVar1;
}

// LoadFileToStringWithLineVisitor @ 1418e6c30

bool __cdecl
FFileHelper::LoadFileToStringWithLineVisitor
          (wchar_t *param_1,TFunctionRef<void___cdecl(TStringView<wchar_t>)> *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar5;
  wchar_t *pwVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 uVar10;
  IFileManager *pIVar11;
  longlong *plVar12;
  ulonglong uVar13;
  size_t sVar14;
  TMemoryView<void> *pTVar15;
  void *pvVar16;
  ForAnyElementType FVar17;
  wchar_t *_Str;
  wchar_t *pwVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulong64 _Size;
  FScriptContainerElement *pFVar21;
  int iVar22;
  ulonglong uVar23;
  char *_Src;
  FScriptContainerElement *pFVar24;
  int local_res18;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_118 [2];
  wchar_t *local_108;
  ulonglong uStack_100;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_f8;
  longlong *local_f0;
  FString local_e8;
  ulonglong local_d8;
  ulonglong local_d0;
  FScriptContainerElement *local_c8;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TFunctionRef<void___cdecl(TStringView<wchar_t>)> local_a8;
  TFunctionRef<void___cdecl(TStringView<wchar_t>)> local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMemoryView<void> local_78;
  TMemoryView<void> local_68;
  TMemoryView<void> local_58;
  TMemoryView<void> local_48;
  
  ::FString::FString(&local_e8,param_1);
  iVar7 = local_e8.Data.ArrayNum;
  FVar4.Data = local_e8.Data.AllocatorInstance.Data;
  iVar22 = 0;
  local_c8 = local_e8.Data.AllocatorInstance.Data;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar17.Data = FVar4.Data;
  }
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  NotifyLoadingStateChanged(true,(wchar_t *)FVar17.Data);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pIVar11 = IFileManager::Get();
  plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,param_1,2);
  local_f0 = plVar12;
  if (plVar12 == (longlong *)0x0) {
    FVar17.Data = (FScriptContainerElement *)L"";
    if (iVar7 != 0) {
      FVar17.Data = FVar4.Data;
    }
    NotifyLoadingStateChanged(false,(wchar_t *)FVar17.Data);
    if (FVar4.Data == (FScriptContainerElement *)0x0) {
LAB_1418e7319:
      uVar10 = 0;
    }
    else {
      FMemory::Free(FVar4.Data);
      uVar10 = 0;
    }
  }
  else {
    uVar13 = (**(code **)(*plVar12 + 0x30))(plVar12);
    local_d8 = uVar13;
    FUniqueBuffer::Alloc((ulong64)local_118);
    TVar5.Owner = local_118[0].Owner;
    local_res18 = 0;
    if (local_118[0].Owner == (FBufferOwner *)0x0) {
      uVar19 = 0;
    }
    else {
      if (((ulonglong)(local_118[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((local_118[0].Owner)->_padding_ + 8))(local_118[0].Owner);
      }
      uVar19 = (TVar5.Owner)->Size;
    }
    TVar5.Owner = local_118[0].Owner;
    if (local_118[0].Owner == (FBufferOwner *)0x0) {
      pvVar16 = (void *)0x0;
      uVar20 = local_d8;
    }
    else {
      if (((ulonglong)(local_118[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((local_118[0].Owner)->_padding_ + 8))(local_118[0].Owner);
      }
      pvVar16 = (TVar5.Owner)->Data;
      uVar20 = local_d8;
    }
    while (0 < (longlong)uVar20) {
      uVar20 = uVar13;
      if (uVar19 < uVar13) {
        uVar20 = uVar19;
      }
      (**(code **)(*plVar12 + 0x188))(plVar12,pvVar16,uVar20);
      TVar5.Owner = local_118[0].Owner;
      uVar13 = uVar13 - uVar20;
      local_d0 = uVar13;
      if (local_118[0].Owner == (FBufferOwner *)0x0) {
        uVar23 = 0;
      }
      else {
        if (((ulonglong)(local_118[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
          (**(code **)((local_118[0].Owner)->_padding_ + 8))(local_118[0].Owner);
        }
        uVar23 = (TVar5.Owner)->Size;
      }
      TVar5.Owner = local_118[0].Owner;
      if (local_118[0].Owner == (FBufferOwner *)0x0) {
        local_108 = (wchar_t *)0x0;
      }
      else {
        if (((ulonglong)(local_118[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
          (**(code **)((local_118[0].Owner)->_padding_ + 8))(local_118[0].Owner);
        }
        local_108 = (TVar5.Owner)->Data;
      }
      uVar8 = local_d0;
      uStack_100 = uVar19 - uVar20;
      if (uVar23 < uVar19 - uVar20) {
        uStack_100 = uVar23;
      }
      uStack_100 = uVar23 - uStack_100;
      if (iVar22 != 0) goto LAB_1418e6ebd;
      if (((local_d8 & 1) == 0) && (1 < uStack_100)) {
        if ((char)*local_108 == -1) {
          if (*(char *)((longlong)local_108 + 1) != -2) goto LAB_1418e6e7d;
          local_108 = local_108 + 1;
          iVar22 = 3;
          uStack_100 = uStack_100 - 2;
          local_res18 = iVar22;
        }
        else {
          if (((char)*local_108 != -2) || (*(char *)((longlong)local_108 + 1) != -1))
          goto LAB_1418e6e7d;
          iVar22 = 2;
          uVar19 = 2;
          if (uStack_100 < 2) {
            uVar19 = uStack_100;
          }
          local_108 = (wchar_t *)((longlong)local_108 + uVar19);
          uStack_100 = uStack_100 - uVar19;
          local_res18 = iVar22;
        }
      }
      else {
LAB_1418e6e7d:
        if ((((2 < uStack_100) && ((char)*local_108 == -0x11)) &&
            (*(char *)((longlong)local_108 + 1) == -0x45)) && ((char)local_108[1] == -0x41)) {
          uVar19 = 3;
          if (uStack_100 < 3) {
            uVar19 = uStack_100;
          }
          local_108 = (wchar_t *)((longlong)local_108 + uVar19);
          uStack_100 = uStack_100 - uVar19;
        }
        iVar22 = 1;
        local_res18 = iVar22;
      }
LAB_1418e6ebd:
      uVar19 = uStack_100;
      pwVar6 = local_108;
      if (iVar22 == 1) {
        local_68.Data = local_108;
        local_68.Size = uStack_100;
        local_98._0_8_ = *(undefined8 *)param_2;
        local_98._8_8_ = *(undefined8 *)&param_2->field_0x8;
        pTVar15 = UE::FileHelper::Private::ParseLinesUTF8(&local_48,&local_68,&local_98,uVar13 == 0)
        ;
LAB_1418e7065:
        _Src = pTVar15->Data;
        uStack_100 = pTVar15->Size;
        _Size = pTVar15->Size;
      }
      else {
        if (iVar22 == 2) {
          local_78.Data = local_108;
          local_78.Size = uStack_100;
          local_a8._0_8_ = *(undefined8 *)param_2;
          local_a8._8_8_ = *(undefined8 *)&param_2->field_0x8;
          pTVar15 = UE::FileHelper::Private::ParseLinesUTF16BE
                              (&local_58,&local_78,&local_a8,uVar13 == 0);
          goto LAB_1418e7065;
        }
        if (iVar22 != 3) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FileHelper.cpp"
                             ,0x25f,L"");
          if (bVar9) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return (bool)uVar10;
          }
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_118);
          (**(code **)*local_f0)(local_f0,1);
          pFVar24 = local_c8;
          pFVar21 = (FScriptContainerElement *)L"";
          if (iVar7 != 0) {
            pFVar21 = local_c8;
          }
          NotifyLoadingStateChanged(false,(wchar_t *)pFVar21);
          if (pFVar24 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar24);
          }
          goto LAB_1418e7319;
        }
        pwVar1 = (wchar_t *)(uStack_100 + (longlong)local_108);
        pcVar2 = *(code **)param_2;
        uVar3 = *(undefined8 *)&param_2->field_0x8;
        pwVar18 = local_108;
        _Str = local_108;
        if (local_108 < pwVar1) {
LAB_1418e6f03:
          do {
            if ((*pwVar18 != L'\r') && (*pwVar18 != L'\n')) {
              pwVar18 = pwVar18 + 1;
              if (pwVar18 < pwVar1) goto LAB_1418e6f03;
            }
            if ((uVar8 != 0) &&
               ((pwVar18 == pwVar1 || ((pwVar18 + 1 == pwVar1 && (*pwVar18 == L'\r')))))) {
              _Size = ((longlong)pwVar1 - (longlong)_Str >> 1) * 2;
              if (uVar19 < _Size) {
                _Size = uVar19;
              }
              uVar19 = uVar19 - _Size;
              goto LAB_1418e6fc4;
            }
            iVar22 = (int)((longlong)pwVar18 - (longlong)_Str >> 1);
            if (_Str == (wchar_t *)0x0) {
              local_b8 = (wchar_t *)0x0;
              iVar22 = 0;
            }
            else {
              if ((0 < iVar22) && (_Str[(longlong)iVar22 + -1] == L'\0')) {
                iVar22 = iVar22 + -1;
              }
              local_b8 = _Str;
              if (iVar22 == -1) {
                sVar14 = wcslen(_Str);
                iVar22 = (int)sVar14;
              }
            }
            iStack_b0 = iVar22;
            local_88 = (undefined4)local_b8;
            uStack_84 = local_b8._4_4_;
            uStack_7c = uStack_ac;
            iStack_80 = iStack_b0;
            (*pcVar2)(uVar3,&local_88);
            if (((pwVar1 <= pwVar18) ||
                ((*pwVar18 == L'\r' && (pwVar18 = pwVar18 + 1, pwVar1 <= pwVar18)))) ||
               ((_Str = pwVar18, *pwVar18 == L'\n' &&
                (pwVar18 = pwVar18 + 1, _Str = pwVar18, pwVar1 <= pwVar18)))) break;
          } while( true );
        }
        _Size = 0;
LAB_1418e6fc4:
        _Src = (char *)(uVar19 + (longlong)pwVar6);
        uVar13 = local_d0;
        iVar22 = local_res18;
        uStack_100 = _Size;
      }
      TVar5.Owner = local_118[0].Owner;
      local_108 = (wchar_t *)_Src;
      if (local_118[0].Owner == (FBufferOwner *)0x0) {
        uVar19 = 0;
      }
      else {
        if (((ulonglong)(local_118[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
          (**(code **)((local_118[0].Owner)->_padding_ + 8))();
        }
        uVar19 = (TVar5.Owner)->Size;
      }
      TVar5.Owner = local_118[0].Owner;
      uVar20 = uVar13;
      if (uVar19 == _Size) {
        if ((local_118[0].Owner != (FBufferOwner *)0x0) &&
           (((ulonglong)(local_118[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0)) {
          (**(code **)((local_118[0].Owner)->_padding_ + 8))(local_118[0].Owner);
        }
        FUniqueBuffer::Alloc((ulong64)&local_f8);
        TVar5.Owner = local_f8.Owner;
        if (local_f8.Owner == (FBufferOwner *)0x0) {
          uVar19 = 0;
        }
        else {
          if (((ulonglong)(local_f8.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (**(code **)((local_f8.Owner)->_padding_ + 8))(local_f8.Owner);
          }
          uVar19 = (TVar5.Owner)->Size;
        }
        TVar5.Owner = local_f8.Owner;
        pvVar16 = (void *)0x0;
        if (local_f8.Owner != (FBufferOwner *)0x0) {
          if (((ulonglong)(local_f8.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (**(code **)((local_f8.Owner)->_padding_ + 8))(local_f8.Owner);
          }
          pvVar16 = (TVar5.Owner)->Data;
        }
        if ((uVar19 < _Size) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InView.Size <= Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                               ,0xdb,
                               L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return (bool)uVar10;
        }
        if (_Size != 0) {
          memcpy(pvVar16,_Src,_Size);
        }
        if (uVar19 < _Size) {
          _Size = uVar19;
        }
        uVar19 = uVar19 - _Size;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
                  (local_118,&local_f8);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_f8);
        pvVar16 = (void *)(_Size + (longlong)pvVar16);
        plVar12 = local_f0;
        FVar4.Data = local_c8;
      }
      else {
        if (local_118[0].Owner == (FBufferOwner *)0x0) {
          pvVar16 = (void *)0x0;
        }
        else {
          if (((ulonglong)(local_118[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (**(code **)((local_118[0].Owner)->_padding_ + 8))(local_118[0].Owner);
          }
          pvVar16 = (TVar5.Owner)->Data;
        }
        memmove(pvVar16,_Src,_Size);
        TVar5.Owner = local_118[0].Owner;
        if (local_118[0].Owner == (FBufferOwner *)0x0) {
          uVar19 = 0;
        }
        else {
          if (((ulonglong)(local_118[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (**(code **)((local_118[0].Owner)->_padding_ + 8))(local_118[0].Owner);
          }
          uVar19 = (TVar5.Owner)->Size;
        }
        TVar5.Owner = local_118[0].Owner;
        if (local_118[0].Owner == (FBufferOwner *)0x0) {
          pvVar16 = (void *)0x0;
        }
        else {
          if (((ulonglong)(local_118[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (**(code **)((local_118[0].Owner)->_padding_ + 8))(local_118[0].Owner);
          }
          pvVar16 = (TVar5.Owner)->Data;
        }
        if (uVar19 < _Size) {
          _Size = uVar19;
        }
        uVar19 = uVar19 - _Size;
        pvVar16 = (void *)(_Size + (longlong)pvVar16);
        plVar12 = local_f0;
        FVar4.Data = local_c8;
      }
    }
    uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_118);
    (**(code **)*plVar12)(plVar12,1);
    pFVar24 = (FScriptContainerElement *)L"";
    if (iVar7 != 0) {
      pFVar24 = FVar4.Data;
    }
    NotifyLoadingStateChanged(false,(wchar_t *)pFVar24);
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
  }
  return (bool)uVar10;
}

// SaveArrayToFile @ 1418f3be0

bool __cdecl
FFileHelper::SaveArrayToFile
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,wchar_t *param_2,
          IFileManager *param_3,uint param_4)

{
  byte bVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)((longlong)*param_3 + 0x20))(param_3,param_2,param_4);
  if (plVar2 == (longlong *)0x0) {
    return false;
  }
  (**(code **)(*plVar2 + 0x188))(plVar2,(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  (**(code **)(*plVar2 + 0x210))(plVar2);
  bVar1 = *(byte *)((longlong)plVar2 + 0x29);
  (**(code **)*plVar2)(plVar2,1);
  return (bVar1 & 6) == 0;
}

// SaveArrayToFile @ 1418f3c60

bool __cdecl
FFileHelper::SaveArrayToFile
          (TArrayView<unsigned_char_const_,__int64> *param_1,wchar_t *param_2,IFileManager *param_3,
          uint param_4)

{
  byte bVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)((longlong)*param_3 + 0x20))(param_3,param_2,param_4);
  if (plVar2 == (longlong *)0x0) {
    return false;
  }
  (**(code **)(*plVar2 + 0x188))(plVar2,param_1->DataPtr,param_1->ArrayNum);
  (**(code **)(*plVar2 + 0x210))(plVar2);
  bVar1 = *(byte *)((longlong)plVar2 + 0x29);
  (**(code **)*plVar2)(plVar2,1);
  return (bVar1 & 6) == 0;
}

// SaveStringArrayToFile @ 1418f3ce0

bool __cdecl
FFileHelper::SaveStringArrayToFile
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          EEncodingOptions param_3,IFileManager *param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_48;
  TStringView<wchar_t> local_38;
  
  iVar3 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar6 + (longlong)iVar3 * 0x10;
  iVar4 = 10;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar5) break;
    iVar2 = *(int *)(pFVar6 + 8) + -1 + iVar4;
    if (*(int *)(pFVar6 + 8) == 0) {
      iVar2 = iVar4;
    }
    pFVar6 = pFVar6 + 0x10;
    iVar4 = iVar2 + 3;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::Reserve(&local_48,iVar4);
  iVar3 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar6 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar5) break;
    iVar4 = *(int *)(pFVar6 + 8) + -1;
    if (*(int *)(pFVar6 + 8) == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_48,*(wchar_t **)pFVar6,iVar4);
    ::FString::AppendChars(&local_48,L"\r\n",2);
    pFVar6 = pFVar6 + 0x10;
  }
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  local_38.Size = iVar3;
  local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
  bVar1 = SaveStringToFile(&local_38,param_2,param_3,param_4,param_5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SaveStringToFile @ 1418f3e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FFileHelper::SaveStringToFile
          (TStringView<wchar_t> *param_1,wchar_t *param_2,EEncodingOptions param_3,
          IFileManager *param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  char *pcVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  int iVar10;
  uint uVar11;
  wchar_t *pwVar12;
  int iVar13;
  code *pcVar14;
  undefined1 auStack_258 [32];
  undefined2 local_238;
  undefined1 local_236;
  undefined2 local_234 [6];
  FScriptContainerElement local_228 [128];
  ForAnyElementType local_1a8;
  FScriptContainerElement *local_1a0;
  int local_198;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_188;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  plVar4 = (longlong *)(**(code **)((longlong)*param_4 + 0x20))(param_4,param_2,param_5);
  if (plVar4 == (longlong *)0x0) {
    return false;
  }
  iVar10 = param_1->Size;
  pwVar12 = (wchar_t *)(longlong)iVar10;
  if (iVar10 != 0) {
    pwVar9 = (wchar_t *)0x0;
    iVar13 = 0;
    if (param_3 == ForceUnicode) {
LAB_1418f3ee7:
      bVar2 = true;
    }
    else {
      if ((param_3 == AutoDetect) && (pwVar5 = param_1->DataPtr, pwVar8 = pwVar9, iVar10 != 0)) {
        do {
          if (0x7f < (ushort)*pwVar5) goto LAB_1418f3ee7;
          pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
          pwVar5 = pwVar5 + 1;
        } while (pwVar8 < pwVar12);
      }
      bVar2 = false;
    }
    if (param_3 == ForceUTF8) {
      local_238 = 0xbbef;
      local_236 = 0xbf;
      (**(code **)(*plVar4 + 0x188))(plVar4,&local_238,3);
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                (&local_188,param_1->DataPtr,iVar10);
      (**(code **)(*plVar4 + 0x188))(plVar4,local_188.Ptr,(longlong)local_188.StringLength);
    }
    else if (param_3 == ForceUTF8WithoutBOM) {
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                (&local_e8,param_1->DataPtr,iVar10);
      (**(code **)(*plVar4 + 0x188))(plVar4,local_e8.Ptr,(longlong)local_e8.StringLength);
      local_188._padding_ = local_e8._padding_;
    }
    else {
      pwVar5 = param_1->DataPtr;
      if (bVar2) {
        local_234[0] = 0xfeff;
        (**(code **)(*plVar4 + 0x188))(plVar4,local_234,2);
        if (pwVar5 == (wchar_t *)0x0) {
          pcVar14 = *(code **)(*plVar4 + 0x188);
        }
        else {
          iVar13 = iVar10;
          if ((0 < iVar10) && (pwVar5[(longlong)pwVar12 + -1] == L'\0')) {
            iVar13 = iVar10 + -1;
          }
          pcVar14 = *(code **)(*plVar4 + 0x188);
          pwVar9 = pwVar5;
          if (iVar13 == -1) {
            sVar6 = wcslen(pwVar5);
            (*pcVar14)(plVar4,pwVar5,(longlong)(int)sVar6 * 2);
            goto LAB_1418f40cf;
          }
        }
        (*pcVar14)(plVar4,pwVar9,(longlong)iVar13 * 2);
        goto LAB_1418f40cf;
      }
      local_1a8.Data = (FScriptContainerElement *)0x0;
      if (pwVar5 == (wchar_t *)0x0) {
        local_1a0 = (FScriptContainerElement *)0x0;
        local_198 = 0;
      }
      else {
        iVar13 = 0;
        if ((0 < iVar10) && (pwVar5[(longlong)pwVar12 + -1] == L'\0')) {
          iVar13 = 1;
          iVar10 = iVar10 + -1;
        }
        uVar11 = iVar10 + iVar13;
        local_198 = iVar10;
        if (0x80 < uVar11) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_1a8,0,uVar11,1);
        }
        local_1a0 = local_228;
        if (local_1a8.Data != (FScriptContainerElement *)0x0) {
          local_1a0 = local_1a8.Data;
        }
        pcVar7 = FGenericPlatformString::Convert<wchar_t,char>
                           ((char *)local_1a0,uVar11,pwVar5,uVar11);
        if ((pcVar7 == (char *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar2)) {
          pcVar14 = (code *)swi(3);
          uVar3 = (*pcVar14)();
          return (bool)uVar3;
        }
      }
      (**(code **)(*plVar4 + 0x188))(plVar4,local_1a0,(longlong)local_198);
      local_188._padding_ = (longlong)local_1a8.Data;
    }
    if ((FScriptContainerElement *)local_188._padding_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
  }
LAB_1418f40cf:
  (**(code **)(*plVar4 + 0x210))(plVar4);
  if (((*(byte *)((longlong)plVar4 + 0x29) & 2) != 0) && (2 < (byte)LogStreaming._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if (((*(byte *)((longlong)plVar4 + 0x29) & 4) != 0) && (2 < (byte)LogStreaming._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  bVar1 = *(byte *)((longlong)plVar4 + 0x29);
  (**(code **)*plVar4)(plVar4,1);
  return (bVar1 & 6) == 0;
}

