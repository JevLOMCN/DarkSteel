// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 9

// FResonanceAudioSpatialization @ 14f043fe0

FResonanceAudioSpatialization * __thiscall
ResonanceAudio::FResonanceAudioSpatialization::FResonanceAudioSpatialization
          (FResonanceAudioSpatialization *this)

{
  this->_padding_ = (longlong)&___7FResonanceAudioSpatialization_ResonanceAudio__6B_;
  (this->BinauralSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BinauralSources).ArrayNum = 0;
  (this->BinauralSources).ArrayMax = 0;
  this->ResonanceAudioApi = (ResonanceAudioApi *)0x0;
  this->ResonanceAudioModule = (FResonanceAudioModule *)0x0;
  (this->SpatializationSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpatializationSettings).ArrayNum = 0;
  (this->SpatializationSettings).ArrayMax = 0;
  return this;
}

// ~FResonanceAudioSpatialization @ 14f044b50

void __thiscall
ResonanceAudio::FResonanceAudioSpatialization::~FResonanceAudioSpatialization
          (FResonanceAudioSpatialization *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FResonanceAudioSpatialization_ResonanceAudio__6B_;
  pFVar1 = (this->SpatializationSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BinauralSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAudioSpatialization__6B_;
  return;
}

// DirectivityChanged @ 14f047180

bool __thiscall
ResonanceAudio::FResonanceAudioSpatialization::DirectivityChanged
          (FResonanceAudioSpatialization *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar7 = (longlong)(int)param_1;
  uVar8 = ~param_1 >> 0x1f;
  uVar6 = 0;
  if ((int)param_1 < (this->BinauralSources).ArrayNum) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar1 = (this->BinauralSources).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar3 = __real_322bcc77;
  if ((float)((uint)(*(float *)(pFVar1 + lVar7 * 0x10 + 4) -
                    *(float *)(*(longlong *)
                                ((this->SpatializationSettings).AllocatorInstance.Data + lVar7 * 8)
                              + 0x2c)) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
  {
    uVar6 = 0;
    if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
      uVar6 = uVar8;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((float)((uint)(*(float *)(pFVar1 + lVar7 * 0x10 + 8) -
                      *(float *)(*(longlong *)
                                  ((this->SpatializationSettings).AllocatorInstance.Data + lVar7 * 8
                                  ) + 0x30)) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar3) {
      return false;
    }
  }
  uVar6 = 0;
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  *(undefined4 *)(pFVar1 + lVar7 * 0x10 + 4) =
       *(undefined4 *)
        (*(longlong *)((this->SpatializationSettings).AllocatorInstance.Data + lVar7 * 8) + 0x2c);
  uVar6 = 0;
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  *(undefined4 *)(pFVar1 + lVar7 * 0x10 + 8) =
       *(undefined4 *)
        (*(longlong *)((this->SpatializationSettings).AllocatorInstance.Data + lVar7 * 8) + 0x30);
  return true;
}

// Initialize @ 14f049840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioSpatialization::Initialize
          (FResonanceAudioSpatialization *this,FAudioPluginInitializationParams *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FName *pFVar7;
  FResonanceAudioModule *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined8 local_38 [2];
  
  uVar2 = param_1->NumSources;
  pFVar7 = ::FName::FName(&local_res10,"ResonanceAudio");
  pFVar8 = FModuleManager::GetModuleChecked<ResonanceAudio::FResonanceAudioModule>(*pFVar7);
  this->ResonanceAudioModule = pFVar8;
  piVar1 = &(this->BinauralSources).ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,uVar2,&(this->BinauralSources).AllocatorInstance,piVar1,
                     &(this->BinauralSources).ArrayMax);
  DefaultConstructItems<ResonanceAudio::FBinauralSource,int>
            ((this->BinauralSources).AllocatorInstance.Data + (longlong)iVar5 * 0x10,uVar2);
  iVar5 = *piVar1;
  pFVar9 = (this->BinauralSources).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar5 * 0x10;
  while( true ) {
    if (*piVar1 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<ResonanceAudio::FBinauralSource,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    *(undefined4 *)pFVar9 = 0xffffffff;
    pFVar9 = pFVar9 + 0x10;
  }
  iVar5 = 0;
  local_38[0] = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &(this->SpatializationSettings).ArrayMax;
  (this->SpatializationSettings).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->SpatializationSettings).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar2) {
    do {
      pFVar9 = (this->SpatializationSettings).AllocatorInstance.Data;
      if (((pFVar9 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar9 + (longlong)*piVar1 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->SpatializationSettings).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->SpatializationSettings).AllocatorInstance,piVar1);
      }
      iVar5 = iVar5 + 1;
      (this->SpatializationSettings).ArrayNum = iVar6 + 1;
      *(undefined8 *)((this->SpatializationSettings).AllocatorInstance.Data + (longlong)iVar6 * 8) =
           local_38[0];
    } while (iVar5 < (int)uVar2);
  }
  this->bIsInitialized = true;
  if (4 < (byte)LogResonanceAudio._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
  }
  return;
}

// IsSpatializationEffectInitialized @ 14f049c30

bool __thiscall
ResonanceAudio::FResonanceAudioSpatialization::IsSpatializationEffectInitialized
          (FResonanceAudioSpatialization *this)

{
  return this->bIsInitialized;
}

// OnInitSource @ 14f04a3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioSpatialization::OnInitSource
          (FResonanceAudioSpatialization *this,uint param_1,FName *param_2,
          USpatializationPluginSourceSettingsBase *param_3)

{
  ERaQualityMode EVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  ResonanceAudioApi *pRVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  UResonanceAudioSettings *pUVar13;
  FStaticBasicLogRecord *pFVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  
  lVar15 = (longlong)(int)param_1;
  if (this->ResonanceAudioApi == (ResonanceAudioApi *)0x0) {
    return;
  }
  uVar12 = 0;
  uVar16 = 0;
  uVar17 = ~param_1 >> 0x1f;
  uVar8 = uVar16;
  if ((int)param_1 < (this->BinauralSources).ArrayNum) {
    uVar8 = uVar17;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->BinauralSources).AllocatorInstance.Data;
  if (*(int *)(pFVar3 + lVar15 * 0x10) != -1) {
    (**(code **)((longlong)*this->ResonanceAudioApi + 0x60))();
    *(undefined4 *)(pFVar3 + lVar15 * 0x10) = 0xffffffff;
  }
  if (param_3 == (USpatializationPluginSourceSettingsBase *)0x0) {
    param_3 = (USpatializationPluginSourceSettingsBase *)
              FResonanceAudioModule::GlobalSpatializationSourceSettings;
  }
  uVar8 = uVar16;
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar8 = uVar17;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(USpatializationPluginSourceSettingsBase **)
   ((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) = param_3;
  uVar9 = 0;
  uVar8 = uVar9;
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar8 = uVar17;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(longlong *)((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) == 0) {
    if ((byte)LogResonanceAudio._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
    return;
  }
  uVar10 = 0;
  uVar8 = uVar9;
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar8 = uVar17;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = uVar12;
  if (*(char *)(*(longlong *)((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) +
               0x28) == '\0') goto LAB_14f04a5fa;
  pUVar13 = GetDefault<UResonanceAudioSettings>();
  EVar1 = pUVar13->QualityMode;
  uVar8 = uVar10;
  if (EVar1 == STEREO_PANNING) {
    if ((byte)LogResonanceAudio._0_1_ < 6) goto LAB_14f04a5fa;
    pFVar14 = &::LOG_Static;
  }
  else if (EVar1 == BINAURAL_LOW) {
    uVar12 = 1;
    uVar8 = uVar12;
    if ((byte)LogResonanceAudio._0_1_ < 6) goto LAB_14f04a5fa;
    pFVar14 = &::LOG_Static;
  }
  else if (EVar1 == BINAURAL_MEDIUM) {
    uVar12 = 2;
    uVar8 = uVar12;
    if ((byte)LogResonanceAudio._0_1_ < 6) goto LAB_14f04a5fa;
    pFVar14 = &::LOG_Static;
  }
  else {
    if (EVar1 != BINAURAL_HIGH) {
      if (1 < (byte)LogResonanceAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
      }
      goto LAB_14f04a5fa;
    }
    uVar12 = 3;
    uVar8 = uVar12;
    if ((byte)LogResonanceAudio._0_1_ < 6) goto LAB_14f04a5fa;
    pFVar14 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<6>(pFVar14,(FLogCategoryBase *)&LogResonanceAudio);
  uVar8 = uVar12;
LAB_14f04a5fa:
  uVar10 = ResonanceQualityOverrideCVar - 1;
  uVar12 = uVar8;
  if ((uVar10 < 4) && (uVar12 = uVar10, (int)uVar8 < (int)uVar10)) {
    uVar12 = uVar8;
  }
  uVar11 = (**(code **)((longlong)*this->ResonanceAudioApi + 0x58))(this->ResonanceAudioApi,uVar12);
  *(undefined4 *)(pFVar3 + lVar15 * 0x10) = uVar11;
  uVar8 = uVar9;
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar8 = uVar17;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined4 *)(pFVar3 + lVar15 * 0x10 + 4) =
       *(undefined4 *)
        (*(longlong *)((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) + 0x2c);
  uVar8 = uVar9;
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar8 = uVar17;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = *(undefined4 *)(pFVar3 + lVar15 * 0x10);
  *(undefined4 *)(pFVar3 + lVar15 * 0x10 + 8) =
       *(undefined4 *)
        (*(longlong *)((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) + 0x30);
  (**(code **)((longlong)*this->ResonanceAudioApi + 0xb8))
            (this->ResonanceAudioApi,uVar11,*(undefined4 *)(pFVar3 + lVar15 * 0x10 + 4));
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar9 = uVar17;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = *(undefined4 *)(pFVar3 + lVar15 * 0x10);
  *(undefined4 *)(pFVar3 + lVar15 * 0x10 + 0xc) =
       *(undefined4 *)
        (*(longlong *)((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) + 0x3c);
  (**(code **)((longlong)*this->ResonanceAudioApi + 0xd8))(this->ResonanceAudioApi,uVar11);
  uVar12 = 0;
  uVar8 = uVar12;
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar8 = uVar17;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar2 = *(char *)(*(longlong *)
                     ((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) + 0x40);
  if (cVar2 == '\0') {
    pRVar4 = this->ResonanceAudioApi;
    pcVar5 = *(code **)((longlong)*pRVar4 + 0x90);
    if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
      uVar12 = uVar17;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar6 = __real_3c23d70a;
    if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
      uVar16 = uVar17;
    }
    fVar18 = *(float *)(*(longlong *)
                         ((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) + 0x48
                       ) * __real_3c23d70a;
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*pcVar5)(pRVar4,*(undefined4 *)(pFVar3 + lVar15 * 0x10),0,
              *(float *)(*(longlong *)
                          ((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) +
                        0x44) * fVar6,fVar18);
  }
  else if (cVar2 == '\x01') {
    pRVar4 = this->ResonanceAudioApi;
    pcVar5 = *(code **)((longlong)*pRVar4 + 0x90);
    if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
      uVar12 = uVar17;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar6 = __real_3c23d70a;
    if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
      uVar16 = uVar17;
    }
    fVar18 = *(float *)(*(longlong *)
                         ((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) + 0x48
                       ) * __real_3c23d70a;
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*pcVar5)(pRVar4,*(undefined4 *)(pFVar3 + lVar15 * 0x10),1,
              *(float *)(*(longlong *)
                          ((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) +
                        0x44) * fVar6,fVar18);
  }
  else if (cVar2 == '\x02') {
    pRVar4 = this->ResonanceAudioApi;
    pcVar5 = *(code **)((longlong)*pRVar4 + 0x90);
    if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
      uVar12 = uVar17;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar6 = __real_3c23d70a;
    if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
      uVar16 = uVar17;
    }
    fVar18 = *(float *)(*(longlong *)
                         ((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) + 0x48
                       ) * __real_3c23d70a;
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*pcVar5)(pRVar4,*(undefined4 *)(pFVar3 + lVar15 * 0x10),2,
              *(float *)(*(longlong *)
                          ((this->SpatializationSettings).AllocatorInstance.Data + lVar15 * 8) +
                        0x44) * fVar6,fVar18);
  }
  else if (1 < (byte)LogResonanceAudio._0_1_) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_ResonanceAudioS_1530ea0f0,
               (FLogCategoryBase *)&LogResonanceAudio);
  }
  if ((ExtraResonanceLoggingCVar != 0) && (2 < (byte)LogResonanceAudio._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
  }
  return;
}

// OnReleaseSource @ 14f04b260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioSpatialization::OnReleaseSource
          (FResonanceAudioSpatialization *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  if (this->ResonanceAudioApi != (ResonanceAudioApi *)0x0) {
    uVar4 = 0;
    if ((int)param_1 < (this->BinauralSources).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = (this->BinauralSources).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10;
    iVar1 = *(int *)pFVar5;
    if (iVar1 != -1) {
      (**(code **)((longlong)*this->ResonanceAudioApi + 0x60))(this->ResonanceAudioApi,iVar1);
      *(int *)pFVar5 = -1;
    }
    if ((ExtraResonanceLoggingCVar != 0) && (2 < (byte)LogResonanceAudio._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
    }
  }
  return;
}

// ProcessAudio @ 14f04b640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioSpatialization::ProcessAudio
          (FResonanceAudioSpatialization *this,FAudioPluginSourceInputData *param_1,
          FAudioPluginSourceOutputData *param_2)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FSpatializationParams *pFVar7;
  FScriptContainerElement *pFVar8;
  ResonanceAudioApi *pRVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined8 in_stack_ffffffffffffff90;
  longlong lVar23;
  
  iVar16 = (int)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  if (this->ResonanceAudioApi != (ResonanceAudioApi *)0x0) {
    uVar18 = param_1->SourceId;
    lVar15 = (longlong)(int)uVar18;
    iVar6 = (this->BinauralSources).ArrayNum;
    uVar19 = 0;
    if ((int)uVar18 < iVar6) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if (uVar19 == 0) {
      iVar16 = iVar6 >> 0x1f;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar7 = param_1->SpatializationParams;
    pFVar8 = (this->BinauralSources).AllocatorInstance.Data;
    dVar2 = (pFVar7->EmitterWorldRotation).Y;
    dVar3 = (pFVar7->EmitterWorldRotation).Z;
    dVar4 = (pFVar7->EmitterWorldRotation).X;
    dVar5 = (pFVar7->EmitterWorldRotation).W;
    uVar20 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar21 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar18 = SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar19 = (uint)((ulonglong)dVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    (**(code **)((longlong)*this->ResonanceAudioApi + 0x98))
              (this->ResonanceAudioApi,*(undefined4 *)(pFVar8 + lVar15 * 0x10),
               (float)((pFVar7->EmitterWorldPosition).field0_0x0._s_0.Y * __real_3f847ae140000000),
               (float)((pFVar7->EmitterWorldPosition).field0_0x0._s_0.Z * __real_3f847ae140000000),
               (float)((pFVar7->EmitterWorldPosition).field0_0x0._s_0.X * __real_bf847ae140000000));
    lVar23 = CONCAT44(iVar16,(float)dVar5);
    uVar22 = (ulonglong)(uint)(float)dVar4;
    (**(code **)((longlong)*this->ResonanceAudioApi + 0xa8))
              (this->ResonanceAudioApi,*(undefined4 *)(pFVar8 + lVar15 * 0x10),
               (float)(double)CONCAT44(uVar21,uVar20),(float)(double)CONCAT44(uVar19,uVar18),uVar22,
               lVar23);
    uVar18 = param_1->SourceId;
    iVar16 = (this->SpatializationSettings).ArrayNum;
    lVar13 = (longlong)iVar16;
    uVar19 = 0;
    if ((int)uVar18 < iVar16) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (uVar22 = (longlong)(int)uVar18,
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       lVar23 = lVar13, bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (*(longlong *)
         ((this->SpatializationSettings).AllocatorInstance.Data + (longlong)(int)uVar18 * 8) != 0) {
      bVar12 = DirectivityChanged(this,param_1->SourceId);
      uVar18 = 0;
      uVar19 = 0;
      if (bVar12) {
        uVar20 = param_1->SourceId;
        pRVar9 = this->ResonanceAudioApi;
        iVar16 = (this->SpatializationSettings).ArrayNum;
        lVar13 = (longlong)iVar16;
        pcVar11 = *(code **)((longlong)*pRVar9 + 0xb8);
        uVar21 = uVar18;
        if ((int)uVar20 < iVar16) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (uVar22 = (longlong)(int)uVar20,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , lVar23 = lVar13, bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar16 = (this->SpatializationSettings).ArrayNum;
        lVar13 = (longlong)iVar16;
        uVar21 = param_1->SourceId;
        uVar1 = *(undefined4 *)
                 (*(longlong *)
                   ((this->SpatializationSettings).AllocatorInstance.Data +
                   (longlong)(int)uVar20 * 8) + 0x30);
        uVar20 = uVar19;
        if ((int)uVar21 < iVar16) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (uVar22 = (longlong)(int)uVar21,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , lVar23 = lVar13, bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (*pcVar11)(pRVar9,*(undefined4 *)(pFVar8 + lVar15 * 0x10),
                   *(undefined4 *)
                    (*(longlong *)
                      ((this->SpatializationSettings).AllocatorInstance.Data +
                      (longlong)(int)uVar21 * 8) + 0x2c),uVar1,uVar22,lVar23);
      }
      uVar20 = param_1->SourceId;
      lVar17 = (longlong)(int)uVar20;
      iVar16 = (this->BinauralSources).ArrayNum;
      lVar13 = (longlong)iVar16;
      uVar14 = ~uVar20 >> 0x1f;
      uVar21 = uVar19;
      if ((int)uVar20 < iVar16) {
        uVar21 = uVar14;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         lVar23 = lVar13, bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar16 = (this->SpatializationSettings).ArrayNum;
      lVar13 = (longlong)iVar16;
      pFVar10 = (this->BinauralSources).AllocatorInstance.Data;
      uVar21 = uVar18;
      if ((int)uVar20 < iVar16) {
        uVar21 = uVar14;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         lVar23 = lVar13, bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (__real_322bcc77 <
          (float)((uint)(*(float *)(pFVar10 + lVar17 * 0x10 + 0xc) -
                        *(float *)(*(longlong *)
                                    ((this->SpatializationSettings).AllocatorInstance.Data +
                                    lVar17 * 8) + 0x3c)) & __xmm_7fffffff7fffffff7fffffff7fffffff))
      {
        iVar16 = (this->SpatializationSettings).ArrayNum;
        lVar13 = (longlong)iVar16;
        if ((int)uVar20 < iVar16) {
          uVar18 = uVar14;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), lVar23 = lVar13, bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(undefined4 *)(pFVar10 + lVar17 * 0x10 + 0xc) =
             *(undefined4 *)
              (*(longlong *)((this->SpatializationSettings).AllocatorInstance.Data + lVar17 * 8) +
              0x3c);
        uVar18 = param_1->SourceId;
        pRVar9 = this->ResonanceAudioApi;
        iVar16 = (this->SpatializationSettings).ArrayNum;
        lVar13 = (longlong)iVar16;
        pcVar11 = *(code **)((longlong)*pRVar9 + 0xd8);
        if ((int)uVar18 < iVar16) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), lVar23 = lVar13, bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (*pcVar11)(pRVar9,*(undefined4 *)(pFVar8 + lVar15 * 0x10),
                   *(undefined4 *)
                    (*(longlong *)
                      ((this->SpatializationSettings).AllocatorInstance.Data +
                      (longlong)(int)uVar18 * 8) + 0x3c));
      }
    }
    (**(code **)((longlong)*this->ResonanceAudioApi + 0x70))
              (this->ResonanceAudioApi,*(undefined4 *)(pFVar8 + lVar15 * 0x10),
               (param_1->AudioBuffer->AllocatorInstance).Data,(longlong)param_1->NumChannels,
               (longlong)(param_1->AudioBuffer->ArrayNum / param_1->NumChannels),lVar23);
    if (((ExtraResonanceLoggingCVar != 0) &&
        (iVar16 = ResonanceAudioBuffersProcessecdCounter + 1,
        bVar12 = ResonanceAudioBuffersProcessecdCounter ==
                 (ResonanceAudioBuffersProcessecdCounter / 500) * 500,
        ResonanceAudioBuffersProcessecdCounter = iVar16, bVar12)) &&
       (2 < (byte)LogResonanceAudio._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
    }
  }
  return;
}

// SpreadChanged @ 14f04d0e0

bool __thiscall
ResonanceAudio::FResonanceAudioSpatialization::SpreadChanged
          (FResonanceAudioSpatialization *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_1;
  uVar6 = ~param_1 >> 0x1f;
  uVar5 = 0;
  if ((int)param_1 < (this->BinauralSources).ArrayNum) {
    uVar5 = uVar6;
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
  pFVar1 = (this->BinauralSources).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
    uVar5 = uVar6;
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
  if (__real_322bcc77 <
      (float)((uint)(*(float *)(pFVar1 + lVar7 * 0x10 + 0xc) -
                    *(float *)(*(longlong *)
                                ((this->SpatializationSettings).AllocatorInstance.Data + lVar7 * 8)
                              + 0x3c)) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    uVar5 = 0;
    if ((int)param_1 < (this->SpatializationSettings).ArrayNum) {
      uVar5 = uVar6;
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
    *(undefined4 *)(pFVar1 + lVar7 * 0x10 + 0xc) =
         *(undefined4 *)
          (*(longlong *)((this->SpatializationSettings).AllocatorInstance.Data + lVar7 * 8) + 0x3c);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

