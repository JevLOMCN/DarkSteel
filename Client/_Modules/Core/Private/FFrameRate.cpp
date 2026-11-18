// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ComputeGridSpacing @ 1418cea50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FFrameRate::ComputeGridSpacing
          (FFrameRate *this,float param_1,double *param_2,int *param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ForElementType<int> FVar9;
  ForElementType<int> FVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auStack_178 [32];
  uint *local_158;
  ForElementType<int> local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  uint local_128 [2];
  double *local_120;
  int *local_118;
  FFrameRate *local_108;
  ForElementType<int> local_100;
  uint local_d0;
  uint local_cc;
  ulonglong local_c8;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (0.0 < param_1) {
    auVar25._0_8_ = (double)this->Numerator / (double)this->Denominator + __real_3fe0000000000000;
    auVar25._8_8_ = 0;
    fVar28 = __real_3f800000 / param_1;
    auVar27 = roundpd(in_XMM2,auVar25,1);
    if (__real_41dfffffffc00000 <= auVar27._0_8_) {
      auVar27._0_8_ = __real_41dfffffffc00000;
    }
    if (auVar27._0_8_ <= 0.0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar27._8_8_;
      auVar27 = auVar3 << 0x40;
    }
    dVar26 = auVar27._0_8_;
    local_120 = param_2;
    local_118 = param_3;
    local_108 = this;
    fVar20 = logf(fVar28 * param_4);
    fVar21 = __real_3e7a19e0;
    if (fVar20 * __real_3e7a19e0 < TimeDisplayThresholdExponent) {
      if ((int)dVar26 < 1) {
        fVar21 = logf(fVar28 * param_5);
        auVar25 = roundps(ZEXT416((uint)(fVar21 * __real_3ede5bd8)),
                          ZEXT416((uint)(fVar21 * __real_3ede5bd8)),1);
        auVar24._0_4_ = powf(__real_41200000,auVar25._0_4_);
        auVar24._4_12_ = extraout_var_00;
        auVar25 = roundps(auVar24,ZEXT416((uint)((fVar28 * param_5) / auVar24._0_4_)),2);
        fVar20 = logf(auVar25._0_4_);
        fVar21 = RoundToBase;
        fVar22 = logf(RoundToBase);
        auVar25 = roundps(ZEXT416((uint)(fVar20 / fVar22)),ZEXT416((uint)(fVar20 / fVar22)),2);
        fVar21 = powf(fVar21,auVar25._0_4_);
        *param_2 = (double)(fVar21 * auVar24._0_4_);
        iVar19 = (int)(longlong)((double)(fVar21 * auVar24._0_4_) / (double)(fVar28 * param_4));
        iVar8 = 1;
        if (iVar19 != 0) {
          iVar8 = iVar19;
        }
        uVar11 = (ulonglong)(iVar8 - 1) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        *param_3 = 1 << ((byte)lVar14 & 0x1f);
      }
      else {
        uVar17 = 0;
        local_cc = 10;
        local_100.SecondaryData = (ForElementType<int>)0x0;
        local_d0 = 0;
        uVar11 = uVar17;
        local_128[0] = (int)dVar26;
        while( true ) {
          while( true ) {
            uVar7 = (uint)uVar11;
            FVar9 = (ForElementType<int>)&local_100;
            if (local_100.SecondaryData != (ForElementType<int>)0x0) {
              FVar9 = local_100.SecondaryData;
            }
            if ((ulonglong)FVar9 <= local_128) {
              FVar9 = (ForElementType<int>)&local_100;
              if (local_100.SecondaryData != (ForElementType<int>)0x0) {
                FVar9 = local_100.SecondaryData;
              }
              if (local_128 < (uint *)((longlong)FVar9 + (longlong)(int)local_cc * 4)) {
                local_140 = (longlong)(int)uVar7;
                local_138 = 4;
                local_158 = local_128;
                local_150 = (ForElementType<int>)&local_100;
                if (local_100.SecondaryData != (ForElementType<int>)0x0) {
                  local_150 = local_100.SecondaryData;
                }
                local_148 = (longlong)(int)local_cc;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                uVar7 = local_d0;
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  uVar5 = (*pcVar2)();
                  return (bool)uVar5;
                }
              }
            }
            if (uVar7 == local_cc) {
              uVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&local_100,(int *)&local_cc);
            }
            local_d0 = uVar7 + 1;
            FVar9 = (ForElementType<int>)&local_100;
            if (local_100.SecondaryData != (ForElementType<int>)0x0) {
              FVar9 = local_100.SecondaryData;
            }
            *(uint *)((longlong)FVar9 + (longlong)(int)uVar7 * 4) = local_128[0];
            uVar7 = local_128[0] & 0x80000001;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
            }
            if (uVar7 != 0) break;
            uVar11 = (ulonglong)local_d0;
            local_128[0] = (int)local_128[0] / 2;
          }
          uVar7 = (int)local_128[0] / 3 + ((int)local_128[0] >> 0x1f) +
                  (int)(((longlong)(int)local_128[0] / 3 + ((longlong)(int)local_128[0] >> 0x3f) &
                        0xffffffffU) >> 0x1f);
          if ((local_128[0] != uVar7 * 3) &&
             (uVar7 = (int)local_128[0] / 5, local_128[0] != uVar7 * 5)) break;
          uVar11 = (ulonglong)local_d0;
          local_128[0] = uVar7;
        }
        FVar9 = (ForElementType<int>)&local_100;
        if (local_100.SecondaryData != (ForElementType<int>)0x0) {
          FVar9 = local_100.SecondaryData;
        }
        iVar8 = (int)local_d0 / 2;
        if (0 < iVar8) {
          uVar11 = uVar17;
          puVar15 = (undefined4 *)((longlong)FVar9 + (longlong)(int)(local_d0 - 1) * 4);
          do {
            uVar1 = *(undefined4 *)((longlong)FVar9 + uVar11 * 4);
            *(undefined4 *)((longlong)FVar9 + uVar11 * 4) = *puVar15;
            uVar11 = uVar11 + 1;
            *puVar15 = uVar1;
            puVar15 = puVar15 + -1;
          } while ((longlong)uVar11 < (longlong)iVar8);
        }
        FVar9 = (ForElementType<int>)&local_100;
        if (local_100.SecondaryData != (ForElementType<int>)0x0) {
          FVar9 = local_100.SecondaryData;
        }
        auVar25 = roundps(ZEXT416((uint)(fVar28 * param_5)),
                          ZEXT416((uint)(((float)this->Numerator / (float)this->Denominator) *
                                        fVar28 * param_5)),2);
        fVar28 = auVar25._0_4_;
        uVar11 = uVar17;
        uVar16 = 0;
        uVar7 = local_d0;
        if (0 < (int)local_d0) {
          do {
            uVar18 = uVar7 >> 1;
            iVar8 = uVar18 + (int)uVar11;
            if (*(int *)((longlong)FVar9 + (longlong)iVar8 * 4) < (int)fVar28) {
              uVar11 = (ulonglong)(iVar8 + (uVar7 & 1));
            }
            uVar16 = (uint)uVar11;
            uVar7 = uVar18;
          } while (uVar18 != 0);
        }
        uVar7 = local_d0 - 1;
        if ((int)uVar16 < (int)(local_d0 - 1)) {
          uVar7 = uVar16;
        }
        uVar16 = 0;
        if ((int)uVar7 < (int)local_d0) {
          uVar16 = ~uVar7 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_150 = (ForElementType<int>)(longlong)(int)local_d0;
          local_158 = (uint *)(longlong)(int)uVar7;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        FVar9 = (ForElementType<int>)&local_100;
        if (local_100.SecondaryData != (ForElementType<int>)0x0) {
          FVar9 = local_100.SecondaryData;
        }
        iVar8 = *(int *)((longlong)FVar9 + (longlong)(int)uVar7 * 4);
        iVar19 = -(((int)ROUND(__real_bf000000 - (fVar28 + fVar28) / (float)iVar8) >> 1) * iVar8);
        *local_120 = ((double)local_108->Denominator / (double)local_108->Numerator) *
                     (double)iVar19;
        *local_118 = 0;
        FVar9 = local_100.SecondaryData;
        uVar11 = uVar17;
        uVar16 = local_d0;
        if (0 < (int)uVar7) {
          do {
            uVar12 = (uint)uVar17;
            uVar18 = 0;
            if ((int)uVar12 < (int)uVar16) {
              uVar18 = ~uVar12 >> 0x1f;
            }
            if (uVar18 == 0) {
              local_150 = (ForElementType<int>)(longlong)(int)uVar16;
              local_158 = (uint *)(longlong)(int)uVar12;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              FVar9 = local_100.SecondaryData;
              uVar16 = local_d0;
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
            }
            FVar10 = (ForElementType<int>)&local_100;
            if (FVar9 != (ForElementType<int>)0x0) {
              FVar10 = FVar9;
            }
            if (iVar8 % *(int *)((longlong)FVar10 + uVar11 * 4) == 0) {
              uVar18 = 0;
              if ((int)uVar12 < (int)uVar16) {
                uVar18 = ~uVar12 >> 0x1f;
              }
              if (uVar18 == 0) {
                local_150 = (ForElementType<int>)(longlong)(int)uVar16;
                local_158 = (uint *)(longlong)(int)uVar12;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                FVar9 = local_100.SecondaryData;
                uVar16 = local_d0;
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  uVar5 = (*pcVar2)();
                  return (bool)uVar5;
                }
              }
              FVar10 = (ForElementType<int>)&local_100;
              if (FVar9 != (ForElementType<int>)0x0) {
                FVar10 = FVar9;
              }
              iVar6 = iVar19 / *(int *)((longlong)FVar10 + uVar11 * 4);
              if ((double)param_4 <= (*local_120 / (double)iVar6) * (double)param_1) {
                *local_118 = iVar6;
                break;
              }
            }
            uVar17 = (ulonglong)(uVar12 + 1);
            uVar11 = uVar11 + 1;
          } while ((longlong)uVar11 < (longlong)(int)uVar7);
        }
        param_2 = local_120;
        if (FVar9 != (ForElementType<int>)0x0) {
          FMemory::Free((void *)FVar9);
          param_2 = local_120;
        }
      }
    }
    else {
      fVar20 = logf(fVar28 * param_5);
      auVar25 = roundps(ZEXT416((uint)(fVar20 * fVar21)),ZEXT416((uint)(fVar20 * fVar21)),1);
      auVar23._0_4_ = powf(__real_42700000,auVar25._0_4_);
      auVar23._4_12_ = extraout_var;
      lVar13 = 0;
      auVar25 = roundps(auVar23,ZEXT416((uint)((fVar28 * param_5) / auVar23._0_4_)),2);
      lVar14 = lVar13;
      uVar11 = 6;
      do {
        uVar17 = uVar11 >> 1;
        if (DesirableBases[uVar17 + lVar14] < (int)auVar25._0_4_) {
          lVar14 = uVar17 + lVar14 + (ulonglong)((uint)uVar11 & 1);
        }
        uVar11 = uVar17;
      } while (uVar17 != 0);
      iVar8 = 5;
      if ((int)lVar14 < 5) {
        iVar8 = (int)lVar14;
      }
      iVar19 = DesirableBases[iVar8];
      fVar20 = (float)iVar19;
      fVar28 = logf(auVar25._0_4_);
      fVar21 = logf(fVar20);
      auVar25 = roundps(ZEXT416((uint)(fVar28 / fVar21)),ZEXT416((uint)(fVar28 / fVar21)),2);
      fVar28 = powf(fVar20,auVar25._0_4_);
      auVar25 = roundps(auVar27,ZEXT416((uint)(fVar28 + __real_3f000000)),1);
      *param_2 = (double)(auVar25._0_4_ * auVar23._0_4_);
      *param_3 = 0;
      if (0 < iVar8) {
        do {
          if ((iVar19 % DesirableBases[lVar13] == 0) &&
             (iVar6 = (int)auVar25._0_4_ / DesirableBases[lVar13],
             (double)param_4 <= (*param_2 / (double)iVar6) * (double)param_1)) {
            *param_3 = iVar6;
            break;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar8);
      }
    }
    if (*param_2 != 0.0) {
      return true;
    }
  }
  return false;
}

// MaxSeconds @ 1418e9040

double __thiscall FFrameRate::MaxSeconds(FFrameRate *this)

{
  int iVar1;
  
  iVar1 = (*this).Denominator;
  return ((double)iVar1 * 0.0 + (double)((longlong)iVar1 * 0x7fffffff)) / (double)(*this).Numerator;
}

// Serialize @ 1418f4e00

bool __thiscall FFrameRate::Serialize(FFrameRate *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->Numerator = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->Denominator;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return true;
}

// ToPrettyText @ 1418fb9b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall FFrameRate::ToPrettyText(FFrameRate *this,FText *__return_storage_ptr__)

{
  FNumberFormattingOptions *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  double dVar5;
  TSharedPtr<FCulture,1> local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38 [3];
  
  dVar5 = (double)this->Numerator / (double)this->Denominator;
  if (dVar5 <= __real_3ff0000000000000) {
    dVar5 = __real_3ff0000000000000 / dVar5;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"FFrameRate",L"Seconds_Format",L"{0} s");
    pFVar4 = FTextFormat::FTextFormat(local_38,pFVar2,Default);
    FText::Format<double>(__return_storage_ptr__,pFVar4,dVar5);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  else {
    local_68.Object = (FCulture *)0x0;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar1 = FNumberFormattingOptions::DefaultNoGrouping();
    pFVar2 = FText::AsNumber(&local_48,dVar5,pFVar1,&local_68);
    pFVar3 = FText::AsLocalizable_Advanced_LocText(&local_58,L"FFrameRate",L"FPS_Format",L"{0} fps")
    ;
    pFVar4 = FTextFormat::FTextFormat(local_38,pFVar3,Default);
    FText::Format<FText>(__return_storage_ptr__,pFVar4,pFVar2);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

