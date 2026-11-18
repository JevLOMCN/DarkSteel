// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 2

// CreateAC3Downmixer @ 14f0ced50

TUniquePtr<Audio::FBaseChannelFormatConverter,TDefaultDelete<Audio::FBaseChannelFormatConverter>_>
__cdecl Audio::FAC3DownmixerFactory::CreateAC3Downmixer
                  (FInputFormat *param_1,FOutputFormat *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TUniquePtr<Audio::FBaseChannelFormatConverter,TDefaultDelete<Audio::FBaseChannelFormatConverter>_>
  TVar4;
  undefined4 in_register_00000084;
  TArray<Audio::FBaseChannelFormatConverter::FChannelMixEntry,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  FScriptContainerElement *local_18;
  undefined8 uStack_10;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  bVar3 = GetAC3DownmixEntries
                    ((FInputFormat *)param_2,(FOutputFormat *)CONCAT44(in_register_00000084,param_3)
                     ,&local_38);
  if (bVar3) {
    iVar2 = local_38.ArrayNum;
    local_28 = local_38.AllocatorInstance.Data;
    if (local_38.ArrayNum < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (FBaseChannelFormatConverter *)(*pcVar1)();
        return (TUniquePtr<Audio::FBaseChannelFormatConverter,TDefaultDelete<Audio::FBaseChannelFormatConverter>_>
                )TVar4.Ptr;
      }
    }
    iStack_20 = iVar2;
    uStack_10 = CONCAT44(uStack_1c,iVar2);
    local_18 = local_28;
    FBaseChannelFormatConverter::CreateBaseFormatConverter
              (param_1,param_2,
               (TArrayView<Audio::FBaseChannelFormatConverter::FChannelMixEntry_const_,int> *)
               CONCAT44(in_register_00000084,param_3),(int)&local_18);
  }
  else {
    *(undefined8 *)param_1 = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return (TUniquePtr<Audio::FBaseChannelFormatConverter,TDefaultDelete<Audio::FBaseChannelFormatConverter>_>
          )(FBaseChannelFormatConverter *)param_1;
}

// GetAC3DownmixEntries @ 14f0d7a10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Audio::FAC3DownmixerFactory::GetAC3DownmixEntries
          (FInputFormat *param_1,FOutputFormat *param_2,
          TArray<Audio::FBaseChannelFormatConverter::FChannelMixEntry,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TArray<float,TAlignedHeapAllocator<16>_> local_58 [2];
  
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  if ((param_1->NumChannels < 1) || (param_2->NumChannels < 1)) {
    return false;
  }
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  FMixerDevice::Get2DChannelMap(false,param_1->NumChannels,param_2->NumChannels,false,local_58);
  iVar8 = param_2->NumChannels;
  if (local_58[0].ArrayNum == iVar8 * param_1->NumChannels) {
    iVar10 = 0;
    if (0 < param_1->NumChannels) {
      do {
        iVar9 = 0;
        if (0 < iVar8) {
          do {
            uVar2 = iVar8 * iVar10 + iVar9;
            uVar7 = 0;
            if ((int)uVar2 < local_58[0].ArrayNum) {
              uVar7 = ~uVar2 >> 0x1f;
            }
            if ((uVar7 == 0) &&
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
            if (*(float *)(local_58[0].AllocatorInstance.Data + (longlong)(int)uVar2 * 4) != 0.0) {
              iVar8 = param_3->ArrayNum;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_3->AllocatorInstance,piVar1);
              }
              param_3->ArrayNum = iVar8 + 1;
              pFVar3 = (param_3->AllocatorInstance).Data + (longlong)iVar8 * 0xc;
              DefaultConstructItems<Audio::FBaseChannelFormatConverter::FChannelMixEntry,int>
                        (pFVar3,1);
              *(int *)pFVar3 = iVar10;
              *(int *)(pFVar3 + 4) = iVar9;
              uVar7 = 0;
              if ((int)uVar2 < local_58[0].ArrayNum) {
                uVar7 = ~uVar2 >> 0x1f;
              }
              if ((uVar7 == 0) &&
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
              *(undefined4 *)(pFVar3 + 8) =
                   *(undefined4 *)(local_58[0].AllocatorInstance.Data + (longlong)(int)uVar2 * 4);
            }
            iVar9 = iVar9 + 1;
            iVar8 = param_2->NumChannels;
          } while (iVar9 < iVar8);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_1->NumChannels);
    }
    bVar5 = true;
  }
  else {
    if (1 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
    bVar5 = false;
  }
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return bVar5;
}

