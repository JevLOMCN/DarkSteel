// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 5

// FMultichannelAudioFormat @ 14aff9ed0

/* WARNING: Enum "Type": Some values do not have unique names */

FMultichannelAudioFormat * __thiscall
Metasound::FMultichannelAudioFormat::FMultichannelAudioFormat
          (FMultichannelAudioFormat *this,
          TArrayView<Metasound::TDataReadReference<Metasound::FAudioBuffer>_const_,int> *param_1)

{
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar2
  ;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar5;
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar10;
  FMultichannelAudioFormat *pFVar11;
  FScriptContainerElement *pFVar12;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar13;
  longlong lVar14;
  undefined4 uStack_5c;
  undefined **local_58;
  undefined8 local_50;
  TReferenceControllerBase<0> *local_48;
  
  iVar9 = param_1->ArrayNum;
  pTVar1 = &this->WritableBufferStorage;
  this->NumChannels = iVar9;
  (this->WritableBuffers).DataPtr = (TDataWriteReference<Metasound::FAudioBuffer> *)0x0;
  pTVar2 = &this->ReadableBufferStorage;
  (this->WritableBuffers).ArrayNum = 0;
  (this->ReadableBuffers).DataPtr = (TDataReadReference<Metasound::FAudioBuffer> *)0x0;
  (this->ReadableBuffers).ArrayNum = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->WritableBufferStorage).ArrayNum = 0;
  (this->WritableBufferStorage).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ReadableBufferStorage).ArrayNum = 0;
  (this->ReadableBufferStorage).ArrayMax = 0;
  if (0 < iVar9) {
    pTVar10 = TArrayView<Metasound::TDataReadReference<Metasound::FAudioBuffer>_const_,int>::
              operator[](param_1,0);
    lVar4 = *(longlong *)&pTVar10->field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pTVar10 = param_1->DataPtr;
    iVar3 = *(int *)(lVar4 + 8);
    pTVar13 = pTVar10 + iVar9;
    for (; pTVar10 != pTVar13; pTVar10 = pTVar10 + 1) {
      lVar4 = *(longlong *)&pTVar10->field_0x8;
      lVar14 = lVar4;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        lVar14 = *(longlong *)&pTVar10->field_0x8;
      }
      if (iVar3 != *(int *)(lVar4 + 8)) {
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar14 + 0x10) != *(int *)(lVar14 + 8))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                      LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumFrames == Ref->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundAudioFormats.cpp"
                           ,0x4e,L"All buffers must have same number of frames (%d != %d)");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FMultichannelAudioFormat *)(*pcVar7)();
          return pFVar11;
        }
      }
      local_50 = *(undefined8 *)&pTVar10->field_0x8;
      local_48 = *(TReferenceControllerBase<0> **)&pTVar10->field_0x10;
      if (local_48 != (TReferenceControllerBase<0> *)0x0) {
        local_48->SharedReferenceCount = local_48->SharedReferenceCount + 1;
      }
      pFVar12 = (pTVar1->AllocatorInstance).Data;
      local_58 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
      if (((pFVar12 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar12 + (longlong)(this->WritableBufferStorage).ArrayMax * 0x20)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FMultichannelAudioFormat *)(*pcVar7)();
        return pFVar11;
      }
      iVar9 = (this->WritableBufferStorage).ArrayNum;
      if (iVar9 == (this->WritableBufferStorage).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,&(this->WritableBufferStorage).ArrayMax)
        ;
      }
      (this->WritableBufferStorage).ArrayNum = iVar9 + 1;
      pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x20;
      *(undefined ***)pFVar12 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(undefined8 *)(pFVar12 + 8) = local_50;
      *(TReferenceControllerBase<0> **)(pFVar12 + 0x10) = local_48;
      if (local_48 != (TReferenceControllerBase<0> *)0x0) {
        local_48->SharedReferenceCount = local_48->SharedReferenceCount + 1;
      }
      *(undefined ***)pFVar12 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_48);
      pTVar5 = (TDataReadReference<Metasound::FAudioBuffer> *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar5 <= pTVar10) && (pTVar10 < pTVar5 + (this->ReadableBufferStorage).ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FMultichannelAudioFormat *)(*pcVar7)();
        return pFVar11;
      }
      iVar9 = (this->ReadableBufferStorage).ArrayNum;
      if (iVar9 == (this->ReadableBufferStorage).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar2->AllocatorInstance,&(this->ReadableBufferStorage).ArrayMax)
        ;
      }
      (this->ReadableBufferStorage).ArrayNum = iVar9 + 1;
      pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x20;
      *(undefined ***)pFVar12 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(undefined8 *)(pFVar12 + 8) = *(undefined8 *)&pTVar10->field_0x8;
      lVar4 = *(longlong *)&pTVar10->field_0x10;
      *(longlong *)(pFVar12 + 0x10) = lVar4;
      if (lVar4 != 0) {
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      }
      *(undefined ***)pFVar12 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    }
    pTVar6 = (TDataWriteReference<Metasound::FAudioBuffer> *)(pTVar1->AllocatorInstance).Data;
    iVar9 = (this->WritableBufferStorage).ArrayNum;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FMultichannelAudioFormat *)(*pcVar7)();
      return pFVar11;
    }
    (this->WritableBuffers).DataPtr = pTVar6;
    *(ulonglong *)&(this->WritableBuffers).ArrayNum = CONCAT44(uStack_5c,iVar9);
    pTVar10 = (TDataReadReference<Metasound::FAudioBuffer> *)(pTVar2->AllocatorInstance).Data;
    iVar9 = (this->ReadableBufferStorage).ArrayNum;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FMultichannelAudioFormat *)(*pcVar7)();
      return pFVar11;
    }
    (this->ReadableBuffers).DataPtr = pTVar10;
    *(ulonglong *)&(this->ReadableBuffers).ArrayNum = CONCAT44(uStack_5c,iVar9);
  }
  return this;
}

// FMultichannelAudioFormat @ 14affa2a0

FMultichannelAudioFormat * __thiscall
Metasound::FMultichannelAudioFormat::FMultichannelAudioFormat
          (FMultichannelAudioFormat *this,FOperatorSettings *param_1,int param_2)

{
  FMultichannelAudioFormat(this,param_1->NumFramesPerBlock,param_2);
  return this;
}

// FMultichannelAudioFormat @ 14affa2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMultichannelAudioFormat * __thiscall
Metasound::FMultichannelAudioFormat::FMultichannelAudioFormat
          (FMultichannelAudioFormat *this,int param_1,int param_2)

{
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar1;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<0> *pTVar4;
  TReferenceControllerBase<0> *pTVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<0> *pTVar8;
  FMultichannelAudioFormat *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  undefined4 uStack_7c;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *pTStack_68;
  undefined **local_58;
  TReferenceControllerBase<0> *local_50;
  TReferenceControllerBase<0> *local_48;
  
  this->NumChannels = param_2;
  iVar11 = 0;
  (this->WritableBuffers).DataPtr = (TDataWriteReference<Metasound::FAudioBuffer> *)0x0;
  (this->WritableBuffers).ArrayNum = 0;
  (this->ReadableBuffers).DataPtr = (TDataReadReference<Metasound::FAudioBuffer> *)0x0;
  (this->ReadableBuffers).ArrayNum = 0;
  (this->WritableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WritableBufferStorage).ArrayNum = 0;
  (this->WritableBufferStorage).ArrayMax = 0;
  (this->ReadableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadableBufferStorage).ArrayNum = 0;
  (this->ReadableBufferStorage).ArrayMax = 0;
  iVar7 = this->NumChannels;
  if (this->NumChannels < 0) {
    iVar7 = 0;
  }
  this->NumChannels = iVar7;
  pTVar5 = _UNK_150651568;
  pTVar4 = ___xmm_00000000000000000000000000000010;
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (0 < iVar7) {
    do {
      local_78 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      pTVar8 = ::operator_new(0x28);
      if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
        local_70 = pTVar4;
        pTStack_68 = pTVar5;
      }
      else {
        pTVar8->SharedReferenceCount = 1;
        pTVar8->WeakReferenceCount = 1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
        ;
        FAudioBuffer::FAudioBuffer((FAudioBuffer *)(pTVar8 + 1),param_1);
        local_70 = pTVar8 + 1;
        pTStack_68 = pTVar8;
        if ((local_70 == (TReferenceControllerBase<0> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FMultichannelAudioFormat *)(*pcVar3)();
          return pFVar9;
        }
      }
      local_78 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
      if (0 < local_70->SharedReferenceCount) {
        memset((void *)local_70->_padding_,0,(longlong)local_70->SharedReferenceCount << 2);
      }
      pFVar10 = (this->WritableBufferStorage).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           pFVar10 + (longlong)(this->WritableBufferStorage).ArrayMax * 0x20)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMultichannelAudioFormat *)(*pcVar3)();
        return pFVar9;
      }
      iVar7 = (this->WritableBufferStorage).ArrayNum;
      if (iVar7 == (this->WritableBufferStorage).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->WritableBufferStorage).AllocatorInstance,
                           &(this->WritableBufferStorage).ArrayMax);
      }
      (this->WritableBufferStorage).ArrayNum = iVar7 + 1;
      pFVar10 = (this->WritableBufferStorage).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
      *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(TReferenceControllerBase<0> **)(pFVar10 + 8) = local_70;
      *(TReferenceControllerBase<0> **)(pFVar10 + 0x10) = pTStack_68;
      if (pTStack_68 != (TReferenceControllerBase<0> *)0x0) {
        pTStack_68->SharedReferenceCount = pTStack_68->SharedReferenceCount + 1;
      }
      *(undefined ***)pFVar10 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
      local_50 = local_70;
      local_48 = pTStack_68;
      if (pTStack_68 != (TReferenceControllerBase<0> *)0x0) {
        pTStack_68->SharedReferenceCount = pTStack_68->SharedReferenceCount + 1;
      }
      pFVar10 = (this->ReadableBufferStorage).AllocatorInstance.Data;
      local_58 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      if (((pFVar10 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar10 + (longlong)(this->ReadableBufferStorage).ArrayMax * 0x20)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMultichannelAudioFormat *)(*pcVar3)();
        return pFVar9;
      }
      iVar7 = (this->ReadableBufferStorage).ArrayNum;
      if (iVar7 == (this->ReadableBufferStorage).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->ReadableBufferStorage).AllocatorInstance,
                           &(this->ReadableBufferStorage).ArrayMax);
      }
      (this->ReadableBufferStorage).ArrayNum = iVar7 + 1;
      pFVar10 = (this->ReadableBufferStorage).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
      *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(TReferenceControllerBase<0> **)(pFVar10 + 8) = local_50;
      *(TReferenceControllerBase<0> **)(pFVar10 + 0x10) = local_48;
      if (local_48 != (TReferenceControllerBase<0> *)0x0) {
        local_48->SharedReferenceCount = local_48->SharedReferenceCount + 1;
      }
      *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_48);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (pTStack_68);
      iVar11 = iVar11 + 1;
    } while (iVar11 < this->NumChannels);
  }
  pTVar1 = (TDataWriteReference<Metasound::FAudioBuffer> *)
           (this->WritableBufferStorage).AllocatorInstance.Data;
  iVar7 = (this->WritableBufferStorage).ArrayNum;
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMultichannelAudioFormat *)(*pcVar3)();
    return pFVar9;
  }
  (this->WritableBuffers).DataPtr = pTVar1;
  *(ulonglong *)&(this->WritableBuffers).ArrayNum = CONCAT44(uStack_7c,iVar7);
  pTVar2 = (TDataReadReference<Metasound::FAudioBuffer> *)
           (this->ReadableBufferStorage).AllocatorInstance.Data;
  iVar7 = (this->ReadableBufferStorage).ArrayNum;
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMultichannelAudioFormat *)(*pcVar3)();
    return pFVar9;
  }
  (this->ReadableBuffers).DataPtr = pTVar2;
  *(ulonglong *)&(this->ReadableBuffers).ArrayNum = CONCAT44(uStack_7c,iVar7);
  return this;
}

// FMultichannelAudioFormat @ 14affa680

/* WARNING: Enum "Type": Some values do not have unique names */

FMultichannelAudioFormat * __thiscall
Metasound::FMultichannelAudioFormat::FMultichannelAudioFormat
          (FMultichannelAudioFormat *this,
          TArrayView<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_const_,int> *param_1)

{
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar2
  ;
  int iVar3;
  longlong lVar4;
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar5;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar10;
  FMultichannelAudioFormat *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar14;
  undefined4 uStack_5c;
  undefined **local_58;
  undefined8 local_50;
  TReferenceControllerBase<0> *local_48;
  
  iVar9 = param_1->ArrayNum;
  pTVar1 = &this->WritableBufferStorage;
  this->NumChannels = iVar9;
  (this->WritableBuffers).DataPtr = (TDataWriteReference<Metasound::FAudioBuffer> *)0x0;
  pTVar2 = &this->ReadableBufferStorage;
  (this->WritableBuffers).ArrayNum = 0;
  (this->ReadableBuffers).DataPtr = (TDataReadReference<Metasound::FAudioBuffer> *)0x0;
  (this->ReadableBuffers).ArrayNum = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->WritableBufferStorage).ArrayNum = 0;
  (this->WritableBufferStorage).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ReadableBufferStorage).ArrayNum = 0;
  (this->ReadableBufferStorage).ArrayMax = 0;
  if (0 < iVar9) {
    pTVar10 = TArrayView<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_const_,int>::
              operator[](param_1,0);
    lVar4 = *(longlong *)&pTVar10->field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pTVar10 = param_1->DataPtr;
    iVar3 = *(int *)(lVar4 + 8);
    pTVar14 = pTVar10 + iVar9;
    for (; pTVar10 != pTVar14; pTVar10 = pTVar10 + 1) {
      lVar4 = *(longlong *)&pTVar10->field_0x8;
      lVar13 = lVar4;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        lVar13 = *(longlong *)&pTVar10->field_0x8;
      }
      if (iVar3 != *(int *)(lVar4 + 8)) {
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar13 + 0x10) != *(int *)(lVar13 + 8))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                      LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumFrames == Ref->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundAudioFormats.cpp"
                           ,0x3a,L"All buffers must have same number of frames (%d != %d)");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FMultichannelAudioFormat *)(*pcVar7)();
          return pFVar11;
        }
      }
      pTVar5 = (TDataWriteReference<Metasound::FAudioBuffer> *)(pTVar1->AllocatorInstance).Data;
      if (((pTVar5 <= pTVar10) && (pTVar10 < pTVar5 + (this->WritableBufferStorage).ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FMultichannelAudioFormat *)(*pcVar7)();
        return pFVar11;
      }
      iVar9 = (this->WritableBufferStorage).ArrayNum;
      if (iVar9 == (this->WritableBufferStorage).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,&(this->WritableBufferStorage).ArrayMax)
        ;
      }
      (this->WritableBufferStorage).ArrayNum = iVar9 + 1;
      pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x20;
      *(undefined ***)pFVar12 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(undefined8 *)(pFVar12 + 8) = *(undefined8 *)&pTVar10->field_0x8;
      lVar4 = *(longlong *)&pTVar10->field_0x10;
      *(longlong *)(pFVar12 + 0x10) = lVar4;
      if (lVar4 != 0) {
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      }
      *(undefined ***)pFVar12 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
      local_50 = *(undefined8 *)&pTVar10->field_0x8;
      local_48 = *(TReferenceControllerBase<0> **)&pTVar10->field_0x10;
      if (local_48 != (TReferenceControllerBase<0> *)0x0) {
        local_48->SharedReferenceCount = local_48->SharedReferenceCount + 1;
      }
      pFVar12 = (pTVar2->AllocatorInstance).Data;
      local_58 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      if (((pFVar12 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar12 + (longlong)(this->ReadableBufferStorage).ArrayMax * 0x20)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FMultichannelAudioFormat *)(*pcVar7)();
        return pFVar11;
      }
      iVar9 = (this->ReadableBufferStorage).ArrayNum;
      if (iVar9 == (this->ReadableBufferStorage).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar2->AllocatorInstance,&(this->ReadableBufferStorage).ArrayMax)
        ;
      }
      (this->ReadableBufferStorage).ArrayNum = iVar9 + 1;
      pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x20;
      *(undefined ***)pFVar12 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(undefined8 *)(pFVar12 + 8) = local_50;
      *(TReferenceControllerBase<0> **)(pFVar12 + 0x10) = local_48;
      if (local_48 != (TReferenceControllerBase<0> *)0x0) {
        local_48->SharedReferenceCount = local_48->SharedReferenceCount + 1;
      }
      *(undefined ***)pFVar12 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_48);
    }
    pTVar10 = (TDataWriteReference<Metasound::FAudioBuffer> *)(pTVar1->AllocatorInstance).Data;
    iVar9 = (this->WritableBufferStorage).ArrayNum;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FMultichannelAudioFormat *)(*pcVar7)();
      return pFVar11;
    }
    (this->WritableBuffers).DataPtr = pTVar10;
    *(ulonglong *)&(this->WritableBuffers).ArrayNum = CONCAT44(uStack_5c,iVar9);
    pTVar6 = (TDataReadReference<Metasound::FAudioBuffer> *)(pTVar2->AllocatorInstance).Data;
    iVar9 = (this->ReadableBufferStorage).ArrayNum;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FMultichannelAudioFormat *)(*pcVar7)();
      return pFVar11;
    }
    (this->ReadableBuffers).DataPtr = pTVar6;
    *(ulonglong *)&(this->ReadableBuffers).ArrayNum = CONCAT44(uStack_5c,iVar9);
  }
  return this;
}

// FMultichannelAudioFormat @ 14affaa40

FMultichannelAudioFormat * __thiscall
Metasound::FMultichannelAudioFormat::FMultichannelAudioFormat(FMultichannelAudioFormat *this)

{
  this->NumChannels = 0;
  (this->WritableBuffers).DataPtr = (TDataWriteReference<Metasound::FAudioBuffer> *)0x0;
  (this->WritableBuffers).ArrayNum = 0;
  (this->ReadableBuffers).DataPtr = (TDataReadReference<Metasound::FAudioBuffer> *)0x0;
  (this->ReadableBuffers).ArrayNum = 0;
  (this->WritableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WritableBufferStorage).ArrayNum = 0;
  (this->WritableBufferStorage).ArrayMax = 0;
  (this->ReadableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadableBufferStorage).ArrayNum = 0;
  (this->ReadableBufferStorage).ArrayMax = 0;
  return this;
}

