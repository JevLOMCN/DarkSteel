// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// FEncoder @ 14f043b50

FEncoder * __thiscall
ResonanceAudio::FEncoder::FEncoder
          (FEncoder *this,TSharedPtr<vraudio::ResonanceAudioApi,1> *param_1,int param_2,
          RenderingMode param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  ResonanceAudioApi *pRVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEncoder *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  undefined4 local_38 [4];
  
  this->_padding_ = (longlong)&___7FEncoder_ResonanceAudio__6B_;
  (this->ResonanceSystem).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ResonanceSystem).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar8 = 0;
  (this->SourceIdArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceIdArray).ArrayNum = 0;
  (this->SourceIdArray).ArrayMax = 0;
  (this->DeinterleavedBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeinterleavedBuffers).ArrayNum = 0;
  (this->DeinterleavedBuffers).ArrayMax = 0;
  this->NumChannels = param_2;
  if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResonanceSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0x49,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FEncoder *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (this->NumChannels < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumChannels > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0x4a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FEncoder *)(*pcVar3)();
      return pFVar6;
    }
    if (this->NumChannels < 1) goto LAB_14f043d23;
  }
  do {
    iVar5 = (this->DeinterleavedBuffers).ArrayNum;
    if (iVar5 == (this->DeinterleavedBuffers).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->DeinterleavedBuffers).AllocatorInstance,
                         &(this->DeinterleavedBuffers).ArrayMax);
    }
    pFVar7 = (this->DeinterleavedBuffers).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    (this->DeinterleavedBuffers).ArrayNum = iVar5 + 1;
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)(pFVar7 + 8) = 0;
    if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FEncoder *)(*pcVar3)();
        return pFVar6;
      }
    }
    pRVar2 = (this->ResonanceSystem).Object;
    local_38[0] = (**(code **)((longlong)*pRVar2 + 0x58))(pRVar2,param_3);
    pFVar7 = (this->SourceIdArray).AllocatorInstance.Data;
    if ((pFVar7 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar7 + (longlong)(this->SourceIdArray).ArrayMax * 4)
       ) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FEncoder *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar5 = (this->SourceIdArray).ArrayNum;
    if (iVar5 == (this->SourceIdArray).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->SourceIdArray).AllocatorInstance,
                         &(this->SourceIdArray).ArrayMax);
    }
    iVar8 = iVar8 + 1;
    (this->SourceIdArray).ArrayNum = iVar5 + 1;
    *(undefined4 *)((this->SourceIdArray).AllocatorInstance.Data + (longlong)iVar5 * 4) =
         local_38[0];
  } while (iVar8 < this->NumChannels);
LAB_14f043d23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FEncoder @ 14f044820

void __thiscall ResonanceAudio::FEncoder::~FEncoder(FEncoder *this)

{
  int iVar1;
  undefined4 uVar2;
  ResonanceAudioApi *pRVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FEncoder_ResonanceAudio__6B_;
  if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResonanceSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0x55,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = (this->SourceIdArray).AllocatorInstance.Data;
  iVar1 = (this->SourceIdArray).ArrayNum;
  pFVar4 = pFVar7 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->SourceIdArray).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar4) break;
    uVar2 = *(undefined4 *)pFVar7;
    if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pRVar3 = (this->ResonanceSystem).Object;
    (**(code **)((longlong)*pRVar3 + 0x60))(pRVar3,uVar2);
    pFVar7 = pFVar7 + 4;
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->DeinterleavedBuffers).AllocatorInstance.Data,
             (this->DeinterleavedBuffers).ArrayNum);
  pFVar4 = (this->DeinterleavedBuffers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->SourceIdArray).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResonanceSystem).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ISoundfieldEncoderStream__6B_;
  return;
}

// ChangeNumChannels @ 14f045dc0

void __thiscall
ResonanceAudio::FEncoder::ChangeNumChannels(FEncoder *this,int param_1,RenderingMode param_2)

{
  int *piVar1;
  undefined4 uVar2;
  ResonanceAudioApi *pRVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  undefined4 local_38 [4];
  
  uVar10 = (ulonglong)(uint)param_1;
  if (((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResonanceSystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                         ,0x30,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar9 = (this->SourceIdArray).AllocatorInstance.Data;
  iVar7 = (this->SourceIdArray).ArrayNum;
  pFVar8 = pFVar9 + (longlong)iVar7 * 4;
  while( true ) {
    if ((this->SourceIdArray).ArrayNum != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar8) break;
    uVar2 = *(undefined4 *)pFVar9;
    if (((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pRVar3 = (this->ResonanceSystem).Object;
    (**(code **)((longlong)*pRVar3 + 0x60))(pRVar3,uVar2);
    pFVar9 = pFVar9 + 4;
  }
  piVar1 = &(this->DeinterleavedBuffers).ArrayMax;
  pTVar4 = (TArray<float,TAlignedHeapAllocator<16>_> *)
           (this->DeinterleavedBuffers).AllocatorInstance.Data;
  iVar7 = (this->DeinterleavedBuffers).ArrayNum;
  if ((this->DeinterleavedBuffers).ArrayMax < 0) {
    DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(pTVar4,iVar7);
    (this->DeinterleavedBuffers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->DeinterleavedBuffers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(pTVar4,iVar7);
    (this->DeinterleavedBuffers).ArrayNum = 0;
  }
  if (1 < param_1) {
    do {
      iVar7 = (this->DeinterleavedBuffers).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->DeinterleavedBuffers).AllocatorInstance,piVar1);
      }
      pFVar8 = (this->DeinterleavedBuffers).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      (this->DeinterleavedBuffers).ArrayNum = iVar7 + 1;
      *(undefined8 *)pFVar8 = 0;
      *(undefined8 *)(pFVar8 + 8) = 0;
      if (((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pRVar3 = (this->ResonanceSystem).Object;
      local_38[0] = (**(code **)((longlong)*pRVar3 + 0x58))(pRVar3,param_2);
      pFVar8 = (this->SourceIdArray).AllocatorInstance.Data;
      if (((pFVar8 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar8 + (longlong)(this->SourceIdArray).ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->SourceIdArray).ArrayNum;
      if (iVar7 == (this->SourceIdArray).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->SourceIdArray).AllocatorInstance,
                           &(this->SourceIdArray).ArrayMax);
      }
      (this->SourceIdArray).ArrayNum = iVar7 + 1;
      *(undefined4 *)((this->SourceIdArray).AllocatorInstance.Data + (longlong)iVar7 * 4) =
           local_38[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  this->NumChannels = param_1;
  return;
}

// Encode @ 14f047d80

void __thiscall
ResonanceAudio::FEncoder::Encode
          (FEncoder *this,FSoundfieldEncoderInputData *param_1,ISoundfieldAudioPacket *param_2)

{
  (**(code **)((longlong)*param_2 + 0x18))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014f047dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1,param_2);
  return;
}

// EncodeAndMixIn @ 14f047dd0

void __thiscall
ResonanceAudio::FEncoder::EncodeAndMixIn
          (FEncoder *this,FSoundfieldEncoderInputData *param_1,ISoundfieldAudioPacket *param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  ISoundfieldAudioPacket IVar4;
  ISoundfieldEncodingSettingsProxy *pIVar5;
  ResonanceAudioApi *pRVar6;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar8;
  code *pcVar9;
  float fVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar26;
  longlong local_res20;
  FScriptContainerElement *pFVar27;
  longlong local_d8;
  
  if (((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ResonanceSystem",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                          ,0x66,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_2 == (ISoundfieldAudioPacket *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("&InRef != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                          ,0x5c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  IVar4 = (ISoundfieldAudioPacket)(this->ResonanceSystem).Object;
  if ((IVar4 == (ISoundfieldAudioPacket)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InResonanceSystem",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.h"
                          ,0x25,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  param_2[1] = IVar4;
  pIVar5 = param_1->InputSettings;
  if ((pIVar5 == (ISoundfieldEncodingSettingsProxy *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("&InRef != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                          ,0x5c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (this->NumChannels == 1) {
    if (((this->SourceIdArray).ArrayNum != 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SourceIdArray.Num() == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                            ,0x6e,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pRVar6 = (this->ResonanceSystem).Object;
    pcVar9 = *(code **)((longlong)*pRVar6 + 0x70);
    iVar13 = param_1->AudioBuffer->ArrayNum;
    pFVar16 = (param_1->AudioBuffer->AllocatorInstance).Data;
    if (((this->SourceIdArray).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (*pcVar9)(pRVar6,*(undefined4 *)(this->SourceIdArray).AllocatorInstance.Data,pFVar16,1,
              (longlong)iVar13);
  }
  else {
    if ((param_1->PositionalData->ChannelPositions ==
         (TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InputData.PositionalData.ChannelPositions",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                            ,0x75,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar7 = param_1->PositionalData->ChannelPositions;
    if (pTVar7->ArrayNum != this->NumChannels) {
      ChangeNumChannels(this,pTVar7->ArrayNum,*(RenderingMode *)(pIVar5 + 1));
    }
    iVar13 = param_1->AudioBuffer->ArrayNum / param_1->NumChannels;
    if (((this->DeinterleavedBuffers).ArrayNum != param_1->NumChannels) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeinterleavedBuffers.Num() == InputData.NumChannels",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                            ,0x7f,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    dVar11 = __real_3f847ae140000000;
    fVar10 = __real_3c23d70a;
    uVar22 = 0;
    if (0 < param_1->NumChannels) {
      local_res20 = 0;
      local_d8 = 0;
      uVar19 = uVar22;
      do {
        uVar25 = (uint)uVar19;
        uVar20 = ~uVar25 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar25 < (this->DeinterleavedBuffers).ArrayNum) {
          uVar14 = uVar20;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar24 = (this->DeinterleavedBuffers).AllocatorInstance.Data + local_d8;
        iVar3 = *(int *)(pFVar24 + 0xc);
        pFVar16 = pFVar24 + 8;
        pFVar27 = pFVar24 + 0xc;
        *(int *)&pFVar16->field_0x0 = 0;
        if (iVar3 < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pFVar24,0,(int *)pFVar27);
        }
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,iVar13,(ForAnyElementType *)pFVar24,(int *)pFVar16,(int *)pFVar27);
        uVar14 = 0;
        uVar19 = uVar22;
        uVar21 = uVar22;
        if (0 < iVar13) {
          do {
            pTVar8 = param_1->AudioBuffer;
            uVar18 = (uint)uVar19;
            iVar3 = pTVar8->ArrayNum;
            pFVar17 = (FScriptContainerElement *)(longlong)iVar3;
            uVar23 = uVar18 * this->NumChannels + uVar25;
            uVar15 = uVar14;
            if ((int)uVar23 < iVar3) {
              uVar15 = ~uVar23 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar27 = pFVar17, bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar1 = *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar23 * 4);
            pFVar17 = (FScriptContainerElement *)(longlong)*(int *)&pFVar16->field_0x0;
            uVar15 = uVar14;
            if ((int)uVar18 < *(int *)&pFVar16->field_0x0) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar27 = pFVar17, bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            *(undefined4 *)(*(longlong *)&pFVar24->field_0x0 + uVar21) = uVar1;
            uVar19 = (ulonglong)(uVar18 + 1);
            uVar21 = uVar21 + 4;
          } while ((int)(uVar18 + 1) < iVar13);
        }
        iVar3 = (this->SourceIdArray).ArrayNum;
        pFVar16 = (FScriptContainerElement *)(longlong)iVar3;
        uVar15 = uVar14;
        if ((int)uVar25 < iVar3) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), pFVar27 = pFVar16, bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar16 = (this->SourceIdArray).AllocatorInstance.Data;
        pFVar17 = (FScriptContainerElement *)(longlong)pTVar7->ArrayNum;
        if ((int)uVar25 < pTVar7->ArrayNum) {
          uVar14 = uVar20;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), pFVar27 = pFVar17, bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar17 = (pTVar7->AllocatorInstance).Data;
        __libm_sse2_sincosf4_();
        fVar26 = extraout_XMM0_Dc * *(float *)(pFVar17 + local_d8 + 0xc);
        fVar2 = *(float *)(pFVar17 + local_d8 + 0xc);
        if (((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pRVar6 = (this->ResonanceSystem).Object;
        (**(code **)((longlong)*pRVar6 + 0x98))
                  (pRVar6,*(undefined4 *)(pFVar16 + local_res20 * 4),
                   extraout_XMM0_Db * fVar26 * fVar10,
                   (float)((double)(extraout_XMM0_Da * fVar26) * dVar11),
                   (float)((double)(extraout_XMM0_Dd * fVar2) * dVar11),pFVar27);
        if (((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pRVar6 = (this->ResonanceSystem).Object;
        (**(code **)((longlong)*pRVar6 + 0x70))
                  (pRVar6,*(undefined4 *)(pFVar16 + local_res20 * 4),
                   *(undefined8 *)&pFVar24->field_0x0,1,(longlong)iVar13);
        local_res20 = local_res20 + 1;
        local_d8 = local_d8 + 0x10;
        uVar19 = (ulonglong)(uVar25 + 1);
      } while ((int)(uVar25 + 1) < param_1->NumChannels);
    }
  }
  return;
}

