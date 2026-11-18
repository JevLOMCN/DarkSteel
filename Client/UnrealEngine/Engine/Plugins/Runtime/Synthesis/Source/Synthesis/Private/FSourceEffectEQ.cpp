// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 4

// FSourceEffectEQ @ 14f0b7f10

FSourceEffectEQ * __thiscall FSourceEffectEQ::FSourceEffectEQ(FSourceEffectEQ *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSourceEffectEQ__6B_;
  this->_padding_ = 0;
  (this->Filters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filters).ArrayNum = 0;
  (this->Filters).ArrayMax = 0;
  this->SampleRate = 0.0;
  this->NumChannels = 0;
  this->InAudioFrame[0] = 0.0;
  this->InAudioFrame[1] = 0.0;
  this->OutAudioFrame[0] = 0.0;
  this->OutAudioFrame[1] = 0.0;
  return this;
}

// Init @ 14f0e3ff0

void __thiscall FSourceEffectEQ::Init(FSourceEffectEQ *this,FSoundEffectSourceInitData *param_1)

{
  this->SampleRate = param_1->SampleRate;
  this->NumChannels = param_1->NumSourceChannels;
  return;
}

// OnPresetChanged @ 14f0ecbc0

void __thiscall FSourceEffectEQ::OnPresetChanged(FSourceEffectEQ *this)

{
  undefined1 *lpCriticalSection;
  int *piVar1;
  void *_Src;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  float fVar17;
  longlong local_res10;
  ForAnyElementType local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  pFVar11 = (FScriptContainerElement *)0x0;
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = USourceEffectEQPreset::StaticClass();
    iVar6 = (int)pUVar8->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar8->_padding_)) {
      lpCriticalSection = &pUVar7[2].field_0x18;
      if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar6 = *(int *)&pUVar7[3].field_0x20;
      _Src = *(void **)&pUVar7[3].field_0x18;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = CONCAT44(local_80._4_4_,iVar6);
      if (iVar6 == 0) {
        local_80 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar6,0,&local_88,iVar6,(int *)((longlong)&local_80 + 4));
        memcpy(local_88.Data,_Src,(longlong)iVar6 << 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FVar15.Data = local_88.Data;
      uVar16 = (uint)local_80;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = 0;
      goto LAB_14f0eccc0;
    }
  }
  local_78 = 0;
  local_70 = 0;
  FVar15.Data = pFVar11;
  uVar16 = 0;
LAB_14f0eccc0:
  iVar6 = (this->Filters).ArrayNum;
  if (iVar6 < (int)uVar16) {
    piVar1 = &(this->Filters).ArrayNum;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,uVar16 - iVar6,&(this->Filters).AllocatorInstance,piVar1,
                       &(this->Filters).ArrayMax);
    uVar14 = (ulonglong)iVar5;
    DefaultConstructItems<Audio::FBiquadFilter,int>
              ((this->Filters).AllocatorInstance.Data + uVar14 * 0x30,uVar16 - iVar6);
    fVar17 = __real_469c4000;
    fVar3 = __real_40000000;
    iVar6 = (this->Filters).ArrayNum;
    if (iVar5 < iVar6) {
      do {
        uVar10 = (uint)uVar14;
        uVar9 = 0;
        if ((int)uVar10 < *piVar1) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        Audio::FBiquadFilter::Init
                  ((FBiquadFilter *)
                   ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x30),
                   this->SampleRate,this->NumChannels,ParametricEQ,fVar17,fVar3,0.0);
        iVar6 = (this->Filters).ArrayNum;
        uVar14 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < iVar6);
    }
  }
  else {
    uVar9 = uVar16;
    if ((int)uVar16 < iVar6) {
      do {
        uVar10 = 0;
        if ((int)uVar9 < (this->Filters).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        Audio::FBiquadFilter::SetEnabled
                  ((FBiquadFilter *)
                   ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30),false);
        iVar6 = (this->Filters).ArrayNum;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar6);
    }
  }
  if ((iVar6 < (int)uVar16) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings.EQBands.Num() <= Filters.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectEQ.cpp"
                         ,0x32,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = __real_41a00000;
  if (0 < (int)uVar16) {
    pFVar12 = FVar15.Data + 8;
    local_res10 = (longlong)(int)uVar16;
    do {
      uVar10 = (uint)pFVar11;
      uVar13 = ~uVar10 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar10 < (int)uVar16) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = 0;
      if ((int)uVar10 < (this->Filters).ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      Audio::FBiquadFilter::SetEnabled
                ((FBiquadFilter *)
                 ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x30),
                 (bool)((byte)pFVar12[4] & 1));
      uVar9 = 0;
      if ((int)uVar10 < (this->Filters).ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar17 = *(float *)(pFVar12 + -8);
      if (*(float *)(pFVar12 + -8) <= fVar3) {
        fVar17 = fVar3;
      }
      Audio::FBiquadFilter::SetParams
                ((FBiquadFilter *)
                 ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x30),
                 ParametricEQ,fVar17,*(float *)(pFVar12 + -4),*(float *)pFVar12);
      pFVar11 = (FScriptContainerElement *)(ulonglong)(uVar10 + 1);
      pFVar12 = pFVar12 + 0x10;
      local_res10 = local_res10 + -1;
    } while (local_res10 != 0);
  }
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  return;
}

// ProcessAudio @ 14f0f2990

void __thiscall
FSourceEffectEQ::ProcessAudio
          (FSourceEffectEQ *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  float *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = (this->Filters).ArrayNum;
  piVar1 = &param_1->NumSamples;
  _Src = param_1->InputSourceEffectBufferPtr;
  if (iVar2 == 0) {
    memcpy(param_2,_Src,(longlong)*piVar1 << 2);
  }
  else {
    uVar6 = 0;
    if (0 < iVar2) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Filters).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        Audio::FBiquadFilter::ProcessAudio
                  ((FBiquadFilter *)
                   ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30),_Src,
                   *piVar1,_Src);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (this->Filters).ArrayNum);
    }
    memcpy(param_2,_Src,(longlong)*piVar1 << 2);
  }
  return;
}

