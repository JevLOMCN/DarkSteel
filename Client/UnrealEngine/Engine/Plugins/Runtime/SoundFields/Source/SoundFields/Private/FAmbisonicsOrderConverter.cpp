// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFields
// Functions: 2

// Transcode @ 14f09d8a0

void __thiscall
FAmbisonicsOrderConverter::Transcode
          (FAmbisonicsOrderConverter *this,ISoundfieldAudioPacket *param_1,
          ISoundfieldEncodingSettingsProxy *param_2,ISoundfieldAudioPacket *param_3,
          ISoundfieldEncodingSettingsProxy *param_4)

{
  ISoundfieldAudioPacket *pIVar1;
  longlong lVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint local_res10;
  longlong local_70;
  longlong local_68;
  
  if ((param_1 == (ISoundfieldAudioPacket *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InRef != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                         ,0x5c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2 == (ISoundfieldEncodingSettingsProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InRef != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                         ,0x5c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_3 == (ISoundfieldAudioPacket *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InRef != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                         ,0x5c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_4 == (ISoundfieldEncodingSettingsProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InRef != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                         ,0x5c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = (*(int *)(param_2 + 1) + 1) * (*(int *)(param_2 + 1) + 1);
  uVar14 = (*(int *)(param_4 + 1) + 1) * (*(int *)(param_4 + 1) + 1);
  if ((*(uint *)(param_1 + 3) != uVar12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputAudio.NumChannels == InNumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SoundFields\\Source\\SoundFields\\Private\\SoundFields.cpp"
                         ,0x79,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = *(int *)(param_1 + 2) / *(int *)(param_1 + 3);
  (**(code **)((longlong)*param_3 + 0x18))(param_3);
  pIVar1 = param_3 + 1;
  *(uint *)(param_3 + 3) = uVar14;
  iVar8 = *(int *)&param_3[2].field_0x4;
  *(int *)(param_3 + 2) = 0;
  if (iVar8 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)pIVar1,0,(int *)&param_3[2].field_0x4);
  }
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar7 * uVar14,(ForAnyElementType *)pIVar1,(int *)(param_3 + 2),
                     (int *)&param_3[2].field_0x4);
  memset(*(FScriptContainerElement **)pIVar1 + (longlong)iVar8 * 4,0,
         (longlong)(int)(iVar7 * uVar14) << 2);
  uVar5 = uVar14;
  if ((int)uVar12 < (int)uVar14) {
    uVar5 = uVar12;
  }
  param_4._0_4_ = 0;
  if (0 < iVar7) {
    local_70 = 0;
    local_res10 = 0;
    local_68 = 0;
    do {
      uVar13 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        lVar11 = local_70;
        uVar15 = local_res10;
        do {
          uVar10 = (uVar12 - uVar14) * (int)param_4 + uVar15;
          uVar9 = 0;
          if ((int)uVar10 < *(int *)(param_1 + 2)) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = lVar11 * 4;
          uVar3 = *(undefined4 *)(lVar2 + (local_68 - local_70) * 4 + (longlong)param_1[1]);
          uVar9 = 0;
          if ((int)uVar15 < *(int *)(param_3 + 2)) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar15 = uVar15 + 1;
          lVar11 = lVar11 + 1;
          *(undefined4 *)(*(FScriptContainerElement **)pIVar1 + lVar2) = uVar3;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      param_4._0_4_ = (int)param_4 + 1;
      local_res10 = local_res10 + uVar14;
      local_70 = local_70 + (int)uVar14;
      local_68 = local_68 + (int)uVar12;
    } while ((int)param_4 < iVar7);
  }
  return;
}

// TranscodeAndMixIn @ 14f09dc10

void __thiscall
FAmbisonicsOrderConverter::TranscodeAndMixIn
          (FAmbisonicsOrderConverter *this,ISoundfieldAudioPacket *param_1,
          ISoundfieldEncodingSettingsProxy *param_2,ISoundfieldAudioPacket *param_3,
          ISoundfieldEncodingSettingsProxy *param_4)

{
  longlong lVar1;
  float fVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint local_res10;
  longlong local_70;
  longlong local_68;
  
  if ((param_1 == (ISoundfieldAudioPacket *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InRef != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                         ,0x5c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 == (ISoundfieldEncodingSettingsProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InRef != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                         ,0x5c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_3 == (ISoundfieldAudioPacket *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InRef != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                         ,0x5c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4 == (ISoundfieldEncodingSettingsProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InRef != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                         ,0x5c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar12 = (*(int *)(param_2 + 1) + 1) * (*(int *)(param_2 + 1) + 1);
  uVar10 = (*(int *)(param_4 + 1) + 1) * (*(int *)(param_4 + 1) + 1);
  if ((*(uint *)(param_1 + 3) != uVar12) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputAudio.NumChannels == InNumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SoundFields\\Source\\SoundFields\\Private\\SoundFields.cpp"
                         ,0x9a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(uint *)(param_3 + 3) != uVar10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputAudio.NumChannels == OutNumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SoundFields\\Source\\SoundFields\\Private\\SoundFields.cpp"
                         ,0x9b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)(param_1 + 2) / *(int *)(param_1 + 3);
  if ((iVar6 != *(int *)(param_3 + 2) / *(int *)(param_3 + 3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumFrames == OutNumFrames",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SoundFields\\Source\\SoundFields\\Private\\SoundFields.cpp"
                         ,0xa0,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = uVar10;
  if ((int)uVar12 < (int)uVar10) {
    uVar4 = uVar12;
  }
  param_4._0_4_ = 0;
  if (0 < iVar6) {
    local_70 = 0;
    local_res10 = 0;
    local_68 = 0;
    do {
      uVar13 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        lVar9 = local_70;
        uVar11 = local_res10;
        do {
          uVar8 = (uVar12 - uVar10) * (int)param_4 + uVar11;
          uVar7 = 0;
          if ((int)uVar8 < *(int *)(param_1 + 2)) {
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
          lVar1 = lVar9 * 4;
          fVar2 = *(float *)(lVar1 + (local_68 - local_70) * 4 + (longlong)param_1[1]);
          uVar7 = 0;
          if ((int)uVar11 < *(int *)(param_3 + 2)) {
            uVar7 = ~uVar11 >> 0x1f;
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
          uVar11 = uVar11 + 1;
          lVar9 = lVar9 + 1;
          *(float *)(lVar1 + (longlong)param_3[1]) =
               fVar2 + *(float *)(lVar1 + (longlong)param_3[1]);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      param_4._0_4_ = (int)param_4 + 1;
      local_res10 = local_res10 + uVar10;
      local_70 = local_70 + (int)uVar10;
      local_68 = local_68 + (int)uVar12;
    } while ((int)param_4 < iVar6);
  }
  return;
}

