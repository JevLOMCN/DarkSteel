// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetLowerBound @ 1461b13c0

TRangeBound<FFrameNumber> __thiscall
FMovieSceneFrameRange::GetLowerBound(FMovieSceneFrameRange *this)

{
  TRangeBound<FFrameNumber> in_RDX;
  
  *(TRangeBound<FFrameNumber> *)in_RDX = (this->Value).LowerBound;
  return in_RDX;
}

// GetUpperBound @ 1461b4900

TRangeBound<FFrameNumber> __thiscall
FMovieSceneFrameRange::GetUpperBound(FMovieSceneFrameRange *this)

{
  TRangeBound<FFrameNumber> in_RDX;
  
  *(TRangeBound<FFrameNumber> *)in_RDX = (this->Value).UpperBound;
  return in_RDX;
}

// StaticStruct @ 1461e3ff0

UScriptStruct * __cdecl FMovieSceneFrameRange::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFrameRange.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneFrameRange.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFrameRange,(UObject *)pUVar1,
                         L"MovieSceneFrameRange");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneFrameRange.OuterSingleton;
}

// ExportTextItem @ 146210650

bool __thiscall
FMovieSceneFrameRange::ExportTextItem
          (FMovieSceneFrameRange *this,FString *param_1,FMovieSceneFrameRange *param_2,
          UObject *param_3,int param_4,UObject *param_5)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FFrameNumber *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  uVar1 = (this->Value).LowerBound.Type.Value;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if (uVar1 == '\x02') {
    ::FString::AppendChars(&local_58,"Open",4);
    ::FString::AppendChar(&local_58,L':');
    ::FString::AppendChar(&local_58,L'0');
  }
  else {
    if (uVar1 == '\x01') {
      ::FString::AppendChars(&local_58,"Inclusive",9);
      ::FString::AppendChar(&local_58,L':');
      if ((this->Value).LowerBound.Type.Value == '\x02') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_48,(this->Value).LowerBound.Value.Value);
      iVar7 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    else {
      if (uVar1 != '\0') goto LAB_1462107ab;
      ::FString::AppendChars(&local_58,"Exclusive",9);
      ::FString::AppendChar(&local_58,L':');
      pFVar5 = TRange<FFrameNumber>::GetLowerBoundValue(&this->Value);
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_38,pFVar5->Value);
      iVar7 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
    }
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
  }
LAB_1462107ab:
  ::FString::AppendChar(&local_58,L':');
  uVar1 = (this->Value).UpperBound.Type.Value;
  iVar7 = 0;
  if (uVar1 == '\x02') {
    ::FString::AppendChars(&local_58,"Open",4);
    ::FString::AppendChar(&local_58,L':');
    ::FString::AppendChar(&local_58,L'0');
  }
  else {
    if (uVar1 == '\x01') {
      ::FString::AppendChars(&local_58,"Inclusive",9);
      ::FString::AppendChar(&local_58,L':');
      if ((this->Value).UpperBound.Type.Value == '\x02') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_28,(this->Value).UpperBound.Value.Value);
      iVar8 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar8 = iVar7;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar8);
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    else {
      if (uVar1 != '\0') goto LAB_1462108ef;
      ::FString::AppendChars(&local_58,"Exclusive",9);
      ::FString::AppendChar(&local_58,L':');
      pFVar5 = TRange<FFrameNumber>::GetUpperBoundValue(&this->Value);
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_18,pFVar5->Value);
      iVar8 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar8 = iVar7;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar8);
      FVar6.Data = local_18.Data.AllocatorInstance.Data;
    }
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
  }
LAB_1462108ef:
  iVar8 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar8 = iVar7;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return true;
}

// FromFloatRange @ 146215050

TRange<FFrameNumber> * __cdecl
FMovieSceneFrameRange::FromFloatRange
          (TRange<FFrameNumber> *__return_storage_ptr__,TRange<float> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  FFrameRate FVar7;
  uint uVar8;
  uint uVar9;
  undefined1 in_XMM1 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  FFrameRate local_res8;
  
  GetLegacyConversionFrameRate();
  FVar5 = local_res8;
  (__return_storage_ptr__->LowerBound).Value.Value = 0;
  (__return_storage_ptr__->UpperBound).Value.Value = 0;
  (__return_storage_ptr__->LowerBound).Type.Value = '\x02';
  (__return_storage_ptr__->UpperBound).Type.Value = '\x02';
  if ((param_1->LowerBound).Type.Value != '\x02') {
    dVar4 = (double)(param_1->LowerBound).Value;
    dVar10 = FFrameRate::MaxSeconds(&local_res8);
    dVar12 = FFrameRate::MaxSeconds(&local_res8);
    FVar6 = local_res8;
    uVar8 = SUB84(dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar9 = (uint)((ulonglong)dVar12 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    if (dVar10 <= dVar4) {
      dVar4 = dVar10;
    }
    dVar12 = (double)local_res8.Numerator;
    local_res8.Numerator._0_1_ = 1;
    FVar7 = local_res8;
    dVar10 = (double)CONCAT44(uVar9,uVar8);
    if ((double)CONCAT44(uVar9,uVar8) <= dVar4) {
      dVar10 = dVar4;
    }
    local_res8.Denominator = FVar6.Denominator;
    dVar12 = (dVar12 * dVar10) / (double)local_res8.Denominator;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar12;
    in_XMM1 = roundpd(in_XMM1,auVar11,1);
    dVar10 = dVar12 - in_XMM1._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (double)(int)dVar10 + dVar12;
    auVar11 = roundpd(ZEXT416((uint)(float)dVar10),auVar1,1);
    dVar10 = auVar11._0_8_;
    if (__real_41dfffffffc00000 <= auVar11._0_8_) {
      dVar10 = __real_41dfffffffc00000;
    }
    if (dVar10 <= __real_c1e0000000000000) {
      dVar10 = __real_c1e0000000000000;
    }
    local_res8.Numerator = FVar7.Numerator;
    local_res8.Denominator = (int)dVar10;
    __return_storage_ptr__->LowerBound = (TRangeBound<FFrameNumber>)local_res8;
  }
  if ((param_1->UpperBound).Type.Value != '\x02') {
    dVar4 = (double)(param_1->UpperBound).Value;
    local_res8 = FVar5;
    dVar10 = FFrameRate::MaxSeconds(&local_res8);
    dVar12 = FFrameRate::MaxSeconds(&local_res8);
    FVar5 = local_res8;
    uVar8 = SUB84(dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar9 = (uint)((ulonglong)dVar12 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    if (dVar10 <= dVar4) {
      dVar4 = dVar10;
    }
    dVar12 = (double)local_res8.Numerator;
    local_res8.Numerator._0_1_ = 1;
    FVar6 = local_res8;
    dVar10 = (double)CONCAT44(uVar9,uVar8);
    if ((double)CONCAT44(uVar9,uVar8) <= dVar4) {
      dVar10 = dVar4;
    }
    local_res8.Denominator = FVar5.Denominator;
    dVar12 = (dVar12 * dVar10) / (double)local_res8.Denominator;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar12;
    auVar11 = roundpd(in_XMM1,auVar2,1);
    dVar10 = dVar12 - auVar11._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (double)(int)dVar10 + dVar12;
    auVar11 = roundpd(ZEXT416((uint)(float)dVar10),auVar3,1);
    dVar10 = auVar11._0_8_;
    if (__real_41dfffffffc00000 <= auVar11._0_8_) {
      dVar10 = __real_41dfffffffc00000;
    }
    if (dVar10 <= __real_c1e0000000000000) {
      dVar10 = __real_c1e0000000000000;
    }
    local_res8.Numerator = FVar6.Numerator;
    local_res8.Denominator = (int)dVar10;
    __return_storage_ptr__->UpperBound = (TRangeBound<FFrameNumber>)local_res8;
  }
  return __return_storage_ptr__;
}

// ImportTextItem @ 14621e670

bool __thiscall
FMovieSceneFrameRange::ImportTextItem
          (FMovieSceneFrameRange *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  FString *pFVar7;
  TRangeBound<FFrameNumber> TVar8;
  TRangeBound<FFrameNumber> TVar9;
  wchar_t *_Str;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  int iStack_9c;
  uint local_98;
  int iStack_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int iStack_84;
  uint local_80;
  int iStack_7c;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  _Str = L"";
  ::FString::FString(&local_78,L"");
  pwVar6 = FPropertyHelpers::ReadToken(*param_1,&local_78,true);
  if (pwVar6 != (wchar_t *)0x0) {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_78,&local_b8,L":",false);
    if (local_b8.ArrayNum == 4) {
      pFVar7 = ::FString::FString(&local_68,"Open");
      if (local_b8.ArrayNum < 1) {
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
      iVar5 = (pFVar7->Data).ArrayNum;
      iVar1 = *(int *)(local_b8.AllocatorInstance.Data + 8);
      if (iVar1 == iVar5) {
        if (iVar1 < 2) {
          bVar3 = true;
        }
        else {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)local_b8.AllocatorInstance.Data,
                             (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
          bVar3 = iVar5 == 0;
        }
      }
      else {
        bVar3 = iVar1 + iVar5 == 1;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        uStack_a4 = 0;
        local_a8 = CONCAT31(local_a8._1_3_,2);
        TVar8.Value.Value = 0;
        TVar8._0_4_ = local_a8;
LAB_14621e979:
        (this->Value).LowerBound = TVar8;
      }
      else {
        pFVar7 = ::FString::FString(&local_58,"Inclusive");
        if (local_b8.ArrayNum < 1) {
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
        iVar5 = *(int *)(local_b8.AllocatorInstance.Data + 8);
        iVar1 = (pFVar7->Data).ArrayNum;
        if (iVar5 == iVar1) {
          if (iVar5 < 2) {
            bVar3 = true;
          }
          else {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)local_b8.AllocatorInstance.Data,
                               (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
            bVar3 = iVar5 == 0;
          }
        }
        else {
          bVar3 = iVar1 + iVar5 == 1;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          if (local_b8.ArrayNum < 2) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          if (*(int *)(local_b8.AllocatorInstance.Data + 0x18) == 0) {
            pwVar6 = L"";
          }
          else {
            pwVar6 = *(wchar_t **)(local_b8.AllocatorInstance.Data + 0x10);
          }
          local_a0 = CONCAT31(local_a0._1_3_,1);
          iStack_9c = _wtoi(pwVar6);
          TVar8.Value.Value = iStack_9c;
          TVar8._0_4_ = local_a0;
          goto LAB_14621e979;
        }
        pFVar7 = ::FString::FString(&local_48,"Exclusive");
        if (local_b8.ArrayNum < 1) {
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
        iVar5 = *(int *)(local_b8.AllocatorInstance.Data + 8);
        iVar1 = (pFVar7->Data).ArrayNum;
        if (iVar5 == iVar1) {
          if (iVar5 < 2) {
            bVar3 = true;
          }
          else {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)local_b8.AllocatorInstance.Data,
                               (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
            bVar3 = iVar5 == 0;
          }
        }
        else {
          bVar3 = iVar1 + iVar5 == 1;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          if (local_b8.ArrayNum < 2) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          if (*(int *)(local_b8.AllocatorInstance.Data + 0x18) == 0) {
            pwVar6 = L"";
          }
          else {
            pwVar6 = *(wchar_t **)(local_b8.AllocatorInstance.Data + 0x10);
          }
          local_98 = local_98 & 0xffffff00;
          iStack_94 = _wtoi(pwVar6);
          TVar8.Value.Value = iStack_94;
          TVar8._0_4_ = local_98;
          goto LAB_14621e979;
        }
      }
      pFVar7 = ::FString::FString(&local_38,"Open");
      if (local_b8.ArrayNum < 3) {
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
      iVar5 = (pFVar7->Data).ArrayNum;
      iVar1 = *(int *)(local_b8.AllocatorInstance.Data + 0x28);
      if (iVar1 == iVar5) {
        if (iVar1 < 2) {
          bVar3 = true;
        }
        else {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(local_b8.AllocatorInstance.Data + 0x20),
                             (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
          bVar3 = iVar5 == 0;
        }
      }
      else {
        bVar3 = iVar1 + iVar5 == 1;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        uStack_8c = 0;
        local_90 = CONCAT31(local_90._1_3_,2);
        TVar9.Value.Value = 0;
        TVar9._0_4_ = local_90;
LAB_14621ec0f:
        (this->Value).UpperBound = TVar9;
      }
      else {
        pFVar7 = ::FString::FString(&local_28,"Inclusive");
        if (local_b8.ArrayNum < 3) {
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
        iVar5 = (pFVar7->Data).ArrayNum;
        iVar1 = *(int *)(local_b8.AllocatorInstance.Data + 0x28);
        if (iVar1 == iVar5) {
          if (iVar1 < 2) {
            bVar3 = true;
          }
          else {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(local_b8.AllocatorInstance.Data + 0x20),
                               (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
            bVar3 = iVar5 == 0;
          }
        }
        else {
          bVar3 = iVar1 + iVar5 == 1;
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          if (local_b8.ArrayNum < 4) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          if (*(int *)(local_b8.AllocatorInstance.Data + 0x38) != 0) {
            _Str = *(wchar_t **)(local_b8.AllocatorInstance.Data + 0x30);
          }
          local_88 = CONCAT31(local_88._1_3_,1);
          iStack_84 = _wtoi(_Str);
          TVar9.Value.Value = iStack_84;
          TVar9._0_4_ = local_88;
          goto LAB_14621ec0f;
        }
        pFVar7 = ::FString::FString(&local_18,"Exclusive");
        if (local_b8.ArrayNum < 3) {
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
        iVar5 = (pFVar7->Data).ArrayNum;
        iVar1 = *(int *)(local_b8.AllocatorInstance.Data + 0x28);
        if (iVar1 == iVar5) {
          if (iVar1 < 2) {
            bVar3 = true;
          }
          else {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(local_b8.AllocatorInstance.Data + 0x20),
                               (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
            bVar3 = iVar5 == 0;
          }
        }
        else {
          bVar3 = iVar1 + iVar5 == 1;
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          if (local_b8.ArrayNum < 4) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          if (*(int *)(local_b8.AllocatorInstance.Data + 0x38) != 0) {
            _Str = *(wchar_t **)(local_b8.AllocatorInstance.Data + 0x30);
          }
          local_80 = local_80 & 0xffffff00;
          iStack_7c = _wtoi(_Str);
          TVar9.Value.Value = iStack_7c;
          TVar9._0_4_ = local_80;
          goto LAB_14621ec0f;
        }
      }
      DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      bVar3 = true;
      goto LAB_14621ec4a;
    }
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  bVar3 = false;
LAB_14621ec4a:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// Serialize @ 146233b90

bool __thiscall FMovieSceneFrameRange::Serialize(FMovieSceneFrameRange *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->Value);
  return true;
}

// SerializeFromMismatchedTag @ 146234240

bool __thiscall
FMovieSceneFrameRange::SerializeFromMismatchedTag
          (FMovieSceneFrameRange *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  TRangeBound<FFrameNumber> TVar1;
  bool bVar2;
  UScriptStruct *this_00;
  TRange<FFrameNumber> *pTVar3;
  FPropertyTypeName local_res10 [2];
  TRange<float> local_28;
  TRange<FFrameNumber> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NAME_FloatRange,"FloatRange");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res10[0].Index = (param_1->TypeName).Index;
  bVar2 = UE::FPropertyTypeName::IsStruct(local_res10,NAME_FloatRange);
  if (bVar2) {
    this_00 = TBaseStructure<FFloatRange>::Get();
    local_28.LowerBound.Type.Value = '\x02';
    local_28.LowerBound.Value = 0.0;
    local_28.UpperBound.Type.Value = '\x02';
    local_28.UpperBound.Value = 0.0;
    UScriptStruct::SerializeItem(this_00,param_2,&local_28,(void *)0x0);
    pTVar3 = FromFloatRange(&local_18,&local_28);
    TVar1 = pTVar3->UpperBound;
    (this->Value).LowerBound = pTVar3->LowerBound;
    (this->Value).UpperBound = TVar1;
    return true;
  }
  return false;
}

